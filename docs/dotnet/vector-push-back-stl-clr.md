---
title: "vector::push_back (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::push_back"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "push_back member [STL/CLR]"
ms.assetid: 4a4c302b-e29f-4b68-b759-2f831814d896
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
# vector::push_back (STL/CLR)
Adds a new last element.  
  
## Syntax  
  
```  
void push_back(value_type val);  
```  
  
## Remarks  
 The member function inserts an element with value `val` at the end of the controlled sequence. You use it to append another element to the vector.  
  
## Example  
  
```  
// cliext_vector_push_back.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
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
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::pop_back (STL/CLR)](../dotnet/vector-pop-back-stl-clr.md)