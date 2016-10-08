---
title: "-HIGHENTROPYVA (Support 64-Bit ASLR)"
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
H1: /HIGHENTROPYVA (Support 64-Bit ASLR)
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
caps.latest.revision: 6
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
# -HIGHENTROPYVA (Support 64-Bit ASLR)
Specifies that the executable image supports high-entropy 64-bit address space layout randomization (ASLR).  
  
## Syntax  
  
```  
/HIGHENTROPYVA[:NO]  
```  
  
## Remarks  
 By default, /HIGHENTROPYVA is on for 64-bit executable images. It is not applicable to 32-bit executable images. To enable this option, /DYNAMICBASE must also be on.  
  
 /HIGHENTROPYVA modifies the header of a .dll file or .exe file to indicate whether ASLR with 64-bit addresses is supported. When this option is set on an executable and all of the modules that it depends on, an operating system that supports 64-bit ASLR can rebase the segments of the executable image at load time by using randomized addresses in a 64-bit virtual address space. This large address space makes it more difficult for an attacker to guess the location of a particular memory region.  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Command Line** property page.  
  
5.  In **Additional Options**, enter `/HIGHENTROPYVA` or `/HIGHENTROPYVA:NO`.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)