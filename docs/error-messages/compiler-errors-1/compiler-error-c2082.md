---
description: "Learn more about: Compiler Error C2082"
title: "Compiler Error C2082"
ms.date: "11/04/2016"
f1_keywords: ["C2082"]
helpviewer_keywords: ["C2082"]
ms.assetid: 87a6d442-157c-46e8-9bff-8388f8338ae0
---
# Compiler Error C2082

redefinition of formal parameter 'identifier'

A formal parameter to a function is redeclared within the function body. To resolve the error, remove the redefinition.

The following sample generates C2082:

```cpp
// C2082.cpp
void func(int i) {
   int i;   // C2082
   int ii;   // OK
}
```
