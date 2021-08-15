---
description: "Learn more about: Compiler Error C2150"
title: "Compiler Error C2150"
ms.date: "11/04/2016"
f1_keywords: ["C2150"]
helpviewer_keywords: ["C2150"]
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
---
# Compiler Error C2150

> '*identifier*' : bit field must have type 'int', 'signed int', or 'unsigned int'

The base type for a bit-field is required to be **`int`**, **`signed int`**, or **`unsigned int`**.

## Example

This sample shows how you might encounter C2150, and how you can fix it:

```cpp
// C2150.cpp
// compile with: /c
struct A {
   float a : 8;    // C2150
   int i : 8;      // OK
};
```
