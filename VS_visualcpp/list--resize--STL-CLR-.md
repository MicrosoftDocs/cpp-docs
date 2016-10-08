---
title: "list::resize (STL-CLR)"
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
H1: list::resize (STL/CLR)
ms.assetid: c4b8d41f-a62b-4dbc-8568-0e0a9da24016
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# list::resize (STL-CLR)
Changes the number of elements.  
  
## Syntax  
  
```  
void resize(size_type new_size);  
void resize(size_type new_size, value_type val);  
```  
  
#### Parameters  
 new_size  
 New size of the controlled sequence.  
  
 val  
 Value of the padding element.  
  
## Remarks  
 The member functions both ensure that [list::size (STL/CLR)](../VS_visualcpp/list--size--STL-CLR-.md)`()` henceforth returns `new_size`. If it must make the controlled sequence longer, the first member function appends elements with value `value_type()`, while the second member function appends elements with value `val`. To make the controlled sequence shorter, both member functions effectively erase the last element [list::size (STL/CLR)](../VS_visualcpp/list--size--STL-CLR-.md)`() -` `new_size` times. You use it to ensure that the controlled sequence has size `new_size`, by either trimming or padding the current controlled sequence.  
  
## Example  
  
```  
// cliext_list_resize.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
// construct an empty container and pad with default values   
    cliext::list<wchar_t> c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
    c1.resize(4);   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", (int)elem);   
    System::Console::WriteLine();   
  
// resize to empty   
    c1.resize(0);   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// resize and pad   
    c1.resize(5, L'x');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
 **size() = 0**  
 **0 0 0 0**  
**size() = 0**  
 **x x x x x**   
## Requirements  
 **Header:** <cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)   
 [list::clear (STL/CLR)](../VS_visualcpp/list--clear--STL-CLR-.md)   
 [list::erase (STL/CLR)](../VS_visualcpp/list--erase--STL-CLR-.md)   
 [list::insert (STL/CLR)](../VS_visualcpp/list--insert--STL-CLR-.md)