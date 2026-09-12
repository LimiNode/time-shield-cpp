# Changelog

All notable changes to this project will be documented in this file.

## [v2.0.0] - 2026-09-12
- Added `dse`, `dse_ms`, `dse_to_ts`, and `dse_to_ts_ms` convenience aliases for days-since-epoch conversions.
- Corrected the default return type of `unix_day_to_ts_ms` to the millisecond timestamp type.
- Added `ZonedClock` with reusable named-zone and fixed-offset local-time helpers, including explicit resolution of ambiguous and nonexistent local times.
- Added an MQL4 `TimeShield` facade and aligned MQL4/MQL5 umbrella-header compatibility.
- Completed ISO week-date parsing support and formatter/parser round-trip coverage.
- Added timeframe parsing helpers for trading and engineering strings in C++ and MQL5, with docs, examples, and tests.
- Split Julian conversions into the astronomy domain and added dedicated canonical headers.
- Extended parser and formatting examples and refreshed README coverage for newer APIs.
- Accepted ISO-style offsets in `%z` custom-format parsing.
- Restored C++11 `constexpr` compatibility in affected header-owned APIs.
- Corrected OA date conversions to align with Excel semantics and related edge cases.
- Hardened time boundary and rounding behavior, including overflow-safe millisecond conversions and related tests.
- Corrected `MIN_PER_30_DAY` and aligned MQL5 timestamp range constants with the C++ API.
- Moved confirmed renamed conversion aliases behind the opt-in `TIME_SHIELD_ENABLE_LEGACY_ALIASES` macro.
- Moved confirmed legacy day-first Julian overloads and historical next-day aliases behind the same opt-in compatibility layer.
- Corrected the default return type of `start_of_next_day_from_unix_day` to the seconds timestamp type.
- Expanded timezone and NTP coverage and finalized recent timezone conversion support and NTP-facing documentation for consumers.
- Organized public C++ headers into domain directories with domain umbrellas and removed obsolete root-level forwarding headers.

### Breaking header-layout change

Public C++ headers use canonical domain paths. The full-library include remains
unchanged:

```cpp
#include <time_shield.hpp>
```

Old root-level selective include paths are removed. Use domain umbrellas or
domain-owned leaf headers instead. For example:

```text
time_shield/validation.hpp       -> time_shield/core/validation.hpp
time_shield/time_conversions.hpp -> time_shield/conversions.hpp
time_shield/DateTime.hpp          -> time_shield/date_time.hpp
time_shield/ntp_client.hpp        -> time_shield/ntp/ntp_client.hpp
```

## [v1.0.5] - 2025-12-22
- Added fast date conversion paths for timestamp-to-calendar helpers, along with unchecked timestamp math to reduce validation overhead in hot paths (legacy fallbacks remain for comparison).
- Added reference tests and micro-benchmarks for fast vs legacy date conversions with averaged performance measurements across pre/post-epoch ranges.
- Averaged performance gains (legacy/fast, 5 runs): `to_date_time` ~5.68×, `date_to_unix_day` ~1.25×, `to_timestamp` ~1.14×, `to_timestamp_unchecked` ~1.53× (range-dependent).
- Added a `DateTime` value type with fixed UTC offset storage, parsing, formatting, arithmetic helpers, and examples/tests.
- Added OA date conversions and astronomy helpers (JD/MJD/JDN, lunar phase/age) with docs and examples.
- Added ISO week-date conversions, formatting, and parsing utilities.
- Added geocentric MoonPhase calculator with quarter timings, documentation, and tests.
- Added continuous lunar phase sin/cos helpers, structured quarter instants with event windows, documentation, and tests.
- Split the former time-conversions aggregate into modular domain headers with compatibility aliases and refreshed docs.
- Added short-form weekday and timestamp conversion aliases alongside new constexpr timezone offset helpers.
- Expanded conversion coverage tests to exercise the renamed helpers and new wrappers across C++11/14/17 builds.
- Documented first/last workday boundary helpers and their UTC semantics in README and Doxygen mainpage.
- Renamed `uday_t` to `dse_t` and added `unix_day_t`/`unixday_t` aliases for backward compatibility.
- Corrected unix-day millisecond alias helpers to reuse `days_since_epoch_ms` logic.
- Added workday boundary coverage and alias verification to `time_conversions_test`.
- Introduced UTC offset helpers (`to_utc`/`to_local`, seconds and milliseconds) and TimeZoneStruct offset extraction.
- Expanded time parsing and workday/date conversion APIs: new month/workday inspectors, `unix_day_to_ts*` aliases, `days_since_epoch*`/`min_since_epoch`, and renamed year accessors to `years_since_epoch`/`year_of*`.
- Added POSIX `NtpClient` implementation with Unix test coverage and refreshed NTP documentation.
- Unified `now_realtime_us()` precision across Windows and Unix by combining realtime anchors with monotonic clocks.
- Added MQL5 counterparts for recent workday boundary and ISO parsing helpers.
- Introduced templated NTP client pools, offline/fake testing paths, background runner helpers, and a singleton NTP time service with convenience wrappers.
- Added US Eastern Time (ET/NY) to GMT (UTC) conversion helpers with DST rules.
- Added US Central Time (CT) to GMT (UTC) conversion helpers for America/Chicago.

## [v1.0.4] - 2025-09-20
- fix ODR violations in headers

## [v1.0.3] - 2025-09-10
- Added pkg-config template and vcpkg overlay port.
- Added optional NTP client install toggle and configuration flags.
- Expanded time parser tests and DST boundary coverage.
- Lowered minimum required CMake version to 3.15.
- Improved installation and consumer build scripts.

## [v1.0.2] - 2025-07-20
- Removed invalid const qualifiers from return types in time utilities.
- Fixed compiler warnings and added dt_to_timestamp example.

## [v1.0.1] - 2025-06-25
- Optimized sec_of_day and other parsing helpers.
- Added WinSock-based NtpClient and timezone conversion utilities.
- Provided usage examples and expanded documentation.

## [v1.0.0] - 2025-06-21
- Initial release with MQL5 Unix year helpers.
