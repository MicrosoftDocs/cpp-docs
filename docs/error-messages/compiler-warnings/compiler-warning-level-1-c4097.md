---
description: "Learn more about: Compiler Warning (level 1) C4097"
title: "Compiler Warning (level 1) C4097"
ms.date: "11/04/2016"
f1_keywords: ["C4097"]
helpviewer_keywords: ["C4097"]
ms.assetid: 2525be51-fac2-43b2-b57c-3bbf1a2268f7
---
# Compiler Warning (level 1) C4097

expected pragma parameter to be 'restore' or 'off'

A pragma was passed an invalid value.

The following sample generates C4097:

```cpp
// C4097.cpp
// compile with: /W1
#pragma runtime_checks("",test)   // C4097
// try the following line instead
// #pragma runtime_checks("",off)

int main() {
}
```
