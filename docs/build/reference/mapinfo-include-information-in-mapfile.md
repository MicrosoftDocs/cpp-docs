---
description: "Learn more about: /MAPINFO (Include Information in Mapfile)"
title: "/MAPINFO (Include Information in Mapfile)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.MapLines", "VC.Project.VCLinkerTool.MapInfoFixups", "VC.Project.VCLinkerTool.MapExports", "/mapinfo"]
helpviewer_keywords: ["/MAPINFO linker option", "MAPINFO linker option", "-MAPINFO linker option"]
ms.assetid: 533d2bce-f9b7-4fea-ae1c-0b4864c9d10b
---
# /MAPINFO (Include Information in Mapfile)

```
/MAPINFO:EXPORTS
```

## Remarks

The /MAPINFO option tells the linker to include the specified information in a mapfile, which is created if you specify the [/MAP](map-generate-mapfile.md) option.  EXPORTS tells the linker to include exported functions.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Debug** property page.

1. Modify of the **Map Exports** properties:

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapExports%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
