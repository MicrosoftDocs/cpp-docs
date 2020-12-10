---
description: "Learn more about: Compiler Error C2128"
title: "Compiler Error C2128"
ms.date: "11/04/2016"
f1_keywords: ["c2128"]
helpviewer_keywords: ["C2128"]
ms.assetid: 08cbf734-75b3-49f2-9026-9b319947612d
---
# Compiler Error C2128

'function' : alloc_text/same_seg applicable only to functions with C linkage

`#pragma alloc_text` can only be used with functions declared to have C linkage.

The following sample generates C2128:

```cpp
// C2128.cpp
// compile with: /c

// Delete the following line to resolve.
void func();
// #pragma alloc_text("my segment", func)   // C2128

extern "C" {
void func();
}

#pragma alloc_text("my segment", func)
void func() {}
```
