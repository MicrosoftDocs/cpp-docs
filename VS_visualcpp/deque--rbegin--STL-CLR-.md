---
title: "deque::rbegin (STL-CLR)"
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
H1: deque::rbegin (STL/CLR)
ms.assetid: 5d399c1d-bd7e-4b2e-bde0-11a000e29679
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
# deque::rbegin (STL-CLR)
Designates the beginning of the reversed controlled sequence.  
  
## Syntax  
  
```  
reverse_iterator rbegin();  
```  
  
## Remarks  
 The member function returns a reverse iterator that designates the last element of the controlled sequence, or just beyond the beginning of an empty sequence. Hence, it designates the `beginning` of the reverse sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence seen in reverse order, but its status can change if the length of the controlled sequence changes.  
  
## Example  
  
```  
// cliext_deque_rbegin.cpp   
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
  
// inspect first two items in reversed sequence   
    cliext::deque<wchar_t>::reverse_iterator rit = c1.rbegin();   
    System::Console::WriteLine("*rbegin() = {0}", *rit);   
    System::Console::WriteLine("*++rbegin() = {0}", *++rit);   
  
// alter first two items and reinspect   
    *--rit = L'x';   
    *++rit = L'y';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**\*rbegin() = c**  
**\*++rbegin() = b**  
 **a y x**   
## Requirements  
 **Header:** <cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [deque::begin (STL/CLR)](../VS_visualcpp/deque--begin--STL-CLR-.md)   
 [deque::end (STL/CLR)](../VS_visualcpp/deque--end--STL-CLR-.md)   
 [deque::rend (STL/CLR)](../VS_visualcpp/deque--rend--STL-CLR-.md)