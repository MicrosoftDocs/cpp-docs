---
description: "Learn more about: Compiler Error C2673"
title: "Compiler Error C2673"
ms.date: "11/04/2016"
f1_keywords: ["C2673"]
helpviewer_keywords: ["C2673"]
ms.assetid: 780230c0-619b-4a78-b01d-ff5886306741
---
# Compiler Error C2673

'function' : global functions do not have 'this' pointers

A global function tried to access **`this`**.

The following sample generates C2673:

```cpp
// C2673.cpp
int main() {
   this = 0;   // C2673
}
```
