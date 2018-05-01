---
title: "list::to_array (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::to_array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "to_array member [STL/CLR]"
ms.assetid: 3ea7b90c-127b-43cd-804b-019b86b77582
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# list::to_array (STL/CLR)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [list::to_array (STL/CLR)](https://docs.microsoft.com/cpp/dotnet/list-to-array-stl-clr).  
  
  
Copies the controlled sequence to a new array.  
  
## Syntax  
  
```  
cli::array<Value>^ to_array();  
```  
  
## Remarks  
 The member function returns an array containing the controlled sequence. You use it to obtain a copy of the controlled sequence in array form.  
  
## Example  
  
```  
// cliext_list_to_array.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// copy the container and modify it   
    cli::array<wchar_t>^ a1 = c1.to_array();   
  
    c1.push_back(L'd');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// display the earlier array copy   
    for each (wchar_t elem in a1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b c d  
a b c  
```  
  
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../dotnet/list-stl-clr.md)

