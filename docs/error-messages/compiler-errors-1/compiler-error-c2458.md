---
description: "Learn more about: Compiler Error C2458"
title: "Compiler Error C2458"
ms.date: "11/04/2016"
f1_keywords: ["C2458"]
helpviewer_keywords: ["C2458"]
ms.assetid: ed21901f-1067-42f5-b275-19b480decf5c
---
# Compiler Error C2458

'identifier' : redefinition within definition

A class, structure, union, or enumeration is redefined in its own declaration.

The following sample generates C2458:

```cpp
// C2458.cpp
class C {
   enum i { C };   // C2458
};
```
