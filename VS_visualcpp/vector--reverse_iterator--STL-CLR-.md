---
title: "vector::reverse_iterator (STL-CLR)"
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
H1: vector::reverse_iterator (STL/CLR)
ms.assetid: 0a90c5ee-a95f-4f71-a027-f1668000ccd4
caps.latest.revision: 12
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
# vector::reverse_iterator (STL-CLR)
The type of a reverse iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T3 reverse_iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T3` that can serve as a reverse iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_vector_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c" reversed   
    cliext::vector<wchar_t>::reverse_iterator rit = c1.rbegin();   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
  
// alter first element and redisplay   
    rit = c1.rbegin();   
    *rit = L'x';   
    for (; rit != c1.rend(); ++rit)   
        System::Console::Write(" {0}", *rit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **c b a**  
 **x b a**   
## Requirements  
 **Header:** <cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)   
 [vector::const_iterator (STL/CLR)](../VS_visualcpp/vector--const_iterator--STL-CLR-.md)   
 [vector::const_reverse_iterator (STL/CLR)](../VS_visualcpp/vector--const_reverse_iterator--STL-CLR-.md)   
 [vector::iterator (STL/CLR)](../VS_visualcpp/vector--iterator--STL-CLR-.md)