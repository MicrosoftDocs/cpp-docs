---
title: "Using setjmp-longjmp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "longjmp"
  - "setjmp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++ exception handling, setjmp/longjmp functions"
  - "SETJMPEX.H"
  - "longjmp function in C++ programs"
  - "SETJMP.H"
  - "setjmp function"
  - "setjmp function, C++ programs"
ms.assetid: 96be8816-f6f4-4567-9a9c-0c3c720e37c5
caps.latest.revision: 9
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
# Using setjmp/longjmp
When [setjmp](../c-runtime-library/reference/setjmp.md) and [longjmp](../c-runtime-library/reference/longjmp.md) are used together, they provide a way to execute a non-local `goto`. They are typically used to pass execution control to error-handling or recovery code in a previously called routine without using the standard calling or return conventions.  
  
> [!CAUTION]
>  However, because `setjmp` and `longjmp` do not support C++ object semantics, and because they might degrade performance by preventing optimization on local variables, we recommend that you do not use them in C++ programs. We recommend that you use `try`/`catch` constructs instead.  
  
 If you decide to use `setjmp`/`longjmp` in a C++ program, also include SETJMP.H or SETJMPEX.H to assure correct interaction between the functions and C++ exception handling. If you use [/EH](../build/reference/eh-exception-handling-model.md) to compile, destructors for local objects are called during the stack unwind. If you use **/EHs** to compile, and one of your functions calls a function that uses [nothrow](../cpp/nothrow-cpp.md) and the function that uses `nothrow` calls `longjmp`, then the destructor unwind might not occur, depending on the optimizer.  
  
 In portable code, when a non-local `goto` that calls `longjmp` is executed, correct destruction of frame-based objects might be unreliable.  
  
## See Also  
 [Mixing C (Structured) and C++ Exceptions](../cpp/mixing-c-structured-and-cpp-exceptions.md)