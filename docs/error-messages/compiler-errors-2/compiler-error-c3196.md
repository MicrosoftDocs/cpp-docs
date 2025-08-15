---
title: "Compiler Error C3196"
description: "Learn more about: Compiler Error C3196"
ms.date: 11/04/2016
f1_keywords: ["C3196"]
helpviewer_keywords: ["C3196"]
---
# Compiler Error C3196

> 'keyword' : used more than once

## Remarks

A keyword was used more than once.

## Example

The following example generates C3196:

```cpp
// C3196.cpp
// compile with: /clr
ref struct R abstract abstract {};   // C3196
ref struct S abstract {};   // OK
```
