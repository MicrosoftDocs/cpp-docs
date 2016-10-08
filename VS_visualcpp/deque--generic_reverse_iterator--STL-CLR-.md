---
title: "deque::generic_reverse_iterator (STL-CLR)"
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
H1: deque::generic_reverse_iterator (STL/CLR)
ms.assetid: e2a837bc-24be-4a99-a0ee-9dc73be97955
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
# deque::generic_reverse_iterator (STL-CLR)
The type of a reverse iterator for use with the generic interface for the container.  
  
## Syntax  
  
```  
typedef Microsoft::VisualC::StlClr::Generic::  
    ReverseRandomAccessIterator<generic_value> generic_reverse_iterator;  
```  
  
## Remarks  
 The type describes a generic reverse iterator that can be used with the generic interface for this template container class.  
  
## Example  
  
```  
// cliext_deque_generic_reverse_iterator.cpp   
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
  
// construct a generic container   
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    cliext::deque<wchar_t>::generic_reverse_iterator gcit = gc1->rbegin();   
    cliext::deque<wchar_t>::generic_value gcval = *gcit;   
    *++gcit = gcval;   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b c**  
 **a c c**   
## Requirements  
 **Header:** <cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)   
 [deque::generic_container (STL/CLR)](../VS_visualcpp/deque--generic_container--STL-CLR-.md)   
 [deque::generic_value (STL/CLR)](../VS_visualcpp/deque--generic_value--STL-CLR-.md)