---
title: "Compiler Warning (level 1) C4114"
description: "Learn more about: Compiler Warning (level 1) C4114"
ms.date: 11/04/2016
f1_keywords: ["C4114"]
helpviewer_keywords: ["C4114"]
---
# Compiler Warning (level 1) C4114

> same type qualifier used more than once

## Remarks

A type declaration or definition uses a type qualifier (**`const`**, **`volatile`**, **`signed`**, or **`unsigned`**) more than once. This causes a warning with Microsoft extensions (/Ze) and an error under ANSI compatibility (/Za).

## Examples

The following example generates C4114:

```cpp
// C4114.cpp
// compile with: /W1 /c
volatile volatile int i;   // C4114
```

The following example generates C4114:

```cpp
// C4114_b.cpp
// compile with: /W1 /c
static const int const * ii;   // C4114
static const int * const iii;   // OK
```
