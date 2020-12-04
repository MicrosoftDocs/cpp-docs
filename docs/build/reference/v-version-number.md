---
description: "Learn more about: /V (Version Number)"
title: "/V (Version Number)"
ms.date: "11/04/2016"
f1_keywords: ["/v"]
helpviewer_keywords: ["embedding version strings", "/V compiler option [C++]", "version numbers, specifying for .obj", "V compiler option [C++]", "-V compiler option [C++]"]
ms.assetid: 3e93fb7a-5dfd-49a6-bd49-3dca8052e0f3
---
# /V (Version Number)

Deprecated. Embeds a text string in the .obj file.

## Syntax

```
/Vstring
```

## Arguments

*string*<br/>
A string specifying the version number or copyright notice to be embedded in an .obj file.

## Remarks

The stringcan label an .obj file with a version number or a copyright notice. Any space or tab characters must be enclosed in double quotation marks (") if they are a part of the string. A backslash (\\) must precede any double quotation marks if they are a part of the string. A space between **/V** and `string` is optional.

You can also use [comment (C/C++)](../../preprocessor/comment-c-cpp.md) with the compiler comment-type argument to place the name and version number of the compiler in the .obj file.

The **/V** option is deprecated beginning in Visual Studio 2005; **/V** was primarily used to support building virtual device drivers (VxDs), and building VxDs is no longer supported by the Visual C++ toolset. For a list of deprecated compiler options, see **Deprecated and Removed Compiler Options** in [Compiler Options Listed by Category](compiler-options-listed-by-category.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
