---
title: "is_trivially_assignable Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
  - c++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - cpp
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
caps.latest.revision: 11
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
# is_trivially_assignable Class
Tests whether a value of `From` type can be trivially assigned to `To` type  
  
## Syntax  
  
```  
template <class To, class From>  
    struct is_trivially_assignable;  
```  
  
#### Parameters  
 To  
 The type of the object that receives the assignment.  
  
 From  
 The type of the object that provides the value.  
  
## Remarks  
 The expression `declval<To>() = declval<From>()` must be well-formed, and must be known to the compiler to require no non-trivial operations. Both `From` and `To` must be complete types, `void`, or arrays of unknown bound.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)