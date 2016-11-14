---
title: "hash_multimap::generic_value (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::generic_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_value member [STL/CLR]"
ms.assetid: b0a6dcf0-dc38-4b31-b1f0-8ce43e6043ef
caps.latest.revision: 8
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
# hash_multimap::generic_value (STL/CLR)
The type of an element for use with the generic interface for the container.  
  
## Syntax  
  
```  
typedef GValue generic_value;  
```  
  
## Remarks  
 The type describes an object of type `GValue` that describes the stored element value for use with the generic interface for this template container class.  
  
## Example  
  
```  
// cliext_hash_multimap_generic_value.cpp   
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
  
// construct a generic container   
    Myhash_multimap::generic_container^ gc1 = %c1;   
    for each (Myhash_multimap::value_type elem in gc1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// get an element and display it   
    Myhash_multimap::generic_iterator gcit = gc1->begin();   
    Myhash_multimap::generic_value gcval = *gcit;   
    System::Console::WriteLine(" [{0} {1}]", gcval->first, gcval->second);   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
[a 1] [b 2] [c 3]  
[a 1]  
```  
  
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)   
 [hash_multimap::generic_container (STL/CLR)](../dotnet/hash-multimap-generic-container-stl-clr.md)   
 [hash_multimap::generic_iterator (STL/CLR)](../dotnet/hash-multimap-generic-iterator-stl-clr.md)   
 [hash_multimap::generic_reverse_iterator (STL/CLR)](../dotnet/hash-multimap-generic-reverse-iterator-stl-clr.md)