---
title: "map::iterator (STL-CLR)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "cliext::map::iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterator member [STL/CLR]"
ms.assetid: b2953b9b-0e6d-49f3-a28f-47d04d16d5f6
caps.latest.revision: 13
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
# map::iterator (STL/CLR)
The type of an iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T1 iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T1` that can serve as a bidirectional iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_map_iterator.cpp   
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
    Mymap::iterator it = c1.begin();   
    for (; it != c1.end(); ++it)   
        System::Console::Write(" [{0} {1}]", it->first, it->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **[a 1] [b 2] [c 3]**   
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [map (STL/CLR)](../cli/map--stl-clr-.md)   
 [map::const_iterator (STL/CLR)](../cli/map--const_iterator--stl-clr-.md)