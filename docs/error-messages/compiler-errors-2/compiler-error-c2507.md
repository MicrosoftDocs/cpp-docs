---
title: "Compiler Error C2507 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2507"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2507"]
ms.assetid: f102aff5-de7d-4c3f-9cac-2ddf9ce02b14
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2507

'identifier' : too many virtual modifiers on the base class

A class or structure is declared as `virtual` more than once. Only one `virtual` modifier can appear for each class in a list of base classes.

The following sample generates C2507:

```
// C2507.cpp
// compile with: /c
class A {};
class B : virtual virtual public A {};   // C2507
class C : virtual public A {};   // OK
```