---
title: "Compiler Error C2299"
description: "Learn more about: Compiler Error C2299"
ms.date: 11/04/2016
f1_keywords: ["C2299"]
helpviewer_keywords: ["C2299"]
---
# Compiler Error C2299

> '*function*': behavior change: an explicit specialization can not be a copy constructor or copy assignment operator

## Remarks

This error can also be generated as a result of compiler conformance work that was done for Visual Studio 2005. Previous versions of Visual C++ allowed explicit specializations for a copy constructor or a copy assignment operator.

To resolve C2299, don't make the copy constructor or assignment operator a function template. Make them non-template functions that take a class type. Any code that calls the copy constructor or assignment operator by explicitly specifying the template arguments needs to remove the template arguments.

## Example

The following example generates C2299:

```cpp
// C2299.cpp
// compile with: /c
class C {
   template <class T>
   C (T t);

   template <> C (const C&);   // C2299
   C (const C&);   // OK
};
```
