---
description: "Learn more about: Compiler Warning (Level 4) C4740"
title: "Compiler Warning (Level 4) C4740"
ms.date: "11/04/2016"
f1_keywords: ["C4740"]
helpviewer_keywords: ["C4740"]
ms.assetid: 85528969-966a-44b4-8a2f-971704c64477
---
# Compiler Warning (Level 4) C4740

flow in or out of inline asm code suppresses global optimization

When there is a jump in to or out of an **`asm`** block, global optimizations are disabled for that function.

The following sample generates C4740:

```cpp
// C4740.cpp
// compile with: /O2 /W4
// processor: x86
int main() {
   __asm jmp tester
   tester:;
}
```
