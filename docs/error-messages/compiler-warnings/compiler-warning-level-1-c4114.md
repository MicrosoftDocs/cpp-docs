---
description: "Learn more about: Compiler Warning (level 1) C4114"
title: "Compiler Warning (level 1) C4114"
ms.date: "11/04/2016"
f1_keywords: ["C4114"]
helpviewer_keywords: ["C4114"]
ms.assetid: 3983e1c6-e8bb-46dc-8894-e1827db48797
---
# Compiler Warning (level 1) C4114

same type qualifier used more than once

A type declaration or definition uses a type qualifier (**`const`**, **`volatile`**, **`signed`**, or **`unsigned`**) more than once. This causes a warning with Microsoft extensions (/Ze) and an error under ANSI compatibility (/Za).

The following sample generates C4114:

```cpp
// C4114.cpp
// compile with: /W1 /c
volatile volatile int i;   // C4114
```

The following sample generates C4114:

```cpp
// C4114_b.cpp
// compile with: /W1 /c
static const int const * ii;   // C4114
static const int * const iii;   // OK
```
