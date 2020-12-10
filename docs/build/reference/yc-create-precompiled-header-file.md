---
description: "Learn more about: /Yc (Create Precompiled Header File)"
title: "/Yc (Create Precompiled Header File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.UsePrecompiledHeader", "/yc", "VC.Project.VCCLWCECompilerTool.PrecompiledHeaderThrough", "VC.Project.VCCLWCECompilerTool.UsePrecompiledHeader", "VC.Project.VCCLCompilerTool.PrecompiledHeaderThrough"]
helpviewer_keywords: ["precompiled header files, creating", "PCH files, creating", ".pch files, creating", "-Yc compiler option [C++]", "/Yc compiler option [C++]", "Yc compiler option [C++]"]
ms.assetid: 47c2e555-b4f5-46e6-906e-ab5cf21f0678
---
# /Yc (Create Precompiled Header File)

Instructs the compiler to create a precompiled header (.pch) file that represents the state of compilation at a certain point.

## Syntax

> __/Yc__\
> __/Yc__*filename*

## Arguments

*filename*<br/>
Specifies a header (.h) file. When this argument is used, the compiler compiles all code up to and including the .h file.

## Remarks

When **/Yc** is specified without an argument, the compiler compiles all code up to the end of the base source file, or to the point in the base file where a [hdrstop](../../preprocessor/hdrstop.md) directive occurs. The resulting .pch file has the same base name as your base source file unless you specify a different file name using the **hdrstop** pragma or the **/Fp** option.

The precompiled code is saved in a file with a name created from the base name of the file specified with the **/Yc** option and a .pch extension. You can also use the [/Fp (Name .Pch File)](fp-name-dot-pch-file.md) option to specify a name for the precompiled header file.

If you use __/Yc__*filename*, the compiler compiles all code up to and including the specified file for subsequent use with the [/Yu (Use Precompiled Header File)](yu-use-precompiled-header-file.md) option.

If the options __/Yc__*filename* and __/Yu__*filename* occur on the same command line and both reference, or imply, the same file name, __/Yc__*filename* takes precedence. This feature simplifies the writing of makefiles.

For more information on precompiled headers, see:

- [/Y (Precompiled Headers)](y-precompiled-headers.md)

- [Precompiled Header Files](../creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Select a .cpp file. The .cpp file must #include the .h file that contains precompiled header information. The project's **/Yc** setting can be overridden at the file level.

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Open the **Configuration Properties**, **C/C++**, **Precompiled Headers** property page.

1. Modify the **Precompiled Header** property.

1. To set the filename, modify the **Precompiled Header File** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.PrecompiledHeaderThrough%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A>.

## Example

Consider the following code:

```cpp
// prog.cpp
// compile with: cl /c /Ycmyapp.h prog.cpp
#include <afxwin.h>   // Include header for class library
#include "resource.h" // Include resource definitions
#include "myapp.h"    // Include information specific to this app
// ...
```

When this code is compiled with the command `CL /YcMYAPP.H PROG.CPP`, the compiler saves all the preprocessing for AFXWIN.h, RESOURCE.h, and MYAPP.h in a precompiled header file called MYAPP.pch.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[Precompiled Header Files](../creating-precompiled-header-files.md)
