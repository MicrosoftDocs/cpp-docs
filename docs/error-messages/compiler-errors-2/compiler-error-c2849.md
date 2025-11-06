---
title: "Compiler Error C2849"
description: "Learn more about: Compiler Error C2849"
ms.date: 11/04/2016
f1_keywords: ["C2849"]
helpviewer_keywords: ["C2849"]
---
# Compiler Error C2849

> 'destructor' : an interface cannot have a destructor

## Remarks

A Visual C++ [interface](../../cpp/interface.md) cannot have a destructor.

## Example

The following example generates C2849:

```cpp
// C2849.cpp
// compile with: /c
__interface C {
   ~C();   // C2849 destructor not allowed in an interface
};
```
