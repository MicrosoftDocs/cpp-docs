---
description: "Learn more about: Compiler Error C2548"
title: "Compiler Error C2548"
ms.date: "03/01/2024"
f1_keywords: ["C2548"]
helpviewer_keywords: ["C2548"]
ms.assetid: 01e9c835-9bf3-4020-9295-5ee448c519f3
---
# Compiler Error C2548

'class::member' : missing default parameter for parameter parameter

The default parameter list is missing a parameter. If you supply a default parameter anywhere in a parameter list, you must define default parameters for all subsequent parameters in the current declaration or any previous declarations within the same scope.

## Example

The following sample generates C2548 as function declaration `func1` is missing the default argument `b`, while `func3` is missing the default argument `c`. Function declaration `func2` is valid as all required default arguments are supplied. The second function declaration of `func4` is fine because the default argument `c` is supplied in a preceding declaration within the same scope. Similarly, the third declaration of `func4` is fine as both default arguments `b` and `c` are previously provided.

```cpp
// C2548.cpp
// compile with: /c
void func1(int a = 1, int b, int c = 3);   // C2548

void func2(int a = 1, int b = 2, int c = 3);   // OK

void func3(int a, int b = 2, int c);   // C2548

void func4(int a, int b, int c = 3);
void func4(int a, int b = 2, int c);   // OK
void func4(int a = 1, int b, int c);   // OK
```
