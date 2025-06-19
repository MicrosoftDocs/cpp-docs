---
title: "/LARGEADDRESSAWARE (Handle Large Addresses)"
description: "Learn more about: /LARGEADDRESSAWARE (Handle Large Addresses)"
ms.date: "02/12/2024"
f1_keywords: ["VC.Project.VCLinkerTool.LargeAddressAware", "/largeaddressaware"]
helpviewer_keywords: ["LARGEADDRESSAWARE linker option", "-LARGEADDRESSAWARE linker option", "/LARGEADDRESSAWARE linker option"]
---
# /LARGEADDRESSAWARE (Handle Large Addresses)

```
/LARGEADDRESSAWARE[:NO]
```

## Remarks

The /LARGEADDRESSAWARE option tells the linker that the application can handle addresses larger than 2 gigabytes. In the 64-bit compilers, this option is enabled by default. In the 32-bit compilers, `/LARGEADDRESSAWARE:NO` is enabled if `/LARGEADDRESSAWARE` is not otherwise specified on the linker line.

If an application was linked with `/LARGEADDRESSAWARE`, `DUMPBIN` [/HEADERS](headers.md) will display information to that effect.

Linking 64-bit applications with **`/LARGEADDRESSAWARE:NO`** is not recommended because it restricts the available address space, which can result in runtime failures if the app exhausts memory. It may also prevent x64 apps from running on ARM64 systems because the emulation runtime will try to reserve 4GB of virtual address space. If the app was linked with `/LARGEADDRESSAWARE:NO`, the app won't launch because it can't allocate that much address space.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **System** property page.

1. Modify the **Enable Large Addresses** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
