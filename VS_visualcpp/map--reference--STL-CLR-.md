---
title: "map::reference (STL-CLR)"
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
H1: map::reference (STL/CLR)
ms.assetid: 7bbfeb61-f12a-42d1-b5ae-7b6421c1d33c
caps.latest.revision: 12
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# map::reference (STL-CLR)
The type of a reference to an element.  
  
## Syntax  
  
```  
typedef value_type% reference;  
```  
  
## Remarks  
 The type describes a reference to an element.  
  
## Example  
  
```  
// cliext_map_reference.cpp   
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
    Mymap::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        {   // get a reference to an element   
        Mymap::reference ref = *it;   
        System::Console::Write(" [{0} {1}]", ref->first, ref->second);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **[a 1] [b 2] [c 3]**   
## Requirements  
 **Header:** <cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)   
 [map::const_reference (STL/CLR)](../VS_visualcpp/map--const_reference--STL-CLR-.md)   
 [map::value_type (STL/CLR)](../VS_visualcpp/map--value_type--STL-CLR-.md)