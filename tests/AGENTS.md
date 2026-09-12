# Test Guide

## Build and run

Use the repository CMake generator and keep build trees under
`tmp/agent-work/`:

```powershell
cmake -S . -B tmp/agent-work/build-debug -G "MinGW Makefiles" `
  -DTIME_SHIELD_CPP_BUILD_TESTS=ON -DCMAKE_BUILD_TYPE=Debug
cmake --build tmp/agent-work/build-debug
ctest --test-dir tmp/agent-work/build-debug --output-on-failure
```

Repeat with a separate Release tree. Release tests must keep runtime checks
active; use `TIME_SHIELD_TEST_CHECK(...)` from `test_assert.hpp`, never
`assert(...)`.

Public-header changes require checks for C++11, C++14, and C++17, Debug and
Release builds, ODR targets, and installed consumers. When relevant, test both
`TIME_SHIELD_ENABLE_NTP_CLIENT=ON` and `OFF`.

## Test contracts

- Include public APIs through their canonical root or domain paths.
- Use `header_smoke/` for standalone umbrella compilation and include-policy
  coverage.
- Use `install_consumer/`, `pkg_config_consumer/`, and `vcpkg_consumer/` to
  validate installed package contracts.
- Direct `detail/` includes are allowed only for white-box tests of the owning
  domain.
- MQL scripts are manual tests unless MetaEditor is available; report one
  aggregate pass/fail result.

When adding a test source, confirm that the existing CMake glob or explicit
target includes it, and update the expected test count in release or PR
documentation when that count is quoted.

