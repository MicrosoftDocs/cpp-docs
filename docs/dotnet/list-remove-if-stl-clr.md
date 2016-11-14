---
title: "list::remove_if (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::list::remove_if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_if member [STL/CLR]"
ms.assetid: cbc66192-751b-41c5-b557-d5d7bbc2a840
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
# list::remove_if (STL/CLR)
Removes elements that pass a specified test.  
  
## Syntax  
  
```  
template<typename Pred1>  
    void remove_if(Pred1 pred);  
```  
  
#### Parameters  
 pred  
 Test for elements to remove.  
  
## Remarks  
 The member function removes from the controlled sequence (erases) every element `X` for which `pred``(X)` is true. You use it to remove all elements that satisfy a condition you specify as a function or delegate.  
  
## Example  
  
```  
// cliext_list_remove_if.cpp   
// compile with: /clr   
#include <cliext/list>   
  
int main()   
    {   
    cliext::list<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'b');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b b b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// fail to remove and redisplay   
    c1.remove_if(cliext::binder2nd<cliext::equal_to<wchar_t> >(   
        cliext::equal_to<wchar_t>(), L'd'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// remove and redisplay   
    c1.remove_if(cliext::binder2nd<cliext::not_equal_to<wchar_t> >(   
        cliext::not_equal_to<wchar_t>(), L'b'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
a b b b c  
a b b b c  
b b b  
```  
  
## Requirements  
 **Header:** \<cliext/list>  
  
 **Namespace:** cliext  
  
## See Also  
 [list (STL/CLR)](../dotnet/list-stl-clr.md)   
 [list::clear (STL/CLR)](../dotnet/list-clear-stl-clr.md)   
 [list::erase (STL/CLR)](../dotnet/list-erase-stl-clr.md)   
 [list::remove (STL/CLR)](../dotnet/list-remove-stl-clr.md)   
 [list::unique (STL/CLR)](../dotnet/list-unique-stl-clr.md)