---
title: "Compiler Warning (level 1) C4810"
description: "Learn more about: Compiler Warning (level 1) C4810"
ms.date: 11/04/2016
f1_keywords: ["C4810"]
helpviewer_keywords: ["C4810"]
---
# Compiler Warning (level 1) C4810

> value of pragma pack(show) == n

## Remarks

This warning is issued when you use the **show** option of the [pack](../../preprocessor/pack.md) pragma. *n* is the current pack value.

## Example

For example, the following code shows how the C4810 warning works with the pack pragma:

```cpp
// C4810.cpp
// compile with: /W1 /LD
// C4810 expected
#pragma pack(show)
#pragma pack(4)
#pragma pack(show)
```
