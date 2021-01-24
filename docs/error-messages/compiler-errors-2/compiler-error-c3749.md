---
description: "Learn more about: Compiler Error C3749"
title: "Compiler Error C3749"
ms.date: "11/04/2016"
f1_keywords: ["C3749"]
helpviewer_keywords: ["C3749"]
ms.assetid: 3d26b468-4757-41b8-b5a2-78022a5295fb
---
# Compiler Error C3749

'attribute': a custom attribute may not be used inside a function

A custom attribute cannot be used inside a function. For more information on custom attributes, see the topic [attribute](../../windows/attributes/attribute.md).

## Example

The following sample generates C3749:

```cpp
// C3749a.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::All)]
public ref struct ABC : public Attribute {
   ABC() {}
};

void f1() { [ABC]; };  // C3749
```
