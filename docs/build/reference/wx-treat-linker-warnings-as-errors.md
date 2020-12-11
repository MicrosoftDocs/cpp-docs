---
description: "Learn more about: /WX (Treat Linker Warnings as Errors)"
title: "/WX (Treat Linker Warnings as Errors)"
ms.date: "11/04/2016"
f1_keywords: ["/WX"]
helpviewer_keywords: ["/WX linker option", "-WX linker option", "WX linker option"]
ms.assetid: e4ba97c7-93f7-43ae-a4bb-d866790926c9
---
# /WX (Treat Linker Warnings as Errors)

```
/WX[:NO]
```

## Remarks

/WX causes no output file to be generated if the linker generates a warning.

This is similar to **/WX** for the compiler (see [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](compiler-option-warning-level.md) for more information). However, specifying **/WX** for the compilation does not imply that **/WX** will also be in effect for the link phase; you must explicitly specify **/WX** for each tool.

By default, **/WX** is not in effect. To treat linker warnings as errors, specify **/WX**. **/WX:NO** is the same as not specifying **/WX**.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Command Line** property page.

1. Type the option into the **Additional Options** box.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
