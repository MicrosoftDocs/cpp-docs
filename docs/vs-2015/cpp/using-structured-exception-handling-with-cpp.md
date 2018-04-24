---
title: "Using Structured Exception Handling with C++ | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++ exception handling, mixed with SEH"
  - "structured exception handling, with C++ exception handling"
ms.assetid: ec34b528-8c26-4429-b24a-6a68553aaa91
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using Structured Exception Handling with C++
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using Structured Exception Handling with C++](https://docs.microsoft.com/cpp/cpp/using-structured-exception-handling-with-cpp).  
  
Structured exception handling described in these articles works with both C and C++ source files. However, it is not specifically designed for C++ and is not recommended. You can ensure that your code is more portable by using C++ exception handling. Also, the C++ exception handling mechanism is more flexible, in that it can handle exceptions of any type.  
  
 Microsoft C++ now supports the C++ exception handling model, based on the ANSI C++ Standard. This mechanism automatically handles destruction of local objects during stack unwind. If you are writing fault-tolerant C++ code, and you want to implement exception handling, it is strongly recommended that you use C++ exception handling, rather than structured exception handling. (Note that while the C++ compiler supports structured exception handling constructs as described in these articles, the standard C compiler does not support the C++ exception handling syntax.) For detailed information about C++ exception handling, see [C++ Exception Handling](../cpp/cpp-exception-handling.md) and the *Annotated C++ Reference Manual* by Margaret Ellis and Bjarne Stroustrup.  
  
## See Also  
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)





