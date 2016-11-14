---
title: "multimap::value_type (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multimap::value_type"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_type member [STL/CLR]"
ms.assetid: c10d75f9-2efe-41f7-babc-655c68c14a4f
caps.latest.revision: 14
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
# multimap::value_type (STL/CLR)
The type of an element.  
  
## Syntax  
  
```  
typedef generic_value value_type;  
```  
  
## Remarks  
 The type is a synonym for `generic_value`.  
  
## Example  
  
```  
// cliext_multimap_value_type.cpp   
// compile with: /clr   
#include <cliext/map>   
  
typedef cliext::multimap<wchar_t, int> Mymultimap;   
int main()   
    {   
    Mymultimap c1;   
    c1.insert(Mymultimap::make_value(L'a', 1));   
    c1.insert(Mymultimap::make_value(L'b', 2));   
    c1.insert(Mymultimap::make_value(L'c', 3));   
  
// display contents " [a 1] [b 2] [c 3]" using value_type   
    for (Mymultimap::iterator it = c1.begin(); it != c1.end(); ++it)   
        {   // store element in value_type object   
        Mymultimap::value_type val = *it;   
        System::Console::Write(" [{0} {1}]", val->first, val->second);   
        }   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
[a 1] [b 2] [c 3]  
```  
  
## Requirements  
 **Header:** \<cliext/map>  
  
 **Namespace:** cliext  
  
## See Also  
 [multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)   
 [multimap::const_reference (STL/CLR)](../dotnet/multimap-const-reference-stl-clr.md)   
 [multimap::key_type (STL/CLR)](../dotnet/multimap-key-type-stl-clr.md)   
 [multimap::reference (STL/CLR)](../dotnet/multimap-reference-stl-clr.md)