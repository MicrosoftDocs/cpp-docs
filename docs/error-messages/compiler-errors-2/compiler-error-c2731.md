---
description: "Learn more about: Compiler Error C2731"
title: "Compiler Error C2731"
ms.date: "11/04/2016"
f1_keywords: ["C2731"]
helpviewer_keywords: ["C2731"]
ms.assetid: 9b563999-febd-4582-9147-f355083c091e
---
# Compiler Error C2731

'identifier' : function cannot be overloaded

The functions `main`, `WinMain`, `DllMain`, and `LibMain` cannot be overloaded.

The following sample generates C2731:

```cpp
// C2731.cpp
extern "C" void WinMain(int, char *, char *);
void WinMain(int, short, char *, char*);   // C2731
```
