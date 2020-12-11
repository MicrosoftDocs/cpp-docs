---
description: "Learn more about: Compiler Error C3140"
title: "Compiler Error C3140"
ms.date: "11/04/2016"
f1_keywords: ["C3140"]
helpviewer_keywords: ["C3140"]
ms.assetid: 122f8943-fac3-4db8-a3a8-2c5d19233de6
---
# Compiler Error C3140

cannot have multiple 'module' attributes in the same compilation unit

The [module](../../windows/attributes/module-cpp.md) attribute can only be defined once per project.

The following sample generates C3140:

```cpp
// C3140.cpp
// compile with: /c
[emitidl];
[module(name = "MyLibrary")];
[module(name = "MyLibrary2")];   // C3140
```
