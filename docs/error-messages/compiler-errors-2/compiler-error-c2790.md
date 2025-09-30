---
title: "Compiler Error C2790"
description: "Learn more about: Compiler Error C2790"
ms.date: 11/04/2016
f1_keywords: ["C2790"]
helpviewer_keywords: ["C2790"]
---
# Compiler Error C2790

> 'super' : this keyword can only be used within the body of class member function

## Remarks

This error message appears if the user ever tries to uses the keyword [super](../../cpp/super.md) outside of the context of a member function.

## Example

The following example generates C2790:

```cpp
// C2790.cpp
void f() {
   __super::g();   // C2790
}
```
