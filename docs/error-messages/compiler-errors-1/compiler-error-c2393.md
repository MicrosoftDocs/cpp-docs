---
description: "Learn more about: Compiler Error C2393"
title: "Compiler Error C2393"
ms.date: "11/04/2016"
f1_keywords: ["C2393"]
helpviewer_keywords: ["C2393"]
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
---
# Compiler Error C2393

> '*symbol*' : per-appdomain symbol cannot be allocated in segment '*segment*'

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

The use of [appdomain](../../cpp/appdomain.md) variables implies that you are compiling with **/clr:pure** or **/clr:safe**, and a safe or pure image cannot contain data segments.

See [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) for more information.

## Example

The following sample generates C2393. To fix this issue, do not create a data segment.

```cpp
// C2393.cpp
// compile with: /clr:pure /c
#pragma data_seg("myseg")
int n = 0;   // C2393
```
