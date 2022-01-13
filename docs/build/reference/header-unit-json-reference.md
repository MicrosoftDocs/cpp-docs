---
description: "Reference for header-units.json file"
title: "C++ header unit.json reference"
ms.date: 01/11/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["header-units.json"]
helpviewer_keywords: ["header-units.json", "header unit"]
---

# C++ header-units.json reference

The `header-units.json` file lists which header files can be automatically built by the build system into header units, and then treated as an `import` instead of an `#include`.

Sometimes a header file can't be compiled into a header unit. For example, `<cassert>` shouldn't be compiled as a header unit because it depends on a `#define` at compile time to determine its behavior. Using `#define` can't be used to change the behavior of a header unit, so `<cassert>` shouldn't be compiled into a header unit because it wouldn't provide the expected behavior.

When the command-line switch [`/translateInclude` (Translate include directives into import directives)](./reference/translateinclude.md) is used, the build system looks for `#include` files that can be compiled as header units.

There's an allowlist for the Standard Template Library (STL) headers that the build system consults when `/translateInclude` is used. The build system uses it to determine whether to create a header unit for an STL header file, and for its dependencies. If the STL header file isn't on the list, it's treated as a normal `#include` instead of importing it as a header unit.

## Schema

You can see the `header-units.json` file under the installation directory for Visual Studio. For example, `%ProgramFiles%\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.30.30705\include\header-units.json`

The `header-units.json` file starts with the schema version, followed by an array of filenames for headers that can be built into header units.

The schema also supports comments, as shown below:

```json
{
    "Version": "1.0",
    "BuildAsHeaderUnits": [
        // "__msvc_all_public_headers.hpp", // for testing, not production
        "__msvc_system_error_abi.hpp",
        "__msvc_tzdb.hpp",
        "__msvc_xlocinfo_types.hpp",
        "algorithm",
        "any",
        "array",
        "atomic",
        "barrier",
        "bit",
        "bitset",
        // "cassert", // design is permanently incompatible with header units
        ...
}
```

## Search rules

The build system looks for this file in the same directory as the header file being processed. If your library is organized into subdirectories, each subdirectory will need its own `header-units.json` file.

## See also

[Walkthrough: Build and import header units in your Visual C++ projects](..\walkthrough-header-units.md)\
[Walkthrough: Import STL libraries as header units](..\walkthrough-import-stl-header-units.md#approach1)