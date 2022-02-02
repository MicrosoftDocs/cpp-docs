---
title: "/sourceDependencies:directives (List module and header unit dependencies)"
description: "Reference guide to the /sourceDependencies:directives compiler option in Microsoft C++."
ms.date: 02/02/2022
author: "tylermsft"
ms.author: "twhitney"
f1_keywords: ["/sourceDependencies:directives"]
helpviewer_keywords: ["/sourceDependencies:directives compiler option", "/sourceDependencies:directives"]
---
# `/sourceDependencies:directives` (List module and header unit dependencies)

This command-line option generates a JSON file that lists module, module interface, and header-unit dependencies.

It identifies which modules and header units to compile before the project that uses them is compiled. For instance, it will list `import <library>;` or `import "library";` as a header unit dependency, and `import name;` as a module dependency.

Although this option scans for `import` statements like [`/sourceDependencies`](sourcedependencies.md) does, it differs from `/sourceDependencies` in the following ways:

- The compiler doesn't produce compiled output. No compiled code, modules, or header units are produced. Instead, the files are scanned for module directives.
- The JSON format is different from what `/sourceDependencies` produces. The `/sourceDependencies` option is intended to be used with other build tools, such as CMake.
- The output JSON file doesn't list imported modules and imported header units (*`.ifc`* files) because this option does a scan of the project files, not a compilation. So there are no built modules or header units to list.
- Only directly imported modules or header units are listed. It doesn't list the dependencies of the imported modules or header units themselves.
- Header file dependencies aren't listed. That is, `#include <file>` or `#include "file"` dependencies aren't listed.
- `/sourceDependencies:directives` is meant to be used before *`.ifc`* files are built.

## Syntax

> **`/sourceDependencies:directives`** -\
> **`/sourceDependencies:directives`** *filename*\
> **`/sourceDependencies:directives`** *directory*\

## Arguments

*`-`*\
If the single dash is provided, then the compiler will emit the source dependencies JSON to `stdout`, or to where compiler output is redirected to.

*`filename`*\
The compiler writes the source dependency output to the specified filename, which may include a relative or absolute path.

*`directory`*\
If the argument is a directory, the compiler generates source dependency files in the specified directory. The output file name is based on the full name of the input file, with an appended *`.json`* extension. For example, if the file provided to the compiler is *`main.cpp`*, the generated output filename is *`main.cpp.json`*.

## Remarks

**`/sourceDependencies:directives`** is available starting in Visual Studio 2019 version 16.10. It's not enabled by default.

When you specify the [`/MP` (Build with multiple processes)](mp-build-with-multiple-processes.md) compiler option, specify the output file location for **`/sourceDependencies`** with a directory argument. The compiler will produce `[directory]\[source file name with extension].json` for each source file.

When a non-fatal compiler error occurs, the dependency information still gets written to the output file.

All file paths appear as absolute paths in the output.

This switch is used in combination with [`/translateInclude`](translateinclude.md).

`header-units.json` is used with the build system's **Scan Sources for Module Dependencies** to determine which header files can be compiled into a header unit. When this switch is specified, header files found in the source files that are scanned, that are also listed in `header-units.json`, are considered eligible to compile into header units. Files not in the list are treated as a normal `#include`.

The compiler looks for `header-units.json` where the header being loaded is located. For more information about the format of this file, see [C++ header-units.json reference](header-unit-json-reference.md)

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

> `cl /std:c++latest /translateInclude /sourceDependencies:directives output.json main.cpp`

This command line produces a JSON file *`output.json`* with content like:

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
         "C:\\a\\b\\t.h"
      ]
   }
}
```

The previous example uses `...` to abbreviate the reported paths. The report contains the absolute paths. The paths reported depend on where the compiler finds the dependencies. If the results are unexpected, you might want to check your project's include path settings.

`ProvidedModule` lists exported module or module partition names.

No *`.ifc`* files are listed in the output because they weren't built. Unlike `/sourceDependencies`, the compiler doesn't produce compiled output when `/sourceDependencies:directives` is specified, so no compiled modules or header units are produced to import.

## To set this compiler option in Visual Studio

You normally shouldn't set this yourself in the Visual Studio development environment. It's set by the build system.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
