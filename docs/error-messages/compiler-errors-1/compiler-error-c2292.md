---
description: "Learn more about: Compiler Error C2292"
title: "Compiler Error C2292"
ms.date: "11/04/2016"
f1_keywords: ["C2292"]
helpviewer_keywords: ["C2292"]
ms.assetid: 256b392f-2b8f-4162-b578-e7633984e162
---
# Compiler Error C2292

'identifier': best case inheritance representation: 'representation1' declared but 'representation2' required

Compiling the following code with [/vmb](../../build/reference/vmb-vmg-representation-method.md) ("Best-case always" representation) causes C2292.

```cpp
// C2292.cpp
// compile with: /vmb
class __single_inheritance X;

struct A { };
struct B { };
struct X : A, B { };  // C2292, X uses multiple inheritance
```
