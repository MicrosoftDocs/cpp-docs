---
title: "/NOENTRY (No Entry Point)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.ResourceOnlyDLL", "/noentry"]
helpviewer_keywords: ["entry points [C++], linker specifying", "-NOENTRY linker option", "resource-only DLLs [C++], creating", "NOENTRY linker option", "/NOENTRY linker option [C++]", "DLLs [C++], creating"]
ms.assetid: 0214dd41-35ad-43ab-b892-e636e038621a
---
# /NOENTRY (No Entry Point)

```
/NOENTRY
```

## Remarks

The /NOENTRY option is required for creating a resource-only DLL that contains no executable code. For more information, see [Creating a Resource-Only DLL](../../build/creating-a-resource-only-dll.md).

Use this option to prevent LINK from linking a reference to `_main` into the DLL.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../working-with-project-properties.md).

1. Select the **Linker** folder.

1. Select the **Advanced** property page.

1. Modify the **No Entry Point** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL%2A>.

## See Also

[Creating a Resource-Only DLL](../../build/creating-a-resource-only-dll.md)<br/>
[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)