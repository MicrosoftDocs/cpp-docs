---
description: "Reference for header_units.json format"
title: "C++ header unit.json reference"
ms.date: "4/13/2021"
f1_keywords: ["header_units.json"]
helpviewer_keywords: ["header_units.json", "header unit"]
---

# C++ header_units.json reference

The `header-units.json` file lists which header files can be compiled into header units.

Sometimes a header file can't be compiled into a header unit. For example, `<cassert>` shouldn't be compiled as a header unit because it depends on a `#define` at compile time to determine its behavior. Using `#define` can't be used to change the behavior of a header unit, so `<cassert>` shouldn't be compiled into a header unit because it wouldn't reflect this behavior. 

When the project build setting `Translate Includes to Imports (/translateInclude)` is on, the build system looks for `#include` files that can be compiled as header units. There's an allowlist for the Standard Template Library headers that the build system consults when `/TranslateInclude ` is specified to determine which STL headers can be compiled into header units. It is consulted when the build system attempts to create a header unit for an STL header file, and when dependencies are resolved for an STL header file. If the STL header file is not on the list, it is treated as a normal `#include` instead of importing it as a header unit.

The switch [`/sourceDependencies:directives`](./reference/sourcedependencies.md) specifies the JSON file which lists which headers can be built as header units and which can't be. For example, you can see the C++ Standard Template Library (STL) `header-units.json` file located at the root of the include directory where your STL header files are installed. For example, `C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Tools\MSVC\14.20.00001\include`

You should also set [`/translateInclude`](./reference/translateinclude.md) when you use the `/sourceDependencies:directives` option because the build system will then produce header units not only for the specified headers, but also for all headers that are included by those headers. This ensures minimal symbol duplication in the header units and best build throughput. For information about setting this the Microsoft Visual Studio, see [Walkthrough: Import STL libraries as header units](walkthrough-import-stl-header-units.md#set-project-properties).

## Schema

The format of the `header_units.json` file starts with the schema version, followed by an array of header filenames that can be allowed to be built into header units. For example:

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