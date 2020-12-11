---
description: "Learn more about: /hotpatch (Create Hotpatchable Image)"
title: "/hotpatch (Create Hotpatchable Image)"
ms.date: "11/12/2018"
f1_keywords: ["/hotpatch", "VC.Project.VCCLCompilerTool.CreateHotpatchableImage"]
helpviewer_keywords: ["hot patching", "-hotpatch compiler option [C++]", "/hotpatch compiler option [C++]", "hotpatching"]
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
---
# /hotpatch (Create Hotpatchable Image)

Prepares an image for hot patching.

## Syntax

```
/hotpatch
```

## Remarks

When **/hotpatch** is used in a compilation, the compiler ensures that first instruction of each function is at least two bytes, which is required for hot patching.

To complete the preparation for making an image hotpatchable, after you use **/hotpatch** to compile, you must use [/FUNCTIONPADMIN (Create Hotpatchable Image)](functionpadmin-create-hotpatchable-image.md) to link. When you compile and link an image by using one invocation of cl.exe, **/hotpatch** implies **/functionpadmin**.

Because instructions are always two bytes or larger on the ARM architecture, and because x64 compilation is always treated as if **/hotpatch** has been specified, you don't have to specify **/hotpatch** when you compile for these targets; however, you must still link by using **/functionpadmin** to create hotpatchable images for them. The **/hotpatch** compiler option only affects x86 compilation.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **C/C++** folder.

1. Select the **Command Line** property page.

1. Add the compiler option to the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
