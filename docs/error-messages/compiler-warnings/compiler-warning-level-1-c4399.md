---
title: "Compiler Warning (level 1, Error) C4399"
description: "Learn more about: Compiler Warning (level 1, Error) C4399"
ms.date: 11/04/2016
f1_keywords: ["C4399"]
helpviewer_keywords: ["C4399"]
---
# Compiler Warning (level 1, Error) C4399

> '*symbol*' : per-process symbol should not be marked with __declspec(dllimport) when compiled with /clr:pure

## Remarks

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

Data from a native image or an image with native and common language runtime (CLR) constructs can't be imported into a pure image. To resolve this warning, compile with **/clr** (not **/clr:pure**) or delete `__declspec(dllimport)`.

This warning can be issued as an error. Use the [warning](../../preprocessor/warning.md) pragma to disable or change the warning level.

## Example

The following example generates C4399.

```cpp
// C4399.cpp
// compile with: /clr:pure /doc /W1 /c
__declspec(dllimport) __declspec(process) extern const int i;   // C4399
```
