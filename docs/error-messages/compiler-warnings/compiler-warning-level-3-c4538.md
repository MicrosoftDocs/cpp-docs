---
title: "Compiler Warning (level 3) C4538"
description: "Learn more about: Compiler Warning (level 3) C4538"
ms.date: 11/04/2016
f1_keywords: ["C4538"]
helpviewer_keywords: ["C4538"]
---
# Compiler Warning (level 3) C4538

> 'type' : const/volatile qualifiers on this type are not supported

## Remarks

A qualifier keyword was applied to an array incorrectly. For more information, see [array](../../extensions/arrays-cpp-component-extensions.md).

## Example

The following example generates C4538:

```cpp
// C4538.cpp
// compile with: /clr /W3 /LD
const array<int> ^f1();   // C4538
array<const int> ^f2();   // OK
```
