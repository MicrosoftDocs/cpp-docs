---
title: "collection_adapter::collection_adapter (STL-CLR)"
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
H1: collection_adapter::collection_adapter (STL/CLR)
ms.assetid: 7e2bb75b-d735-4135-9523-719683e06fe9
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
# collection_adapter::collection_adapter (STL-CLR)
Constructs an adapter object.  
  
## Syntax  
  
```  
collection_adapter();  
collection_adapter(collection_adapter<Coll>% right);  
collection_adapter(collection_adapter<Coll>^ right);  
collection_adapter(Coll^ collection);  
```  
  
#### Parameters  
 collection  
 BCL handle to wrap.  
  
 right  
 Object to copy.  
  
## Remarks  
 The constructor:  
  
 `collection_adapter();`  
  
 initializes the stored handle with `nullptr`.  
  
 The constructor:  
  
 `collection_adapter(collection_adapter<Coll>% right);`  
  
 initializes the stored handle with `right``.`[collection_adapter::base (STL/CLR)](../VS_visualcpp/collection_adapter--base--STL-CLR-.md)`()`.  
  
 The constructor:  
  
 `collection_adapter(collection_adapter<Coll>^ right);`  
  
 initializes the stored handle with `right``->`[collection_adapter::base (STL/CLR)](../VS_visualcpp/collection_adapter--base--STL-CLR-.md)`()`.  
  
 The constructor:  
  
 `collection_adapter(Coll^ collection);`  
  
 initializes the stored handle with with `collection`.  
  
## Example  
  
```  
// cliext_collection_adapter_construct.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d6x(6, L'x');   
  
// construct an empty container   
    Mycoll c1;   
    System::Console::WriteLine("base() null = {0}", c1.base() == nullptr);   
  
// construct with a handle   
    Mycoll c2(%d6x);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mycoll c3(c2);   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Mycoll c4(%c3);   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
 **base() null = True**  
 **x x x x x x**  
 **x x x x x x**  
 **x x x x x x**   
## Requirements  
 **Header:** <cliext/adapter>  
  
 **Namespace:** cliext  
  
## See Also  
 [collection_adapter (STL/CLR)](../VS_visualcpp/collection_adapter--STL-CLR-.md)   
 [collection_adapter::operator= (STL/CLR)](../VS_visualcpp/collection_adapter--operator=--STL-CLR-.md)