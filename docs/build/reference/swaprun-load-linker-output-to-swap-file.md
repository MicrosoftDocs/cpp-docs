---
description: "Learn more about: /SWAPRUN (Load Linker Output to Swap File)"
title: "/SWAPRUN (Load Linker Output to Swap File)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.SwapRunFromNet", "/swaprun", "VC.Project.VCLinkerTool.SwapRunFromCD"]
helpviewer_keywords: ["-SWAPRUN linker option", "files [C++], LINK", "LINK tool [C++], output", "linker [C++], copying output to swap file", "swap file for linker output", "output files, linker", "/SWAPRUN linker option", "SWAPRUN linker option"]
ms.assetid: 4a1e7f46-4399-4161-8dfc-d6a71beaf683
---
# /SWAPRUN (Load Linker Output to Swap File)

```
/SWAPRUN:{NET|CD}
```

## Remarks

The /SWAPRUN option tells the operating system to first copy the linker output to a swap file, and then run the image from there. This is a Windows NT 4.0 (and later) feature.

If NET is specified, the operating system will first copy the binary image from the network to a swap file and load it from there. This option is useful for running applications over the network. When CD is specified, the operating system will copy the image on a removable disk to a page file and then load it.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **System** property page.

1. Modify one of the following properties:

   - **Swap Run From CD**

   - **Swap Run From Network**

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromCD%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromNet%2A> properties.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
