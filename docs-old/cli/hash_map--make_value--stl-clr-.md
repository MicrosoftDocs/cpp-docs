---
title: "hash_map::make_value (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_map::make_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "make_value member [STL/CLR]"
ms.assetid: 1fcdcacc-5edf-46b7-9481-9a4aef32b025
caps.latest.revision: 12
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
# hash_map::make_value (STL/CLR)
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
// cliext_hash_map_make_value.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
    Myhash_map c1;   
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **[a 1] [b 2] [c 3]**   
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../cli/hash_map--stl-clr-.md)   
 [hash_map::key_type (STL/CLR)](../cli/hash_map--key_type--stl-clr-.md)   
 [hash_map::mapped_type (STL/CLR)](../cli/hash_map--mapped_type--stl-clr-.md)   
 [hash_map::value_type (STL/CLR)](../cli/hash_map--value_type--stl-clr-.md)