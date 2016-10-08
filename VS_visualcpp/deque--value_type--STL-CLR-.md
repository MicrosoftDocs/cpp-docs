---
title: "deque::value_type (STL-CLR)"
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
H1: deque::value_type (STL/CLR)
ms.assetid: c48528c2-966c-4396-be3c-3b9054689dde
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
# deque::value_type (STL-CLR)
The type of an element.  
  
## Syntax  
  
```  
typedef Value value_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Value`.  
  
## Example  
  
```  
// cliext_deque_value_type.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" using value_type   
    for (cliext::deque<wchar_t>::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   // store element in value_type object   
        cliext::deque<wchar_t>::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requirements  
 **Header:** <cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [deque::const_reference (STL/CLR)](../VS_visualcpp/deque--const_reference--STL-CLR-.md)   
 [deque::reference (STL/CLR)](../VS_visualcpp/deque--reference--STL-CLR-.md)