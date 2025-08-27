---
title: "__unaligned"
description: "Learn more about: __unaligned"
ms.date: 12/17/2018
f1_keywords: ["__unaligned_cpp", "__unaligned", "_unaligned"]
helpviewer_keywords: ["__unaligned keyword [C++]"]
---
# `__unaligned`

**Microsoft-specific**. When you declare a pointer with the **`__unaligned`** modifier, the compiler assumes that the pointer addresses data that isn't aligned. So, platform-appropriate code is generated to handle unaligned reads and writes through the pointer.

## Remarks

This modifier describes the alignment of the data addressed by the pointer. It is assumed that the pointer itself is aligned.

The necessity for the **`__unaligned`** keyword varies by platform and environment. Failure to mark data appropriately can result in issues ranging from performance penalties to hardware faults. The **`__unaligned`** modifier isn't valid for the x86 platform.

For compatibility with previous versions, **`_unaligned`** is a synonym for **`__unaligned`** unless compiler option [`/Za` \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

For more information about alignment, see:

- [`align`](../cpp/align-cpp.md)
- [`alignof` Operator](../cpp/alignof-operator.md)
- [`pack`](../preprocessor/pack.md)
- [`/Zp` (Struct Member Alignment)](../build/reference/zp-struct-member-alignment.md)
- [x64 structure alignment examples](../build/x64-software-conventions.md#x64-structure-alignment-examples)

## See also

[Keywords](../cpp/keywords-cpp.md)
