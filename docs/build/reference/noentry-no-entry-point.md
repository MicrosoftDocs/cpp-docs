---
title: "-NOENTRY (No Entry Point) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.ResourceOnlyDLL"
  - "/noentry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "entry points [C++], linker specifying"
  - "-NOENTRY linker option"
  - "resource-only DLLs [C++], creating"
  - "NOENTRY linker option"
  - "/NOENTRY linker option [C++]"
  - "DLLs [C++], creating"
ms.assetid: 0214dd41-35ad-43ab-b892-e636e038621a
caps.latest.revision: 11
author: "corob-msft"
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
# /NOENTRY (No Entry Point)
```  
/NOENTRY  
```  
  
## Remarks  
 The /NOENTRY option is required for creating a resource-only DLL that contains no executable code. For more information, see [Creating a Resource-Only DLL](../../build/creating-a-resource-only-dll.md).  
  
 Use this option to prevent LINK from linking a reference to `_main` into the DLL.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Advanced** property page.  
  
4.  Modify the **No Entry Point** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL%2A>.  
  
## See Also  
 [Creating a Resource-Only DLL](../../build/creating-a-resource-only-dll.md)   
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)