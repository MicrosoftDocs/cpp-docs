---
title: "Compiler Error C2498"
description: "Learn more about: Compiler Error C2498"
ms.date: 11/04/2016
f1_keywords: ["C2498"]
helpviewer_keywords: ["C2498"]
---
# Compiler Error C2498

> 'function' : 'novtable' can only be applied to class declarations or definitions

## Remarks

This error can be caused by using `__declspec(novtable)` with a function.

## Example

The following example generates C2498:

```cpp
// C2498.cpp
// compile with: /c
void __declspec(novtable) f() {}   // C2498
class __declspec(novtable) A {};   // OK
```
