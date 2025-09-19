---
title: "Compiler Error C3641"
description: "Learn more about: Compiler Error C3641"
ms.date: 11/04/2016
f1_keywords: ["C3641"]
helpviewer_keywords: ["C3641"]
---
# Compiler Error C3641

> '*function*' : invalid calling convention 'calling_convention' for function compiled with /clr:pure or /clr:safe

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Only [__clrcall](../../cpp/clrcall.md) calling convention is allowed with [/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following example generates C3641:

```cpp
// C3641.cpp
// compile with: /clr:pure /c
void __cdecl f() {}   // C3641
```
