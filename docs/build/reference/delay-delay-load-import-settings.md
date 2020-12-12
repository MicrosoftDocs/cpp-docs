---
description: "Learn more about: /DELAY (Delay Load Import Settings)"
title: "/DELAY (Delay Load Import Settings)"
ms.date: "11/04/2016"
f1_keywords: ["/delay", "VC.Project.VCLinkerTool.DelayNoBind", "VC.Project.VCLinkerTool.SupportUnloadOfDelayLoadedDLL", "VC.Project.VCLinkerTool.DelayUnload"]
helpviewer_keywords: ["delayed loading of DLLs, /DELAY option", "DELAY linker option", "/DELAY linker option", "-DELAY linker option"]
ms.assetid: 9334b332-cc58-4dae-b10f-a4c75972d50c
---
# /DELAY (Delay Load Import Settings)

```
/DELAY:UNLOAD
/DELAY:NOBIND
```

## Remarks

The /DELAY option controls [delayed loading](linker-support-for-delay-loaded-dlls.md) of DLLs:

- The UNLOAD qualifier tells the delay-load helper function to support explicit unloading of the DLL. The Import Address Table (IAT) is reset to its original form, invalidating IAT pointers and causing them to be overwritten.

   If you do not select UNLOAD, any call to [FUnloadDelayLoadedDLL](explicitly-unloading-a-delay-loaded-dll.md) will fail.

- The NOBIND qualifier tells the linker not to include a bindable IAT in the final image. The default is to create the bindable IAT for delay-loaded DLLs. The resulting image cannot be statically bound. (Images with bindable IATs may be statically bound prior to execution.) See [/BIND](bind.md).

   If the DLL is bound, the helper function will attempt to use the bound information instead of calling [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) on each of the referenced imports. If either the timestamp or the preferred address does not match those of the loaded DLL, the helper function will assume the bound IAT is out of date and will proceed as if the bound IAT does not exist.

   NOBIND causes your program image to be larger but can speed load time of the DLL. If you never intend to bind the DLL, NOBIND will prevent the bound IAT from being generated.

To specify DLLs to delay load, use the [/DELAYLOAD](delayload-delay-load-import.md) option.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand **Configuration Properties**, **Linker**, and then select **Advanced**.

1. Modify the **Delay Loaded DLL** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
