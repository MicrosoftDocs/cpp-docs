---
description: "Learn more about: Compiler Error C3744"
title: "Compiler Error C3744"
ms.date: "11/04/2016"
f1_keywords: ["C3744"]
helpviewer_keywords: ["C3744"]
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
---
# Compiler Error C3744

__unhook must have at least 3 arguments for managed events

The [`__unhook`](../../cpp/unhook.md) function must take three parameters when used in a program that is compiled for Managed Extensions for C++.

**`__hook`** and **`__unhook`** are not compatible with **`/clr`** programming. Use the += and -= operators instead.

C3744 is only reachable using the obsolete compiler option **`/clr:oldSyntax`**.
