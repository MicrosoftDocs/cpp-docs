---
description: "Learn more about: Compiler Error C3179"
title: "Compiler Error C3179"
ms.date: "11/04/2016"
f1_keywords: ["C3179"]
helpviewer_keywords: ["C3179"]
ms.assetid: 60d7e41b-25fd-48ac-8b79-830c062f4dcd
---
# Compiler Error C3179

an unnamed managed or WinRT type is not allowed

All CLR and WinRT classes and structs must have names.

The following sample generates C3179 and shows how to fix it:

```cpp
// C3179a.cpp
// compile with: /clr /c
typedef value struct { // C3179
// try the following line instead
// typedef value struct MyStruct {
   int i;
} V;
```
