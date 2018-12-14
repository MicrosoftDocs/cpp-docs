---
title: "/Y- (Ignore Precompiled Header Options) (C++) - Visual Studio"
ms.date: "12/14/2018"
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

- [Creating Precompiled Header Files](creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set compiler and build properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](compiler-command-line-syntax.md)