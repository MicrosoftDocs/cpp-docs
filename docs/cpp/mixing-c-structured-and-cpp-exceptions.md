---
title: "Mixing C (Structured) and C++ exceptions | Microsoft Docs"
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
# Mixing C (Structured) and C++ exceptions

If you want to write more portable code, using structured exception handling (SEH) in a C++ program is not recommended. However, you may sometimes want to compile with **/EHa** and mix structured exceptions and C++ source code, and need some facility for handling both kinds of exceptions. Because a structured exception handler has no concept of objects or typed exceptions, it cannot handle exceptions thrown by C++ code; however, C++ **catch** handlers can handle structured exceptions. As such, C++ exception handling syntax (**try**, **throw**, **catch**) is not accepted by the C compiler, but structured exception handling syntax (**__try**, **__except**, **__finally**) is supported by the C++ compiler.

See [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) for information on handling structured exceptions as C++ exceptions.

If you mix structured and C++ exceptions, note the following:

1. C++ exceptions and structured exceptions cannot be mixed within the same function.

1. Termination handlers (**__finally** blocks) are always executed, even during unwinding after an exception is thrown.

1. C++ exception handling can catch and preserve unwind semantics in all modules compiled with the [/EH](../build/reference/eh-exception-handling-model.md) compiler option, which enables unwind semantics.

1. There may be some situations in which destructor functions are not called for all objects. For example, if a structured exception occurs while attempting to make a function call through an uninitialized function pointer, and that function takes as parameters objects that were constructed before the call, the destructors of those objects are not called during stack unwind.

## Next steps

- [Using setjmp or longjmp in C++ programs](../cpp/using-setjmp-longjmp.md)

  See more information on the use of **setjmp** and **longjmp** in C++ programs.

- [Handle structured exceptions in C++](../cpp/exception-handling-differences.md)

  See examples of the ways you can use C++ to handle structured exceptions.

## See also

- [C++ Exception Handling](../cpp/cpp-exception-handling.md)
