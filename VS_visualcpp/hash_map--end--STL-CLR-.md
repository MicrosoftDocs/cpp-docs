---
title: "hash_map::end (STL-CLR)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: hash_map::end (STL/CLR)
ms.assetid: bda12a48-cc2b-426f-a4e8-992c88f61736
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# hash_map::end (STL-CLR)
Designates the end of the controlled sequence.  
  
## Syntax  
  
```  
iterator end();  
```  
  
## Remarks  
 The member function returns a bidirectional iterator that points just beyond the end of the controlled sequence. You use it to obtain an iterator that designates the end of the controlled sequence; its status doesn not change if the length of the controlled sequence changes.  
  
## Example  
  
```  
// cliext_hash_map_end.cpp   
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
  
// inspect last two items   
    Myhash_map::iterator it = c1.end();   
    --it;   
    --it;   
    System::Console::WriteLine("*-- --end() = [{0} {1}]",   
        it->first, it->second);   
    ++it;   
    System::Console::WriteLine("*--end() = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
  **[a 1] [b 2] [c 3]**  
**\*-- --end() = [b 2]**  
**\*--end() = [c 3]**   
## Requirements  
 **Header:** <cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../VS_visualcpp/hash_map--STL-CLR-.md)   
 [hash_map::begin (STL/CLR)](../VS_visualcpp/hash_map--begin--STL-CLR-.md)