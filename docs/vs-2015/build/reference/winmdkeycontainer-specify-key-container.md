---
title: "-WINMDKEYCONTAINER (Specify Key Container) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.WINMDKEYCONTAINER"
dev_langs: 
  - "C++"
ms.assetid: c2fc44dc-7cb5-42b9-897f-1b124928f2f7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /WINMDKEYCONTAINER (Specify Key Container)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-WINMDKEYCONTAINER (Specify Key Container)](https://docs.microsoft.com/cpp/build/reference/winmdkeycontainer-specify-key-container).  
  
  
Specifies a key container to sign a Windows Metadata (.winmd) file.  
  
```  
/WINMDKEYCONTAINER:name  
```  
  
## Remarks  
 Resembles the [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md) linker option that is applied to a (.winmd) file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Windows Metadata** property page.  
  
4.  In the **Windows Metadata Key Container** box, enter the location.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

