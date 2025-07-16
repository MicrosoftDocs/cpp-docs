---
title: "Compiler Error C2150"
description: "Learn more about: Compiler Error C2150"
ms.date: 11/04/2016
f1_keywords: ["C2150"]
helpviewer_keywords: ["C2150"]
---
# Compiler Error C2150

> '*identifier*' : bit field must have type 'int', 'signed int', or 'unsigned int'

## Remarks

The base type for a bit-field is required to be **`int`**, **`signed int`**, or **`unsigned int`**.

## Example

This example shows how you might encounter C2150, and how you can fix it:

```cpp
// C2150.cpp
// compile with: /c
struct A {
   float a : 8;    // C2150
   int i : 8;      // OK
};
```
