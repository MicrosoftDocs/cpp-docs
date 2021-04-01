---
description: "Reference for header_units.json file"
title: "C++ header unit.json reference"
ms.date: "4/13/2021"
f1_keywords: ["header_units.json"]
helpviewer_keywords: ["header_units.json", "header unit"]
---

# C++ header_units.json reference

The `header-units.json` file lists which header files in the directory it is located in can be automatically built by the build system as header units, and then be treated as `import` instead of `#include`.

Sometimes a header file can't be compiled into a header unit. For example, `<cassert>` shouldn't be compiled as a header unit because it depends on a `#define` at compile time to determine its behavior. Using `#define` can't be used to change the behavior of a header unit, so `<cassert>` shouldn't be compiled into a header unit because it wouldn't provide the expected behavior.

When the project build setting `Translate Includes to Imports (/translateInclude)` is on, the build system looks for `#include` files that can be compiled as header units. For example, there's an allowlist for the Standard Template Library headers that the build system consults when `/TranslateInclude ` is specified to determine which Standard Template Library (STL) headers can be compiled into header units. It's consulted when the build system attempts to create a header unit for an STL header file, and when dependencies are resolved for an STL header file. If the STL header file isn't on the list, it's treated as a normal `#include` instead of importing it as a header unit.

## Schema

The format of the `header_units.json` file starts with the schema version, followed by an array of filenames for headers that can be built into header units. For example:

```json
{ 
    "Version": "1.0",
    "BuildAsHeaderUnits": [
        "__msvc_system_error_abi.hpp",
        "algorithm",
        "any",
        "array",
        "atomic",
        "barrier",
        "bit",
        "bitset",
        // "cassert", // design is not compatible with header units
        ...
} 
```

## Search rules

The build system looks for this file on the include path.

## See also

[Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md)\
[Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#approach1)\