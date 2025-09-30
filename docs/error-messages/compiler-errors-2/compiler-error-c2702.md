---
title: "Compiler Error C2702"
description: "Describes Microsoft C/C++ compiler error C2702."
ms.date: 08/25/2020
f1_keywords: ["C2702"]
helpviewer_keywords: ["C2702"]
---
# Compiler Error C2702

> `__except` may not appear in termination block

## Remarks

An exception handler (**`__try`**/**`__except`**) cannot be nested inside a **`__finally`** block.

## Example

The following example generates C2702:

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
