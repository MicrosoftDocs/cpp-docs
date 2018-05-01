---
title: "is_rvalue_reference Class | Microsoft Docs"
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
  - "std.tr1.is_rvalue_reference"
  - "is_rvalue_reference"
  - "std::tr1::is_rvalue_reference"
  - "std.is_rvalue_reference"
  - "std::is_rvalue_reference"
  - "type_traits/std::is_rvalue_reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_rvalue_reference class[TR1]"
  - "is_rvalue_reference"
ms.assetid: 40a97072-7b5c-4274-9154-298d3dcf064a
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_rvalue_reference Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_rvalue_reference Class](https://docs.microsoft.com/cpp/standard-library/is-rvalue-reference-class).  
  
Tests if type is an rvalue reference.  
  
## Syntax  
  
```
template <class Ty>
struct is_rvalue_reference;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of this type predicate holds true if the type `Ty` is an [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md) reference.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)







