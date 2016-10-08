---
title: "is_trivially_default_constructible Class"
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
ms.assetid: 653ecd73-909f-4dd8-b95a-d1164d1c2da4
caps.latest.revision: 15
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
# is_trivially_default_constructible Class
Tests if type has trivial default constructor.  
  
## Syntax  
  
```  
template<class Ty>  
    struct  is_trivially_default_constructible;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has a trivial constructor, otherwise it holds false.  
  
 A default constructor for a class `Ty` is trivial if:  
  
-   it is an implicitly declared default constructor  
  
-   the class `Ty` has no virtual functions  
  
-   the class `Ty` has no virtual bases  
  
-   all the direct bases of the class `Ty` have trivial constructors  
  
-   the classes of all the non-static data members of class type have trivial constructors  
  
-   the classes of all the non-static data members of type array of class have trivial constructors  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)