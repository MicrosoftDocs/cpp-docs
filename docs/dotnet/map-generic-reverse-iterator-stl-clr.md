---
title: "map::generic_reverse_iterator (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::map::generic_reverse_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_reverse_iterator member [STL/CLR]"
ms.assetid: b1b38fa8-89a7-4f39-9c80-b24eccfe339f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# map::generic_reverse_iterator (STL/CLR)
The type of a reverse iterator for use with the generic interface for the container.  
  
## Syntax  
  
```  
typedef Microsoft::VisualC::StlClr::Generic::  
    ReverseRandomAccessIterator<generic_value>  
    generic_reverse_iterator;  
```  
  
## Remarks  
 The type describes a generic reverse iterator that can be used with the generic interface for this template container class.  
  
## Example  
  
```  
// cliext_map_generic_reverse_iterator.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::map<wchar_t, int> Mymap;   
int main()   
    {   
    Mymap c1;   
    c1.insert(Mymap::make_value(L'a', 1));   
    c1.insert(Mymap::make_value(L'b', 2));   
    c1.insert(Mymap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]"   
    for each (Mymap::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct a generic container   
    Mymap::generic_container^ gc1 = %c1;   
    for each (Mymap::value_type elem in gc1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// get an element and display it   
    Mymap::generic_reverse_iterator gcit = gc1->rbegin();   
    Mymap::generic_value gcval = *gcit;   
    System::Console::WriteLine(" [{0} {1}]", gcval->first, gcval->second);   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
[a 1] [b 2] [c 3]  
[c 3]  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../dotnet/map-stl-clr.md)   
 [map::generic_container (STL/CLR)](../dotnet/map-generic-container-stl-clr.md)   
 [map::generic_iterator (STL/CLR)](../dotnet/map-generic-iterator-stl-clr.md)