---
title: "Mixing C (Structured) and C++ Exceptions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["exceptions [C++], mixed C and C++", "C++ exception handling, mixed-language", "structured exception handling [C++], mixed C and C++", "catch keyword [C++], mixed", "try-catch keyword [C++], mixed-language"]
ms.assetid: a149154e-36dd-4d1a-980b-efde2a563a56
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Mixing C (Structured) and C++ Exceptions
If you want to write more portable code, using structured exception handling in a C++ program is not recommended. However, you may sometimes want to compile with **/EHa** and mix structured exceptions and C++ source code, and need some facility for handling both kinds of exceptions. Because a structured exception handler has no concept of objects or typed exceptions, it cannot handle exceptions thrown by C++ code; however, C++ **catch** handlers can handle structured exceptions. As such, C++ exception handling syntax (**try**, **throw**, **catch**) is not accepted by the C compiler, but structured exception handling syntax (**__try**, **__except**, **__finally**) is supported by the C++ compiler.  
  
 See [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) for information on handling structured exceptions as C++ exceptions.  
  
 If you mix structured and C++ exceptions, note the following:  
  
1.  C++ exceptions and structured exceptions cannot be mixed within the same function.  
  
2.  Termination handlers (**__finally** blocks) are always executed, even during unwinding after an exception is thrown.  
  
3.  C++ exception handling can catch and preserve unwind semantics in all modules compiled with the [/EH](../build/reference/eh-exception-handling-model.md) compiler option (this option enables unwind semantics).  
  
4.  There may be some situations in which destructor functions are not called for all objects. For example, if a structured exception occurs while attempting to make a function call through an uninitialized function pointer, and that function takes as parameters objects that were constructed before the call, those objects will not have their destructors called during stack unwind.  
  
## What do you want to know more about?  
  
-   [Using setjmp or longjmp in C++ programs](../cpp/using-setjmp-longjmp.md)  
  
-   [Differences between SEH and C++ EH](../cpp/exception-handling-differences.md)  
  
## See Also  
 [C++ Exception Handling](../cpp/cpp-exception-handling.md)