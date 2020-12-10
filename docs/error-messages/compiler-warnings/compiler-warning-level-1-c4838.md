---
description: "Learn more about: Compiler Warning (level 1) C4838"
title: "Compiler Warning (level 1) C4838"
ms.date: "11/04/2016"
f1_keywords: ["C4838"]
helpviewer_keywords: ["C4838"]
ms.assetid: fea07924-5feb-4ed4-99b5-1a8c41d28db6
---
# Compiler Warning (level 1) C4838

conversion from 'type_1' to 'type_2' requires a narrowing conversion

An implicit narrowing conversion was found when using aggregate or list initialization.

The C language allows implicit narrowing conversions in assignments and initialization, and C++ follows suit, even though unexpected narrowing is a cause of many code errors. To make code safer, the C++ standard requires a diagnostic message when a narrowing conversion occurs in an initialization list. In Visual C++, the diagnostic is [Compiler Error C2397](../../error-messages/compiler-errors-1/compiler-error-c2397.md) when using the uniform initialization syntax supported beginning in Visual Studio 2015. The compiler generates  warning C4838 when using the list or aggregate initialization syntax supported by Visual Studio 2013.

A narrowing conversion can be okay when you know the possible range of converted values can fit in the target. In this case, you know more than the compiler does. If you make a narrowing conversion intentionally, make your intentions explicit by using a static cast. Otherwise, this warning message almost always indicates that you have a bug in your code. You can fix it by making sure the objects you initialize have types that are large enough to handle the inputs.

The following sample generates C4838 and shows one way to fix it:

```cpp
// C4838.cpp -- C++ narrowing conversion diagnostics
// Compile by using: cl /EHsc C4838.cpp

struct S1 {
    int m1;
    double m2, m3;
};

void function_C4838(double d1) {
    double ad[] = { 1, d1 }; // OK
    int ai[] = { 1, d1 };    // warning C4838
    S1 s11 = { 1, 2, d1 };   // OK
    S1 s12 { d1, 2, 3 };     // warning C4838
    S1 s13 { static_cast<int>(d1), 2, 3 }; // possible fix for C4838
}
```
