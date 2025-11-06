---
title: "Compiler Error C2809"
description: "Learn more about: Compiler Error C2809"
ms.date: 11/04/2016
f1_keywords: ["C2809"]
helpviewer_keywords: ["C2809"]
---
# Compiler Error C2809

> 'operator operator' has no formal parameters

## Remarks

The operator lacks required parameters.

## Example

The following example generates C2809:

```cpp
// C2809.cpp
// compile with: /c
class A{};
int operator+ ();   // C2809
int operator+ (A);   // OK
```
