---
title: "list::front (STL-CLR)"
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
  - "cliext::list::front"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "front member [STL/CLR]"
ms.assetid: ead6aaaa-b518-4a9c-af80-7189bf872cad
caps.latest.revision: 15
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
# list::front (STL/CLR)
Accesses the first element.  
  
## Syntax  
  
```  
reference front();  
```  
  
## Remarks  
 The member function returns a reference to the first element of the controlled sequence, which must be non-empty. You use it to read or write the first element, when you know it exists.  
  
## Example  
  
```  
// cliext_list_front.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first item   
    System::Console::WriteLine("front() = {0}", c1.front());   
  
// alter first item and reinspect   
    c1.front() = L'x';   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**  
**front() = a**  
 **x b c**   
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../cli/list--stl-clr-.md)   
 [list::back (STL/CLR)](../cli/list--back--stl-clr-.md)   
 [list::back_item (STL/CLR)](../cli/list--back_item--stl-clr-.md)   
 [list::front_item (STL/CLR)](../cli/list--front_item--stl-clr-.md)