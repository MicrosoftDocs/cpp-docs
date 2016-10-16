---
title: "vector::back_item (STL-CLR)"
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
  - "cliext::vector::back_item"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "back_item member [STL/CLR]"
ms.assetid: 9658ffa8-7bde-4242-9ed9-ca42be0d1433
caps.latest.revision: 14
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
# vector::back_item (STL/CLR)
Accesses the last element.  
  
## Syntax  
  
```  
property value_type back_item;  
```  
  
## Remarks  
 The property accesses the last element of the controlled sequence, which must be non-empty. You use it to read or write the last element, when you know it exists.  
  
## Example  
  
```  
// cliext_vector_back_item.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect last item   
    System::Console::WriteLine("back_item = {0}", c1.back_item);   
  
// alter last item and reinspect   
    c1.back_item = L'x';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**back_item = c**  
 **a b x**   
## Requirements  
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../cli/vector--stl-clr-.md)   
 [vector::back (STL/CLR)](../cli/vector--back--stl-clr-.md)   
 [vector::front (STL/CLR)](../cli/vector--front--stl-clr-.md)   
 [vector::front_item (STL/CLR)](../cli/vector--front_item--stl-clr-.md)