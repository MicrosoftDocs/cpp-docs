---
title: "Compiler Error C2908"
description: "Learn more about: Compiler Error C2908"
ms.date: 11/04/2016
f1_keywords: ["C2908"]
helpviewer_keywords: ["C2908"]
---
# Compiler Error C2908

> explicit specialization; 'template' has already been instantiated

## Remarks

A specialization of the primary template occurs before the explicit specialization.

## Example

The following example generates C2908:

```cpp
// C2908.cpp
// compile with: /c
template<class T> class X {};

void f() {
X<int> x;   //specialization and instantiation
            //of X<int>
}

template<> class X<int> {}  // C2908, explicit specialization
```
