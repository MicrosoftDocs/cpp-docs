---
title: "deque::push_back (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::push_back"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "push_back member [STL/CLR]"
ms.assetid: dafd5a4d-1fc7-434c-b129-a523099f8701
caps.latest.revision: 15
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
# deque::push_back (STL/CLR)
Adds a new last element.  
  
## Syntax  
  
```  
void push_back(value_type val);  
```  
  
## Remarks  
 The member function inserts an element with value `val` at the end of the controlled sequence. You use it to append another element to the deque.  
  
## Example  
  
```  
// cliext_deque_push_back.cpp   
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
    return (0);   
    }  
  
```  
  
```Output  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque::pop_back (STL/CLR)](../dotnet/deque-pop-back-stl-clr.md)   
 [deque::pop_front (STL/CLR)](../dotnet/deque-pop-front-stl-clr.md)   
 [deque::push_front (STL/CLR)](../dotnet/deque-push-front-stl-clr.md)