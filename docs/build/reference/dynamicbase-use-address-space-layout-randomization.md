---
title: "-DYNAMICBASE (Use address space layout randomization) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.RandomizedBaseAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-DYNAMICBASE linker option"
  - "/DYNAMICBASE linker option"
  - "DYNAMICBASE linker option"
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
caps.latest.revision: 10
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
# /DYNAMICBASE (Use address space layout randomization)
Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature of [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)].  
  
## Syntax  
  
```  
/DYNAMICBASE[:NO]  
```  
  
## Remarks  
 By default, /DYNAMICBASE is on.  
  
 This option modifies the header of an executable to indicate whether the application should be randomly rebased at load time.  
  
 Address space layout randomization is supported on [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)].  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Advanced** property page.  
  
5.  Modify the **Randomized Base Address** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)