---
description: "Learn more about: Compiler Error C2441"
title: "Compiler Error C2441"
ms.date: "11/04/2016"
f1_keywords: ["C2441"]
helpviewer_keywords: ["C2441"]
ms.assetid: ffbd6573-777a-48dd-892f-5cf4a758dcab
---
# Compiler Error C2441

> '*variable*' : a symbol declared with __declspec(process) must be const in /clr:pure mode

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

By default, variables are per application domain under **/clr:pure**. A variable marked `__declspec(process)` under **/clr:pure** is prone to errors if modified in one application domain and read in another.

Therefore, the compiler enforces per process variables be **`const`** under **/clr:pure**, making them read only in all application domains.

For more information, see [process](../../cpp/process.md) and [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following sample generates C2441.

```cpp
// C2441.cpp
// compile with: /clr:pure /c
__declspec(process) int i;   // C2441
__declspec(process) const int j = 0;   // OK
```
