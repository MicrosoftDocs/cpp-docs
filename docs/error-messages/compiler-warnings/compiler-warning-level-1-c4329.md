---
title: "Compiler Warning (level 1) C4329"
description: "Learn more about: Compiler Warning (level 1) C4329"
ms.date: 11/04/2016
f1_keywords: ["C4329"]
helpviewer_keywords: ["C4329"]
---
# Compiler Warning (level 1) C4329

> alignment specifier is ignored on enum

## Remarks

Use of the alignment specifiers on `enum` isn't allowed. This pattern includes the use of the [`align`](../../cpp/align-cpp.md) [`__declspec`](../../cpp/declspec.md) modifier.

## Example

The following example generates C4329:

```cpp
// C4329.cpp
// compile with: /W1 /LD
enum __declspec(align(256)) TestEnum {   // C4329
   TESTVAL1,
   TESTVAL2,
   TESTVAL3
};
__declspec(align(256)) enum TestEnum1;
```
