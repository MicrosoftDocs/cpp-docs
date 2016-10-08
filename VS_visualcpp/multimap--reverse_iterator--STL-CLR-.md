---
title: "multimap::reverse_iterator (STL-CLR)"
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
H1: multimap::reverse_iterator (STL/CLR)
ms.assetid: 45ef2b07-8f5d-478c-8dcb-35bd07d3743a
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
# multimap::reverse_iterator (STL-CLR)
The type of a reverse iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T3 reverse_iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T3` that can serve as a reverse iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_multimap_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" reversed   
    Mymultimap::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" [{0} {1}]", rit->first, rit->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **[c 3] [b 2] [a 1]**   
## Requirements  
 **Header:** <cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [multimap (STL/CLR)](../VS_visualcpp/multimap--STL-CLR-.md)   
 [multimap::const_iterator (STL/CLR)](../VS_visualcpp/multimap--const_iterator--STL-CLR-.md)   
 [multimap::const_reverse_iterator (STL/CLR)](../VS_visualcpp/multimap--const_reverse_iterator--STL-CLR-.md)   
 [multimap::iterator (STL/CLR)](../VS_visualcpp/multimap--iterator--STL-CLR-.md)