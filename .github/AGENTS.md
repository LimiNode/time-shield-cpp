# CI and Publication Guide

## CI matrix

The main workflow covers C++11, C++14, and C++17 on Linux, Windows, and
macOS, plus install, vcpkg, and multiarch pkg-config consumers. Public-header
changes must preserve all matrix jobs and both NTP configurations.

## Documentation publication

`publish.yaml` validates pull requests without deploying. A push to `main`
publishes development documentation using the CMake version with a `-dev`
suffix. A matching `v*` tag publishes release documentation. The tag version
must equal the CMake project version.

Keep the preconditions, substitution, and postcondition checks together. Do
not commit generated `VERSION_PLACEHOLDER` substitutions or a populated
`PROJECT_NUMBER` to source files.

## vcpkg validation

The PR vcpkg job may pin a temporary checkout revision dynamically so that CI
tests the exact change under review. The checked-in overlay remains the
immutable release source of truth and must have a matching `REF` and SHA512.

