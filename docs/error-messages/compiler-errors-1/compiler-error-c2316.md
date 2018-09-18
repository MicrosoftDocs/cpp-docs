---
title: "Compiler Error C2316 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2316"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2316"]
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2316

> '*exception*' : cannot be caught as the destructor and/or copy constructor are inaccessible

An exception was caught by value or by reference but the copy constructor and/or the assignment operator were inaccessible.

This code was accepted by versions of Visual C++ before Visual Studio 2003, but now gives an error.

Conformance changes in Visual Studio 2015 made this error apply to bad catch statements of MFC exceptions derived from `CException`. Because `CException` has an inherited private copy constructor, the class and its derivatives are non-copyable, and cannot be passed by value, which also means they cannot be caught by value. Catch statements that caught MFC exceptions by value previously led to uncaught exceptions at runtime, but now the compiler correctly identifies this situation and reports error C2316. To fix this issue, we recommend you use the MFC TRY/CATCH macros rather than write your own exception handlers, but if that's not appropriate for your code, catch MFC exceptions by reference instead.

## Example

The following sample generates C2316:

```
// C2316.cpp
// compile with: /EHsc
#include <stdio.h>

extern "C" int printf_s(const char*, ...);

struct B
{
public:
    B() {}
    // Delete the following line to resolve.
private:
    // copy constructor
    B(const B&)
    {
    }
};

void f(const B&)
{
}

int main()
{
    try
    {
        B aB;
        f(aB);
    }
    catch (B b) {   // C2316
        printf_s("Caught an exception!\n");
    }
}
```