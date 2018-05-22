---
title: "is_nothrow_default_constructible Class | Microsoft Docs"
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
  - "is_nothrow_default_constructible"
  - "std.is_nothrow_default_constructible"
  - "std::is_nothrow_default_constructible"
  - "type_traits/std::is_nothrow_default_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_nothrow_default_constructible"
ms.assetid: c576fcc9-5be1-43aa-b93a-64d3f1848887
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_nothrow_default_constructible Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_nothrow_default_constructible Class](https://docs.microsoft.com/cpp/standard-library/is-nothrow-default-constructible-class).  
  
Tests whether type has a non-throwing default constructor.  
  
## Syntax  
  
```
template <class Ty>
struct is_nothrow_default_constructible;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` has a nothrow default constructor, otherwise it holds false. An instance of the type predicate is equivalent to `is_nothrow_constructible<Ty>`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







