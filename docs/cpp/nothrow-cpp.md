---
title: "nothrow (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["nothrow_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__declspec keyword [C++], nothrow", "nothrow __declspec keyword"]
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# nothrow (C++)
**Microsoft Specific**  
  
 A `__declspec` extended attribute which can be used in the declaration of functions.  
  
## Syntax  
  
```  
  
return-type __declspec(nothrow) [call-convention] function-name ([argument-list])  
```  
  
## Remarks  
 This attribute tells the compiler that the declared function and the functions it calls never throw an exception. With the synchronous exception handling model, now the default, the compiler can eliminate the mechanics of tracking the lifetime of certain unwindable objects in such a function, and significantly reduce the code size. Given the following preprocessor directive, the three function declarations below are equivalent:  
  
```  
#define WINAPI __declspec(nothrow) __stdcall   
  
void WINAPI f1();  
void __declspec(nothrow) __stdcall f2();  
void __stdcall f3() throw();  
```  
  
 Using `void __declspec(nothrow) __stdcall f2();` has the advantage that you can use an API definition, such as that illustrated by the `#define` statement, to easily specify `nothrow` on a set of functions. The third declaration`, void __stdcall f3() throw();` is the syntax defined by the C++ standard.  
  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../cpp/declspec.md)   
 [Keywords](../cpp/keywords-cpp.md)