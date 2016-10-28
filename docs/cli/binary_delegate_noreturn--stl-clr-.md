---
title: "binary_delegate_noreturn (STL-CLR)"
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
  - "cliext::binary_delegate_noreturn"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary_delegate_noreturn function [STL/CLR]"
ms.assetid: 055c7e9d-e5c3-48fe-9327-3f6316e8a51e
caps.latest.revision: 6
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
# binary_delegate_noreturn (STL/CLR)
The genereic class describes a two-argument delegate that returns `void`. You use it specify a delegate in terms of its argument.  
  
## Syntax  
  
```  
generic<typename Arg1,  
    typename Arg2>  
    delegate void binary_delegate(Arg1, Arg2);  
```  
  
#### Parameters  
 Arg1  
 The type of the first argument.  
  
 Arg2  
 The type of the second argument.  
  
## Remarks  
 The genereic delegate describes a two-argument function that returns `void`.  
  
 Note that for:  
  
 `binary_delegate_noreturn<int, int> Fun1;`  
  
 `binary_delegate_noreturn<int, int> Fun2;`  
  
 the types `Fun1` and `Fun2` are synonyms, while for:  
  
 `delegate void Fun1(int, int);`  
  
 `delegate void Fun2(int, int);`  
  
 they are not the same type.  
  
## Example  
  
```  
// cliext_binary_delegate_noreturn.cpp   
// compile with: /clr   
#include <cliext/functional>   
  
void key_compare(wchar_t left, wchar_t right)   
    {   
    System::Console::WriteLine("compare({0}, {1}) = {2}",   
        left, right, left < right);   
    }   
  
typedef cliext::binary_delegate_noreturn<wchar_t, wchar_t> Mydelegate;   
int main()   
    {   
    Mydelegate^ kcomp = gcnew Mydelegate(&key_compare);   
  
    kcomp(L'a', L'a');   
    kcomp(L'a', L'b');   
    kcomp(L'b', L'a');   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
 **compare(a, a) = False**  
**compare(a, b) = True**  
**compare(b, a) = False**   
## Requirements  
 **Header:** \<cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [binary_delegate (STL/CLR)](../cli/binary_delegate--stl-clr-.md)   
 [unary_delegate (STL/CLR)](../cli/unary_delegate--stl-clr-.md)   
 [unary_delegate_noreturn (STL/CLR)](../cli/unary_delegate_noreturn--stl-clr-.md)