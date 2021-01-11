---
description: "Learn more about: Compiler Error C2316"
title: "Compiler Error C2316"
ms.date: "07/08/2019"
f1_keywords: ["C2316"]
helpviewer_keywords: ["C2316"]
ms.assetid: 9ad08eb5-060b-4eb0-8d66-0dc134f7bf67
---
# Compiler Error C2316

> '*class_type*' : cannot be caught as the destructor and/or copy constructor are inaccessible or deleted

An exception was caught by value or by reference, but the copy constructor, the assignment operator, or both were inaccessible.

## Remarks

Conformance changes in Visual Studio 2015 made this error apply to bad catch statements of MFC exceptions derived from `CException`. Because `CException` has an inherited private copy constructor, the class and its derivatives aren't copyable, and can't be passed by value, which also means they can't be caught by value. Catch statements that caught MFC exceptions by value previously led to uncaught exceptions at runtime. Now the compiler correctly identifies this situation and reports error C2316. To fix this issue, we recommend you use the MFC TRY/CATCH macros rather than write your own exception handlers. If that's not appropriate for your code, catch MFC exceptions by reference instead.

## Example

The following sample generates C2316, and shows a way to fix it:

```cpp
// C2316.cpp
// compile with: /EHsc
#include <stdio.h>

struct B
{
public:
    B() {}
    // Delete the following line to resolve.
private:
    // copy constructor
    B(const B&) {}
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
    catch (B b)    // C2316
    {
        printf_s("Caught an exception!\n");
    }
}
```
