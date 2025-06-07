---
title: "Compiler Error C2134"
description: "Learn more about: Compiler Error C2134"
ms.date: 11/04/2016
f1_keywords: ["C2134"]
helpviewer_keywords: ["C2134"]
---
# Compiler Error C2134

'function' : call does not result in a constant expression

A function declared as constexpr can only call other functions declared as constexpr.

The following sample generates C2134:

```cpp
// C2134.cpp
// compile with: /c
int A() {
    return 42;
}

constexpr int B() {
    return A();  // Error C2134: 'A': call does not result in a constant expression.
}
```

Possible resolution:

```cpp
// C2134b.cpp
constexpr int A() {  // add constexpr to A, since it meets the requirements of constexpr.
    return 42;
}

constexpr int B() {
    return A();  // No error
}
```
