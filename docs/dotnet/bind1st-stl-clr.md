---
title: "bind1st (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::bind1st"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bind1st function [STL/CLR]"
ms.assetid: 03a04cef-60fb-4667-b22a-22a387adb028
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
# bind1st (STL/CLR)
Generates a `binder1st` for an argument and functor.  
  
## Syntax  
  
```  
template<typename Fun,  
    typename Arg>  
    binder1st<Fun> bind1st(Fun% functor,  
        Arg left);  
```  
  
## Template Parameters  
 Arg  
 The type of the argument.  
  
 Fun  
 The type of the functor.  
  
## Function Parameters  
 functor  
 The functor to wrap.  
  
 left  
 The first argument to wrap.  
  
## Remarks  
 The template function returns [binder1st (STL/CLR)](../dotnet/binder1st-stl-clr.md)`<Fun>(functor, left)`. You use it as a convenient way to wrap a two-argument functor and its first argument in a one-argument functor that calls it with a second argument.  
  
## Example  
  
```  
// cliext_bind1st.cpp   
// compile with: /clr   
#include <cliext/algorithm>   
#include <cliext/functional>   
#include <cliext/vector>   
  
typedef cliext::vector<int> Myvector;   
int main()   
    {   
    Myvector c1;   
    c1.push_back(4);   
    c1.push_back(3);   
    Myvector c3(2, 0);   
  
// display initial contents " 4 3"   
    for each (int elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display   
    cliext::minus<int> sub_op;   
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);   
  
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        subfrom3);   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// transform and display with function   
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),   
        bind1st(sub_op, 3));   
    for each (int elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
4 3  
-1 0  
-1 0  
```  
  
## Requirements  
 **Header:** \<cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [binder1st (STL/CLR)](../dotnet/binder1st-stl-clr.md)