---
title: "Compiler Error C2430"
description: "Learn more about: Compiler Error C2430"
ms.date: 11/04/2016
f1_keywords: ["C2430"]
helpviewer_keywords: ["C2430"]
---
# Compiler Error C2430

> more than one index register in 'identifier'

## Remarks

More than one register is scaled. The compiler supports scaled indexing, but you can only scale one register.

## Example

The following example generates C2430.

```cpp
// C2430.cpp
// processor: x86
int main() {
   _asm mov eax, [ebx*2+ecx*4] // C2430
}
```
