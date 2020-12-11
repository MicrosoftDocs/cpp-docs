---
description: "Learn more about: Compiler Error C2371"
title: "Compiler Error C2371"
ms.date: "11/04/2016"
f1_keywords: ["C2371"]
helpviewer_keywords: ["C2371"]
ms.assetid: d383993d-05ef-4e35-8129-3b58a6f7b7b7
---
# Compiler Error C2371

'identifier' : redefinition; different basic types

The identifier is already declared.

The following sample generates C2371:

```cpp
// C2371.cpp
int main() {
   int i;
   float i;   // C2371, redefinition
   float f;   // OK
}
```
