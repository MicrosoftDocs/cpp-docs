---
title: "is_copy_assignable Class | Microsoft Docs"
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
  - "is_copy_assignable"
  - "std.is_copy_assignable"
  - "std::is_copy_assignable"
  - "type_traits/std::is_copy_assignable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_copy_assignable"
ms.assetid: 3ae6bca1-85fb-4829-9ee9-0183b081ff50
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_copy_assignable Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_copy_assignable Class](https://docs.microsoft.com/cpp/standard-library/is-copy-assignable-class).  
  
Tests whether type has can be copied on assignment.  
  
## Syntax  
  
```
template <class Ty>
struct is_copy_assignable;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has a copy assignment operator, otherwise it holds false. Equivalent to is_assignable\<Ty&, const Ty&>.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)







