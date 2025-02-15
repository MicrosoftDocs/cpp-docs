---
title: "Compiler Error C2200"
description: "Learn more about: Compiler Error C2200"
ms.date: "02/15/2025"
f1_keywords: ["C2200"]
helpviewer_keywords: ["C2200"]
---
# Compiler Error C2200

'function': function has already been defined

An [`alloc_text`](../../preprocessor/alloc-text.md) pragma uses a function name already defined. Ensure the `alloc_text` pragma appears after the function declaration but before its definition.

The following sample generates C2200:

```cpp
// C2200.cpp
// compile with: /c
extern "C" void func() {}
#pragma alloc_text("section", func)   // C2200
```
