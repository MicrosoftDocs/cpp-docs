---
description: "Learn more about: /WINMDKEYFILE (Specify winmd Key File)"
title: "/WINMDKEYFILE (Specify winmd Key File)"
ms.date: 03/24/2025
f1_keywords: ["VC.Project.VCLinkerTool.WINMDKeyFile"]
---
# /WINMDKEYFILE (Specify winmd Key File)

Specifies a key or a key pair to sign a Windows Runtime Metadata (`.winmd`) file.

```cmd
/WINMDKEYFILE:filename
```

## Remarks

Resembles the [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) linker option that is applied to a `.winmd` file. The `filename` must not exceed `MAX_PATH` (260) characters.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Windows Metadata** property page.
1. In the **Windows Metadata Key File** box, enter the file location.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
