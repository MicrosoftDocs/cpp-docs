---
title: "Compiler Error C2766"
description: "Learn more about: Compiler Error C2766"
ms.date: 11/04/2016
f1_keywords: ["C2766"]
helpviewer_keywords: ["C2766"]
---
# Compiler Error C2766

> explicit specialization; 'specialization' has already been defined

## Remarks

Duplicate explicit specializations are not allowed. For more information, see [Explicit Specialization of Function Templates](../../cpp/explicit-specialization-of-function-templates.md).

## Example

The following example generates C2766:

```cpp
// C2766.cpp
// compile with: /c
template<class T>
struct A {};

template<>
struct A<int> {};

template<>
struct A<int> {};   // C2766
// try the following line instead
// struct A<char> {};
```
