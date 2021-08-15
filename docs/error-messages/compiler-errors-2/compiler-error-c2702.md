---
title: "Compiler Error C2702"
description: "Describes Microsoft C/C++ compiler error C2702."
ms.date: 08/25/2020
f1_keywords: ["C2702"]
helpviewer_keywords: ["C2702"]
ms.assetid: 6def15d4-9a8d-43e7-ae35-42d7cb57c27e
---
# Compiler Error C2702

> `__except` may not appear in termination block

An exception handler (**`__try`**/**`__except`**) cannot be nested inside a **`__finally`** block.

The following sample generates C2702:

```cpp
// C2702.cpp
// processor: x86 IPF
int Counter;
int main() {
   __try {}
   __finally {
      __try {}   // C2702
      __except( Counter ) {}   // C2702
   }
}
```
