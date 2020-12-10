---
description: "Learn more about: /MERGE (Combine Sections)"
title: "/MERGE (Combine Sections)"
ms.date: "11/04/2016"
f1_keywords: ["/merge", "VC.Project.VCLinkerTool.MergeSections"]
helpviewer_keywords: ["sections, combining", "/MERGE linker option", "sections, naming", "sections", "-MERGE linker option", "MERGE linker option"]
ms.assetid: 10fb20c2-0b3f-4c8d-98a8-f69aedf03d52
---
# /MERGE (Combine Sections)

```
/MERGE:from=to
```

## Remarks

The /MERGE option combines the first section (*from*) with the second section (*to*), naming the resulting section *to*. For example, `/merge:.rdata=.text`.

If the second section does not exist, LINK renames the section *from* as *to*.

The /MERGE option is useful for creating VxDs and overriding the compiler-generated section names.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Advanced** property page.

1. Modify the **Merge Sections** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergeSections%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
