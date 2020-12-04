---
description: "Learn more about: Compiler Error C2431"
title: "Compiler Error C2431"
ms.date: "11/04/2016"
f1_keywords: ["C2431"]
helpviewer_keywords: ["C2431"]
ms.assetid: 88a5b648-c89f-47d1-a20e-63231ab4f0f7
---
# Compiler Error C2431

illegal index register in 'identifier'

The ESP register is scaled or used as both index and base register. The SIB encoding for the x86 processor does not allow either.

The following sample generates C2431:

```cpp
// C2431.cpp
// processor: x86
int main() {
   _asm mov ax, [ESI + 2*ESP]   // C2431
   _asm mov ax, [esp + esp]   // C2431
}
```
