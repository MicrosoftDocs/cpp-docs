---
title: "map::upper_bound (STL-CLR)"
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
H1: map::upper_bound (STL/CLR)
ms.assetid: d772b4a8-d0dc-439a-8b5b-3c91836d9256
caps.latest.revision: 13
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
# map::upper_bound (STL-CLR)
Finds end of range that matches a specified key.  
  
## Syntax  
  
```  
iterator upper_bound(key_type key);  
```  
  
#### Parameters  
 key  
 Key value to search for.  
  
## Remarks  
 The member function determines the last element `X` in the controlled sequence that has equivalent ordering to `key`. If no such element exists, or if `X` is the last element in the controlled sequence, it returns [map::end (STL/CLR)](../VS_visualcpp/map--end--STL-CLR-.md)`()`; otherwise it returns an iterator that designates the first element beyond `X`. You use it to locate the end of a sequence of elements currently in the controlled sequence that match a specified key.  
  
## Example  
  
```  
// cliext_map_upper_bound.cpp   
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
  
    System::Console::WriteLine("upper_bound(L'x')==end() = {0}",   
        c1.upper_bound(L'x') == c1.end());   
  
    Mymap::iterator it = c1.upper_bound(L'a');   
    System::Console::WriteLine("*upper_bound(L'a') = [{0} {1}]",   
        it->first, it->second);   
    it = c1.upper_bound(L'b');   
    System::Console::WriteLine("*upper_bound(L'b') = [{0} {1}]",   
        it->first, it->second);   
    return (0);   
    }  
  
```  
  
  **[a 1] [b 2] [c 3]**  
**upper_bound(L'x')==end() = True**  
**\*upper_bound(L'a') = [b 2]**  
**\*upper_bound(L'b') = [c 3]**   
## Requirements  
 **Header:** <cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)   
 [map::count (STL/CLR)](../VS_visualcpp/map--count--STL-CLR-.md)   
 [map::equal_range (STL/CLR)](../VS_visualcpp/map--equal_range--STL-CLR-.md)   
 [map::find (STL/CLR)](../VS_visualcpp/map--find--STL-CLR-.md)   
 [map::lower_bound (STL/CLR)](../VS_visualcpp/map--lower_bound--STL-CLR-.md)