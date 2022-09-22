---
description: "Learn more about: /WX (Treat linker warnings as errors)"
title: "/WX (Treat linker warnings as errors)"
ms.date: 09/08/2022
f1_keywords: ["VC.Project.VCLinkerTool.TreatLinkerWarningsAsErrors"]
helpviewer_keywords: ["/WX linker option", "-WX linker option", "WX linker option"]
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
---
# `/WX` (Treat linker warnings as errors)

Specifies whether to treat linker warnings as errors.

## Syntax

> **`/WX`**\[**`:NO`**]

## Remarks

The **`/WX`** linker option causes no output file to be generated if the linker generates a warning.

This option is similar to **`/WX`** for the compiler. For more information, see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](compiler-option-warning-level.md). However, specifying **`/WX`** for the compilation doesn't imply that **`/WX`** will also be in effect for the link phase; you must explicitly specify **`/WX`** for each tool.

By default, **`/WX`** isn't in effect. To treat linker warnings as errors, specify **`/WX`**. **`/WX:NO`** is the same as not specifying **`/WX`**.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Treat Linker Warnings as Errors** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
