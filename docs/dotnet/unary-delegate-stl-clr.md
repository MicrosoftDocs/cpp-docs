---
title: "unary_delegate (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::unary_delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unary_delegate function [STL/CLR]"
ms.assetid: b3ee253c-98e8-466e-a272-505e47aed061
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
# unary_delegate (STL/CLR)
The genereic class describes a one-argument delegate. You use it specify a delegate in terms of its argument and return types.  
  
## Syntax  
  
```  
generic<typename Arg,  
    typename Result>  
    delegate Result unary_delegate(Arg);  
```  
  
#### Parameters  
 Arg  
 The type of the argument.  
  
 Result  
 The return type.  
  
## Remarks  
 The genereic delegate describes a one-argument function.  
  
 Note that for:  
  
 `unary_delegare<int, int> Fun1;`  
  
 `unary_delegare<int, int> Fun2;`  
  
 the types `Fun1` and `Fun2` are synonyms, while for:  
  
 `delegate int Fun1(int);`  
  
 `delegate int Fun2(int);`  
  
 they are not the same type.  
  
## Example  
  
```  
// cliext_unary_delegate.cpp   
// compile with: /clr   
#include <cliext/functional>   
  
int hash_val(wchar_t val)   
    {   
    return ((val * 17 + 31) % 67);   
    }   
  
typedef cliext::unary_delegate<wchar_t, int> Mydelegate;   
int main()   
    {   
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);   
  
    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));   
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));   
    return (0);   
    }  
  
```  
  
```Output  
hash(L'a') = 5  
hash(L'b') = 22  
```  
  
## Requirements  
 **Header:** \<cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [binary_delegate (STL/CLR)](../dotnet/binary-delegate-stl-clr.md)   
 [binary_delegate_noreturn (STL/CLR)](../dotnet/binary-delegate-noreturn-stl-clr.md)   
 [unary_delegate_noreturn (STL/CLR)](../dotnet/unary-delegate-noreturn-stl-clr.md)