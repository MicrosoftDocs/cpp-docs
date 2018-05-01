---
title: "map::empty (STL-CLR) | Microsoft Docs"
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
  - "cliext::map::empty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "empty member [STL/CLR]"
ms.assetid: ce41d37a-2896-48df-87ea-d3f3b3e5ab45
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# map::empty (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [map::empty (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/map-empty-stl-clr).  
  
  
Tests whether no elements are present.  
  
## Syntax  
  
```  
bool empty();  
```  
  
## Remarks  
 The member function returns true for an empty controlled sequence. It is equivalent to [map::size (STL/CLR)](../dotnet/map-size-stl-clr.md)`() == 0`. You use it to test whether the map is empty.  
  
## Example  
  
```  
// cliext_map_empty.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
    return (0);   
    }  
  
```  
  
```Output  
 [a 1] [b 2] [c 3]  
size() = 3  
empty() = False  
size() = 0  
empty() = True  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::size (STL/CLR)](../dotnet/map-size-stl-clr.md)

