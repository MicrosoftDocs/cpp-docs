---
title: "Compiler Error C2734"
description: "Learn more about: Compiler Error C2734"
ms.date: 11/04/2016
f1_keywords: ["C2734"]
helpviewer_keywords: ["C2734"]
---
# Compiler Error C2734

> 'identifier' : const object must be initialized if not extern

## Remarks

The identifier is declared **`const`** but not initialized or **`extern`**.

## Example

The following example generates C2734:

```cpp
// C2734.cpp
const int j;   // C2734
extern const int i;   // OK, declared as extern
```
