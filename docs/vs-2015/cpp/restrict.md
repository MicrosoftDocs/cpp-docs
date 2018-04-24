---
title: "restrict | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "restrict"
  - "restrict_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec keyword [C++], restrict"
  - "restrict __declspec keyword"
ms.assetid: f39cf632-68d8-4362-a497-2d4c15693689
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# restrict
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [restrict](https://docs.microsoft.com/cpp/cpp/restrict).  
  
Microsoft Specific**  
  
 Applied to a function declaration or definition that returns a pointer type and tells the compiler that the function returns an object that will not be aliased with any other pointers.  
  
## Syntax  
  
```  
__declspec(restrict) return_type f();  
```  
  
## Remarks  
 The compiler will propagate `__declspec(restrict)`. For example, the CRT `malloc` function is decorated with `__declspec(restrict)` and therefore, pointers initialized to memory locations with `malloc` are also implied to not be aliased.  
  
 The compiler does not check that the pointer is actually not aliased. It is the developer's responsibility to ensure the program does not alias a pointer marked with the `restrict __declspec` modifier.  
  
 For similar semantics on variables, see [__restrict](../cpp/extension-restrict.md).  
  
## Example  
 See [noalias](../cpp/noalias.md) for an example using `restrict`.  
  
 For information about the restrict keyword that is part of C++ AMP, see [restrict (C++ AMP)](../cpp/restrict-cpp-amp.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../cpp/declspec.md)   
 [Keywords](../cpp/keywords-cpp.md)





