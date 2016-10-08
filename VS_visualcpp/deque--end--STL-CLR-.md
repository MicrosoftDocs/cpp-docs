---
title: "deque::end (STL-CLR)"
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
H1: deque::end (STL/CLR)
ms.assetid: 3de3e816-3334-4b39-97ad-6f8771e9b4e9
caps.latest.revision: 12
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
# deque::end (STL-CLR)
Designates the end of the controlled sequence.  
  
## Syntax  
  
```  
iterator end();  
```  
  
## Remarks  
 The member function returns a random-access iterator that points just beyond the end of the controlled sequence. You use it to obtain an iterator that designates the `current` end of the controlled sequence, but its status can change if the length of the controlled sequence changes.  
  
## Example  
  
```  
// cliext_deque_end.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last two items   
    cliext::deque<wchar_t>::iterator it = c1.end();   
    --it;   
    System::Console::WriteLine("*-- --end() = {0}", *--it);   
    System::Console::WriteLine("*--end() = {0}", *++it);   
  
// alter first two items and reinspect   
    *--it = L'x';   
    *++it = L'y';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**\*-- --end() = b**  
**\*--end() = c**  
 **a x y**   
## Requirements  
 **Header:** <cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [deque::back (STL/CLR)](../VS_visualcpp/deque--back--STL-CLR-.md)   
 [deque::back_item (STL/CLR)](../VS_visualcpp/deque--back_item--STL-CLR-.md)   
 [deque::begin (STL/CLR)](../VS_visualcpp/deque--begin--STL-CLR-.md)