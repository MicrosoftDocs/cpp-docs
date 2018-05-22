---
title: "is_nothrow_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
topic_type: 
  - "apiref"
f1_keywords: 
  - "is_nothrow_constructible"
  - "std.is_nothrow_constructible"
  - "std::is_nothrow_constructible"
  - "type_traits/std::is_nothrow_constructible"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_nothrow_constructible"
ms.assetid: 8be3f927-283e-4d67-95a5-8bf5dc4e7a3d
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_nothrow_constructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_nothrow_constructible Class](https://docs.microsoft.com/cpp/standard-library/is-nothrow-constructible-class).  
  
Tests whether a type is constructible and is known not to throw when the specified argument types are used.  
  
## Syntax  
  
```
template <class T, class... Args>  
struct is_nothrow_constructible;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
 `Args`  
 The argument types to match in a constructor of `T`.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is constructible by using the argument types in `Args`, and the constructor is known by the compiler not to throw; otherwise it holds false. Type `T` is constructible if the variable definition `T t(std::declval<Args>()...);` is well-formed. Both `T` and all the types in `Args` must be complete types, `void`, or arrays of unknown bound.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







