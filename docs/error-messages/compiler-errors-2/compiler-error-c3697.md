---
description: "Learn more about: Compiler Error C3697"
title: "Compiler Error C3697"
ms.date: "11/04/2016"
f1_keywords: ["C3697"]
helpviewer_keywords: ["C3697"]
ms.assetid: 2d3f63c4-b7f8-421d-a7a5-2bf17fd054f9
---
# Compiler Error C3697

'qualifier' : cannot use this qualifier on '^'

The tracking handle (^) was applied to a qualifier for which it was not designed.

The following sample generates C3697:

```cpp
// C3697.cpp
// compile with: /clr
using namespace System;
int main() {
   String ^__restrict s;   // C3697
   String ^ s2;   // OK
}
```
