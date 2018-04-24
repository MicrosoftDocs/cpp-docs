---
title: "-WINMDKEYFILE (Specify winmd Key File) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.WINMDKeyFile"
dev_langs: 
  - "C++"
ms.assetid: 65d88fdc-fff9-49ea-8cfc-b2f408741734
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /WINMDKEYFILE (Specify winmd Key File)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-WINMDKEYFILE (Specify winmd Key File)](https://docs.microsoft.com/cpp/build/reference/winmdkeyfile-specify-winmd-key-file).  
  
  
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
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

