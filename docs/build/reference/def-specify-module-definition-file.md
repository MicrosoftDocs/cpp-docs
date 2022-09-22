---
description: "Learn more about: /DEF (Specify module-definition file)"
title: "/DEF (Specify module-definition file)"
ms.date: 09/09/2022
f1_keywords: ["VC.Project.VCLinkerTool.ModuleDefinitionFile", "/def"]
helpviewer_keywords: ["module definition files, specifying", "DEF linker option", "-DEF linker option", "module definition files", "/DEF linker option"]
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
---
# `/DEF` (Specify module-definition file)

Specifies a module-definition file to the linker.

## Syntax

> **`/DEF:`***`filename`*

## Arguments

*`filename`*\
The name of a module-definition file (*`.def`*) to be passed to the linker.

## Remarks

The **`/DEF`** linker option passes a module-definition file (*`.def`*) to the linker. Only one *`.def`* file can be specified to LINK. For details about *`.def`* files, see [Module-definition files](module-definition-dot-def-files.md).

To specify a *`.def`* file from within the development environment, add it to the project along with your other source files and then specify the file in the project's **Property Pages** dialog.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Input** property page.

1. Modify the **Module Definition File** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
