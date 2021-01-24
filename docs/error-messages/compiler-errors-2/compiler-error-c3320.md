---
description: "Learn more about: Compiler Error C3320"
title: "Compiler Error C3320"
ms.date: "11/04/2016"
f1_keywords: ["C3320"]
helpviewer_keywords: ["C3320"]
ms.assetid: 2ef72d9a-1f1d-4b2e-b244-9fd3f3e70cb6
---
# Compiler Error C3320

'type': type cannot have the same name as the module 'name' property

An exported user-defined type (UDT), which could be a struct, class, enum, or union, cannot have the same name as the parameter passed to the [module](../../windows/attributes/module-cpp.md) attribute's name property.

## Example

The following sample generates C3320:

```cpp
// C3320.cpp
#include "unknwn.h"
[module(name="xx")];

[export] struct xx {   // C3320
// Try the following line instead
// [export] struct yy {
   int i;
};
```
