---
description: "Learn more about: Compiler Error C3347"
title: "Compiler Error C3347"
ms.date: "11/04/2016"
f1_keywords: ["C3347"]
helpviewer_keywords: ["C3347"]
ms.assetid: e939ad29-0b78-4681-9618-9bdae5675cee
---
# Compiler Error C3347

'arg': required argument is not specified in attribute idl_module

A required argument was not passed to the [idl_module](../../windows/attributes/idl-module.md) attribute.

The following sample generates C3347:

```cpp
// C3347.cpp
// compile with: /c
[module(name="xx")];

[idl_module(dllname="x")];    // C3347
// try the following line instead
// [idl_module(name="test", dllname="x")];
```
