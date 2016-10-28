---
title: "list::const_iterator (STL-CLR)"
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
  - "cliext::list::const_iterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const_iterator member [STL/CLR]"
ms.assetid: 24e19077-02d2-456e-a3f1-7caaf0b6c974
caps.latest.revision: 12
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
# list::const_iterator (STL/CLR)
The type of a constant iterator for the controlled sequence.  
  
## Syntax  
  
```  
typedef T2 const_iterator;  
```  
  
## Remarks  
 The type describes an object of unspecified type `T2` that can serve as a constant random-access iterator for the controlled sequence.  
  
## Example  
  
```  
// cliext_list_const_iterator.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display contents " a b c"   
    cliext::list<wchar_t>::const_iterator cit = c1.begin();   
    for (; cit != c1.end(); ++cit)   
        System::Console::Write(" {0}", *cit);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
  **a b c**   
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../cli/list--stl-clr-.md)   
 [list::iterator (STL/CLR)](../cli/list--iterator--stl-clr-.md)