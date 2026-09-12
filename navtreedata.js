/*
 @licstart  The following is the entire license notice for the JavaScript code in this file.

 The MIT License (MIT)

 Copyright (C) 1997-2020 by Dimitri van Heesch

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 and associated documentation files (the "Software"), to deal in the Software without restriction,
 including without limitation the rights to use, copy, modify, merge, publish, distribute,
 sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or
 substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 @licend  The above is the entire license notice for the JavaScript code in this file
*/
var NAVTREE =
[
  [ "Time Shield Library", "index.html", [
    [ "Introduction", "index.html#intro_sec", null ],
    [ "Why Time Shield?", "index.html#motivation_sec", null ],
    [ "Features", "index.html#features_sec", null ],
    [ "Configuration", "index.html#config_sec", null ],
    [ "Public header layout", "index.html#headers_sec", null ],
    [ "API Invariants", "index.html#invariants_sec", null ],
    [ "Examples", "index.html#examples_sec", null ],
    [ "NTP client, pool, and time service", "index.html#ntp_sec", [
      [ "Components", "index.html#ntp_components_sec", null ],
      [ "Offset computation", "index.html#ntp_offset_sec", [
        [ "Basic usage", "index.html#autotoc_md62", null ]
      ] ],
      [ "OA date and astronomy helpers", "index.html#oa_and_astronomy", null ],
      [ "Workday helpers", "index.html#workday_helpers", null ]
    ] ],
    [ "Installation", "index.html#install_sec", [
      [ "Install and find_package", "index.html#install_pkg", null ],
      [ "Git submodule with add_subdirectory", "index.html#install_submodule", null ],
      [ "vcpkg overlay", "index.html#install_vcpkg", null ]
    ] ],
    [ "Tested Platforms", "index.html#tested_sec", null ],
    [ "Online Documentation", "index.html#docs_sec", null ],
    [ "Repository", "index.html#repo_sec", null ],
    [ "License", "index.html#license_sec", null ],
    [ "Header / Implementation Ownership Guidelines", "md_docs_2header-implementation-guidelines.html", [
      [ "Canonical Language", "md_docs_2header-implementation-guidelines.html#autotoc_md35", null ],
      [ "Purpose", "md_docs_2header-implementation-guidelines.html#autotoc_md36", null ],
      [ "File Roles", "md_docs_2header-implementation-guidelines.html#autotoc_md37", [
        [ ".hpp", "md_docs_2header-implementation-guidelines.html#autotoc_md38", null ],
        [ ".tpp", "md_docs_2header-implementation-guidelines.html#autotoc_md39", null ],
        [ ".ipp", "md_docs_2header-implementation-guidelines.html#autotoc_md40", null ]
      ] ],
      [ "Ownership Model", "md_docs_2header-implementation-guidelines.html#autotoc_md41", [
        [ "Always-included implementation", "md_docs_2header-implementation-guidelines.html#autotoc_md42", null ],
        [ "Ownership-controlled implementation", "md_docs_2header-implementation-guidelines.html#autotoc_md43", null ]
      ] ],
      [ "Aggregate Entry Header vs Leaf Header", "md_docs_2header-implementation-guidelines.html#autotoc_md44", [
        [ "Aggregate-first subsystem", "md_docs_2header-implementation-guidelines.html#autotoc_md45", null ],
        [ "Standalone-leaf-first subsystem", "md_docs_2header-implementation-guidelines.html#autotoc_md46", null ]
      ] ],
      [ "Dependency Placement", "md_docs_2header-implementation-guidelines.html#autotoc_md47", [
        [ "Shared STL and domain includes", "md_docs_2header-implementation-guidelines.html#autotoc_md48", null ],
        [ "Implementation-only helpers", "md_docs_2header-implementation-guidelines.html#autotoc_md49", null ]
      ] ],
      [ "Forward Declarations", "md_docs_2header-implementation-guidelines.html#autotoc_md50", null ],
      [ "Private / Vendor Boundaries", "md_docs_2header-implementation-guidelines.html#autotoc_md51", null ],
      [ "Test Contract Guidance", "md_docs_2header-implementation-guidelines.html#autotoc_md52", null ],
      [ "Practical Checklist", "md_docs_2header-implementation-guidelines.html#autotoc_md53", null ]
    ] ],
    [ "Library Integration Guidelines", "md_docs_2library-integration-guidelines.html", [
      [ "Canonical Language", "md_docs_2library-integration-guidelines.html#autotoc_md55", null ],
      [ "Supported Integration Shapes", "md_docs_2library-integration-guidelines.html#autotoc_md56", null ],
      [ "Multiple Static Libraries", "md_docs_2library-integration-guidelines.html#autotoc_md57", null ],
      [ "NTP Service Contract", "md_docs_2library-integration-guidelines.html#autotoc_md58", null ],
      [ "Windows Linking", "md_docs_2library-integration-guidelines.html#autotoc_md59", null ],
      [ "Configuration Consistency", "md_docs_2library-integration-guidelines.html#autotoc_md60", null ],
      [ "Practical Checklist", "md_docs_2library-integration-guidelines.html#autotoc_md61", null ]
    ] ],
    [ "Header-only Singleton / Service Storage Guidelines", "md_docs_2singleton-storage-guidelines.html", [
      [ "Canonical Language", "md_docs_2singleton-storage-guidelines.html#autotoc_md64", null ],
      [ "Purpose", "md_docs_2singleton-storage-guidelines.html#autotoc_md65", null ],
      [ "Core Rule", "md_docs_2singleton-storage-guidelines.html#autotoc_md66", null ],
      [ "C++17 and newer", "md_docs_2singleton-storage-guidelines.html#autotoc_md67", null ],
      [ "C++11/14", "md_docs_2singleton-storage-guidelines.html#autotoc_md68", null ],
      [ "C++11/14 exception for late-teardown-safe services", "md_docs_2singleton-storage-guidelines.html#autotoc_md69", null ],
      [ "Ownership Boundaries", "md_docs_2singleton-storage-guidelines.html#autotoc_md70", null ],
      [ "Macro Naming", "md_docs_2singleton-storage-guidelines.html#autotoc_md71", null ],
      [ "Failure Modes", "md_docs_2singleton-storage-guidelines.html#autotoc_md72", null ],
      [ "Practical Checklist", "md_docs_2singleton-storage-guidelines.html#autotoc_md73", null ]
    ] ],
    [ "Topics", "topics.html", "topics" ],
    [ "Namespaces", "namespaces.html", [
      [ "Namespace List", "namespaces.html", "namespaces_dup" ],
      [ "Namespace Members", "namespacemembers.html", [
        [ "All", "namespacemembers.html", "namespacemembers_dup" ],
        [ "Functions", "namespacemembers_func.html", "namespacemembers_func" ],
        [ "Variables", "namespacemembers_vars.html", null ],
        [ "Typedefs", "namespacemembers_type.html", null ],
        [ "Enumerations", "namespacemembers_enum.html", null ],
        [ "Enumerator", "namespacemembers_eval.html", null ]
      ] ]
    ] ],
    [ "Classes", "annotated.html", [
      [ "Class List", "annotated.html", "annotated_dup" ],
      [ "Class Index", "classes.html", null ],
      [ "Class Hierarchy", "hierarchy.html", "hierarchy" ],
      [ "Class Members", "functions.html", [
        [ "All", "functions.html", "functions_dup" ],
        [ "Functions", "functions_func.html", "functions_func" ],
        [ "Variables", "functions_vars.html", "functions_vars" ],
        [ "Typedefs", "functions_type.html", null ],
        [ "Enumerations", "functions_enum.html", null ],
        [ "Related Symbols", "functions_rela.html", null ]
      ] ]
    ] ],
    [ "Files", "files.html", [
      [ "File List", "files.html", "files_dup" ],
      [ "File Members", "globals.html", [
        [ "All", "globals.html", null ],
        [ "Functions", "globals_func.html", null ]
      ] ]
    ] ]
  ] ]
];

var NAVTREEINDEX =
[
"CpuTickTimer_8hpp.html",
"classtime__shield_1_1DateTime.html#ad2c7c73ac7c8e4739b6e455c8e7cb10a",
"classtime__shield_1_1NtpTimeServiceT.html#a03077cfbb94ffddeb059fcb5549717a8",
"classtime__shield_1_1ZonedClock.html#aef8773f1853c94f4f1c7a0b7d0be9323",
"functions.html",
"group__time__constants.html#gadff0be81997db4ade1df8fcac697d873",
"group__time__conversions.html#ga644cbce6a762ab0b0439df9573c008c2",
"group__time__conversions.html#gae3a66aa0383f628d960947a44410decb",
"group__time__enums.html#ggad8cb858fb6cedcf76c4f0630d56e042ba62b4f1dddfbf15eed8ca9771b9cbfe31",
"group__time__parsing.html#gabb9001e90fe044952f1a2e27001f8dbc",
"md_docs_2header-implementation-guidelines.html#autotoc_md36",
"namespacetime__shield.html#af529191e1c745e96ac1a43810b857717",
"structtime__shield_1_1TimeZoneStruct.html#abe789b40db8bbbc3046dee910ca7804b",
"text_8hpp_source.html"
];

var SYNCONMSG = 'click to disable panel synchronisation';
var SYNCOFFMSG = 'click to enable panel synchronisation';