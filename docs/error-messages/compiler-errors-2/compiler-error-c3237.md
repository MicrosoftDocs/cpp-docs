---
description: "Learn more about: Compiler Error C3237"
title: "Compiler Error C3237"
ms.date: "11/04/2016"
f1_keywords: ["C3237"]
helpviewer_keywords: ["C3237"]
ms.assetid: 690970c8-e13b-4ff3-96e3-5fd93c4d356b
---
# Compiler Error C3237

'generic_class' : a generic class cannot be a custom attribute

Generic classes cannot be user-defined attributes.

## Example

The following sample generates C3237.

```cpp
// C3237.cpp
// compile with: /clr /c
// C3237 expected
using namespace System;

generic <class T>
// Delete the following line to resolve.
[attribute(AttributeTargets::All, AllowMultiple=true)]
public ref class GR {};
```
