---
title: "hash_multimap::const_reverse_iterator (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_multimap::const_reverse_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_reverse_iterator member [STL/CLR]"
ms.assetid: 060a2bba-6d63-48ce-a8f7-deb061dfd489
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# hash_multimap::const_reverse_iterator (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [hash_multimap::const_reverse_iterator (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/hash-multimap-const-reverse-iterator-stl-clr).  
  
  
The type of a constant reverse iterator for the controlled sequence..  
  
## Syntax  
  
```  
typedef T4 const_reverse_iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T4` that can serve as a constant reverse iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_hash_multimap_const_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
typedef cliext::hash_multimap<wchar_t, int> Myhash_multimap;   
int main()   
    {   
    Myhash_multimap c1;   
    c1.insert(Myhash_multimap::make_value(L'a', 1));   
    c1.insert(Myhash_multimap::make_value(L'b', 2));   
    c1.insert(Myhash_multimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" reversed   
    Myhash_multimap::const_reverse_iterator crit = c1.rbegin();   
    for (; crit != c1.rend(); ++crit)   
        System::Console::Write(" [{0} {1}]", crit->first, crit->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[c 3] [b 2] [a 1]  
```  
  
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)   
 [hash_multimap::reverse_iterator (STL/CLR)](../dotnet/hash-multimap-reverse-iterator-stl-clr.md)

