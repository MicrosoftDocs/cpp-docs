---
description: "Learn more about: /LARGEADDRESSAWARE (Handle Large Addresses)"
title: "/LARGEADDRESSAWARE (Handle Large Addresses)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.LargeAddressAware", "/largeaddressaware"]
helpviewer_keywords: ["LARGEADDRESSAWARE linker option", "-LARGEADDRESSAWARE linker option", "/LARGEADDRESSAWARE linker option"]
ms.assetid: a29756c8-e893-47a9-9750-1f0d25359385
---
# /LARGEADDRESSAWARE (Handle Large Addresses)

```
/LARGEADDRESSAWARE[:NO]
```

## Remarks

The /LARGEADDRESSAWARE option tells the linker that the application can handle addresses larger than 2 gigabytes. In the 64-bit compilers, this option is enabled by default. In the 32-bit compilers, /LARGEADDRESSAWARE:NO is enabled if /LARGEADDRESSAWARE is not otherwise specified on the linker line.

If an application was linked with /LARGEADDRESSAWARE, DUMPBIN [/HEADERS](headers.md) will display information to that effect.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **System** property page.

1. Modify the **Enable Large Addresses** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.LargeAddressAware%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
