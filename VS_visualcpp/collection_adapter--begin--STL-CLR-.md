---
title: "collection_adapter::begin (STL-CLR)"
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
H1: collection_adapter::begin (STL/CLR)
ms.assetid: fba55a3f-c1c6-4679-8c94-54cbb468e44c
caps.latest.revision: 7
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
# collection_adapter::begin (STL-CLR)
Designates the beginning of the controlled sequence.  
  
## Syntax  
  
```  
iterator begin();  
```  
  
## Remarks  
 The member function returns an input iterator that designates the first element of the controlled sequence, or just beyond the end of an empty sequence.  
  
## Example  
  
```  
// cliext_collection_adapter_begin.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Mycoll::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = {0}", *it);   
    System::Console::WriteLine("*++begin() = {0}", *++it);   
    return (0);   
    }  
  
```  
  
  **a b c**  
**\*begin() = a**  
**\*++begin() = b**   
## Requirements  
 **Header:** <cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [collection_adapter (STL/CLR)](../VS_visualcpp/collection_adapter--STL-CLR-.md)   
 [collection_adapter::end (STL/CLR)](../VS_visualcpp/collection_adapter--end--STL-CLR-.md)