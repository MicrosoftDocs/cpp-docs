---
title: "is_rvalue_reference Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 40a97072-7b5c-4274-9154-298d3dcf064a
caps.latest.revision: 14
manager: ghogen
translation.priority.mt: 
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
# is_rvalue_reference Class
Tests if type is an rvalue reference.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_rvalue_reference;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of this type predicate holds true if the type `Ty` is an [Rvalue Reference Declarator: &&](../VS_visualcpp/Rvalue-Reference-Declarator----.md) reference.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [Lvalues and Rvalues](../VS_visualcpp/Lvalues-and-Rvalues--Visual-C---.md)