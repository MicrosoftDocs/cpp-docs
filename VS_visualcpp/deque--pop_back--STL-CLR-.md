---
title: "deque::pop_back (STL-CLR)"
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
H1: deque::pop_back (STL/CLR)
ms.assetid: 528d2c89-104c-45f7-8f05-41fe217ee37c
caps.latest.revision: 14
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
# deque::pop_back (STL-CLR)
Removes the last element.  
  
## Syntax  
  
```  
void pop_back();  
```  
  
## Remarks  
 The member function removes the last element of the controlled sequence, which must be non-empty. You use it to shorten the deque by one element at the back.  
  
## Example  
  
```  
// cliext_deque_pop_back.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// pop an element and redisplay   
    c1.pop_back();   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b**   
## Requirements  
 **Header:** <cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [deque::pop_front (STL/CLR)](../VS_visualcpp/deque--pop_front--STL-CLR-.md)   
 [deque::push_back (STL/CLR)](../VS_visualcpp/deque--push_back--STL-CLR-.md)   
 [deque::push_front (STL/CLR)](../VS_visualcpp/deque--push_front--STL-CLR-.md)