---
title: "Compiler Error C3395"
description: "Learn more about: Compiler Error C3395"
ms.date: 11/04/2016
f1_keywords: ["C3395"]
helpviewer_keywords: ["C3395"]
---
# Compiler Error C3395

> 'function' : __declspec(dllexport) cannot be applied to a function with the \__clrcall calling convention

## Remarks

`__declspec(dllexport)` and [__clrcall](../../cpp/clrcall.md) are not compatible.  For more information, see [dllexport, dllimport](../../cpp/dllexport-dllimport.md).

## Example

The following example generates C3395:

```cpp
// C3395.cpp
// compile with: /clr /c

__declspec(dllexport) void __clrcall Test(){}   // C3395
void __clrcall Test2(){}   // OK
__declspec(dllexport) void Test3(){}   // OK
```
