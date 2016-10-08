---
title: "-DYNAMICBASE (Use address space layout randomization)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /DYNAMICBASE (Use address space layout randomization)
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -DYNAMICBASE (Use address space layout randomization)
Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature of Windows Vista.  
  
## Syntax  
  
```  
/DYNAMICBASE[:NO]  
```  
  
## Remarks  
 By default, /DYNAMICBASE is on.  
  
 This option modifies the header of an executable to indicate whether the application should be randomly rebased at load time.  
  
 Address space layout randomization is supported on Windows Vista.  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Advanced** property page.  
  
5.  Modify the **Randomized Base Address** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)