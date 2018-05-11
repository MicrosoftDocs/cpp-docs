---
title: "Compiler Error C2482 | Microsoft Docs"
ms.custom: ""
ms.date: "09/15/2017"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2482"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2482"]
ms.assetid: 98c87da2-625c-4cc2-9bf7-78d15921e779
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2482

>'*identifier*' : dynamic initialization of 'thread' data not allowed in managed/WinRT code

In managed or WinRT code, variables declared by using the [__declspec(thread)](../../cpp/thread.md) storage class modifier attribute or the [thread_local](../../cpp/storage-classes-cpp.md#thread_local) storage class specifier cannot be initialized with an expression that requires run-time evaluation. A static expression is required to initialize `__declspec(thread)` or `thread_local` data.

## Example

The following sample generates C2482 in managed (**/clr**) and and WinRT (**/ZW**) code:

```cpp
// C2482.cpp
// For managed example, compile with: /EHsc /c /clr C2482.cpp
// For WinRT example, compile with: /EHsc /c /ZW C2482.cpp
#define Thread __declspec( thread )
Thread int tls_i1 = tls_i1;   // C2482

int j = j;   // OK in C++; C error
Thread int tls_i2 = sizeof( tls_i2 );   // Okay in C and C++
```
