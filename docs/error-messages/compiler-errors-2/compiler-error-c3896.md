---
title: "Compiler Error C3896"
description: "Learn more about: Compiler Error C3896"
ms.date: 11/04/2016
f1_keywords: ["C3896"]
helpviewer_keywords: ["C3896"]
---
# Compiler Error C3896

> 'member' : improper initializer: this literal data member can only be initialized with 'nullptr'

## Remarks

A [literal](../../extensions/literal-cpp-component-extensions.md) data member was initialized incorrectly.  See [nullptr](../../extensions/nullptr-cpp-component-extensions.md) for more information.

## Example

The following example generates C3896:

```cpp
// C3896.cpp
// compile with: /clr /c
ref class R{};

value class V {
   literal R ^ r = "test";   // C3896
   literal R ^ r2 = nullptr;   // OK
};
```
