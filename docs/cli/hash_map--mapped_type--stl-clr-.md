---
title: "hash_map::mapped_type (STL-CLR)"
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
  - "cliext::hash_map::mapped_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mapped_type member [STL/CLR]"
ms.assetid: 00c8738f-7dd9-418d-9566-a2e05fd7e7f6
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
# hash_map::mapped_type (STL/CLR)
The type of a mapped value associated with each key.  
  
## Syntax  
  
```  
typedef Mapped mapped_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Mapped`.  
  
## Example  
  
```  
// cliext_hash_map_mapped_type.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
    Myhash_map c1;   
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" using mapped_type   
    for (Myhash_map::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in mapped_type object   
        Myhash_map::mapped_type val = it->second;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **1 2 3**   
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../cli/hash_map--stl-clr-.md)   
 [hash_map::key_compare (STL/CLR)](../cli/hash_map--key_compare--stl-clr-.md)   
 [hash_map::value_type (STL/CLR)](../cli/hash_map--value_type--stl-clr-.md)