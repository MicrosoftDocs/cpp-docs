---
title: "Compiler Error C2850"
description: "Learn more about: Compiler Error C2850"
ms.date: 11/04/2016
f1_keywords: ["C2850"]
helpviewer_keywords: ["C2850"]
---
# Compiler Error C2850

> 'construct' : only allowed at file scope; may not be in a nested construct

## Remarks

Constructs, such as some pragmas, can only appear at global scope.

## Example

The following example generates C2850:

```cpp
// C2850.cpp
// compile with: /c /Yc
// try the following line instead
// #pragma hdrstop
namespace X {
   #pragma hdrstop   // C2850
};
```
