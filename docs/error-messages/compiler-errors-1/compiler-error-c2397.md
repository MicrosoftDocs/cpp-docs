---
title: "Compiler Error C2397"
description: "Learn more about: Compiler Error C2397"
ms.date: 11/04/2016
f1_keywords: ["C2397"]
helpviewer_keywords: ["C2397"]
---
# Compiler Error C2397

> conversion from 'type_1' to 'type_2' requires a narrowing conversion

## Remarks

An implicit narrowing conversion was found when using uniform initialization.

The C language allows implicit narrowing conversions in assignments and initialization, and C++ follows suit, even though unexpected narrowing is a cause of many code errors. To make code safer, the C++ standard requires a diagnostic message when a narrowing conversion occurs in an initialization list. In Visual C++, the diagnostic is Compiler Error C2397 when using the uniform initialization syntax supported beginning in Visual Studio 2015. The compiler generates [Compiler Warning (level 1) C4838](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md) when using the list or aggregate initialization syntax supported by Visual Studio 2013.

A narrowing conversion can be okay when you know the possible range of converted values can fit in the target. In this case, you know more than the compiler does. If you make a narrowing conversion intentionally, make your intentions explicit by using a static cast. Otherwise, this error message almost always indicates you have a bug in your code. You can fix it by making sure the objects you initialize have types that are large enough to handle the inputs.

## Example

The following example generates C2397:

```cpp
// C2397.cpp
// compile with: /c
struct S {
   int m1;
   double m2, m3;
};

void func(double d1) {
   char c1 { 127 };   // OK
   char c2 { 513 };   // C2397
   
   S arr[2]{};
   arr[0] = { d1, 2.0, 3.0 };   // C2397
   arr[1] = { static_cast<int>(d1), 2.0, 3.0 };   // OK
}
```
