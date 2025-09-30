---
title: "Compiler Error C3895"
description: "Learn more about: Compiler Error C3895"
ms.date: 11/04/2016
f1_keywords: ["C3895"]
helpviewer_keywords: ["C3895"]
---
# Compiler Error C3895

> 'var' : type data members cannot be 'volatile'

## Remarks

Certain kinds of data members, for example [literal](../../extensions/literal-cpp-component-extensions.md) or [initonly](../../dotnet/initonly-cpp-cli.md), cannot be [volatile](../../cpp/volatile-cpp.md).

## Example

The following example generates C3895:

```cpp
// C3895.cpp
// compile with: /clr
ref struct Y1 {
   initonly
   volatile int data_var2;   // C3895
};
```
