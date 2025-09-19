---
title: "Compiler Warning (level 3) C4646"
description: "Learn more about: Compiler Warning (level 3) C4646"
ms.date: 11/04/2016
f1_keywords: ["C4646"]
helpviewer_keywords: ["C4646"]
---
# Compiler Warning (level 3) C4646

> function declared with __declspec(noreturn) has non-void return type

## Remarks

A function marked with the [noreturn](../../cpp/noreturn.md) **`__declspec`** modifier should have a [void](../../cpp/void-cpp.md) return type.

## Example

The following example generates C4646:

```cpp
// C4646.cpp
// compile with: /W3 /WX
int __declspec(noreturn) TestFunction()
{   // C4646  make return type void
}
```
