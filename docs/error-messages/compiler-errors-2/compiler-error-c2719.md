---
description: "Learn more about: Compiler Error C2719"
title: "Compiler Error C2719"
ms.date: "11/04/2016"
f1_keywords: ["C2719"]
helpviewer_keywords: ["C2719"]
ms.assetid: ea6236d3-8286-45cc-9478-c84ad3dd3c8e
---
# Compiler Error C2719

'parameter': formal parameter with __declspec(align('#')) won't be aligned

The [align](../../cpp/align-cpp.md) **`__declspec`** modifier is not permitted on function parameters. Function parameter alignment is controlled by the calling convention used. For more information, see [Calling Conventions](../../cpp/calling-conventions.md).

The following sample generates C2719 and shows how to fix it:

```cpp
// C2719.cpp
void func(int __declspec(align(32)) i);   // C2719
// try the following line instead
// void func(int i);
```
