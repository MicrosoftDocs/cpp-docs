---
description: "Learn more about: /DELAY (Delay load import settings)"
title: "/DELAY (Delay load import settings)"
ms.date: 09/19/2022
f1_keywords: ["/delay", "VC.Project.VCLinkerTool.DelayNoBind", "VC.Project.VCLinkerTool.SupportUnloadOfDelayLoadedDLL", "VC.Project.VCLinkerTool.DelayUnload", "VC.Project.VCLinkerTool.SupportNobindOfDelayLoadedDLL"]
helpviewer_keywords: ["delayed loading of DLLs, /DELAY option", "DELAY linker option", "/DELAY linker option", "-DELAY linker option"]
---
# `/DELAY` (Delay load import settings)

Linker options to control delayed loading of DLLs at runtime.

## Syntax

> **`/DELAY:UNLOAD`**\
> **`/DELAY:NOBIND`**

## Remarks

The **`/DELAY`** option controls [delayed loading](linker-support-for-delay-loaded-dlls.md) of DLLs:

- The **`/DELAY:UNLOAD`** qualifier tells the delay-load helper function to support explicit unloading of the DLL. The Import Address Table (IAT) is reset to its original form, invalidating IAT pointers and causing them to be overwritten.

   If you don't select **`/DELAY:UNLOAD`**, any call to [`__FUnloadDelayLoadedDLL`](linker-support-for-delay-loaded-dlls.md#explicitly-unload-a-delay-loaded-dll) will fail.

- The **`/DELAY:NOBIND`** qualifier tells the linker not to include a bindable IAT in the final image. The default is to create the bindable IAT for delay-loaded DLLs. The resulting image can't be statically bound. (Images with bindable IATs may be statically bound before execution.) For more information, see [`/BIND`](bind.md).

   If the DLL is bound, the helper function attempts to use the bound information instead of calling [`GetProcAddress`](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) on each of the referenced imports. If either the timestamp or the preferred address doesn't match the ones in the loaded DLL, the helper function assumes the bound IAT is out of date. It continues as if the bound IAT doesn't exist.

   **`/DELAY:NOBIND`** causes your program image to be larger, but can speed load time of the DLL. If you never intend to bind the DLL, **`/DELAY:NOBIND`** prevents the bound IAT from being generated.

To specify DLLs to delay load, use the [`/DELAYLOAD`](delayload-delay-load-import.md) option.

### To set this linker option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Unload delay loaded DLL** property or the **Unbind delay loaded DLL** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
