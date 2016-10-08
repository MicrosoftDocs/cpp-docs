---
title: "priority_queue::container_type (STL-CLR)"
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
H1: priority_queue::container_type (STL/CLR)
ms.assetid: 97d79791-53cb-48f9-a139-69502517569f
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
# priority_queue::container_type (STL-CLR)
The type of the underlying container.  
  
## Syntax  
  
```  
typedef Container value_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Container`.  
  
## Example  
  
```  
// cliext_priority_queue_container_type.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
int main()   
    {   
    Mypriority_queue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c" using container_type   
    Mypriority_queue::container_type wc1 = c1.get_container();   
    for each (wchar_t elem in wc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **c a b**   
## Requirements  
 **Header:** <cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)   
 [priority_queue::get_container (STL/CLR)](../VS_visualcpp/priority_queue--get_container--STL-CLR-.md)