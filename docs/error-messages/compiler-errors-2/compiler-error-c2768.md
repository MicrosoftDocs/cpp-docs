---
description: "Learn more about: Compiler Error C2768"
title: "Compiler Error C2768"
ms.date: "11/04/2016"
f1_keywords: ["C2768"]
helpviewer_keywords: ["C2768"]
ms.assetid: a7f6047a-6a80-4737-ad5c-c12868639fb5
---
# Compiler Error C2768

'function' : illegal use of explicit template arguments

The compiler was unable to determine if a function definition was supposed to be an explicit specialization of a function template or if the function definition was supposed to be for a new function.

This error was introduced in Visual Studio .NET 2003, as part of the compiler conformance enhancements.

The following sample generates C2768:

```cpp
// C2768.cpp
template<typename T>
void f(T) {}

void f<int>(int) {}   // C2768

// an explicit specialization
template<>
void f<int>(int) {}

// global nontemplate function overload
void f(int) {}
```
