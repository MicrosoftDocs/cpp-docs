---
title: "is_trivially_copyable Class"
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
ms.assetid: 89a53bf8-036c-4108-91e1-fe34adbde8b3
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
# is_trivially_copyable Class
Tests whether the type is a trivially copyable type.  
  
## Syntax  
  
```  
template<class T>  
    struct is_trivially_copyable;  
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a trivially copyable type, otherwise it holds false. Trivially copyable types have no non-trivial copy operations, move operations, or destructors. Generally, a copy operation is considered trivial if it can be implemented as a bitwise copy. Both built-in types and arrays of trivially copyable types are trivially copyable.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)