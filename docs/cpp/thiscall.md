---
title: "__thiscall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__thiscall"
  - "__thiscall_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__thiscall keyword [C++]"
ms.assetid: a6a22dd2-0101-4885-b33b-22f6057965df
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# __thiscall
## Microsoft Specific  
 The `__thiscall` calling convention is used on member functions and is the default calling convention used by C++ member functions that do not use variable arguments. Under `__thiscall`, the callee cleans the stack, which is impossible for `vararg` functions. Arguments are pushed on the stack from right to left, with the `this` pointer being passed via register ECX, and not on the stack, on the x86 architecture.  
  
 One reason to use `__thiscall` is in classes whose member functions use `__clrcall` by default. In that case, you can use `__thiscall` to make individual member functions callable from native code.  
  
 When compiling with [/clr:pure](../build/reference/clr-common-language-runtime-compilation.md), all functions and function pointers are `__clrcall` unless specified otherwise.  
  
 In releases before Visual C++ 2005, the thiscall calling convention could not be explicitly specified in a program, because `thiscall` was not a keyword.  
  
 `vararg` member functions use the `__cdecl` calling convention. All function arguments are pushed on the stack, with the `this` pointer placed on the stack last  
  
 Because this calling convention applies only to C++, there is no C name decoration scheme.  
  
 On ARM and [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] machines, `__thiscall` is accepted and ignored by the compiler.  
  
 For non-static class functions, if the function is defined out-of-line, the calling convention modifier does not have to be specified on the out-of-line definition. That is, for class non-static member methods, the calling convention specified during declaration is assumed at the point of definition.  
  
## END Microsoft Specific  
  
## See Also  
 [Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md)