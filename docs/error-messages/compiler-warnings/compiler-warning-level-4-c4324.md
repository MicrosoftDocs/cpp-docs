---
title: "Compiler Warning (level 4) C4324"
description: "Learn more about: Compiler Warning (level 4) C4324"
ms.date: 07/22/2025
f1_keywords: ["C4324"]
helpviewer_keywords: ["C4324"]
---
# Compiler Warning (level 4) C4324

> '*type*': structure was padded due to alignment specifier

## Remarks

Padding was added at the end of a class/struct/union because you specified an alignment specifier, such as [`alignas`](../../cpp/alignas-specifier.md) or [`__declspec(align)`](../../cpp/align-cpp.md).

## Example

For example, `S1` and `S2` generates C4324 because padding is added when the specified alignment is greater than the default alignment of `1` and `4` respectively:

```cpp
// C4324.cpp
// compile with: /W4 /c

struct alignas(4) S1 {};   // C4324

struct alignas(8) S2
{
    int i;
};   // C4324

struct alignas(4) S3
{
    int i;
};   // OK
```
