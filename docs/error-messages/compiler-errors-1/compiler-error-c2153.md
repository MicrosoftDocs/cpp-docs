---
description: "Learn more about: Compiler Error C2153"
title: "Compiler Error C2153"
ms.date: "11/04/2016"
f1_keywords: ["C2153"]
helpviewer_keywords: ["C2153"]
ms.assetid: cfc50cb7-9a0f-4b5b-879a-d419c99f7be1
---
# Compiler Error C2153

hex constants must have at least one hex digit

Hexadecimal constants 0x, 0X, and \x are not valid. At least one hex digit must follow x or X.

The following sample generates C2153:

```cpp
// C2153.cpp
int main() {
   int a= 0x;    // C2153
   int b= 0xA;   // OK
}
```
