# vcpkg Overlay Guide

The checked-in port is the reproducible package definition for a released
Time Shield version. Keep its manifest version, `portfile.cmake` source `REF`,
and archive `SHA512` consistent.

Before a release tag, pin the overlay to an immutable commit that contains the
release source and verify the GitHub archive hash. After the tag exists, an
upstream vcpkg port may switch to `REF vX.Y.Z` with the hash of that tag
archive.

The CI workflow may rewrite the overlay temporarily to the checked-out PR
revision. That temporary behavior must not be copied into the tracked
`portfile.cmake`.

