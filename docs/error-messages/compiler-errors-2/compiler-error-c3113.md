---
title: "Compiler Error C3113"
description: "Learn more about: Compiler Error C3113"
ms.date: 11/04/2016
f1_keywords: ["C3113"]
helpviewer_keywords: ["C3113"]
---
# Compiler Error C3113

> an 'structure' cannot be a template/generic

## Remarks

You attempted to make a class template or class generic out of an interface or an enum.

## Example

The following example generates C3113:

```cpp
// C3113.cpp
// compile with: /c
template <class T>
enum E {};   // C3113
// try the following line instead
// class MyClass{};
```
