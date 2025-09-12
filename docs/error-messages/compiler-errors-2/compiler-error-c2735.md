---
title: "Compiler Error C2735"
description: "Learn more about: Compiler Error C2735"
ms.date: 11/04/2016
f1_keywords: ["C2735"]
helpviewer_keywords: ["C2735"]
---
# Compiler Error C2735

> '*keyword*' keyword is not permitted in formal parameter type specifier

## Remarks

The keyword is invalid in this context.

## Example

The following example generates C2735:

```cpp
// C2735.cpp
void f(inline int){}   // C2735
```
