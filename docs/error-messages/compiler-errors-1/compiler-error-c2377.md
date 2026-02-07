---
title: "Compiler Error C2377"
description: "Learn more about: Compiler Error C2377"
ms.date: 11/04/2016
f1_keywords: ["C2377"]
helpviewer_keywords: ["C2377"]
---
# Compiler Error C2377

> 'identifier' : redefinition; typedef cannot be overloaded with any other symbol

## Remarks

A **`typedef`** identifier is redefined.

## Example

The following example generates C2377:

```cpp
// C2377.cpp
// compile with: /c
typedef int i;
int i;   // C2377
int j;   // OK
```
