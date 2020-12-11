---
description: "Learn more about: Compiler Warning (level 1) C4348"
title: "Compiler Warning (level 1) C4348"
ms.date: "11/04/2016"
f1_keywords: ["C4348"]
helpviewer_keywords: ["C4348"]
ms.assetid: 816010eb-6079-48d5-a41b-0fc4d67cfe4c
---
# Compiler Warning (level 1) C4348

'type' : redefinition of default parameter : parameter number

A template parameter was redefined.

The following sample generates C4348:

```cpp
// C4348.cpp
// compile with: /LD /W1
template <class T=int> struct A;   // forward declaration

template <class T=int> struct A { };
// C4348, redefinition of default parameter
// try the following line instead
// template <class T> struct A { };
```
