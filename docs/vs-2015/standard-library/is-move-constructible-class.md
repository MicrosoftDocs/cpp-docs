---
title: "is_move_constructible Class | Microsoft Docs"
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
  - "is_move_constructible"
  - "std.is_move_constructible"
  - "std::is_move_constructible"
  - "type_traits/std::is_move_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_move_constructible"
ms.assetid: becdf076-7419-488d-a335-78adf2478b9b
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_move_constructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_move_constructible Class](https://docs.microsoft.com/cpp/standard-library/is-move-constructible-class).  
  
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
 [<type_traits>](../standard-library/type-traits.md)







