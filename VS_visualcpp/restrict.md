---
title: "restrict"
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
ms.topic: language-reference
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
caps.latest.revision: 9
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
# restrict
**Microsoft Specific**  
  
 Applied to a function declaration or definition that returns a pointer type and tells the compiler that the function returns an object that will not be aliased with any other pointers.  
  
## Syntax  
  
```  
__declspec(restrict) return_type f();  
```  
  
## Remarks  
 The compiler will propagate `__declspec(restrict)`. For example, the CRT `malloc` function is decorated with `__declspec(restrict)` and therefore, pointers initialized to memory locations with `malloc` are also implied to not be aliased.  
  
 The compiler does not check that the pointer is actually not aliased. It is the developer's responsibility to ensure the program does not alias a pointer marked with the `restrict __declspec` modifier.  
  
 For similar semantics on variables, see [__restrict](../VS_visualcpp/__restrict.md).  
  
## Example  
 See [noalias](../VS_visualcpp/noalias.md) for an example using `restrict`.  
  
 For information about the restrict keyword that is part of C++ AMP, see [restrict (C++ AMP)](../VS_visualcpp/restrict--C---AMP-.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../VS_visualcpp/__declspec.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)