---
description: "Learn more about: Compiler Error C2490"
title: "Compiler Error C2490"
ms.date: "11/04/2016"
f1_keywords: ["C2490"]
helpviewer_keywords: ["C2490"]
ms.assetid: 9de6bddd-b2e2-4ce6-b33b-201a8c2c8c54
---
# Compiler Error C2490

'keyword' not allowed in function with 'naked' attribute

A function defined as [naked](../../cpp/naked-cpp.md) cannot use structured exception handling.

The following sample generates C2490:

```cpp
// C2490.cpp
// processor: x86
__declspec( naked ) int func() {
   __try{}   // C2490, structured exception handling
}
```
