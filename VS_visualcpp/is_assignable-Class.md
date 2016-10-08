---
title: "is_assignable Class"
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
ms.assetid: 53444287-c8be-4ad2-9487-a85c066a4f84
caps.latest.revision: 12
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
# is_assignable Class
Tests whether a value of `From` type can be assigned to a `To` type.  
  
## Syntax  
  
```  
template <class To, class From>  
    struct is_assignable;  
```  
  
#### Parameters  
 To  
 The type of the object that receives the assignment.  
  
 From  
 The type of the object that provides the value.  
  
## Remarks  
 The unevaluated expression `declval<To>() = declval<From>()` must be well-formed. Both `From` and `To` must be complete types, `void`, or arrays of unknown bound.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)