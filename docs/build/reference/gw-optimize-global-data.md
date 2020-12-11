---
description: "Learn more about: /Gw (Optimize Global Data)"
title: "/Gw (Optimize Global Data)"
ms.date: "11/04/2016"
f1_keywords: ["/Gw"]
helpviewer_keywords: ["/Gw compiler option [C++]", "-Gw compiler option [C++]"]
ms.assetid: 6f90f4e9-5eb8-4c47-886e-631278a5a4a9
---
# /Gw (Optimize Global Data)

Package global data in COMDAT sections for optimization.

## Syntax

```
/Gw[-]
```

## Remarks

The **/Gw** option causes the compiler to package global data in individual COMDAT sections. By default, **/Gw** is off and must be explicitly enabled. To explicitly disable it, use **/Gw-**. When both **/Gw** and [/GL](gl-whole-program-optimization.md) are enabled, the linker uses whole-program optimization to compare COMDAT sections across multiple object files in order to exclude unreferenced global data or to merge identical read-only global data. This can significantly reduce the size of the resulting binary executable.

When you compile and link separately, you can use the [/OPT:REF](opt-optimizations.md) linker option to exclude from the executable the unreferenced global data in object files compiled with the **/Gw** option.

You can also use the [/OPT:ICF](opt-optimizations.md) and [/LTCG](ltcg-link-time-code-generation.md) linker options together to merge in the executable any identical read-only global data across multiple object files compiled with the **/Gw** option.

For more information, see [Introducing /Gw Compiler Switch](https://devblogs.microsoft.com/cppblog/introducing-gw-compiler-switch/) on the C++ Team Blog.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **C/C++** folder.

1. Select the **Command Line** property page.

1. Modify the **Additional Options** property to include **/Gw** and then choose **OK**.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
