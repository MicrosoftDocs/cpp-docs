---
title: "Compiler Error C2370"
description: "Learn more about: Compiler Error C2370"
ms.date: 11/04/2016
f1_keywords: ["C2370"]
helpviewer_keywords: ["C2370"]
---
# Compiler Error C2370

> 'identifier' : redefinition; different storage class

## Remarks

The identifier is already declared with a different storage class.

## Examples

The following example generates C2370:

```cpp
// C2370.cpp
// compile with: /Za /c
extern int i;
static int i;   // C2370
int i;   // OK
```

The following example generates C2370:

```cpp
// C2370b.cpp
#define Thread __declspec( thread )
extern int tls_i;
int Thread tls_i;   // C2370 declaration and the definition differ
int tls_i;   // OK
```
