---
description: "Learn more about: Compiler Error C2422"
title: "Compiler Error C2422"
ms.date: "11/04/2016"
f1_keywords: ["C2422"]
helpviewer_keywords: ["C2422"]
ms.assetid: ef0ec302-4028-4778-b134-0b8cea4bcad9
---
# Compiler Error C2422

illegal segment override in 'operand'

Inline assembly code incorrectly uses a segment override operator (colon) on an operand.  Possible causes include:

- The register preceding the operator is not a segment register.

- The register preceding the operator is not the only segment register in the operand.

- The segment override operator appears within an indirection operator (brackets).

- The expression following the segment override operator is not an immediate operand or a memory operand.

The following sample generates C2422:

```cpp
// C2422.cpp
// processor: x86
int main() {
   _asm {
      mov AX, [BX:ES]   // C2422
      mov AX, ES   // OK
   }
}
```
