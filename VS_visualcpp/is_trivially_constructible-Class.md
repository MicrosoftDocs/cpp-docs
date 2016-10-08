---
title: "is_trivially_constructible Class"
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
ms.assetid: 3fa918c1-e66f-4d0e-a11b-be1fb2c02e7b
caps.latest.revision: 10
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
# is_trivially_constructible Class
Tests whether a type is trivially constructible when the specified argument types are used.  
  
## Syntax  
  
```  
template <class T, class... Args>  
    struct is_trivially_constructible;  
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
 `Args`  
 The argument types to match in a constructor of `T`.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is trivially constructible by using the argument types in `Args`, otherwise it holds false. Type `T` is trivially constructible if the variable definition `T t(std::declval<Args>()...);` is well-formed and is known to call no non-trivial operations. Both `T` and all the types in `Args` must be complete types, `void`, or arrays of unknown bound.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)