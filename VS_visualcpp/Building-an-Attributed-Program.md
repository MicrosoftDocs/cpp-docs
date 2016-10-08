---
title: "Building an Attributed Program"
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
ms.assetid: 04997b5f-bf2c-46ec-b868-c4adebbef5f4
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
# Building an Attributed Program
After you put Visual C++ attributes into your source code, you may want the Visual C++ compiler to produce a type library and .idl file for you. The following linker options help you build .tlb and .idl files:  
  
-   [/IDLOUT](../VS_visualcpp/-IDLOUT--Name-MIDL-Output-Files-.md)  
  
-   [/IGNOREIDL](../VS_visualcpp/-IGNOREIDL--Don-t-Process-Attributes-into-MIDL-.md)  
  
-   [/MIDL](../VS_visualcpp/-MIDL--Specify-MIDL-Command-Line-Options-.md)  
  
-   [/TLBOUT](../VS_visualcpp/-TLBOUT--Name-.TLB-File-.md)  
  
 Some projects contain multiple independent .idl files. These are used to produce two or more .tlb files and optionally bind them into the resource block. This scenario is not currently supported in Visual C++.  
  
 In addition, the Visual C++ linker will output all IDL-related attribute information to a single MIDL file. There will be no way to generate two type libraries from a single project.  
  
## See Also  
 [Concepts](../VS_visualcpp/Attributed-Programming-Concepts.md)