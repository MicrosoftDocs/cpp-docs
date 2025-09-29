---
title: "Compiler Error C3824"
description: "Learn more about: Compiler Error C3824"
ms.date: 11/04/2016
f1_keywords: ["C3824"]
helpviewer_keywords: ["C3824"]
---
# Compiler Error C3824

> 'member': this type cannot appear in this context (function parameter, return type, or a static member)

## Remarks

Pinning pointers cannot be function parameters, return types, or declared **`static`**.

## Example

The following example generates C3824:

```cpp
// C3824a.cpp
// compile with: /clr /c
void func() {
   static pin_ptr<int> a; // C3824
   pin_ptr<int> b; // OK
}
```
