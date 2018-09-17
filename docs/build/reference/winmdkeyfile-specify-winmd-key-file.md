---
title: "-WINMDKEYFILE (Specify winmd Key File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.WINMDKeyFile"]
dev_langs: ["C++"]
ms.assetid: 65d88fdc-fff9-49ea-8cfc-b2f408741734
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /WINMDKEYFILE (Specify winmd Key File)
Specifies a key or a key pair to sign a Windows Runtime Metadata (.winmd) file.  
  
```  
/WINMDKEYFILE:filename  
```  
  
## Remarks  
 Resembles the [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) linker option that is applied to a .winmd file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Windows Metadata** property page.  
  
4.  In the **Windows Metadata Key File** box, enter the file location.  
  
## See Also  
[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)