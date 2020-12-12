---
description: "Learn more about: Compiler Error C2345"
title: "Compiler Error C2345"
ms.date: "11/04/2016"
f1_keywords: ["C2345"]
helpviewer_keywords: ["C2345"]
ms.assetid: e1cc88b0-0223-4d07-975b-fa99956a82bd
---
# Compiler Error C2345

align(value) : illegal alignment value

You passed a value to the [align](../../cpp/align-cpp.md) keyword that is outside the allowable range.

The following code generates C2345

```cpp
// C2345.cpp
// compile with: /c
__declspec(align(0)) int a;   // C2345
__declspec(align(1)) int a;   // OK
```
