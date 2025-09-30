---
title: "Compiler Error C2165"
description: "Learn more about: Compiler Error C2165"
ms.date: 11/04/2016
f1_keywords: ["C2165"]
helpviewer_keywords: ["C2165"]
---
# Compiler Error C2165

> 'keyword' : cannot modify pointers to data

## Remarks

The **`__stdcall`**, **`__cdecl`**, or **`__fastcall`** keyword attempts to modify a pointer to data.

## Example

The following example generates C2165:

```cpp
// C2165.cpp
// compile with: /c
char __cdecl *p;   // C2165
char *p;   // OK
```
