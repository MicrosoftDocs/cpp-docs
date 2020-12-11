---
description: "Learn more about: /INCLUDE (Force Symbol References)"
title: "/INCLUDE (Force Symbol References)"
ms.date: "11/04/2016"
f1_keywords: ["/include", "VC.Project.VCLinkerTool.ForceSymbolReferences"]
helpviewer_keywords: ["INCLUDE linker option", "force symbol references linker option", "symbol references linker force", "/INCLUDE linker option", "symbols, add to symbol table", "-INCLUDE linker option"]
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
---
# /INCLUDE (Force Symbol References)

```
/INCLUDE:symbol
```

## Parameters

*symbol*<br/>
Specifies a symbol to be added to the symbol table.

## Remarks

The /INCLUDE option tells the linker to add a specified symbol to the symbol table.

To specify multiple symbols, type a comma (,), a semicolon (;), or a space between the symbol names. On the command line, specify /INCLUDE:`symbol` once for each symbol.

The linker resolves `symbol` by adding the object that contains the symbol definition to the program. This feature is useful for including a library object that otherwise would not be linked to the program.

Specifying a symbol with this option overrides the removal of that symbol by [/OPT:REF](opt-optimizations.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Input** property page.

1. Modify the **Force Symbol References** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
