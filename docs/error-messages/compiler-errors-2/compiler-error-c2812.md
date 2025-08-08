---
title: "Compiler Error C2812"
description: "Learn more about: Compiler Error C2812"
ms.date: 11/04/2016
f1_keywords: ["C2812"]
helpviewer_keywords: ["C2812"]
---
# Compiler Error C2812

> #import is not supported with /clr:pure and /clr:safe

## Remarks

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

[#import Directive](../../preprocessor/hash-import-directive-cpp.md) is not supported with **/clr:pure** and **/clr:safe** because `#import` requires the use of native compiler support libraries.

## Example

The following example generates C2812.

```cpp
// C2812.cpp
// compile with: /clr:pure /c
#import "importlib.tlb"   // C2812
```
