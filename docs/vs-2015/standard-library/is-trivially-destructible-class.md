---
title: "is_trivially_destructible Class | Microsoft Docs"
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
  - "is_trivially_destructible"
  - "std.is_trivially_destructible"
  - "std::is_trivially_destructible"
  - "type_traits/std::is_trivially_destructible"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_trivially_destructible"
ms.assetid: 3f7a787d-2448-40c5-ac51-a228318e02ce
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_trivially_destructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_trivially_destructible Class](https://docs.microsoft.com/cpp/standard-library/is-trivially-destructible-class).  
  
Tests whether the type is trivially destructible.  
  
## Syntax  
  
```
template <class T>  
struct is_trivially_destructible;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a destructible type, and the destructor is known to the compiler to use no non-trivial operations. Otherwise, it holds false.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







