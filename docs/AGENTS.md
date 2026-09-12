# Documentation Agent Guide

## Source and generated output

Markdown files and `Doxyfile` are documentation sources. Keep them
version-neutral: `docs/mainpage.md` uses `VERSION_PLACEHOLDER` and `Doxyfile`
keeps `PROJECT_NUMBER` empty. Publication workflows inject the effective
version into a temporary working copy before running Doxygen.

Do not commit generated substitutions or generated `docs/html` changes as part
of a source documentation edit. Keep local previews under
`tmp/agent-work/`.

## Doxygen and site contract

- Keep public include examples on canonical domain paths.
- Keep archived assets excluded from generated navigation and publication.
- Preserve the Doxygen Awesome layout, responsive sidebar, search area, and
  light/dark theme toggle.
- Validate both desktop and mobile layout when changing site CSS or JavaScript.
- Keep comments and Doxygen text in English, declarative present tense, and
  consistent with the public API contract.

The publish workflow validates Doxygen generation and the Playwright smoke
tests. Reproduce those checks locally when practical rather than inspecting
generated HTML alone.

