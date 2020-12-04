---
description: "Learn more about: /Y- (Ignore Precompiled Header Options)"
title: "/Y- (Ignore Precompiled Header Options)"
ms.date: "11/04/2016"
f1_keywords: ["/y-"]
helpviewer_keywords: ["Y- compiler option [C++]", "-Y- compiler option [C++]", "/Y- compiler option [C++]"]
ms.assetid: cfaecb36-58db-46b8-b04d-cca6072b1b7a
---
# /Y- (Ignore Precompiled Header Options)

Causes all other `/Y` compiler options to be ignored (and cannot itself be overridden).

## Syntax

```
/Y-
```

## Remarks

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

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
