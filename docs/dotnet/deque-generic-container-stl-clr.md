---
title: "deque::generic_container (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::generic_container"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "generic_container member [STL/CLR]"
ms.assetid: 5003a9a8-c207-4074-be2b-36cb9887f9d4
caps.latest.revision: 17
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
# deque::generic_container (STL/CLR)
The type of the generic interface for the container.  
  
## Syntax  
  
```  
typedef Microsoft::VisualC::StlClr::  
    IDeque<generic_value>  
    generic_container;  
```  
  
## Remarks  
 The type describes the generic interface for this template container class.  
  
## Example  
  
```  
// cliext_deque_generic_container.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct a generic container   
    cliext::deque<wchar_t>::generic_container^ gc1 = %c1;   
    for each (wchar_t elem in gc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify generic and display original   
    gc1->insert(gc1->end(), L'd');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// modify original and display generic   
    c1.push_back(L'e');   
  
    System::Collections::IEnumerator^ enum1 =   
        gc1->GetEnumerator();   
    while (enum1->MoveNext())   
        System::Console::Write(" {0}", enum1->Current);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
a b c d  
a b c d e  
```  
  
## Requirements  
 **Header:** \<cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 <xref:Microsoft.VisualC.StlClr.IDeque%601>   
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque::generic_iterator (STL/CLR)](../dotnet/deque-generic-iterator-stl-clr.md)   
 [deque::generic_reverse_iterator (STL/CLR)](../dotnet/deque-generic-reverse-iterator-stl-clr.md)   
 [deque::generic_value (STL/CLR)](../dotnet/deque-generic-value-stl-clr.md)