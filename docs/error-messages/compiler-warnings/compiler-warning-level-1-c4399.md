---
description: "Learn more about: Compiler Warning (level 1) C4399"
title: "Compiler Warning (level 1) C4399"
ms.date: "11/04/2016"
f1_keywords: ["C4399"]
helpviewer_keywords: ["C4399"]
ms.assetid: f58d9ba7-71a0-4c3b-b26f-f946dda8af30
---
# Compiler Warning (level 1) C4399

> '*symbol*' : per-process symbol should not be marked with __declspec(dllimport) when compiled with /clr:pure

## Remarks

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Data from a native image or an image with native and CLR constructs can not be imported into a pure image. To resolve this warning, compile with **/clr** (not **/clr:pure**) or delete `__declspec(dllimport)`.

## Example

The following sample generates C4399.

```cpp
// C4399.cpp
// compile with: /clr:pure /doc /W1 /c
__declspec(dllimport) __declspec(process) extern const int i;   // C4399
```
