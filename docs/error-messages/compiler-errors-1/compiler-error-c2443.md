---
description: "Learn more about: Compiler Error C2443"
title: "Compiler Error C2443"
ms.date: "11/04/2016"
f1_keywords: ["C2443"]
helpviewer_keywords: ["C2443"]
ms.assetid: 315330d5-24bc-4193-a531-0642095be58f
---
# Compiler Error C2443

operand size conflict

The instruction requires operands to be the same size.

The following sample generates C2443:

```cpp
// C2443.cpp
// processor: x86
short var;
int main() {
   __asm xchg ax,bl   // C2443
   __asm mov al,red   // C2443
   __asm mov al,BYTE PTR var   // OK
}
```
