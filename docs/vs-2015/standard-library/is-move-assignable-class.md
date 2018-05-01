---
title: "is_move_assignable Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_move_assignable"
  - "std.is_move_assignable"
  - "std::is_move_assignable"
  - "type_traits/std::is_move_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_move_assignable"
ms.assetid: f33137f2-0639-4912-8745-bc0f9fd18d28
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_move_assignable Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_move_assignable Class](https://docs.microsoft.com/cpp/standard-library/is-move-assignable-class).  
  
Tests if the type can be move assigned.  
  
## Syntax  
  
```
template <class T>
struct is_move_assignable;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 A type is move assignable if an rvalue reference to the type can be assigned to a reference to the type. The type predicate is equivalent to `is_assignable<T&, T&&>`. Move assignable types include referenceable scalar types and class types that have either compiler-generated or user-defined move assignment operators.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







