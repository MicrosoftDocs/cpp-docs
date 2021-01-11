---
description: "Learn more about: Fatal Error C1083"
title: "Fatal Error C1083"
ms.date: "09/01/2017"
f1_keywords: ["C1083"]
helpviewer_keywords: ["C1083"]
ms.assetid: 97e52df3-e79c-4f85-8f1e-bbd1057d55e7
---
# Fatal Error C1083

> Cannot open *filetype* file: '*file*': *message*

The compiler generates a C1083 error when it can’t find a file it requires. There are many possible causes for this error. An incorrect include search path or missing or misnamed header files are the most common causes, but other file types and issues can also cause C1083. Here are some of the common reasons why the compiler generates this error.

## The specified file name is wrong

The name of a file may be mistyped. For example,

`#include <algorithm.h>`

might not find the file you intend. Most C++ Standard Library header files do not have a .h file name extension. The \<algorithm> header would not be found by this `#include` directive. To fix this issue, verify that the correct file name is entered, as in this example:

`#include <algorithm>`

Certain C Runtime Library headers are located in a subdirectory of the standard include directory. For example, to include *`sys/types.h`*, you must include the *`sys`* subdirectory name in the `#include` directive:

`#include <sys/types.h>`

## The file is not included in the include search path

The compiler cannot find the file by using the search rules that are indicated by an `#include` or `#import` directive. For example, when a header file name is enclosed by quotation marks,

`#include "myincludefile.h"`

this tells the compiler to look for the file in the same directory that contains the source file first, and then look in other locations specified by the build environment. If the quotation marks contain an absolute path, the compiler only looks for the file at that location. If the quotation marks contain a relative path, the compiler looks for the file in the directory relative to the source directory.

If the name is enclosed by angle brackets,

`#include <stdio.h>`

the compiler follows a search path that is defined by the build environment, the **`/I`** compiler option, the **`/X`** compiler option, and the **INCLUDE** environment variable. For more information, including specific details about the search order used to find a file, see [#include Directive (C/C++)](../../preprocessor/hash-include-directive-c-cpp.md) and [#import Directive](../../preprocessor/hash-import-directive-cpp.md).

If your include files are in another directory relative to your source directory, and you use a relative path in your include directives, you must use double quotes instead of angle brackets. For example, if your header file *`myheader.h`* is in a subdirectory of your project sources named headers, then this example fails to find the file and causes C1083:

`#include <headers\myheader.h>`

but this example works:

`#include "headers\myheader.h"`

Relative paths can also be used with directories on the include search path. If you add a directory to the **INCLUDE** environment variable or to your **Include Directories** path in Visual Studio, do not also add part of the path to the include directives. For example, if your header is located at *`\path\example\headers\myheader.h`*, and you add *`\path\example\headers\`* to your **Include Directories** path in Visual Studio, but your `#include` directive refers to the file as

`#include <headers\myheader.h>`

then the file is not found. Use the correct path relative to the directory specified in the include search path. In this example, you could change the include search path to *`\path\example\`*, or remove the *`headers\`* path segment from the `#include` directive.

## Third-party library issues and vcpkg

If you see this error when you are trying to configure a third-party library as part of your build, consider using [`vcpkg`](../../build/vcpkg.md), a C++ package manager, to install and build the library. vcpkg supports a large and growing [list of third-party libraries](https://github.com/Microsoft/vcpkg/tree/master/ports), and sets all the configuration properties and dependencies required for successful builds as part of your project.

## The file is in your project, but not the include search path

Even when header files are listed in **Solution Explorer** as part of a project, the files are only found by the compiler when they are referred to by an `#include` or `#import` directive in a source file, and are located in an include search path. Different kinds of builds might use different search paths. The **`/X`** compiler option can be used to exclude directories from the include search path. This enables different builds to use different include files that have the same name, but are kept in different directories. This is an alternative to conditional compilation by using preprocessor commands. For more information about the **`/X`** compiler option, see [`/X` (Ignore Standard Include Paths)](../../build/reference/x-ignore-standard-include-paths.md).

To fix this issue, correct the path that the compiler uses to search for the included or imported file. A new project uses default include search paths. You may have to modify the include search path to add a directory for your project. If you are compiling on the command line, add the path to the **INCLUDE** environment variable or the **`/I`** compiler option to specify the path to the file.

To set the include directory path in Visual Studio, open the project’s **Property Pages** dialog box. Select **VC++ Directories** under **Configuration Properties** in the left pane, and then edit the **Include Directories** property. For more information about the per-user and per-project directories searched by the compiler in Visual Studio, see [VC++ Directories Property Page](../../build/reference/vcpp-directories-property-page.md). For more information about the **`/I`** compiler option, see [`/I` (Additional Include Directories)](../../build/reference/i-additional-include-directories.md).

## The command line INCLUDE or LIB environment is not set

When the compiler is invoked on the command line, environment variables are often used to specify search paths. If the search path described by the **INCLUDE** or **LIB** environment variable is not set correctly, a C1083 error can be generated. We strongly recommend using a developer command prompt shortcut to set the basic environment for command line builds. For more information, see [Build C/C++ on the Command Line](../../build/building-on-the-command-line.md). For more information about how to use environment variables, see [How to: Use Environment Variables in a Build](/visualstudio/msbuild/how-to-use-environment-variables-in-a-build).

## The file may be locked or in use

If you are using another program to edit or access the file, it may have the file locked. Try closing the file in the other program. Sometimes the other program can be Visual Studio itself, if you are using parallel compilation options. If turning off the parallel build option makes the error go away, then this is the problem. Other parallel build systems can also have this issue. Be careful to set file and project dependencies so build order is correct. In some cases, consider creating an intermediate project to force build dependency order for a common file that may be built by multiple projects. Sometimes antivirus programs temporarily lock recently changed files for scanning. If possible, consider excluding your project build directories from the antivirus scanner.

## The wrong version of a file name is included

A C1083 error can also indicate that the wrong version of a file is included. For example, a build could include the wrong version of a file that has an `#include` directive for a header file that is not intended for that build. For example, certain files may only apply to x86 builds, or to Debug builds. When the header file is not found, the compiler generates a C1083 error. The fix for this problem is to use the correct file, not to add the header file or directory to the build.

## The precompiled headers are not yet precompiled

When a project is configured to use precompiled headers, the relevant *`.pch`* files have to be created so that files that use the header contents can be compiled. For example, the *`pch.cpp`* file (*`stdafx.cpp`* in Visual Studio 2017 and earlier) is automatically created in the project directory for new projects. Compile that file first to create the precompiled header files. In the typical build process design, this is done automatically. For more information, see [Creating Precompiled Header Files](../../build/creating-precompiled-header-files.md).

## Additional causes

- You have installed an SDK or third-party library, but you have not opened a new developer command prompt window after the SDK or library is installed. If the SDK or library adds files to the **INCLUDE** path, you may need to open a new developer command prompt window to pick up these environment variable changes.

- The file uses managed code, but the compiler option **`/clr`** is not specified. For more information, see [`/clr` (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

- The file is compiled by using a different **`/analyze`** compiler option setting than is used to precompile the headers. When the headers for a project are precompiled, all should use the same **`/analyze`** settings. For more information, see [`/analyze` (Code Analysis)](../../build/reference/analyze-code-analysis.md).

- The file or directory was created by the Windows Subsystem for Linux, per-directory case sensitivity is enabled, and the specified case of a path or file does not match the case of the path or file on disk.

- The file, the directory, or the disk is read-only.

- Visual Studio or the command line tools do not have sufficient permissions to read the file or the directory. This can happen, for example, when the project files have different ownership than the process running Visual Studio or the command line tools. Sometimes this issue can be fixed by running Visual Studio or the developer command prompt as Administrator.

- There are not enough file handles. Close some applications and then recompile. This condition is unusual under typical circumstances. However, it can occur when large projects are built on a computer that has limited physical memory.

## Example

The following example generates a C1083 error when the header file `"test.h"` does not exist in the source directory or on the include search path.

```cpp
// C1083.cpp
// compile with: /c
#include "test.h"   // C1083 test.h does not exist
#include "stdio.h"  // OK
```

For information about how to build C/C++ projects in the IDE or on the command line, and information about setting environment variables, see [Projects and build systems](../../build/projects-and-build-systems-cpp.md).

## See also

- [MSBuild Properties](/visualstudio/msbuild/msbuild-properties)
