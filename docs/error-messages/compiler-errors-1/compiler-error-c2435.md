---
description: "Learn more about: Compiler Error C2435"
title: "Compiler Error C2435"
ms.date: "11/04/2016"
f1_keywords: ["C2435"]
helpviewer_keywords: ["C2435"]
ms.assetid: be6aa8f8-579b-42ea-bdd8-2d01393646ad
---
# Compiler Error C2435

> '*var*' : dynamic initialization requires managed CRT, cannot compile with /clr:safe

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Initialization of global per-application domain variable requires the CRT compiled with `/clr:pure`, which does not produce a verifiable image.

For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).

## Example

The following sample generates C2435:

```cpp
// C2435.cpp
// compile with: /clr:safe /c
int globalvar = 0;   // C2435

__declspec(process)
int globalvar2 = 0;
```
