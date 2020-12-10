---
description: "Learn more about: Compiler Error C2397"
title: "Compiler Error C2397"
ms.date: "11/04/2016"
f1_keywords: ["C2397"]
ms.assetid: b418cf5a-d50d-4a6c-98a7-994ae35046d1
---
# Compiler Error C2397

conversion from 'type_1' to 'type_2' requires a narrowing conversion

An implicit narrowing conversion was found when using uniform initialization.

The C language allows implicit narrowing conversions in assignments and initialization, and C++ follows suit, even though unexpected narrowing is a cause of many code errors. To make code safer, the C++ standard requires a diagnostic message when a narrowing conversion occurs in an initialization list. In Visual C++, the diagnostic is Compiler Error C2397 when using the uniform initialization syntax supported beginning in Visual Studio 2015. The compiler generates [Compiler Warning (level 1) C4838](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md) when using the list or aggregate initialization syntax supported by Visual Studio 2013.

A narrowing conversion can be okay when you know the possible range of converted values can fit in the target. In this case, you know more than the compiler does. If you make a narrowing conversion intentionally, make your intentions explicit by using a static cast. Otherwise, this error message almost always indicates you have a bug in your code. You can fix it by making sure the objects you initialize have types that are large enough to handle the inputs.

The following sample generates C2397 and shows one way to fix it:

```
// C2397.cpp -- C++ narrowing conversion diagnostics
// Compile by using: cl /EHsc C2397.cpp
#include <vector>

struct S1 {
    int m1;
    double m2, m3;
};

void function_C2397(double d1) {
    char c1 { 127 };          // OK
    char c2 { 513 };          // error C2397

    std::vector<S1> vS1;
    vS1.push_back({ d1, 2, 3 }); // error C2397

    // Possible fix if you know d1 always fits in an int
    vS1.push_back({ static_cast<int>(d1), 2, 3 });
}
```
