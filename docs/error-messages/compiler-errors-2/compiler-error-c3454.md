---
title: "Compiler Error C3454"
description: "Learn more about: Compiler Error C3454"
ms.date: 11/04/2016
f1_keywords: ["C3454"]
helpviewer_keywords: ["C3454"]
---
# Compiler Error C3454

> [attribute] not allowed on class declaration

## Remarks

A class must be defined for it to be an attribute.

For more information, see [attribute](../../windows/attributes/attribute.md).

## Example

The following example generates C3454.

```cpp
// C3454.cpp
// compile with: /clr /c
using namespace System;

[attribute]   // C3454
ref class Attr1;

[attribute]   // OK
ref class Attr2 {};
```
