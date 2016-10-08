---
title: "multiset::empty (STL-CLR)"
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
H1: multiset::empty (STL/CLR)
ms.assetid: 59ec9cc4-cc72-4082-9ab2-49b49980e681
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
# multiset::empty (STL-CLR)
Tests whether no elements are present.  
  
## Syntax  
  
```  
bool empty();  
```  
  
## Remarks  
 The member function returns true for an empty controlled sequence. It is equivalent to [multiset::size (STL/CLR)](../VS_visualcpp/multiset--size--STL-CLR-.md)`() == 0`. You use it to test whether the multiset is empty.  
  
## Example  
  
```  
// cliext_multiset_empty.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
  
// clear the container and reinspect   
    c1.clear();   
    System::Console::WriteLine("size() = {0}", c1.size());   
    System::Console::WriteLine("empty() = {0}", c1.empty());   
    return (0);   
    }  
  
```  
  
  **a b c**  
**size() = 3**  
**empty() = False**  
**size() = 0**  
**empty() = True**   
## Requirements  
 **Header:** <cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [multiset (STL/CLR)](../VS_visualcpp/multiset--STL-CLR-.md)   
 [multiset::size (STL/CLR)](../VS_visualcpp/multiset--size--STL-CLR-.md)