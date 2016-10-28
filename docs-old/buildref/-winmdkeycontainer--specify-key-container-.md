---
title: "-WINMDKEYCONTAINER (Specify Key Container)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.WINMDKEYCONTAINER"
dev_langs: 
  - "C++"
ms.assetid: c2fc44dc-7cb5-42b9-897f-1b124928f2f7
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /WINMDKEYCONTAINER (Specify Key Container)
Specifies a key container to sign a Windows Metadata (.winmd) file.  
  
```  
/WINMDKEYCONTAINER:name  
```  
  
## Remarks  
 Resembles the [/KEYCONTAINER](../buildref/-keycontainer--specify-a-key-container-to-sign-an-assembly-.md) linker option that is applied to a (.winmd) file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Windows Metadata** property page.  
  
4.  In the **Windows Metadata Key Container** box, enter the location.  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)