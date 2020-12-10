---
description: "Learn more about: Compiler Error C2498"
title: "Compiler Error C2498"
ms.date: "11/04/2016"
f1_keywords: ["C2498"]
helpviewer_keywords: ["C2498"]
ms.assetid: 0839f12c-aaa4-4a02-bb33-7f072715dd14
---
# Compiler Error C2498

'function' : 'novtable' can only be applied to class declarations or definitions

This error can be caused by using `__declspec(novtable)` with a function.

## Example

The following sample generates C2498:

```cpp
// C2498.cpp
// compile with: /c
void __declspec(novtable) f() {}   // C2498
class __declspec(novtable) A {};   // OK
```
