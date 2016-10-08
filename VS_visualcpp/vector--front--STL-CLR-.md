---
title: "vector::front (STL-CLR)"
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
H1: vector::front (STL/CLR)
ms.assetid: 37a36157-8220-4d5b-85b5-c6a63211a322
caps.latest.revision: 16
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
# vector::front (STL-CLR)
Accesses the first element.  
  
## Syntax  
  
```  
reference front();  
```  
  
## Remarks  
 The member function returns a reference to the first element of the controlled sequence, which must be non-empty. You use it to read or write the first element, when you know it exists.  
  
## Example  
  
```  
// cliext_vector_front.cpp   
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
  
// inspect first item   
    System::Console::WriteLine("front() = {0}", c1.front());   
  
// alter first item and reinspect   
    c1.front() = L'x';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**front() = a**  
 **x b c**   
## Requirements  
 **Header:** <cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [vector::back (STL/CLR)](../VS_visualcpp/vector--back--STL-CLR-.md)   
 [vector::back_item (STL/CLR)](../VS_visualcpp/vector--back_item--STL-CLR-.md)   
 [vector::front_item (STL/CLR)](../VS_visualcpp/vector--front_item--STL-CLR-.md)