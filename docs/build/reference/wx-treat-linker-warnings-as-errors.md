---
description: "Learn more about: /WX (Treat linker warnings as errors)"
title: "/WX (Treat linker warnings as errors)"
ms.date: 02/02/2023
f1_keywords: ["VC.Project.VCLinkerTool.TreatLinkerWarningsAsErrors"]
helpviewer_keywords: ["/WX linker option", "-WX linker option", "WX linker option"]
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
---
# `/WX` (Treat linker warnings as errors)

Specifies whether to treat linker warnings as errors.

## Syntax

> **`/WX`**\[**`:NO`**]\
> **`/WX`**\[**`:`***`nnnn`*\[**`,`***`nnnn`*...]]

## Remarks

The **`/WX`** linker option causes no output file to be generated if the linker generates a warning.

This option is similar to **`/WX`** for the compiler. For more information, see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](compiler-option-warning-level.md). However, specifying **`/WX`** for the compilation doesn't imply that **`/WX`** will also be in effect for the link phase; you must explicitly specify **`/WX`** for each tool.

In Visual Studio 2022 and later versions, you can specify **`/WX`** with one or more comma-separated *`nnnn`* arguments, where *`nnnn`* is a number between 4000 and 4999. The linker treats the corresponding *`LNKnnnn`* warnings as errors.

By default, **`/WX`** isn't in effect. To treat linker warnings as errors, specify a **`/WX`** option. **`/WX:NO`** is the same as not specifying **`/WX`**, and overrides any previous **`/WX`** linker option.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. To set or unset all warnings as errors, select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Treat Linker Warnings as Errors** property.

1. To set specific warnings as errors, select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In the **Additional Options** edit control, add *`/WX:warnings`*, where *`warnings`* is a comma-separated list of linker warning numbers.

1. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)\
[`/WX` compiler option](./compiler-option-warning-level.md)
