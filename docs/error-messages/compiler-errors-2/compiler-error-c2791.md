---
title: "Compiler Error C2791"
description: "Learn more about: Compiler Error C2791"
ms.date: 11/04/2016
f1_keywords: ["C2791"]
helpviewer_keywords: ["C2791"]
---
# Compiler Error C2791

> illegal use of 'super': 'class' does not have any base classes

## Remarks

The keyword [super](../../cpp/super.md) was used within the context of a member function of a class that does not have any base classes.

## Example

The following example generates C2791:

```cpp
// C2791.cpp
struct D {
   void mf() {
      __super::mf();   // C2791
   }
};
```
