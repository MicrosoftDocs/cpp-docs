---
title: "list::generic_value (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::generic_value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_value member [STL/CLR]"
ms.assetid: daa0fc3f-cda2-4531-8cc2-a523737d4103
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
# list::generic_value (STL/CLR)
The type of an element for use with the generic interface for the container.  
  
## Syntax  
  
```  
typedef GValue generic_value;  
```  
  
## Remarks  
 The type describes an object of type `GValue` that describes the stored element value for use with the generic interface for this template container class.  
  
## Example  
  
```  
// cliext_list_generic_value.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    cliext::list<wchar_t>::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    cliext::list<wchar_t>::generic_iterator gcit = gc1->begin();   
    cliext::list<wchar_t>::generic_value gcval = *gcit;   
    *++gcit = gcval;   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a a c  
```  
  
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../dotnet/list-stl-clr.md)   
 [list::generic_container (STL/CLR)](../dotnet/list-generic-container-stl-clr.md)   
 [list::generic_iterator (STL/CLR)](../dotnet/list-generic-iterator-stl-clr.md)   
 [list::generic_reverse_iterator (STL/CLR)](../dotnet/list-generic-reverse-iterator-stl-clr.md)