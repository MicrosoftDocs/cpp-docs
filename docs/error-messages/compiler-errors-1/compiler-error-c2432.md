---
description: "Learn more about: Compiler Error C2432"
title: "Compiler Error C2432"
ms.date: "11/04/2016"
f1_keywords: ["C2432"]
helpviewer_keywords: ["C2432"]
ms.assetid: 0e3326e8-cab1-45a5-b48d-61edd33793e8
---
# Compiler Error C2432

illegal reference to 16-bit data in 'identifier'

A 16-bit register is used as an index or base register. The compiler does not support referencing 16-bit data. 16-bit registers cannot be used as index or base registers when compiling for 32-bit code.

The following sample generates C2432:

```cpp
// C2432.cpp
// processor: x86
int main() {
   _asm mov eax, DWORD PTR [bx]   // C2432
}
```
