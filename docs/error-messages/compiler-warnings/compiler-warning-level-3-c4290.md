---
description: "Learn more about: Compiler Warning (level 3) C4290"
title: "Compiler Warning (level 3) C4290"
ms.date: "11/04/2016"
f1_keywords: ["C4290"]
helpviewer_keywords: ["C4290"]
ms.assetid: d1c6d85b-28e0-4a1f-9d48-23593337a6fb
---
# Compiler Warning (level 3) C4290

C++ exception specification ignored except to indicate a function is not __declspec(nothrow)

A function is declared using exception specification, which Visual C++ accepts but does not implement. Code with exception specifications that are ignored during compilation may need to be recompiled and linked to be reused in future versions supporting exception specifications.

For more information, see [Exception Specifications (throw)](../../cpp/exception-specifications-throw-cpp.md) .

You can avoid this warning by using the [warning](../../preprocessor/warning.md) pragma:

```cpp
#pragma warning( disable : 4290 )
```

The following code sample generates C4290:

```cpp
// C4290.cpp
// compile with: /EHs /W3 /c
void f1(void) throw(int) {}   // C4290

// OK
void f2(void) throw() {}
void f3(void) throw(...) {}
```
