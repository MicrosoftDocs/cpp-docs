---
title: "binary_delegate (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::binary_delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "binary_delegate function [STL/CLR]"
ms.assetid: 52a9291a-e354-4b9e-a035-78dac1179ec5
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
# binary_delegate (STL/CLR)
The genereic class describes a two-argument delegate. You use it specify a delegate in terms of its argument and return types.  
  
## Syntax  
  
```  
generic<typename Arg1,  
    typename Arg2,  
    typename Result>  
    delegate Result binary_delegate(Arg1, Arg2);  
```  
  
#### Parameters  
 Arg1  
 The type of the first argument.  
  
 Arg2  
 The type of the second argument.  
  
 Result  
 The return type.  
  
## Remarks  
 The genereic delegate describes a two-argument function.  
  
 Note that for:  
  
 `binary_delegate<int, int, int> Fun1;`  
  
 `binary_delegate<int, int, int> Fun2;`  
  
 the types `Fun1` and `Fun2` are synonyms, while for:  
  
 `delegate int Fun1(int, int);`  
  
 `delegate int Fun2(int, int);`  
  
 they are not the same type.  
  
## Example  
  
```  
// cliext_binary_delegate.cpp   
// compile with: /clr   
#include <cliext/functional>   
  
bool key_compare(wchar_t left, wchar_t right)   
    {   
    return (left < right);   
    }   
  
typedef cliext::binary_delegate<wchar_t, wchar_t, bool> Mydelegate;   
int main()   
    {   
    Mydelegate^ kcomp = gcnew Mydelegate(&key_compare);   
  
    System::Console::WriteLine("compare(L'a', L'a') = {0}",   
        kcomp(L'a', L'a'));   
    System::Console::WriteLine("compare(L'a', L'b') = {0}",   
        kcomp(L'a', L'b'));   
    System::Console::WriteLine("compare(L'b', L'a') = {0}",   
        kcomp(L'b', L'a'));   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
compare(L'a', L'a') = False  
compare(L'a', L'b') = True  
compare(L'b', L'a') = False  
```  
  
## Requirements  
 **Header:** \<cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [binary_delegate_noreturn (STL/CLR)](../dotnet/binary-delegate-noreturn-stl-clr.md)   
 [unary_delegate (STL/CLR)](../dotnet/unary-delegate-stl-clr.md)   
 [unary_delegate_noreturn (STL/CLR)](../dotnet/unary-delegate-noreturn-stl-clr.md)