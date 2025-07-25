---
title: "Compiler Error C2386"
description: "Learn more about: Compiler Error C2386"
ms.date: 11/04/2016
f1_keywords: ["C2386"]
helpviewer_keywords: ["C2386"]
---
# Compiler Error C2386

> 'symbol' : a symbol with this name already exists in the current scope

## Remarks

You tried to create a namespace alias, but the name you chose already exists.

## Example

The following example generates C2386:

```cpp
// C2386.cpp
namespace A {
   int k;
}

int i;
namespace i = A;   // C2386, i already exists
```
