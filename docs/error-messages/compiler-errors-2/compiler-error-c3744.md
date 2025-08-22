---
title: "Compiler Error C3744"
description: "Learn more about: Compiler Error C3744"
ms.date: 11/04/2016
f1_keywords: ["C3744"]
helpviewer_keywords: ["C3744"]
---
# Compiler Error C3744

> __unhook must have at least 3 arguments for managed events

## Remarks

The [`__unhook`](../../cpp/unhook.md) function must take three parameters when used in a program that is compiled for Managed Extensions for C++.

**`__hook`** and **`__unhook`** are not compatible with **`/clr`** programming. Use the += and -= operators instead.

C3744 is only reachable using the obsolete compiler option **`/clr:oldSyntax`**.
