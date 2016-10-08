---
title: "vector::begin (STL-CLR)"
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
H1: vector::begin (STL/CLR)
ms.assetid: f9cdf854-0770-4334-a3dd-7f4d728a42bd
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
# vector::begin (STL-CLR)
Designates the beginning of the controlled sequence.  
  
## Syntax  
  
```  
iterator begin();  
```  
  
## Remarks  
 The member function returns a random-access iterator that designates the first element of the controlled sequence, or just beyond the end of an empty sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence, but its status can change if the length of the controlled sequence changes.  
  
## Example  
  
```  
// cliext_vector_begin.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    cliext::vector<wchar_t>::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = {0}", *it);   
    System::Console::WriteLine("*++begin() = {0}", *++it);   
  
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
**\*begin() = a**  
**\*++begin() = b**  
 **x y c**   
## Requirements  
 **Header:** <cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [vector::end (STL/CLR)](../VS_visualcpp/vector--end--STL-CLR-.md)   
 [vector::front (STL/CLR)](../VS_visualcpp/vector--front--STL-CLR-.md)   
 [vector::front_item (STL/CLR)](../VS_visualcpp/vector--front_item--STL-CLR-.md)