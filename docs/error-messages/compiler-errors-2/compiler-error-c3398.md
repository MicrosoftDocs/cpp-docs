---
description: "Learn more about: Compiler Error C3398"
title: "Compiler Error C3398"
ms.date: "11/04/2016"
f1_keywords: ["C3398"]
helpviewer_keywords: ["C3398"]
ms.assetid: 26f8c8a4-526f-415b-8047-155c5cd4f180
---
# Compiler Error C3398

'operator' : cannot convert from 'function_signature' to 'function_pointer'. Source expression must be a function symbol

When the [__clrcall](../../cpp/clrcall.md) calling convention is not specified when compiling with **/clr**, the compiler generates two entry points (addresses) for each function, a native entry point and a managed entry point.

By default the compiler returns the native entry point, but there are some cases where the managed entry point is desired (for instance when assigning the address to a `__clrcall` function pointer). In order for the compiler to reliably choose the managed entry point in an assignment, the right hand side must be a function symbol.
