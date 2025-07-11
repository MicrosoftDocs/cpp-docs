---
title: "Compiler error C2055"
description: "Learn more about: Microsoft Visual C++ compiler error C2055"
ms.date: 06/10/2024
f1_keywords: ["C2055"]
helpviewer_keywords: ["C2055"]
---
# Compiler error C2055

> expected formal parameter list, not a type list

## Remarks

A function definition contains a parameter type list instead of a formal parameter list. ANSI C requires formal parameters to be named unless they're `void` or an ellipsis (`...`).

An example of a named formal parameter is the `int i` in `void func(int i)`.\
A parameter type list is a list of types, for example, `int, char`.

## Example

The following code generates error `C2055`:

```c
// C2055.c
// compile with: /c
void func(int, char) {}  // C2055
void func (int i, char c) {} // OK
```
