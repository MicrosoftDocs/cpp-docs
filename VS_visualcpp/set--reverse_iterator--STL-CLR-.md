---
title: "set::reverse_iterator (STL-CLR)"
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
H1: set::reverse_iterator (STL/CLR)
ms.assetid: 40337a62-991c-424e-9559-a9040c07657a
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
# set::reverse_iterator (STL-CLR)
The type of a reverse iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T3 reverse_iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T3` that can serve as a reverse iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_set_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
    Myset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display contents " a b c" reversed   
    Myset::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **c b a**   
## Requirements  
 **Header:** <cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)   
 [set::const_iterator (STL/CLR)](../VS_visualcpp/set--const_iterator--STL-CLR-.md)   
 [set::const_reverse_iterator (STL/CLR)](../VS_visualcpp/set--const_reverse_iterator--STL-CLR-.md)   
 [set::iterator (STL/CLR)](../VS_visualcpp/set--iterator--STL-CLR-.md)