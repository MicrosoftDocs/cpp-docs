---
title: "is_trivially_copy_constructible Class"
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
ms.assetid: 4274cef5-afdd-4f2d-bc83-7562e7944ddf
caps.latest.revision: 22
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
# is_trivially_copy_constructible Class
Tests if the type has a trivial copy constructor.  
  
## Syntax  
  
```  
template<class T>  
    struct is_trivially_copy_constructible;  
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a class that has a trivial copy constructor, otherwise it holds false.  
  
 A copy constructor for a class `T` is trivial if it is implicitly declared, the class `T` has no virtual functions or virtual bases, all the direct bases of class `T` have trivial copy constructors, the classes of all the non-static data members of class type have trivial copy constructors, and the classes of all the non-static data members of type array of class have trivial copy constructors.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)