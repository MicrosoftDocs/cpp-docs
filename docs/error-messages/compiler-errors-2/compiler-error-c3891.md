---
title: "Compiler Error C3891"
description: "Learn more about: Compiler Error C3891"
ms.date: 11/04/2016
f1_keywords: ["C3891"]
helpviewer_keywords: ["C3891"]
---
# Compiler Error C3891

> 'var' : a literal data member cannot be used as a l-value

## Remarks

A [literal](../../extensions/literal-cpp-component-extensions.md) variable is const, and its value cannot be changed after it is initialized in the declaration.

## Example

The following example generates C3891:

```cpp
// C3891.cpp
// compile with: /clr
ref struct Y1 {
   literal int staticConst = 9;
};

int main() {
   Y1::staticConst = 0;   // C3891
}
```
