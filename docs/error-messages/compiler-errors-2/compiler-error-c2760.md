---
description: "Learn more about: Compiler Error C2760"
title: "Compiler Error C2760"
ms.date: 08/12/2021
f1_keywords: ["C2760"]
helpviewer_keywords: ["C2760"]
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
---
# Compiler Error C2760

> syntax error : expected '*name1*' not '*name2*'\
> syntax error : unexpected token '*token1*', expected '*token2*'\
> syntax error: '*token1*' was unexpected here; expected '*token2*'

## Remarks

There are several ways to cause this error. Usually, it's caused by a token sequence that the compiler can't make sense of.

## Example

In this sample, a casting operator is used with an invalid operator.

```cpp
// C2760.cpp
class B {};
class D : public B {};

void f(B* pb) {
    D* pd1 = static_cast<D*>(pb);
    D* pd2 = static_cast<D*>=(pb);  // C2760
    D* pd3 = static_cast<D*=(pb);   // C2760
}
```

The new lambda processor available under [`/std:c++20`](../../build/reference/std-specify-language-standard-version.md) or later, or under [`/Zc:lambda`](../../build/reference/zc-lambda.md), enables some new conformance-mode syntactic checks in generic lambdas. The legacy lambda processor compiles this code without warnings, but the new lambda processor produces error C2760:

```cpp
void f() {
    auto a = [](auto arg) {
        decltype(arg)::Type t; // C2760 syntax error: unexpected token 'identifier', expected ';'
    };
}
```

This example shows the correct syntax, now enforced by the compiler, which works in all **`/std`** modes:

```cpp
void f() {
    auto a = [](auto arg) {
        typename decltype(arg)::Type t;
    };
}
```
