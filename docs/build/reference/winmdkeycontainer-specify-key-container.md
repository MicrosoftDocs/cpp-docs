---
description: "Learn more about: /WINMDKEYCONTAINER (Specify Key Container)"
title: "/WINMDKEYCONTAINER (Specify Key Container)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.WINMDKEYCONTAINER"]
ms.assetid: c2fc44dc-7cb5-42b9-897f-1b124928f2f7
---
# /WINMDKEYCONTAINER (Specify Key Container)

Specifies a key container to sign a Windows Metadata (.winmd) file.

```
/WINMDKEYCONTAINER:name
```

## Remarks

Resembles the [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md) linker option that is applied to a (.winmd) file.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Linker** folder.

1. Select the **Windows Metadata** property page.

1. In the **Windows Metadata Key Container** box, enter the location.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
