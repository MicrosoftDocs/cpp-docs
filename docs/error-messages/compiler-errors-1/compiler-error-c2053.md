---
description: "Learn more about: Compiler Error C2053"
title: "Compiler Error C2053"
ms.date: "11/04/2016"
f1_keywords: ["C2053"]
helpviewer_keywords: ["C2053"]
ms.assetid: 13324c85-13a8-4996-bd42-a31bfe7ff80f
---
# Compiler Error C2053

'identifier' : wide string mismatch

The wide string is assigned to an incompatible type.

The following sample generates C2053:

```c
// C2053.c
int main() {
   char array[] = L"Rika";   // C2053
}
```
