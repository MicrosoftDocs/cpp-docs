---
title: "list::push_front (STL-CLR)"
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
  - "cliext::list::push_front"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "push_front member [STL/CLR]"
ms.assetid: 47525641-1139-44fc-ac62-bdc04876d9e0
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
# list::push_front (STL/CLR)
Adds a new first element.  
  
## Syntax  
  
```  
void push_front(value_type val);  
```  
  
## Remarks  
 The member function inserts an element with value `val` at the beginning of the controlled sequence. You use it to prepend another element to the list.  
  
## Example  
  
```  
// cliext_list_push_front.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
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
  
  **c b a**   
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../cli/list--stl-clr-.md)   
 [list::pop_back (STL/CLR)](../cli/list--pop_back--stl-clr-.md)   
 [list::pop_front (STL/CLR)](../cli/list--pop_front--stl-clr-.md)   
 [list::push_back (STL/CLR)](../cli/list--push_back--stl-clr-.md)