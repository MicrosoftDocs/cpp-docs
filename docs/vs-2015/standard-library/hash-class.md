---
title: "hash Class | Microsoft Docs"
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
  - "std.hash"
  - "xfunctional/std::hash"
  - "hash"
  - "typeindex/std::hash"
  - "std::hash"
  - "std.tr1.hash"
  - "std::tr1::hash"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash class"
  - "hash class [TR1]"
ms.assetid: e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# hash Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [hash Class](https://docs.microsoft.com/cpp/standard-library/hash-class).  
  
Computes hash code for a value.  
  
## Syntax  
  
```  
template <class Ty>  
struct hash  
 : public unary_function<Ty, size_t> {  
    size_t operator()(Ty val) const;

 
 };  
```  
  
## Remarks  
 The member function defines a hash function, suitable for mapping values of type `Ty` to a distribution of index values. The member operator returns a hash code for ` val`, suitable for use with template classes `unordered_map`, `unordered_multimap`, `unordered_set`, and `unordered_multiset`. `Ty` may be any scalar type, `string`, `wstring`, `error_code`, `error_condition`, `u16string`, or `u32string`.  
  
## Example  
  
```  
// std_tr1__functional__hash.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
#include <unordered_set>   
  
int main()   
    {   
    std::unordered_set<int, std::hash<int> > c0;   
    c0.insert(3);   
    std::cout << *c0.find(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
3  
```  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
## See Also  
 [<unordered_map>](../standard-library/unordered-map.md)   
 [unordered_multimap Class](../standard-library/unordered-multimap-class.md)   
 [unordered_multiset Class](../standard-library/unordered-multiset-class.md)   
 [<unordered_set>](../standard-library/unordered-set.md)





