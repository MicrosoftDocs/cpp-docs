---
title: "Compiler Error C2081"
description: "Learn more about: Compiler Error C2081"
ms.date: 11/04/2016
f1_keywords: ["C2081"]
helpviewer_keywords: ["C2081"]
---
# Compiler Error C2081

> 'identifier' : name in formal parameter list illegal

## Remarks

The identifier caused a syntax error.

This error can be caused by using the old style for the formal parameter list. You must specify the type of formal parameters in the formal parameter list.

## Example

The following example generates C2081:

```c
// C2081.c
void func( int i, j ) {}  // C2081, no type specified for j
```

Possible resolution:

```c
// C2081b.c
// compile with: /c
void func( int i, int j ) {}
```
