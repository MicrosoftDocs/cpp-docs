---
title: "no_smart_pointers"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d69dd71e-08a8-4446-a3d0-a062dc29cb17
caps.latest.revision: 5
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
# no_smart_pointers
**C++ Specific**  
  
 Suppresses the creation of smart pointers for all interfaces in the type library.  
  
## Syntax  
  
```  
no_smart_pointers  
```  
  
## Remarks  
 By default, when you use `#import`, you get a smart pointer declaration for all interfaces in the type library. These smart pointers are of type [_com_ptr_t Class](../VS_visualcpp/_com_ptr_t-Class.md).  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../VS_visualcpp/#import-Attributes--C---.md)   
 [#import Directive](../VS_visualcpp/#import-Directive--C---.md)