---
title: "-WINMD (Generate Windows Metadata) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.GenerateWindowsMetadata"]
dev_langs: ["C++"]
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /WINMD (Generate Windows Metadata)

Enables generation of a Windows Runtime Metadata (.winmd) file.

```
/WINMD[:{NO|ONLY}]
```

## Remarks

**/WINMD**<br/>
The default setting for Universal Windows Platform apps. The linker generates both the binary executable file and the .winmd metadata file.

**/WINMD:NO**<br/>
The linker generates only the binary executable file, but not a .winmd file.

**/WINMD:ONLY**<br/>
The linker generates only the .winmd file, but not the binary executable file.

By default, the output file name has the form `binaryname`.winmd. To specify a different file name, use the [/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md) option.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Linker** folder.

1. Select the **Windows Metadata** property page.

1. In the **Generate Windows Metadata** drop-down list box, select the option you want.

## See Also

[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)