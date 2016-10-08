---
title: "is_nothrow_default_constructible Class"
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
ms.assetid: c576fcc9-5be1-43aa-b93a-64d3f1848887
caps.latest.revision: 19
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
# is_nothrow_default_constructible Class
Tests whether type has a non-throwing default constructor.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_nothrow_default_constructible;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` has a nothrow default constructor, otherwise it holds false. An instance of the type predicate is equivalent to `is_nothrow_constructible<Ty>`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)