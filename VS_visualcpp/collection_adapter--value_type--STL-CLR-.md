---
title: "collection_adapter::value_type (STL-CLR)"
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
H1: collection_adapter::value_type (STL/CLR)
ms.assetid: 4a77ec36-6113-4ec3-86a2-ea24d96605c1
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
# collection_adapter::value_type (STL-CLR)
The type of an element.  
  
## Syntax  
  
```  
typedef Value value_type;  
```  
  
## Remarks  
 The type is a synonym for the template parameter `Value`, if present in the specialization; otherwise it is a synonym for `System::Object^`.  
  
## Example  
  
```  
// cliext_collection_adapter_value_type.cpp   
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
  
// display contents " a b c" using value_type   
    for (Mycoll::iterator it = c1.begin();   
        it != c1.end(); ++it)   
        {   // store element in value_type object   
        Mycoll::value_type val = *it;   
  
        System::Console::Write(" {0}", val);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requirements  
 **Header:** <cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [collection_adapter (STL/CLR)](../VS_visualcpp/collection_adapter--STL-CLR-.md)   
 [collection_adapter::reference (STL/CLR)](../VS_visualcpp/collection_adapter--reference--STL-CLR-.md)