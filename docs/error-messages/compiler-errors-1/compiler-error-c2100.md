---
description: "Learn more about: Compiler Error C2100"
title: "Compiler Error C2100"
ms.date: "11/04/2016"
f1_keywords: ["C2100"]
helpviewer_keywords: ["C2100"]
ms.assetid: 9ed5ea11-9d55-4ddf-8b1a-162c74f3c390
---
# Compiler Error C2100

illegal indirection

Indirection operator ( `*` ) is applied to a nonpointer value.

The following sample generates C2100:

```cpp
// C2100.cpp
int main() {
   int r = 0, *s = 0;
   s = &r;
   *r = 200;   // C2100
   *s = 200;   // OK
}
```
