---
title: "Compiler Error C3625"
description: "Learn more about: Compiler Error C3625"
ms.date: 11/04/2016
f1_keywords: ["C3625"]
helpviewer_keywords: ["C3625"]
---
# Compiler Error C3625

> 'native_type': a native type cannot derive from a managed or WinRT type 'type'

## Remarks

A native class cannot inherit from a managed or WinRT class. For more information, see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md).

## Example

The following example generates C3625:

```cpp
// C3625.cpp
// compile with: /clr /c
ref class B {};
class D : public B {};   // C3625 cannot inherit from a managed class
```
