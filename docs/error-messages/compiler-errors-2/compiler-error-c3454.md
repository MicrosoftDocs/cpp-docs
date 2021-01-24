---
description: "Learn more about: Compiler Error C3454"
title: "Compiler Error C3454"
ms.date: "11/04/2016"
f1_keywords: ["C3454"]
helpviewer_keywords: ["C3454"]
ms.assetid: dc4e6d57-5b4d-4114-8d6f-22f9ae62925b
---
# Compiler Error C3454

[attribute] not allowed on class declaration

A class must be defined for it to be an attribute.

For more information, see [attribute](../../windows/attributes/attribute.md).

## Example

The following sample generates C3454.

```cpp
// C3454.cpp
// compile with: /clr /c
using namespace System;

[attribute]   // C3454
ref class Attr1;

[attribute]   // OK
ref class Attr2 {};
```
