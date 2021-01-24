---
description: "Learn more about: Compiler Error C2389"
title: "Compiler Error C2389"
ms.date: "11/04/2016"
f1_keywords: ["C2389"]
helpviewer_keywords: ["C2389"]
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
---
# Compiler Error C2389

'operator' : illegal operand 'nullptr'

**`nullptr`** cannot be an operand.

The following sample generates C2389:

```cpp
// C2389.cpp
// compile with: /clr
int main() {
   throw nullptr;   // C2389
}
```
