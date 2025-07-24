---
title: "Compiler Error C2287"
description: "Learn more about: Compiler Error C2287"
ms.date: 11/04/2016
f1_keywords: ["C2287"]
helpviewer_keywords: ["C2287"]
---
# Compiler Error C2287

> 'class': inheritance representation: 'representation1' is less general than the required 'representation2'

## Remarks

A class is declared with a simpler representation than required.

## Example

The following example generates C2287:

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
