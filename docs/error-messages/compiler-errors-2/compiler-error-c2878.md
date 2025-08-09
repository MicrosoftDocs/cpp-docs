---
title: "Compiler Error C2878"
description: "Learn more about: Compiler Error C2878"
ms.date: 11/04/2016
f1_keywords: ["C2878"]
helpviewer_keywords: ["C2878"]
---
# Compiler Error C2878

> 'name' : a namespace or class of this name does not exist

## Remarks

You made reference to a namespace or class that is not defined.

## Example

The following example generates C2878:

```cpp
// C2878.cpp
// compile with: /c
namespace A {}
namespace B = C;   // C2878 namespace C doesn't exist
namespace B = A;
```
