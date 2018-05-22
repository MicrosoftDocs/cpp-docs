---
title: "is_final Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
topic_type: 
  - "apiref"
f1_keywords: 
  - "is_final"
  - "std.is_final"
  - "std::is_final"
  - "type_traits/std::is_final"
dev_langs: 
  - "C++"
  - "c++"
helpviewer_keywords: 
  - "is_final"
ms.assetid: 9dbad82f-6685-4909-94e8-98e4a93994b9
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_final Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_final Class](https://docs.microsoft.com/cpp/standard-library/is-final-class).  
  
Tests whether the type is a class type marked `final`.  
  
## Syntax  
  
```
template <class T>
struct is_final;
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a class type marked `final`, otherwise it holds false. If `T` is a class type, it must be a complete type.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [final Specifier](../cpp/final-specifier.md)







