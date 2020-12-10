---
description: "Learn more about: Compiler Error C2156"
title: "Compiler Error C2156"
ms.date: "11/04/2016"
f1_keywords: ["C2156"]
helpviewer_keywords: ["C2156"]
ms.assetid: 136f9c67-2c27-4f61-b7e6-ccd202eca697
---
# Compiler Error C2156

pragma must be outside function

A pragma that must be specified at a global level (outside a function body) is within a function.

The following sample generates C2156:

```cpp
// C2156.cpp
#pragma optimize( "l", on )   // OK
int main() {
   #pragma optimize( "l", on )   // C2156
}
```
