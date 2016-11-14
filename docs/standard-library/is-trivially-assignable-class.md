---
title: "is_trivially_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "is_trivially_assignable"
  - "std.is_trivially_assignable"
  - "std::is_trivially_assignable"
  - "type_traits/std::is_trivially_assignable"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_trivially_assignable"
ms.assetid: 1284a8f7-4093-426d-9c9a-dabb46f90d6d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
 [<type_traits>](../standard-library/type-traits.md)



