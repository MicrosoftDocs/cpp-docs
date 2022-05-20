---
title: "/sourceDependencies (Report source-level dependencies)"
description: "Describes the /sourceDependencies compiler option in Microsoft C++."
ms.date: 05/19/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/sourceDependencies"]
helpviewer_keywords: ["/sourceDependencies compiler option", "/sourceDependencies"]
---
# `/sourceDependencies` (List all source-level dependencies)

This command-line switch generates a JSON file that details the source-level dependencies consumed during compilation. The JSON file contains a list of the source dependencies, which include:

- Header files. Both directly included and the list of headers included by those headers.
- The PCH used (if **`/Yu`** is specified).
- Names of imported modules
- File paths and names of both directly imported header units and of the modules and header units they import in turn.

This option provides information necessary to build modules and header units in the proper dependency order.

## Syntax

> **`/sourceDependencies-`**\
> **`/sourceDependencies`** *filename*\
> **`/sourceDependencies`** *directory*

## Arguments

*`-`*\
If the single dash is provided, then the compiler will emit the source dependencies JSON to `stdout`, or to where compiler output is redirected.

*`filename`*\
The compiler writes the source dependency output to the specified filename, which may include a relative or absolute path. The file is created if it doesn't exist.

*`directory`*\
If the argument is a directory, the compiler generates source dependency files in the specified directory. The directory must exist, or the argument is treated as a *`filename`*. The output file name is based on the full name of the input file, with an appended *`.json`* extension. For example, if the file provided to the compiler is *`main.cpp`*, the generated output filename is *`main.cpp.json`*.

## Remarks

The **`/sourceDependencies`** compiler option is available starting in Visual Studio 2019 version 16.7. It's not enabled by default.

When you specify the [`/MP` (Build with multiple processes)](mp-build-with-multiple-processes.md) compiler option, we recommend you use **`/sourceDependencies`** with a directory argument. If you provide a single filename argument, two instances of the compiler may attempt to open the output file simultaneously and cause an error. Use of **`/MP`** with **`/sourceDependencies-`** to send output to `stdout` could cause interleaved results.

When a non-fatal compiler error occurs, the dependency information still gets written to the output file.

All file paths appear as absolute paths in the output.

### Examples

Given the following sample code:

```cpp
// ModuleE.ixx:
export module ModuleE;
import ModuleC;
import ModuleD;
import <iostream>;
```

You can use **`/sourceDependencies`** with the rest of your compiler options:

> `cl ... /sourceDependencies output.json ... main.cpp`

where `...` represents your other compiler options. This command line produces a JSON file *`output.json`* with content like:

```JSON
{
    "Version": "1.1",
    "Data": {
        "Source": "F:\\Sample\\myproject\\modulee.ixx",
        "ProvidedModule": "ModuleE",
        "Includes": [],
        "ImportedModules": [
            {
                "Name": "ModuleC",
                "BMI": "F:\\Sample\\Outputs\\Intermediate\\MyProject\\x64\\Debug\\ModuleC.ixx.ifc"
            },
            {
                "Name": "ModuleB",
                "BMI": "F:\\Sample\\Outputs\\Intermediate\\ModuleB\\x64\\Debug\\ModuleB.ixx.ifc"
            },
            {
                "Name": "ModuleD",
                "BMI": "F:\\Sample\\Outputs\\Intermediate\\MyProject\\x64\\Debug\\ModuleD.cppm.ifc"
            }
        ],
        "ImportedHeaderUnits": [
            {
                "Header": "f:\\visual studio 16 main\\vc\\tools\\msvc\\14.29.30030\\include\\iostream",
                "BMI": "F:\\Sample\\Outputs\\Intermediate\\HeaderUnits\\x64\\Debug\\iostream_W4L4JYGFJ3GL8OG9.ifc"
            },
            {
                "Header": "f:\\visual studio 16 main\\vc\\tools\\msvc\\14.29.30030\\include\\yvals_core.h",
                "BMI": "F:\\Sample\\Outputs\\Intermediate\\HeaderUnits\\x64\\Debug\\yvals_core.h.ifc"
            }
        ]
    }
}
```

We've used `...` to abbreviate the reported paths. The report contains the absolute paths. The paths reported depend on where the compiler finds the dependencies. If the results are unexpected, you may want to check your project's include path settings.

`ProvidedModule` lists exported module or module partition names.

### To set this compiler option in the Visual Studio development environment

You normally shouldn't set this option yourself in the Visual Studio development environment. It's set by the build system.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)\
[`/scanDependencies`](scandependencies.md)\
[`/sourceDependencies:directives`](sourcedependencies-directives.md)
