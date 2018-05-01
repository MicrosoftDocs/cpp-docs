---
title: "is_null_pointer Class | Microsoft Docs"
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
  - "is_null_pointer"
  - "std.is_null_pointer"
  - "std::is_null_pointer"
  - "type_traits/std::is_null_pointer"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_null_pointer"
ms.assetid: f3b3601b-f162-4803-a6e9-dabf5c3876cc
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_null_pointer Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_null_pointer Class](https://docs.microsoft.com/cpp/standard-library/is-null-pointer-class).  
  
Tests if type is std::nullptr_t.  
  
## Syntax  
  
```
template <class T>
struct is_null_pointer;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is `std::nullptr_t`, otherwise it holds false.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







