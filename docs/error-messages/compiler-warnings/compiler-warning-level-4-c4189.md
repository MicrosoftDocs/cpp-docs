---
description: "Learn more about: Compiler Warning (level 4) C4189"
title: "Compiler Warning (level 4) C4189"
ms.date: "11/04/2016"
f1_keywords: ["C4189"]
helpviewer_keywords: ["C4189"]
ms.assetid: 7ad9242c-228e-4054-8244-5e914b618ef3
---
# Compiler Warning (level 4) C4189

'identifier' : local variable is initialized but not referenced

A variable is declared and initialized but not used.

The following sample generates C4189:

```cpp
// C4189.cpp
// compile with: /W4
int main() {
   int a = 1;   // C4189, remove declaration to resolve
}
```
