---
title: "/sourceDependencies (Report source-level dependencies)"
description: "Reference guide to the /sourceDependencies compiler option in Microsoft C++."
ms.date: 04/13/2020
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/sourceDependencies"]
helpviewer_keywords: ["/sourceDependencies compiler option", "/sourceDependencies"]
---
# `/sourceDependencies` (Report source-level dependencies)

This command-line switch generates a JSON file that details the source-level dependencies consumed during compilation. The JSON file contains a list of the source dependencies, which include:

- Header files (both transitive and directly included headers).
- The PCH used (if **`/Yu`** is specified).
- Imported modules and imported header units (both transitive and directly imported module/header units).

## Syntax

> **`/sourceDependencies[-]`** *filename*\
> **`/sourceDependencies[-]`** *directory*\

## Arguments

*`-`*\
If the single dash is provided, then the compiler will emit the source dependencies JSON to `stdout`, or to where compiler output is redirected to.

*`filename`*\
The compiler writes the source dependency output to the specified filename, which may include a relative or absolute path.\

*`directory`*\
If the argument is a directory, the compiler generates source dependency files in the specified directory. The output file name is based on the full name of the input file, with an appended *`.json`* extension. For example, if the file provided to the compiler is *`main.cpp`*, the generated output filename is *`main.cpp.json`*.

## Remarks

The **`/sourceDependencies`** compiler option is available starting in Visual Studio 2019 version 16.7. It's not enabled by default.

When you specify the **`/MP`** compiler option, we recommend you use **`/sourceDependencies`** with a directory argument. If you provide a single filename argument, two instances of the compiler may attempt to open the output file simultaneously and cause an error. For more information on **`/MP`**, see [`/MP` (Build with multiple processes)](mp-build-with-multiple-processes.md).

When a non-fatal compiler error occurs, the dependency information still gets written to the output file.

All file paths appear as absolute paths in the output.

### Examples

Given the following sample code:

```cpp
// main.cpp
#include "header.h"
import m;
import "other.h";

int main() { }
```

You can use **`/sourceDependencies`** with the rest of your compiler options:

> `cl ... /sourceDependencies output.json ... main.cpp`

where `...` represents your other compiler options. This command line produces a JSON file *`output.json`* with content  like:

```JSON
{
    "Version": "1.1",
    "Data": {
        "Source": "C:\\...\\main.cpp",
        "PCH": "C:\\...\\pch.pch",
        "Includes": [
            "C:\\...\\header.h"
        ],
        "ImportedModules": [
            "C:\\...\\m.ifc",
            "C:\\...\\other.h.ifc"
        ]
    }
}
```

We've used `...` to abbreviate the reported paths; the report contains the absolute paths. The paths reported depend on where the compiler finds the dependencies. If the results are unexpected, you may want to check your project's include path settings.

### To set the /sourceDependencies compiler option in Visual Studio

> [!NOTE]
> This command line switch is typically set by the build system.

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/sourceDependencies: <filename>`* and then choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- This option doesn't have a programmatic equivalent.

## See also

[MSVC compiler options](compiler-options.md)<br/>
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)<br/>
