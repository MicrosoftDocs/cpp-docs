---
title: "/MANIFESTFILE (Name Manifest File) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["VC.Project.VCLinkerTool.ManifestFile"]
helpviewer_keywords: ["MANIFESTFILE linker option", "-MANIFESTFILE linker option", "/MANIFESTFILE linker option"]
ms.assetid: befa5ab2-a9cf-4c9b-969a-e7b4a930f08d
---
# /MANIFESTFILE (Name Manifest File)

```
/MANIFESTFILE:filename
```

## Remarks

/MANIFESTFILE lets you change the default name of the manifest file.  The default name of the manifest file is the file name with .manifest appended.

/MANIFESTFILE will have no effect if you do not also link with [/MANIFEST](manifest-create-side-by-side-assembly-manifest.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Manifest File** property page.

1. Modify the **Manifest File** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ManifestFile%2A>.

## See Also

[Setting Linker Options](linking.md)<br/>
[Linker Options](linker-options.md)