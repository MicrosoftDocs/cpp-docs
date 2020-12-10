---
description: "Learn more about: /DELAYLOAD (Delay Load Import)"
title: "/DELAYLOAD (Delay Load Import)"
ms.date: "11/04/2016"
f1_keywords: ["/delayload", "VC.Project.VCLinkerTool.DelayLoadDLLS"]
helpviewer_keywords: ["DELAYLOAD linker option", "-DELAYLOAD linker option", "/DELAYLOAD linker option", "delayed loading of DLLs, /DELAYLOAD option"]
ms.assetid: 39ea0f1e-5c01-450f-9c75-2d9761ff9b28
---
# /DELAYLOAD (Delay Load Import)

> **/DELAYLOAD:**_dllname_

## Parameters

*dllname*<br/>
The name of a DLL that you want to delay load.

## Remarks

The /DELAYLOAD option causes the DLL that's specified by `dllname` to be loaded only on the first call by the program to a function in that DLL. For more information, see [Linker Support for Delay-Loaded DLLs](linker-support-for-delay-loaded-dlls.md). You can use this option as many times as necessary to specify as many DLLs as you choose. You must use Delayimp.lib when you link your program, or you can implement your own delay-load helper function.

The [/DELAY](delay-delay-load-import-settings.md) option specifies binding and loading options for each delay-loaded DLL.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. In the **Linker** folder, select the **Input** property page.

1. Modify the **Delay Loaded DLLs** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
