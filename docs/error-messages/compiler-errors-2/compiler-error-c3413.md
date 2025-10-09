---
title: "Compiler Error C3413"
description: "Learn more about: Compiler Error C3413"
ms.date: 11/04/2016
f1_keywords: ["C3413"]
helpviewer_keywords: ["C3413"]
---
# Compiler Error C3413

> 'name' : invalid explicit instantiation

## Remarks

The compiler detected an ill-formed explicit instantiation.

## Example

The following example generates C3413:

```cpp
// C3413.cpp
template
class MyClass {};   // C3413
```

Possible resolution:

```cpp
// C3413b.cpp
// compile with: /c
template <class T>
class MyClass {};

template <>
class MyClass<int> {};
```
