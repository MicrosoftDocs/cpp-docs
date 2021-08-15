---
description: "Learn more about: Compiler Error C3734"
title: "Compiler Error C3734"
ms.date: "11/04/2016"
f1_keywords: ["C3734"]
helpviewer_keywords: ["C3734"]
ms.assetid: 4e2afdcc-7da9-45a1-9c96-85f25e2986e8
---
# Compiler Error C3734

'class': a managed or WinRT class cannot be a coclass

The [coclass](../../windows/attributes/coclass.md) attribute cannot be used with managed or WinRT classes.

The following sample generates C3734 and shows how to fix it:

```cpp
// C3734.cpp
// compile with: /clr /c
[module(name="x")];

[coclass]
ref class CMyClass {   // C3734 remove the ref keyword to resolve
};
```
