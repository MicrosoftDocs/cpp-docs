---
description: "Learn more about: Compiler Error C2548"
title: "Compiler error C2548"
ms.date: "03/01/2024"
f1_keywords: ["C2548"]
helpviewer_keywords: ["C2548"]
---
# Compiler error C2548

'class::member' : missing default parameter for parameter parameter

The default parameter list is missing a parameter. If you supply a default parameter anywhere in a parameter list, you must define default parameters for all subsequent parameters in the current declaration or any previous declarations within the same scope.

## Example

The following sample generates C2548 for:

- `func1` because it's missing the default argument `b`.
- `func3` because it's missing the default argument `c`.

The following sample doesn't generate C2548 for:

- `func2` because all the required default arguments are supplied.
- The second `func4` declaration because the default argument `c` is supplied in the preceding declaration and is in the same scope.
- The third `func4` declaration because both default arguments `b` and `c` are provided previously.

```cpp
// C2548.cpp
// compile with: /c
void func1(int a = 1, int b, int c = 3);   // C2548

void func2(int a = 1, int b = 2, int c = 3);   // OK

void func3(int a, int b = 2, int c);   // C2548

void func4(int a, int b, int c = 3);   // OK
void func4(int a, int b = 2, int c);   // OK
void func4(int a = 1, int b, int c);   // OK
```
