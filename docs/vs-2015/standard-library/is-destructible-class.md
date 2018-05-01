---
title: "is_destructible Class | Microsoft Docs"
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
  - "is_destructible"
  - "std.is_destructible"
  - "std::is_destructible"
  - "type_traits/std::is_destructible"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_destructible"
ms.assetid: 3bb9b718-1ad5-49ae-93cc-92b93b546b4d
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_destructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_destructible Class](https://docs.microsoft.com/cpp/standard-library/is-destructible-class).  
  
Tests whether the type is destructible.  
  
## Syntax  
  
```
template <class T>  
struct is_destructible;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a destructible type, otherwise it holds false. Destructible types are reference types, object types, and types where for some type `U` equal to `remove_all_extents_t<T>` the unevaluated operand `std::declval<U&>.~U()` is well-formed. Other types, including incomplete types, `void`, and function types, are not destructible types.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







