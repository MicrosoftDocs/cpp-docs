---
title: "hash Structure | Microsoft Docs"
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
  - "typeindex/std::hash"
dev_langs: 
  - "C++"
ms.assetid: e5a41202-ef3b-45d0-b3a7-4c2dbdc0487a
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# hash Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [hash Structure](https://docs.microsoft.com/cpp/standard-library/hash-structure).  
  
The template class defines its method as returning `val.hash_code()`. The method defines a hash function that is used to map values of type [type_index](../standard-library/type-index-class.md) to a distribution of index values.  
  
## Syntax  
  
```
template <>
struct hash<type_index>  
: public unary_function<type_index, size_t>
 { // hashes a typeinfo object
    size_t operator()(type_index val) const;

 };
```  
  
## See Also  
 [\<typeindex>](../standard-library/typeindex.md)







