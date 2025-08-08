---
title: "Compiler Error C2768"
description: "Learn more about: Compiler Error C2768"
ms.date: 11/04/2016
f1_keywords: ["C2768"]
helpviewer_keywords: ["C2768"]
---
# Compiler Error C2768

> 'function': illegal use of explicit template arguments

## Remarks

The compiler was unable to determine if a function definition was an explicit specialization of a function template or if it was a new function.

This error was introduced in Visual Studio .NET 2003, as part of the compiler conformance enhancements.

## Example

The following example generates C2768:

```cpp
// C2768.cpp
template<typename T>
void f(T) {}

void f<int>(int) {}   // C2768

// an explicit specialization
template<>
void f<int>(int) {}

// global non-template function overload
void f(int) {}
```
