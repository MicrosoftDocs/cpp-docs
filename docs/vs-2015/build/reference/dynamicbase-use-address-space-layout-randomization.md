---
title: "-DYNAMICBASE (Use address space layout randomization) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.RandomizedBaseAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-DYNAMICBASE linker option"
  - "/DYNAMICBASE linker option"
  - "DYNAMICBASE linker option"
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DYNAMICBASE (Use address space layout randomization)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-DYNAMICBASE (Use address space layout randomization)](https://docs.microsoft.com/cpp/build/reference/dynamicbase-use-address-space-layout-randomization).  
  
  
Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature of [!INCLUDE[windowsver](../../includes/windowsver-md.md)].  
  
## Syntax  
  
```  
/DYNAMICBASE[:NO]  
```  
  
## Remarks  
 By default, /DYNAMICBASE is on.  
  
 This option modifies the header of an executable to indicate whether the application should be randomly rebased at load time.  
  
 Address space layout randomization is supported on [!INCLUDE[windowsver](../../includes/windowsver-md.md)].  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Advanced** property page.  
  
5.  Modify the **Randomized Base Address** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

