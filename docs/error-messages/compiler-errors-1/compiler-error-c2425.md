---
description: "Learn more about: Compiler Error C2425"
title: "Compiler Error C2425"
ms.date: "11/04/2016"
f1_keywords: ["C2425"]
helpviewer_keywords: ["C2425"]
ms.assetid: 0ce59404-9aff-4e01-aa8d-27d23e92eb30
---
# Compiler Error C2425

'token' :non-constant expression in 'context'

The token forms part of a non-constant expression in this context.

To fix this issue, replace the token with a constant literal or with a calculation.

The following sample generates C2425:

```cpp
// C2425.cpp
// processor: x86
int main() {
   int i = 3;
   __asm {
      mov eax, [ebp - i]   // C2425
      mov eax, [ebp - 3]   // OK
   }
}
```
