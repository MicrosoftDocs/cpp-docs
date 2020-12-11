---
description: "Learn more about: /FORCE (Force File Output)"
title: "/FORCE (Force File Output)"
ms.date: "07/19/2019"
f1_keywords: ["VC.Project.VCLinkerTool.ForceLink", "/force"]
helpviewer_keywords: ["FORCE linker option", "file output in linker", "/FORCE linker option", "-FORCE linker option"]
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
---
# /FORCE (Force File Output)

```
/FORCE:[MULTIPLE|UNRESOLVED]
```

## Remarks

The /FORCE option tells the linker to create a valid .exe file or DLL even if a symbol is referenced but not defined or is multiply defined.

The /FORCE option can take an optional argument:

- Use /FORCE:MULTIPLE to create an output file whether or not LINK finds more than one definition for a symbol.

- Use /FORCE:UNRESOLVED to create an output file whether or not LINK finds an undefined symbol. /FORCE:UNRESOLVED is ignored if the entry point symbol is unresolved.

/FORCE with no arguments implies both multiple and unresolved.

A file created with this option may not run as expected. The linker will not link incrementally when the /FORCE option is specified.

If a module is compiled with **/clr**, **/FORCE** will not create an image.

### To set this linker option in the Visual Studio development environment

1. Right-click on the project in **Solution Explorer** and choose **Properties**.

1. Click the **Linker** folder.

1. Click the **Command Line** property page.

1. Type the option into the **Additional Options** box.

For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
