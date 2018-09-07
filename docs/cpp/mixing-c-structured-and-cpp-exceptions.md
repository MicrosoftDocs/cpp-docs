---
title: "Mixing C (Structured) and C++ exceptions | Microsoft Docs"
ms.custom: ""
ms.date: "08/14/2018"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["exceptions [C++], mixed C and C++", "C++ exception handling, mixed-language", "structured exception handling [C++], mixed C and C++", "catch keyword [C++], mixed", "try-catch keyword [C++], mixed-language"]
ms.assetid: a149154e-36dd-4d1a-980b-efde2a563a56
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Mixing C (Structured) and C++ exceptions

If you want to write portable code, the use of structured exception handling (SEH) in a C++ program isn't recommended. However, you may sometimes want to compile using [/EHa](../build/reference/eh-exception-handling-model.md) and mix structured exceptions and C++ source code, and need some facility for handling both kinds of exceptions. Because a structured exception handler has no concept of objects or typed exceptions, it can't handle exceptions thrown by C++ code. However, C++ **catch** handlers can handle structured exceptions. C++ exception handling syntax (**try**, **throw**, **catch**) isn't accepted by the C compiler, but structured exception handling syntax (**__try**, **__except**, **__finally**) is supported by the C++ compiler.

See [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) for information on how to handle structured exceptions as C++ exceptions.

If you mix structured and C++ exceptions, be aware of these potential issues:

- C++ exceptions and structured exceptions cannot be mixed within the same function.

- Termination handlers (**__finally** blocks) are always executed, even during unwinding after an exception is thrown.

- C++ exception handling can catch and preserve unwind semantics in all modules compiled with the [/EH](../build/reference/eh-exception-handling-model.md) compiler options, which enable unwind semantics.

- There may be some situations in which destructor functions are not called for all objects. For example, if a structured exception occurs while attempting to make a function call through an uninitialized function pointer, and that function takes as parameters objects that were constructed before the call, the destructors of those objects are not called during stack unwind.

## Next steps

- [Using setjmp or longjmp in C++ programs](../cpp/using-setjmp-longjmp.md)

  See more information on the use of `setjmp` and `longjmp` in C++ programs.

- [Handle structured exceptions in C++](../cpp/exception-handling-differences.md)

  See examples of the ways you can use C++ to handle structured exceptions.

## See also

[C++ Exception Handling](../cpp/cpp-exception-handling.md)  
