# Public Header Guide

## Canonical layout

Public C++ headers use eight root umbrellas and eight owning domains:

```text
include/time_shield/
├── astronomy.hpp   ├── astronomy/
├── conversions.hpp ├── conversions/
├── core.hpp        ├── core/
├── date_time.hpp   ├── datetime/
├── ntp.hpp         ├── ntp/
├── text.hpp        ├── text/
├── timers.hpp      ├── timers/
└── timezone.hpp    └── timezone/
```

`include/time_shield.hpp` is the full-library entrypoint. Root-level selective
headers outside this umbrella set are not part of the public layout. Do not
add forwarding headers or recreate removed root directories.

## Include policy

- Use a domain umbrella for a cross-domain dependency.
- Use a local leaf include only within the owning domain.
- Keep the domain dependency graph acyclic; lower-level domains do not include
  higher-level domains.
- Do not use `../` includes.
- Keep `detail/` headers inside their owning domain. Tests may include them as
  white-box implementation tests.
- Keep optional NTP dependencies behind `TIME_SHIELD_ENABLE_NTP_CLIENT`.

The CMake architecture check is the executable contract for this policy. Run
`cmake -DTIME_SHIELD_SOURCE_DIR=<repo> -P cmake/check_header_include_policy.cmake`
after changing the layout or an include.

## Header implementation and guards

Follow `docs/header-implementation-guidelines.md` and
`agents/header-implementation-guidelines.md` for `.hpp`, `.ipp`, and `.tpp`
ownership. Every project-owned header starts with `#pragma once` and a
project-prefixed, path-derived non-reserved guard. MQL headers use the MQL
guard prefix described in the root guide.

Preserve the distinction between canonical, convenience, and opt-in legacy
APIs. A short name is not legacy merely because a longer canonical name exists.
Only historically superseded aliases belong in `legacy_aliases.hpp`, guarded by
`TIME_SHIELD_ENABLE_LEGACY_ALIASES`.

