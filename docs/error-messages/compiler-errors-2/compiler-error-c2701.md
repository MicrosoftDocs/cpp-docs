---
title: "Compiler Error C2701"
description: "Learn more about: Compiler Error C2701"
ms.date: 09/27/2022
f1_keywords: ["C2701"]
helpviewer_keywords: ["C2701"]
---
# Compiler Error C2701

> 'function': a function template cannot be a `friend` of a local class

## Remarks

A local class can't have a function template as a `friend` function.

## Example

The following example generates C2701:

```cpp
// C2701.cpp
// compile with: /c
template<typename T>   // OK
void f1(const T &);

void MyFunction() {
   class MyClass {
      template<typename T> friend void f2(const T &);   // C2701
   };
}
```
