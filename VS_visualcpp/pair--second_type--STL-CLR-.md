---
title: "pair::second_type (STL-CLR)"
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
H1: pair::second_type (STL/CLR)
ms.assetid: 555f0216-186b-4dac-babc-1499f69e5c1b
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
# pair::second_type (STL-CLR)
The type of the second wrapped value.  
  
## Syntax  
  
```  
typedef Value2 second_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Value2`.  
  
## Example  
  
```  
// cliext_pair_second_type.cpp   
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
 [pair::first_type (STL/CLR)](../VS_visualcpp/pair--first_type--STL-CLR-.md)   
 [pair::second (STL/CLR)](../VS_visualcpp/pair--second--STL-CLR-.md)