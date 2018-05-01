---
title: "map::key_type (STL-CLR) | Microsoft Docs"
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
  - "cliext::map::key_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "key_type member [STL/CLR]"
ms.assetid: 5bcf92e4-d9ff-48a2-86da-e24842ccf80c
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# map::key_type (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [map::key_type (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/map-key-type-stl-clr).  
  
  
The type of an ordering key.  
  
## Syntax  
  
```  
typedef Key key_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Key`.  
  
## Example  
  
```  
// cliext_map_key_type.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" using key_type   
    for (Mymap::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in key_type object   
        Mymap::key_type val = it->first;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::key_compare (STL/CLR)](../dotnet/map-key-compare-stl-clr.md)   
 [map::mapped_type (STL/CLR)](../dotnet/map-mapped-type-stl-clr.md)   
 [map::value_type (STL/CLR)](../dotnet/map-value-type-stl-clr.md)

