---
title: "Compiler Warning (level 1 and level 3) C4359"
description: "Learn more about: Compiler Warning (level 1 and level 3) C4359"
ms.date: 11/04/2016
f1_keywords: ["C4359"]
helpviewer_keywords: ["C4359"]
---
# Compiler Warning (level 1 and level 3) C4359

> 'type': actual alignment (8) is greater than the value specified in __declspec(align())

## Remarks

The alignment specified for a type is less than the alignment of the type of one of its data members. For more information, see [align](../../cpp/align-cpp.md).

## Example

The following example generates C4359.

```cpp
// C4359.cpp
// compile with: /W3 /c
struct __declspec(align(8)) C8 { __int64 i; };
struct __declspec(align(4)) C4  { C8 m8; };   // C4359
struct __declspec(align(8)) C8_b  { C8 m8; };   // OK
struct __declspec(align(16)) C16  { C8 m8; };   // OK
```
