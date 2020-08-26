---
title: "Compiler Error C2706"
description: "Describes Microsoft C/C++ compiler error C2706."
ms.date: 08/25/2020
f1_keywords: ["C2706"]
helpviewer_keywords: ["C2706"]
ms.assetid: e18da924-c42d-4b09-8e29-f4e0382d7dc6
---
# Compiler Error C2706

> illegal `__except` without matching `__try` (missing '}' in `__try` block?)

The compiler did not find a closing brace for a **`__try`** block.

The following sample generates C2706:

```cpp
// C2706.cpp
int main() {
   __try {
      void f();
   // C2706  } missing here
   __except(GetExceptionCode() == 0x0) {
   }
}
```
