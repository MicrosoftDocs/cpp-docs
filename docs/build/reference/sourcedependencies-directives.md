---
title: "/sourceDependencies:directives (Report source-level dependencies and use an allowlist)"
description: "Reference guide to the /sourceDependencies:directives compiler option in Microsoft C++."
ms.date: 04/13/2020
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/sourceDependencies:directives"]
helpviewer_keywords: ["/sourceDependencies:directives compiler option", "/sourceDependencies:directives"]
---
# `/sourceDependencies:directives` (List headers, and other source dependencies, using a list of headers that can be converted to header units.)

This command-line switch generates a JSON file that details the source-level dependencies consumed during compilation. It also looks for a `header-units.json` file that specifies which header files can be converted to header units.

This command-line option is similar to [`/sourceDependencies`](sourcedependencies.md), but differs in the following ways:

- Unlike `/sourceDependencies`, the compiler doesn't produce compiled output. Instead, the files are scanned for module directives, but no compiled code, modules, or header units are produced.
- Unlike `/sourceDependencies`, the output JSON file doesn't list imported modules and imported header units (`.ifc` files) because this switch does a scan of the project files, not a compilation, so there are no built modules or header units to import.
- `/sourceDependencies:directives`is designed to be used before *`.ifc`* files are built.

## Syntax

> **`/sourceDependencies:directives[-]`** *filename*\
> **`/sourceDependencies:directives[-]`** *directory*

## Arguments

*`-`*\
If the single dash is provided, then the compiler will emit the source dependencies JSON to `stdout`, or to where compiler output is redirected to.

*`filename`*\
The compiler writes the source dependency output to the specified filename, which may include a relative or absolute path.\

*`directory`*\
If the argument is a directory, the compiler generates source dependency files in the specified directory. The output file name is based on the full name of the input file, with an appended *`.json`* extension. For example, if the file provided to the compiler is *`main.cpp`*, the generated output filename is *`main.cpp.json`*.

## Remarks

**`/sourceDependencies:directives`** is available starting in Visual Studio 2019 version 16.10 Preview 2. It's not enabled by default.

When you specify the **`/MP`** compiler option, we recommend you use **`/sourceDependencies`** with a directory argument. If you provide a single filename argument, two instances of the compiler may attempt to open the output file simultaneously and cause an error. For more information on **`/MP`**, see [`/MP` (Build with multiple processes)](mp-build-with-multiple-processes.md).

When a non-fatal compiler error occurs, the dependency information still gets written to the output file.

All file paths appear as absolute paths in the output.

This switch is used in combination with [`/translateInclude`](translateinclude.md).

`header-units.json` is used with the build system's **Scan Sources for Module Dependencies** to determine which header files can be compiled into a header unit. When this switch is specified, header files found in the scanned source files, that are also listed in `header-units.json`, are considered eligible to be compiled into header units. Files not in the list are instead treated as a normal `#include`.

The compiler looks for `header-units.json` where the header being loaded is located. For more information about the format of this file, see [C++ header-units.json reference](..\header-unit-json-reference.md)

When a non-fatal compiler error occurs, the dependency information still gets written to the output file.

All file paths appear as absolute paths in the output.

### Examples

Given the following sample code:

```cpp
//main.cpp:
#include <vector>

import m;
import std.core;

import <utility>;

import "t.h";

int main() {}
```

You can use **`/sourceDependencies`** with the rest of your compiler options:

> `cl /std:c++latest /translateInclude /sourceDependencies:directives deps.json main.cpp`

This command line produces a JSON file *`deps.json`* with content like:

```JSON
{
   "Version":"1.1",
   "Data":{
      "Source":"C:\\a\\b\\main.cpp",
      "ProvidedModule":"",
      "ImportedModules":[
         "m",
         "std.core"
      ],
      "ImportedHeaderUnits":[
         "C:\\...\\utility",
         "C:\\a\\b\\t.h",
         "C:\\...\\vector"
      ]
   }
}
```

We've used `...` to abbreviate the reported paths; the report contains the absolute paths. The paths reported depend on where the compiler finds the dependencies. If the results are unexpected, you may want to check your project's include path settings.

No *`.ifc`* files are listed in the output because they weren't built. Unlike `/sourceDependencies`, the compiler doesn't produce compiled output when `/sourceDependencies:directives`is specified, so no compiled modules or header units are produced to import.

### To set the /sourceDependencies compiler option in Visual Studio

> [!NOTE]
> This command line switch is typically set by the build system.

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add *`/sourceDependencies:directives <filename>`* and then choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- This option doesn't have a programmatic equivalent.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)