---
description: "Learn more about: Compiler Warning C4687"
title: "Compiler Warning C4687"
ms.date: "11/04/2016"
f1_keywords: ["C4687"]
helpviewer_keywords: ["C4687"]
ms.assetid: 2f28e0b1-7358-4c88-bd70-aad8f0aa004c
---
# Compiler Warning C4687

> '*class*': a sealed abstract class cannot implement an interface '*interface*'

## Remarks

A sealed, abstract type is typically only useful to hold static member functions.

For more information, see [abstract](../../extensions/abstract-cpp-component-extensions.md) and [sealed](../../extensions/sealed-cpp-component-extensions.md).

C4687 is issued as an error by default. You can suppress C4687 with the [warning](../../preprocessor/warning.md) pragma. If you are certain that you want to implement an interface in a sealed, abstract type, you can suppress C4687.

## Example

The following sample generates C4687.

```cpp
// C4687.cpp
// compile with: /clr /c
interface class A {};

ref struct B sealed abstract : A {};   // C4687
ref struct C sealed : A {};   // OK
ref struct D abstract : A {};   // OK
```
