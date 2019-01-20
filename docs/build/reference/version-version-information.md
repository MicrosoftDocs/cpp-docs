---
title: "/VERSION (Version Information)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.Version", "/version"]
helpviewer_keywords: ["-VERSION linker option", "Version Information linker option", "version numbers, specifying in .exe", "/VERSION linker option", "VERSION linker option"]
ms.assetid: b86d0e86-dca6-4316-aee2-d863ccb9f223
---
# /VERSION (Version Information)

```
/VERSION:major[.minor]
```

## Arguments

*major* and *minor*<br/>
The version number you want in the header of the .exe or .dll file.

## Remarks

The /VERSION option tells the linker to put a version number in the header of the .exe or .dll file. Use DUMPBIN [/HEADERS](../../build/reference/headers.md) to see the image version field of the OPTIONAL HEADER VALUES to see the effect of /VERSION.

The *major* and *minor* arguments are decimal numbers in the range 0 through 65,535. The default is version 0.0.

The information specified with /VERSION does not affect the version information that appears for an application when you view its properties in File Explorer. That version information comes from a resource file that is used to build the application. See [Version Information Editor](../../windows/version-information-editor.md) for more information.

Another way to insert a version number is with the [VERSION](../../build/reference/version-c-cpp.md) module-definition statement.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **General** property page.

1. Modify the **Version** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Version%2A>.

## See also

- [Setting Linker Options](../../build/reference/setting-linker-options.md)
- [Linker Options](../../build/reference/linker-options.md)
