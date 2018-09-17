---
title: "-Zs (Syntax Check Only) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/zs"]
dev_langs: ["C++"]
helpviewer_keywords: ["-Zs compiler option [C++]", "Syntax Check Only compiler option", "Zs compiler option", "/Zs compiler option [C++]"]
ms.assetid: b4b41e6a-3f41-4d09-9cb6-fde5aa2cfecf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Zs (Syntax Check Only)

Tells the compiler to check only the syntax of the source files on the command line.

## Syntax

```
/Zs
```

## Remarks

When using this option, no output files are created, and error messages are written to standard output.

The **/Zs** option provides a quick way to find and correct syntax errors before you compile and link a source file.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Command Line** property page.

1. Type the compiler option in the **Additional Options** box.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](../../build/reference/compiler-options.md)<br/>
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)