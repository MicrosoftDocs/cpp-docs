---
title: "is_move_constructible Class"
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
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
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
# is_move_constructible Class
Tests whether the type has a move constructor.  
  
## Syntax  
  
```  
template <class T>  
    struct is_move_constructible;  
```  
  
#### Parameters  
 T  
 The type to be evaluated  
  
## Remarks  
 A type predicate that evaluates to true if the type `T` can be constructed by using a move operation. This predicate is equivalent to `is_constructible<T, T&&>`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)