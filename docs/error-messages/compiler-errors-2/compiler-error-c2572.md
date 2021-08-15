---
description: "Learn more about: Compiler Error C2572"
title: "Compiler Error C2572"
ms.date: "11/04/2016"
f1_keywords: ["C2572"]
helpviewer_keywords: ["C2572"]
ms.assetid: f1a42d69-727d-4ce5-88c8-d5f55dea66ac
---
# Compiler Error C2572

'class::member' : redefinition of default parameter : parameter param

Default parameters cannot be redefined. If you require another value for the parameter, the default parameter should be left undefined.

The following sample generates C2572:

```cpp
// C2572.cpp
// compile with: /c
void f(int i = 1);   // function declaration

// function definition
void f(int i = 1) {}   // C2572

// try the following line instead
// void f(int i) {}
```
