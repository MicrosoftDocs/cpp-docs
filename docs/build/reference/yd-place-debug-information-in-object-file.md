---
description: "Learn more about: /Yd (Place Debug Information in Object File)"
title: "/Yd (Place Debug Information in Object File)"
ms.date: "11/04/2016"
f1_keywords: ["/yd"]
helpviewer_keywords: ["/Yd compiler option [C++]", "-Yd compiler option [C++]", "debugging [C++], debug information files", "Yd compiler option [C++]"]
ms.assetid: c5a699fe-65ce-461e-964c-7f5eb2a8320a
---
# /Yd (Place Debug Information in Object File)

Paces complete debugging information in all object files created from a precompiled header (.pch) file when used with the [/Yc](yc-create-precompiled-header-file.md) and [/Z7](z7-zi-zi-debug-information-format.md) options. Deprecated.

## Syntax

```
/Yd
```

## Remarks

**/Yd** is deprecated; Visual C++ now supports multiple objects writing to a single .pdb file, use **/Zi** instead. For a list of deprecated compiler options, see **Deprecated and Removed Compiler Options** in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

Unless you need to distribute a library containing debugging information, use the [/Zi](z7-zi-zi-debug-information-format.md) option rather than **/Z7** and **/Yd**.

Storing complete debugging information in every .obj file is necessary only to distribute libraries that contain debugging information. It slows compilation and requires considerable disk space. When **/Yc** and **/Z7** are used without **/Yd**, the compiler stores common debugging information in the first .obj file created from the .pch file. The compiler does not insert this information into .obj files subsequently created from the .pch file; it inserts cross-references to the information. No matter how many .obj files use the .pch file, only one .obj file contains the common debugging information.

Although this default behavior results in faster build times and reduces disk-space demands, it is undesirable if a small change requires rebuilding the .obj file containing the common debugging information. In this case, the compiler must rebuild all .obj files containing cross-references to the original .obj file. Also, if a common .pch file is used by different projects, reliance on cross-references to a single .obj file is difficult.

For more information on precompiled headers, see:

- [/Y (Precompiled Headers)](y-precompiled-headers.md)

- [Precompiled Header Files](../creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## Examples

Suppose you have two base files, F.cpp and G.cpp, each containing these **#include** statements:

```
#include "windows.h"
#include "etc.h"
```

The following command creates the precompiled header file ETC.pch and the object file F.obj:

```
CL /YcETC.H /Z7 F.CPP
```

The object file F.obj includes type and symbol information for WINDOWS.h and ETC.h (and any other header files they include). Now you can use the precompiled header ETC.pch to compile the source file G.cpp:

```
CL /YuETC.H /Z7 G.CPP
```

The object file G.obj does not include the debugging information for the precompiled header but simply references that information in the F.obj file. Note that you must link with the F.obj file.

If your precompiled header was not compiled with **/Z7**, you can still use it in later compilations using **/Z7**. However, the debugging information is placed in the current object file, and local symbols for functions and types defined in the precompiled header are not available to the debugger.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
