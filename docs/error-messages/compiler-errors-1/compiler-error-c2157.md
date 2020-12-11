---
description: "Learn more about: Compiler Error C2157"
title: "Compiler Error C2157"
ms.date: "11/04/2016"
f1_keywords: ["C2157"]
helpviewer_keywords: ["C2157"]
ms.assetid: babbca24-16dc-4b69-be14-a675029249c1
---
# Compiler Error C2157

'function' : must be declared before use in pragma list

The function name is not declared before being referenced in the list of functions for an [alloc_text](../../preprocessor/alloc-text.md) pragma.

The following sample generates C2157:

```cpp
// C2157.cpp
// compile with: /c
#pragma alloc_text( "func", func)   // C2157

// OK
extern "C" void func();
#pragma alloc_text( "func", func)
```
