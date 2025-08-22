---
title: "Compiler Error C2289"
description: "Learn more about: Compiler Error C2289"
ms.date: 11/04/2016
f1_keywords: ["C2289"]
helpviewer_keywords: ["C2289"]
---
# Compiler Error C2289

> same type qualifier used more than once

## Remarks

A type declaration or definition uses a type qualifier (**`const`**, **`volatile`**, **`signed`**, or **`unsigned`**) more than once, causing an error under ANSI compatibility (**/Za**).

## Example

The following example generates C2286:

```cpp
// C2289.cpp
// compile with: /Za /c
volatile volatile int i;   // C2289
volatile int j;   // OK
```
