---
title: "hash_multimap::make_value (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::make_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_value member [STL/CLR]"
ms.assetid: 300fb6ec-98c8-48d5-8626-0646878a8462
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# hash_multimap::make_value (STL/CLR)
Constructs a value object.  
  
## Syntax  
  
```  
static value_type make_value(key_type key, mapped_type mapped);  
```  
  
#### Parameters  
 key  
 Key value to use.  
  
 mapped  
 Mapped value to search for.  
  
## Remarks  
 The member function returns a `value_type` object whose key is `key` and whose mapped value is `mapped`. You use it to compose an object suitable for use with several other member functions.  
  
## Example  
  
```  
// cliext_hash_multimap_make_value.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
int main()   
    {   
    Myhash_multimap c1;   
    c1.insert(Myhash_multimap::make_value(L'a', 1));   
    c1.insert(Myhash_multimap::make_value(L'b', 2));   
    c1.insert(Myhash_multimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_multimap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
```  
  
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)   
 [hash_multimap::key_type (STL/CLR)](../dotnet/hash-multimap-key-type-stl-clr.md)   
 [hash_multimap::mapped_type (STL/CLR)](../dotnet/hash-multimap-mapped-type-stl-clr.md)   
 [hash_multimap::value_type (STL/CLR)](../dotnet/hash-multimap-value-type-stl-clr.md)