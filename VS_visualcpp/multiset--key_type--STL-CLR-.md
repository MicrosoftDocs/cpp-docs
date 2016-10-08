---
title: "multiset::key_type (STL-CLR)"
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
H1: multiset::key_type (STL/CLR)
ms.assetid: 8b243eb3-889b-405c-a2bd-2c2c5dfaafcd
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
# multiset::key_type (STL-CLR)
The type of an ordering key.  
  
## Syntax  
  
```  
typedef Key key_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Key`.  
  
## Example  
  
```  
// cliext_multiset_key_type.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" using key_type   
    for (Mymultiset::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in key_type object   
        Mymultiset::key_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requirements  
 **Header:** <cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [multiset (STL/CLR)](../VS_visualcpp/multiset--STL-CLR-.md)   
 [multiset::key_compare (STL/CLR)](../VS_visualcpp/multiset--key_compare--STL-CLR-.md)   
 [multiset::value_type (STL/CLR)](../VS_visualcpp/multiset--value_type--STL-CLR-.md)