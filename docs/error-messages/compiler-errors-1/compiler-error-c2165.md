---
description: "Learn more about: Compiler Error C2165"
title: "Compiler Error C2165"
ms.date: "11/04/2016"
f1_keywords: ["C2165"]
helpviewer_keywords: ["C2165"]
ms.assetid: b108313b-b8cb-4dce-b2ec-f2b31c9cdc87
---
# Compiler Error C2165

'keyword' : cannot modify pointers to data

The **`__stdcall`**, **`__cdecl`**, or **`__fastcall`** keyword attempts to modify a pointer to data.

The following sample generates C2165:

```cpp
// C2165.cpp
// compile with: /c
char __cdecl *p;   // C2165
char *p;   // OK
```
