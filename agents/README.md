# Time Shield Agent Documentation

`AGENTS.md` is the repository-wide routing document. Read it first, then read
the module guide that owns the files being changed.

| Area | Guide | Read when |
| --- | --- | --- |
| Public C++ headers | [`include/AGENTS.md`](../include/AGENTS.md) | Changing headers, aliases, includes, guards, or domain boundaries |
| Tests and consumers | [`tests/AGENTS.md`](../tests/AGENTS.md) | Adding tests or changing CMake test targets and install consumers |
| Documentation and site | [`docs/AGENTS.md`](../docs/AGENTS.md) | Changing Doxygen, Markdown, site styling, or publication output |
| CI and publication | [`../.github/AGENTS.md`](../.github/AGENTS.md) | Changing workflows, release checks, or generated documentation publication |
| vcpkg packaging | [`../vcpkg-overlay/AGENTS.md`](../vcpkg-overlay/AGENTS.md) | Changing the overlay port or release source pin |
| MQL4 | [`../MQL4/AGENTS.md`](../MQL4/AGENTS.md) | Changing MQL4 headers, facades, or scripts |
| MQL5 | [`../MQL5/AGENTS.md`](../MQL5/AGENTS.md) | Changing MQL5 headers, facades, or scripts |

The reusable ownership and singleton policies remain in the linked developer
and agent guides listed by the root document. Keep module guides focused on
contracts that are specific to their directory.

