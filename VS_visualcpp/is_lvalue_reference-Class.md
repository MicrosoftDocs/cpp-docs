---
title: "is_lvalue_reference Class"
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
ms.assetid: 7f11896b-935c-4de1-9c87-9d0127f904e2
caps.latest.revision: 16
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
# is_lvalue_reference Class
Tests if type is an lvalue reference.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_lvalue_reference;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of this type predicate holds true if the type `Ty` is a reference to an object or to a function, otherwise it holds false. Note that `Ty` may not be an rvalue reference. For more information about rvalues, see [Rvalue Reference Declarator: &&](../VS_visualcpp/Rvalue-Reference-Declarator----.md).  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [Lvalues and Rvalues](../VS_visualcpp/Lvalues-and-Rvalues--Visual-C---.md)