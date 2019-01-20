---
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

- [/Y (Precompiled Headers)](../../build/reference/y-precompiled-headers.md)

- [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

- [Compiler Options](../../build/reference/compiler-options.md)
- [Setting Compiler Options](../../build/reference/setting-compiler-options.md)
