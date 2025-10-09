---
title: "Compiler Error C3386"
description: "Learn more about: Compiler Error C3386"
ms.date: 11/04/2016
f1_keywords: ["C3386"]
helpviewer_keywords: ["C3386"]
---
# Compiler Error C3386

> '*type-name*' : `__declspec(dllexport)`/`__declspec(dllimport)` cannot be applied to a managed or WinRT type

## Remarks

The [`dllimport`](../../cpp/dllexport-dllimport.md) and [`dllexport`](../../cpp/dllexport-dllimport.md) **`__declspec`** modifiers aren't valid on a managed or Windows Runtime type.

## Example

The following example generates C3386 and shows how to fix it:

```cpp
// C3386.cpp
// compile with: /clr /c
ref class __declspec(dllimport) X1 {   // C3386
// try the following line instead
// ref class X1 {
};
```
