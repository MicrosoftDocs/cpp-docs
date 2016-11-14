---
title: "deque::push_front (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::deque::push_front"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "push_front member [STL/CLR]"
ms.assetid: a452c94e-abad-4e28-af41-c73ec805ec6f
caps.latest.revision: 16
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
# deque::push_front (STL/CLR)
Adds a new first element.  
  
## Syntax  
  
```  
void push_front(value_type val);  
```  
  
## Remarks  
 The member function inserts an element with value `val` at the beginning of the controlled sequence. You use it to prepend another element to the deque.  
  
## Example  
  
```  
// cliext_deque_push_front.cpp   
// compile with: /clr   
#include <cliext/deque>   
  
int main()   
    {   
    cliext::deque<wchar_t> c1;   
    c1.push_front(L'a');   
    c1.push_front(L'b');   
    c1.push_front(L'c');   
  
// display contents " c b a"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
c b a  
```  
  
## Requirements  
 **Header:** \<cliext/deque>  
  
 **Namespace:** cliext  
  
## See Also  
 [deque (STL/CLR)](../dotnet/deque-stl-clr.md)   
 [deque::pop_back (STL/CLR)](../dotnet/deque-pop-back-stl-clr.md)   
 [deque::pop_front (STL/CLR)](../dotnet/deque-pop-front-stl-clr.md)   
 [deque::push_back (STL/CLR)](../dotnet/deque-push-back-stl-clr.md)