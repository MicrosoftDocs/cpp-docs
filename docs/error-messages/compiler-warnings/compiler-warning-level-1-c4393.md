---
title: "Compiler Warning (level 1) C4393"
description: "Learn more about: Compiler Warning (level 1) C4393"
ms.date: 11/04/2016
f1_keywords: ["C4393"]
helpviewer_keywords: ["C4393"]
---
# Compiler Warning (level 1) C4393

> 'var' : const has no effect on literal data member; ignored

## Remarks

A [literal](../../extensions/literal-cpp-component-extensions.md) data member was also specified as const.  Since a literal data member implies const, you do not need to add const to the declaration.

## Example

The following example generates C4393:

```cpp
// C4393.cpp
// compile with: /clr /W1 /c
ref struct Y1 {
   literal const int staticConst = 10;   // C4393
   literal int staticConst2 = 10;   // OK
};
```
