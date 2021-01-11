---
description: "Learn more about: /GF (Eliminate Duplicate Strings)"
title: "/GF (Eliminate Duplicate Strings)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.StringPooling", "VC.Project.VCCLWCECompilerTool.StringPooling", "/gf"]
helpviewer_keywords: ["duplicate strings", "Eliminate Duplicate Strings compiler option [C++]", "pooling strings compiler option [C++]", "-GF compiler option [C++]", "/GF compiler option [C++]", "GF compiler option [C++]", "strings [C++], pooling"]
ms.assetid: bb7b5d1c-8e1f-453b-9298-8fcebf37d16c
---
# /GF (Eliminate Duplicate Strings)

Enables the compiler to create a single copy of identical strings in the program image and in memory during execution. This is an optimization called *string pooling* that can create smaller programs.

## Syntax

```
/GF
```

## Remarks

If you use **/GF**, the operating system does not swap the string portion of memory and can read the strings back from the image file.

**/GF** pools strings as read-only. If you try to modify strings under **/GF**, an application error occurs.

String pooling allows what were intended as multiple pointers to multiple buffers to be multiple pointers to a single buffer. In the following code, `s` and `t` are initialized with the same string. String pooling causes them to point to the same memory:

```
char *s = "This is a character buffer";
char *t = "This is a character buffer";
```

> [!NOTE]
> The [/ZI](z7-zi-zi-debug-information-format.md) option, used for Edit and Continue, automatically sets the **/GF** option.

> [!NOTE]
> The **/GF** compiler option creates an addressable section for each unique string. And by default, an object file can contain up to 65,536 addressable sections. If your program contains more than 65,536 strings, use the [/bigobj](bigobj-increase-number-of-sections-in-dot-obj-file.md) compiler option to create more sections.

**/GF** is in effect when [/O1](o1-o2-minimize-size-maximize-speed.md) or [/O2](o1-o2-minimize-size-maximize-speed.md) is used.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Code Generation** property page.

1. Modify the **Enable String Pooling** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
