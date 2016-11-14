---
title: "hash_multimap::equal_range (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::equal_range"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "equal_range member [STL/CLR]"
ms.assetid: 3ea11e31-d4af-4d2e-a80b-eafe12c97d0c
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
# hash_multimap::equal_range (STL/CLR)
Finds range that matches a specified key.  
  
## Syntax  
  
```  
cliext::pair<iterator, iterator> equal_range(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function returns a pair of iterators `cliext::pair<iterator, iterator>(` [hash_multimap::lower_bound (STL/CLR)](../dotnet/hash-multimap-lower-bound-stl-clr.md)`(``key``),` [hash_multimap::upper_bound (STL/CLR)](../dotnet/hash-multimap-upper-bound-stl-clr.md)`(``key``))`. You use it to determine the range of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_hash_multimap_equal_range.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
typedef Myhash_multimap::pair_iter_iter Pairii;   
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
  
// display results of failed search   
    Pairii pair1 = c1.equal_range(L'x');   
    System::Console::WriteLine("equal_range(L'x') empty = {0}",   
        pair1.first == pair1.second);   
  
// display results of successful search   
    pair1 = c1.equal_range(L'b');   
    for (; pair1.first != pair1.second; ++pair1.first)   
        System::Console::Write(" [{0} {1}]",   
            pair1.first->first, pair1.first->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
equal_range(L'x') empty = True  
 [b 2]  
```  
  
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)   
 [hash_multimap::count (STL/CLR)](../dotnet/hash-multimap-count-stl-clr.md)   
 [hash_multimap::find (STL/CLR)](../dotnet/hash-multimap-find-stl-clr.md)   
 [hash_multimap::lower_bound (STL/CLR)](../dotnet/hash-multimap-lower-bound-stl-clr.md)   
 [hash_multimap::upper_bound (STL/CLR)](../dotnet/hash-multimap-upper-bound-stl-clr.md)