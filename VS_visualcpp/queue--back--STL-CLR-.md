---
title: "queue::back (STL-CLR)"
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
H1: queue::back (STL/CLR)
ms.assetid: 983a5c0f-0a2f-475f-932b-e7dec9eaffbb
caps.latest.revision: 15
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
# queue::back (STL-CLR)
Accesses the last element.  
  
## Syntax  
  
```  
reference back();  
```  
  
## Remarks  
 The member function returns a reference to the last element of the controlled sequence, which must be non-empty. You use it to access the last element, when you know it exists.  
  
## Example  
  
```  
// cliext_queue_back.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("back() = {0}", c1.back());   
  
// alter last item and reinspect   
    c1.back() = L'x';   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**back() = c**  
 **a b x**   
## Requirements  
 **Header:** <cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [queue::back_item (STL/CLR)](../VS_visualcpp/queue--back_item--STL-CLR-.md)   
 [queue::front (STL/CLR)](../VS_visualcpp/queue--front--STL-CLR-.md)   
 [queue::front_item (STL/CLR)](../VS_visualcpp/queue--front_item--STL-CLR-.md)