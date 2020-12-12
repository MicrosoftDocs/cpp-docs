---
description: "Learn more about: Compiler Error C2400"
title: "Compiler Error C2400"
ms.date: "11/04/2016"
f1_keywords: ["C2400"]
helpviewer_keywords: ["C2400"]
ms.assetid: 1ba441ee-73f9-42a5-bfe9-fbeab93808eb
---
# Compiler Error C2400

inline assembler syntax error in 'context'; found 'token'

The token caused a syntax error in the specified context.

The following sample generates C2400:

```cpp
// C2400.cpp
// processor: x86
int main() {
   __asm {
      heh ax,bx;   // C2400, heh is not a valid x86 instruction
      mov ax,bx;   // OK
   }
}
```
