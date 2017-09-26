---
title: "hash Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["functional/std::hash", "bitset/std::hash", "memory/std::hash", "string/std::hash", "system_error/std::hash", "thread/std::hash", "typeindex/std::hash", "vector/std::hash", "XSTDDEF/std::hash", "xstring/std::hash"]
dev_langs: ["C++"]
helpviewer_keywords: ["std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]", "std::hash [C++]"]
ms.assetid: e1b500c6-a5c8-4f6f-ad33-7ec52eb8e2e4
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: ["cs-cz", "de-de", "es-es", "fr-fr", "it-it", "ja-jp", "ko-kr", "pl-pl", "pt-br", "ru-ru", "tr-tr", "zh-cn", "zh-tw"]
---
# hash Class
Computes hash code for a value.  
  
## Syntax  
  
```  
template <class Ty>  
struct hash {  
    size_t operator()(Ty val) const; 
};  
```  
  
## Remarks  
The function object defines a hash function, suitable for mapping values of type *Ty* to a distribution of index values. The member `operator()` returns a hash code for *val*, suitable for use with template classes `unordered_map`, `unordered_multimap`, `unordered_set`, and `unordered_multiset`. The standard library provides specializations for basic types: *Ty* may be any scalar type, including pointer types and enumeration types. In addition, there are specializations for the library types `string`, `wstring`, `u16string`, `u32string`, `string_view`, `wstring_view`, `u16string_view`, `u32string_view`, `bitset`, `error_code`, `error_condition`, `optional`, `shared_ptr`, `thread`, `type_index`, `unique_ptr`, `variant`, and `vector<bool>`.  
  
## Example  
  
```cpp  
// std__functional__hash.cpp   
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

