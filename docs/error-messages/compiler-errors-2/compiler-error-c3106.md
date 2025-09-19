---
title: "Compiler Error C3106"
description: "Learn more about: Compiler Error C3106"
ms.date: 11/04/2016
f1_keywords: ["C3106"]
helpviewer_keywords: ["C3106"]
---
# Compiler Error C3106

> 'attribute': unnamed arguments must precede named arguments

## Remarks

Unnamed arguments must be passed to an attribute before named arguments.

For more information, see [User-Defined Attributes](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## Example

The following example generates C3106.

```cpp
// C3106.cpp
// compile with: /c
[module(name="MyLib", dll)];   // C3106
[module(dll, name="MyLib")];   // OK
```
