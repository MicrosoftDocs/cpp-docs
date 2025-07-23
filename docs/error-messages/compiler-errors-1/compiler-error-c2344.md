---
title: "Compiler Error C2344"
description: "Learn more about: Compiler Error C2344"
ms.date: 11/04/2016
f1_keywords: ["C2344"]
helpviewer_keywords: ["C2344"]
---
# Compiler Error C2344

> align(#) : alignment must be power of two

## Remarks

When using the [align](../../cpp/align-cpp.md) keyword, the value you pass must be a power of two.

## Example

For example, the following code generates C2344 because 3 is not a power of two:

```cpp
// C2344.cpp
// compile with: /c
__declspec(align(3)) int a;   // C2344
__declspec(align(4)) int b;   // OK
```
