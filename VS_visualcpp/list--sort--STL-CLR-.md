---
title: "list::sort (STL-CLR)"
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
H1: list::sort (STL/CLR)
ms.assetid: f811d5f4-a19e-4194-8765-1e68097c52f0
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
# list::sort (STL-CLR)
Orders the controlled sequence.  
  
## Syntax  
  
```  
void sort();  
template<typename Pred2>  
    void sort(Pred2 pred);  
```  
  
#### Parameters  
 pred  
 Comparer for element pairs.  
  
## Remarks  
 The first member function rearranges the elements in the controlled sequence so that they are ordered by `operator<` -- elements do not decrease in value as you progress through the sequence. You use this member function to sort the sequence in increasing order.  
  
 The second member function behaves the same as the first, except that the sequence is ordered by `pred` -- `pred``(X, Y)` is false for any element `X` that follows element `Y` in the resultant sequence. You use it to sort the sequence in an order that you specify by a predicate function or delegate.  
  
 Both functions perform a stable sort -- no pair of elements in the original controlled sequence is reversed in the resulting controlled sequence.  
  
## Example  
  
```  
// cliext_list_sort.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// sort descending and redisplay   
    c1.sort(cliext::greater<wchar_t>());   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// sort ascending and redisplay   
    c1.sort();   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
 **c b a**  
 **a b c**   
## Requirements  
 **Header:** <cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)   
 [list::merge (STL/CLR)](../VS_visualcpp/list--merge--STL-CLR-.md)   
 [list::reverse (STL/CLR)](../VS_visualcpp/list--reverse--STL-CLR-.md)   
 [list::splice (STL/CLR)](../VS_visualcpp/list--splice--STL-CLR-.md)   
 [list::unique (STL/CLR)](../VS_visualcpp/list--unique--STL-CLR-.md)