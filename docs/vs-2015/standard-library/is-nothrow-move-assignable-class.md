---
title: "is_nothrow_move_assignable Class | Microsoft Docs"
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
  - "is_nothrow_move_assignable"
  - "std.is_nothrow_move_assignable"
  - "std::is_nothrow_move_assignable"
  - "type_traits/std::is_nothrow_move_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_move_assignable"
ms.assetid: 000baa02-cbba-49de-9870-af730033348e
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_nothrow_move_assignable Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_nothrow_move_assignable Class](https://docs.microsoft.com/cpp/standard-library/is-nothrow-move-assignable-class).  
  
Tests whether type has a **nothrow** move assignment operator.  
  
## Syntax  
  
```
template <class Ty>
struct is_nothrow_move_assignable;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` has a nothrow move assignment operator, otherwise it holds false.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)








