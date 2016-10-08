---
title: "pair::first_type (STL-CLR)"
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
H1: pair::first_type (STL/CLR)
ms.assetid: 8a7792ee-a2f6-4e17-9d0b-9c78007202d9
caps.latest.revision: 7
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
# pair::first_type (STL-CLR)
The type of the first wrapped value.  
  
## Syntax  
  
```  
typedef Value1 first_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Value1`.  
  
## Example  
  
```  
// cliext_pair_first_type.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    cliext::pair<wchar_t, int>::first_type first_val = c1.first;   
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;   
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);   
    return (0);   
    }  
  
```  
  
 **[x, 3]**   
## Requirements  
 **Header:** <cliext/utility>  
  
 **Namespace:** cliext  
  
## See Also  
 [pair (STL/CLR)](../VS_visualcpp/pair--STL-CLR-.md)   
 [pair::first (STL/CLR)](../VS_visualcpp/pair--first--STL-CLR-.md)   
 [pair::second (STL/CLR)](../VS_visualcpp/pair--second--STL-CLR-.md)   
 [pair::second_type (STL/CLR)](../VS_visualcpp/pair--second_type--STL-CLR-.md)