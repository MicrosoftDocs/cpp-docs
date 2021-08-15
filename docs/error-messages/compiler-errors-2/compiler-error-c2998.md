---
description: "Learn more about: Compiler Error C2998"
title: "Compiler Error C2998"
ms.date: "11/04/2016"
f1_keywords: ["C2998"]
helpviewer_keywords: ["C2998"]
ms.assetid: 8193d491-b5d9-4477-acb1-cf166889c070
---
# Compiler Error C2998

'identifier' : cannot be a template definition

The compiler could not process the syntax used in the template definition.

The following sample generates C2998:

```cpp
// C2998.cpp
// compile with: /c
template <class T> int x = 1018; // C2998
```
