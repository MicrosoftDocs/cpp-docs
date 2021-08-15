---
description: "Learn more about: Compiler Error C3389"
title: "Compiler Error C3389"
ms.date: "11/04/2016"
f1_keywords: ["C3389"]
helpviewer_keywords: ["C3389"]
ms.assetid: eaaffe17-23f2-413c-b1ad-f7220cfa1334
---
# Compiler Error C3389

> __declspec(*keyword*) cannot be used with /clr:pure or /clr:safe

## Remarks

The **`/clr:pure`** and **`/clr:safe`** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

A [`__declspec`](../../cpp/declspec.md) modifier used implies a per-process state.  [`/clr:pure`](../../build/reference/clr-common-language-runtime-compilation.md) implies a per-[`appdomain`](../../cpp/appdomain.md) state.  So, declaring a variable with the *keyword* **`__declspec`** modifier and compiling with **`/clr:pure`** isn't allowed.

## Example

The following sample generates C3389:

```cpp
// C3389.cpp
// compile with: /clr:pure /c
__declspec(dllexport) int g2 = 0;   // C3389
```
