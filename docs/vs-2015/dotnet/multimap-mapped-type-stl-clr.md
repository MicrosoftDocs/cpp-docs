---
title: "multimap::mapped_type (STL-CLR) | Microsoft Docs"
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
  - "cliext::multimap::mapped_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mapped_type member [STL/CLR]"
ms.assetid: 0b59c9a9-7f6a-4c3d-bdc6-0b90c28eff34
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# multimap::mapped_type (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [multimap::mapped_type (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/multimap-mapped-type-stl-clr).  
  
  
The type of a mapped value associated with each key.  
  
## Syntax  
  
```  
typedef Mapped mapped_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Mapped`.  
  
## Example  
  
```  
// cliext_multimap_mapped_type.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" using mapped_type   
    for (Mymultimap::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in mapped_type object   
        Mymultimap::mapped_type val = it->second;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
1 2 3  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap::key_compare (STL/CLR)](../dotnet/multimap-key-compare-stl-clr.md)   
 [multimap::value_type (STL/CLR)](../dotnet/multimap-value-type-stl-clr.md)

