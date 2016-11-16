---
title: "stack::operator= (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::stack::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator= member [STL/CLR]"
ms.assetid: 6f23b5fc-667e-4c6c-b43a-88b30da2ecac
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
# stack::operator= (STL/CLR)
Replaces the controlled sequence.  
  
## Syntax  
  
```  
stack <Value, Container>% operator=(stack <Value, Container>% right);  
```  
  
#### Parameters  
 right  
 Container adapter to copy.  
  
## Remarks  
 The member operator copies `right` to the object, then returns `*this`. You use it to replace the controlled sequence with a copy of the controlled sequence in `right`.  
  
## Example  
  
```  
// cliext_stack_operator_as.cpp   
// compile with: /clr   
#include <cliext/stack>   
  
typedef cliext::stack<wchar_t> Mystack;   
int main()   
    {   
    Mystack c1;   
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
  
// display contents " a b c"   
    for each (wchar_t elem in c1.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// assign to a new container   
    Mystack c2;   
    c2 = c1;   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/stack>  
  
 **Namespace:** cliext  
  
## See Also  
 [stack (STL/CLR)](../dotnet/stack-stl-clr.md)   
 [stack::assign (STL/CLR)](../dotnet/stack-assign-stl-clr.md)