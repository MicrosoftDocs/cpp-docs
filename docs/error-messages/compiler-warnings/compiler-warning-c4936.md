---
description: "Learn more about: Compiler Warning C4936"
title: "Compiler Warning C4936"
ms.date: "11/04/2016"
f1_keywords: ["C4936"]
helpviewer_keywords: ["C4936"]
ms.assetid: 6676de35-bf1b-4d0b-a70f-b5734130336c
---
# Compiler Warning C4936

> this __declspec is supported only when compiled with /clr or /clr:pure

## Remarks

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

A **`__declspec`** modifier was used but that **`__declspec`** modifier is only valid when compiled with one of the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) options.

For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).

C4936 is always issued as an error.  You can disable C4936 with the [warning](../../preprocessor/warning.md) pragma.

## Example

The following sample generates C4936:

```cpp
// C4936.cpp
// compile with: /c
// #pragma warning (disable : 4936)
__declspec(process) int i;   // C4936
__declspec(appdomain) int j;   // C4936
```
