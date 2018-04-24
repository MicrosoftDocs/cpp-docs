---
title: "is_nothrow_move_constructible Class | Microsoft Docs"
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
  - "is_nothrow_move_constructible"
  - "std.is_nothrow_move_constructible"
  - "std::is_nothrow_move_constructible"
  - "type_traits/std::is_nothrow_move_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_move_constructible"
ms.assetid: d186d97b-7b89-470a-8d30-993046a83379
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_nothrow_move_constructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_nothrow_move_constructible Class](https://docs.microsoft.com/cpp/standard-library/is-nothrow-move-constructible-class).  
  
Tests whether type has a **nothrow** move constructor.  
  
## Syntax  
  
```
template <class Ty>
struct is_nothrow_move_constructible;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` has a nothrow move constructor, otherwise it holds false.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)








