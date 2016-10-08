---
title: "operator&lt; (queue) (STL-CLR)"
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
H1: operator&lt; (queue) (STL/CLR)
ms.assetid: 2c981e2b-9a88-4b4a-8060-9ac24d5631f5
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
# operator&lt; (queue) (STL-CLR)
Queue less than comparison.  
  
## Syntax  
  
```  
template<typename Value,  
    typename Container>  
    bool operator<(queue<Value, Container>% left,  
        queue<Value, Container>% right);  
```  
  
#### Parameters  
 left  
 Left container to compare.  
  
 right  
 Right container to compare.  
  
## Remarks  
 The operator function returns true if, for the lowest position `i` for which `!(``right``[i] <` `left``[i])` it is also true that `left``[i] <` `right``[i]`. Otherwise, it returns `left``->`[queue::size (STL/CLR)](../VS_visualcpp/queue--size--STL-CLR-.md)`() <` `right``->size()` You use it to test whether `left` is ordered before `right` when the two queues are compared element by element.  
  
## Example  
  
```  
// cliext_queue_operator_lt.cpp   
// compile with: /clr   
#include <cliext/queue>   
  
typedef cliext::queue<wchar_t> Myqueue;   
int main()   
    {   
    Myqueue c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Myqueue c2;   
    c2.push(L'a');   
    c2.push(L'b');   
    c2.push(L'd');   
  
// display contents " a b d"   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    System::Console::WriteLine("[a b c] < [a b c] is {0}",   
        c1 < c1);   
    System::Console::WriteLine("[a b c] < [a b d] is {0}",   
        c1 < c2);   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **a b d**  
**[a b c] < [a b c] is False**  
**[a b c] < [a b d] is True**   
## Requirements  
 **Header:** <cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)   
 [operator== (queue) (STL/CLR)](../VS_visualcpp/operator==--queue---STL-CLR-.md)   
 [operator!= (queue) (STL/CLR)](../VS_visualcpp/operator!=--queue---STL-CLR-.md)   
 [operator>= (queue) (STL/CLR)](../VS_visualcpp/operator-=--queue---STL-CLR-.md)   
 [operator> (queue) (STL/CLR)](../VS_visualcpp/operator---queue---STL-CLR-.md)   
 [operator<= (queue) (STL/CLR)](../VS_visualcpp/operator-=--queue---STL-CLR-.md)