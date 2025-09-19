---
title: "Compiler Error C3769"
description: "Learn more about: Compiler Error C3769"
ms.date: 11/04/2016
f1_keywords: ["C3769"]
helpviewer_keywords: ["C3769"]
---
# Compiler Error C3769

> 'type' : a nested class cannot have the same name as the immediately enclosing class

## Remarks

A nested class cannot have the same name as the immediately enclosing class.

## Example

The following example generates C3769.

```cpp
// C3769.cpp
// compile with: /c
class x {
   class x {};   // C3769
   class y {
      class x{};   // OK
   };
};
```
