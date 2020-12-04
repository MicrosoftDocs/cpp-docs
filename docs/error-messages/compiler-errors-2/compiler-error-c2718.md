---
description: "Learn more about: Compiler Error C2718"
title: "Compiler Error C2718"
ms.date: "11/04/2016"
f1_keywords: ["C2718"]
helpviewer_keywords: ["C2718"]
ms.assetid: 78cc71f8-c142-46fc-9aed-970635d74f0c
---
# Compiler Error C2718

'parameter': actual parameter with __declspec(align('#')) won't be aligned

The [align](../../cpp/align-cpp.md) **`__declspec`** modifier is not permitted on function parameters.

The following sample generates C2718:

```cpp
// C2718.cpp
typedef struct __declspec(align(32)) AlignedStruct  {
   int i;
} AlignedStruct;

void f2(int i, ...);

void f4() {
   AlignedStruct as;

   f2(0, as);   // C2718, actual parameter is aligned
}
```
