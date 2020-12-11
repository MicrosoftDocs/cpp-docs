---
description: "Learn more about: /DEF (Specify Module-Definition File)"
title: "/DEF (Specify Module-Definition File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.ModuleDefinitionFile", "/def"]
helpviewer_keywords: ["module definition files, specifying", "DEF linker option", "-DEF linker option", "module definition files", "/DEF linker option"]
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
---
# /DEF (Specify Module-Definition File)

```
/DEF:filename
```

## Arguments

*filename*<br/>
The name of a module-definition file (.def) to be passed to the linker.

## Remarks

The /DEF option passes a module-definition file (.def) to the linker. Only one .def file can be specified to LINK. For details about .def files, see [Module-Definition Files](module-definition-dot-def-files.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Input** property page.

1. Modify the **Module Definition File** property.

To specify a .def file from within the development environment, you should add it to the project along with other files and then specify the file to the /DEF option.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
