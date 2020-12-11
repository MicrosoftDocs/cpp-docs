---
description: "Learn more about: /HEAP (Set Heap Size)"
title: "/HEAP (Set Heap Size)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.HeapCommitSize", "VC.Project.VCLinkerTool.HeapReserveSize"]
helpviewer_keywords: ["-HEAP linker option", "heap allocation, setting heap size", "/HEAP linker option", "HEAP linker option"]
ms.assetid: a3f71927-7f1d-492c-9fdb-dfccb1a043da
---
# /HEAP (Set Heap Size)

```
/HEAP:reserve[,commit]
```

## Remarks

The /HEAP option sets the size of the heap in bytes. This option is only for use when building an .exe file.

The *reserve* argument specifies the total heap allocation in virtual memory. The default heap size is 1 MB. The linker rounds up the specified value to the nearest 4 bytes.

The optional `commit` argument specifies the amount of physical memory to allocate at a time. Committed virtual memory causes space to be reserved in the paging file. A higher `commit` value saves time when the application needs more heap space, but increases the memory requirements and possibly the startup time.

Specify the *reserve* and `commit` values in decimal or C-language notation.

This functionality is also available via a module definition file with [HEAPSIZE](heapsize.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **System** property page.

1. Modify the **Heap Commit Size** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapReserveSize%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapCommitSize%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
