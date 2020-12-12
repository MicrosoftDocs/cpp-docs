---
description: "Learn more about: Compiler Error C2611"
title: "Compiler Error C2611"
ms.date: "11/04/2016"
f1_keywords: ["C2611"]
helpviewer_keywords: ["C2611"]
ms.assetid: 3f2d5253-f24f-4724-83d0-6b2aa6a4e551
---
# Compiler Error C2611

'token' : illegal following '~' (expected identifier)

The token is not an identifier.

The following sample generates C2611:

```cpp
// C2611.cpp
// compile with: /c
class C {
   C::~operator int();   // C2611
   ~C();   // OK
};
```
