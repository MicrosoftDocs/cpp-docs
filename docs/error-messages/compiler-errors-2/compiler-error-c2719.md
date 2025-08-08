---
title: "Compiler Error C2719"
description: "Learn more about: Compiler Error C2719"
ms.date: 11/04/2016
f1_keywords: ["C2719"]
helpviewer_keywords: ["C2719"]
---
# Compiler Error C2719

> 'parameter': formal parameter with __declspec(align('#')) won't be aligned

## Remarks

The [align](../../cpp/align-cpp.md) **`__declspec`** modifier is not permitted on function parameters. Function parameter alignment is controlled by the calling convention used. For more information, see [Calling Conventions](../../cpp/calling-conventions.md).

## Example

The following example generates C2719 and shows how to fix it:

```cpp
// C2719.cpp
void func(int __declspec(align(32)) i);   // C2719
// try the following line instead
// void func(int i);
```
