---
title: "Compiler Error C2159"
description: "Learn more about: Compiler Error C2159"
ms.date: 11/04/2016
f1_keywords: ["C2159"]
helpviewer_keywords: ["C2159"]
---
# Compiler Error C2159

> more than one storage class specified

## Remarks

A declaration contains more than one storage class.

## Example

The following example generates C2159:

```cpp
// C2159.cpp
// compile with: /c
static int i;   // OK
extern static int i;   // C2159
```
