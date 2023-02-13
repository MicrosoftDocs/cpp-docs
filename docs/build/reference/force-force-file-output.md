---
description: "Learn more about: /FORCE (Force file output)"
title: "/FORCE (Force file output)"
ms.date: 09/08/2022
f1_keywords: ["VC.Project.VCLinkerTool.ForceFileOutput", "VC.Project.VCLinkerTool.ForceLink", "/force"]
helpviewer_keywords: ["FORCE linker option", "file output in linker", "/FORCE linker option", "-FORCE linker option"]
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
---
# `/FORCE` (Force file output)

Tells the linker to create an executable even if symbols are undefined or multiply defined.

## Syntax

> **`/FORCE`**\[**`:MULTIPLE`**\|**`:UNRESOLVED`**]

## Remarks

The **`/FORCE`** linker option tells the linker to create an executable image (EXE file or DLL) even if a symbol is referenced but not defined or is defined more than once.

> [!IMPORTANT]
> The **`/FORCE`** option can create an executable that crashes or misbehaves at runtime if it references an undefined symbol or, when a multiply defined symbol has different definitions, if it invokes an unexpected definition in context.

The **`/FORCE`** option can take an optional argument:

- Use **`/FORCE:MULTIPLE`** to create an output file whether or not LINK finds more than one definition for a symbol.

- Use **`/FORCE:UNRESOLVED`** to create an output file whether or not LINK finds an undefined symbol. **`/FORCE:UNRESOLVED`** is ignored if the entry point symbol is unresolved.

**`/FORCE`** with no arguments implies both **`/FORCE:MULTIPLE`** and **`/FORCE:UNRESOLVED`**.

The linker won't link incrementally when the **`/FORCE`** option is specified.

If a module is compiled with **`/clr`**, the linker ignores the **`/FORCE`** option.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **General** property page.

1. Modify the **Force File Output** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
