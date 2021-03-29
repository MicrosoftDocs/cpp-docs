---
description: "Reference for header_units.json format"
title: "C++ header unit.json reference"
ms.date: "3/21/2021"
f1_keywords: ["header_units.json"]
helpviewer_keywords: ["header_units.json", "header unit"]
---

# C++ header_units.json reference

## Format

The `header-units.json` file lists which header files can be compiled into header units.
 
Sometimes a header file can't be compiled into a header unit. For example, `<cassert>` shouldn't be compiled as a header unit because it depends on a `#define` to modify its behavior. Using `#define` can't be used to change the behavior of a header unit. In that case, it's either not listed, or commented out.

The C++ Standard Template Library (STL) `header-units.json` file is located at the root of the include directory where your STL header files are installed. For example, `C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\VC\Tools\MSVC\14.20.00001\include`

The format of the `header_units.json` file starts with the schema version, followed by an array of header filenames that can be built into header units. For example:

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
        // "cassert", // design is permanently incompatible with header units
        ...
} 
```

## Search rules

The build system looks for this file on the include path.

## See also

[Walkthrough: Build and import header units in your Visual C++ projects](walkthrough-header-units.md)
[Build faster using Standard Template Library (STL) header units]() to learn how to import STL libraries for faster compilation throughput.