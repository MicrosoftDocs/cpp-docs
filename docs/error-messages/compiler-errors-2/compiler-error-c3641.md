---
title: "Compiler Error C3641 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3641"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3641"]
ms.assetid: e8d3613e-5e8d-46fe-a516-eb7d1de7cd21
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3641

> '*function*' : invalid calling convention 'calling_convention' for function compiled with /clr:pure or /clr:safe

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Only [__clrcall](../../cpp/clrcall.md) calling convention is allowed with [/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following sample generates C3641:

```cpp
// C3641.cpp
// compile with: /clr:pure /c
void __cdecl f() {}   // C3641
```