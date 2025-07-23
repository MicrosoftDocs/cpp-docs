---
title: "Compiler Error C2345"
description: "Learn more about: Compiler Error C2345"
ms.date: 11/04/2016
f1_keywords: ["C2345"]
helpviewer_keywords: ["C2345"]
---
# Compiler Error C2345

> align(value) : illegal alignment value

## Remarks

You passed a value to the [align](../../cpp/align-cpp.md) keyword that is outside the allowable range.

## Example

The following example generates C2345:

```cpp
// C2345.cpp
// compile with: /c
__declspec(align(8)) int a;   // OK
__declspec(align(16384)) int b;   // C2345
```
