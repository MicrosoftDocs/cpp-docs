---
description: "Learn more about: Compiler Error C2287"
title: "Compiler Error C2287"
ms.date: "11/04/2016"
f1_keywords: ["C2287"]
helpviewer_keywords: ["C2287"]
ms.assetid: 64556299-4e1f-4437-88b7-2464fc0b95bb
---
# Compiler Error C2287

'class': inheritance representation: 'representation1' is less general than the required 'representation2'

A class is declared with a simpler representation than required.

The following sample generates C2287:

```cpp
// C2287.cpp
// compile with: /vmg /c
class __single_inheritance X;
class __single_inheritance Y;

struct A { };
struct B { };
struct X : A, B { };  // C2287  X uses multiple inheritance
struct Y : A { };  // OK
```
