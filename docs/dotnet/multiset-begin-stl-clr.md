---
title: "multiset::begin (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::multiset::begin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "begin member [STL/CLR]"
ms.assetid: 592a6331-0de5-484a-9962-0beda7082589
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
# multiset::begin (STL/CLR)
Designates the beginning of the controlled sequence.  
  
## Syntax  
  
```  
iterator begin();  
```  
  
## Remarks  
 The member function returns a bidirectional iterator that designates the first element of the controlled sequence, or just beyond the end of an empty sequence. You use it to obtain an iterator that designates the `current` beginning of the controlled sequence, but its status can change if the length of the controlled sequence changes.  
  
## Example  
  
```  
// cliext_multiset_begin.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::multiset<wchar_t> Mymultiset;   
int main()   
    {   
    Mymultiset c1;   
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// inspect first two items   
    Mymultiset::iterator it = c1.begin();   
    System::Console::WriteLine("*begin() = {0}", *it);   
    System::Console::WriteLine("*++begin() = {0}", *++it);   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
*begin() = a  
*++begin() = b  
```  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)   
 [multiset::end (STL/CLR)](../dotnet/multiset-end-stl-clr.md)