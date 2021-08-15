---
description: "Learn more about: Compiler Error C2619"
title: "Compiler Error C2619"
ms.date: "11/04/2016"
f1_keywords: ["C2619"]
helpviewer_keywords: ["C2619"]
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
---
# Compiler Error C2619

'identifier': a static data member is not allowed in an anonymous struct or union

A member of an anonymous struct or union is declared **`static`**.

The following sample generates C2619, and demonstrates how to fix it by removing the static keyword.

```cpp
// C2619.cpp
int main() {
   union { static int j; };  // C2619
   union { int j; };  // OK
}
```
