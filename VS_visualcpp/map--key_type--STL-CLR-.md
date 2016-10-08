---
title: "map::key_type (STL-CLR)"
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
H1: map::key_type (STL/CLR)
ms.assetid: 5bcf92e4-d9ff-48a2-86da-e24842ccf80c
caps.latest.revision: 11
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
# map::key_type (STL-CLR)
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
  
  **a b c**   
## Requirements  
 **Header:** <cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)   
 [map::key_compare (STL/CLR)](../VS_visualcpp/map--key_compare--STL-CLR-.md)   
 [map::mapped_type (STL/CLR)](../VS_visualcpp/map--mapped_type--STL-CLR-.md)   
 [map::value_type (STL/CLR)](../VS_visualcpp/map--value_type--STL-CLR-.md)