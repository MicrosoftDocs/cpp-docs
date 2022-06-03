---
description: "Learn more about: Compiler Error C2917"
title: "Compiler Error C2917"
ms.date: 06/01/2022
f1_keywords: ["C2917"]
helpviewer_keywords: ["C2917"]
ms.assetid: ec9da9ee-0f37-47b3-87dd-19ef5a14dc4c
---
# Compiler Error C2917

> '*name*' : invalid template-parameter

## Remarks

A template parameter list contains an identifier that wasn't a template parameter.

This error is obsolete in Visual Studio 2022 and later versions.

## Example

The following sample generates C2917.

```cpp
// C2917.cpp
// compile with: /c
template<class T> class Vector {
   void sort();
};

template<class T*> void Vector<T>::sort() {}   // C2917
// try the following line instead
// template<class T> void Vector<T>::sort() {}
```
