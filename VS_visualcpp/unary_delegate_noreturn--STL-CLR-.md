---
title: "unary_delegate_noreturn (STL-CLR)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: unary_delegate_noreturn (STL/CLR)
ms.assetid: 3c3fb143-f60f-4e28-a66b-690e3a7b2f9b
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# unary_delegate_noreturn (STL-CLR)
The genereic class describes a one-argument delegate that returns `void`. You use it specify a delegate in terms of its argument type.  
  
## Syntax  
  
```  
generic<typename Arg>  
    delegate void unary_delegate_noreturn(Arg);  
```  
  
#### Parameters  
 Arg  
 The type of the argument.  
  
## Remarks  
 The genereic delegate describes a one-argument function that returns `void`.  
  
 Note that for:  
  
 `unary_delegare_noreturn<int> Fun1;`  
  
 `unary_delegare_noreturn<int> Fun2;`  
  
 the types `Fun1` and `Fun2` are synonyms, while for:  
  
 `delegate void Fun1(int);`  
  
 `delegate void Fun2(int);`  
  
 they are not the same type.  
  
## Example  
  
```  
// cliext_unary_delegate_noreturn.cpp   
// compile with: /clr   
#include <cliext/functional>   
  
void hash_val(wchar_t val)   
    {   
    System::Console::WriteLine("hash({0}) = {1}",   
       val, (val * 17 + 31) % 67);   
    }   
  
typedef cliext::unary_delegate_noreturn<wchar_t> Mydelegate;   
int main()   
    {   
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);   
  
    myhash(L'a');   
    myhash(L'b');   
    return (0);   
    }  
  
```  
  
 **hash(a) = 5**  
**hash(b) = 22**   
## Requirements  
 **Header:** <cliext/functional>  
  
 **Namespace:** cliext  
  
## See Also  
 [binary_delegate (STL/CLR)](../VS_visualcpp/binary_delegate--STL-CLR-.md)   
 [binary_delegate_noreturn (STL/CLR)](../VS_visualcpp/binary_delegate_noreturn--STL-CLR-.md)   
 [unary_delegate (STL/CLR)](../VS_visualcpp/unary_delegate--STL-CLR-.md)