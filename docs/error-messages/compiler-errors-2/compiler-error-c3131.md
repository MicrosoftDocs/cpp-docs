---
title: "Compiler Error C3131"
description: "Learn more about: Compiler Error C3131"
ms.date: 11/04/2016
f1_keywords: ["C3131"]
helpviewer_keywords: ["C3131"]
---
# Compiler Error C3131

> project must have a 'module' attribute with a 'name' property

## Remarks

The [module](../../windows/attributes/module-cpp.md) attribute must have a name parameter.

## Example

The following example generates C3131:

```cpp
// C3131.cpp
[emitidl];
[module];   // C3131
// try the following line instead
// [module (name="MyLib")];

[public]
typedef long int LongInt;
```
