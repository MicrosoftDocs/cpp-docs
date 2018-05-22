---
title: "is_nothrow_copy_assignable Class | Microsoft Docs"
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
  - "is_nothrow_copy_assignable"
  - "std.is_nothrow_copy_assignable"
  - "std::is_nothrow_copy_assignable"
  - "type_traits/std::is_nothrow_copy_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_copy_assignable"
ms.assetid: baa8abd6-4f53-489f-abba-8d5d5c53bbbc
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_nothrow_copy_assignable Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_nothrow_copy_assignable Class](https://docs.microsoft.com/cpp/standard-library/is-nothrow-copy-assignable-class).  
  
Tests whether type has a copy assignment operator that is known to the compiler not to throw.  
  
## Syntax  
  
```
template <class T>
struct is_nothrow_copy_assignable;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true for a referenceable type `T` where `is_nothrow_assignable<T&, const T&>` holds true; otherwise it holds false.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_nothrow_assignable Class](../standard-library/is-nothrow-assignable-class.md)   









