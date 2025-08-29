---
description: "Learn more about: Compiler Warning (level 4, error) C4400"
title: "Compiler warning (level 4, error) C4400"
ms.date: "1/22/2025"
f1_keywords: ["C4400"]
helpviewer_keywords: ["C4400"]
---
# Compiler warning (level 4, error) C4400

> '*type*': `const`/`volatile` qualifiers on this type are not supported

## Remarks

The [`const`](../../cpp/const-cpp.md) and [`volatile`](../../cpp/volatile-cpp.md) qualifiers don't work with common language runtime typed variables.

## Example

The following sample generates C4400.

```cpp
// C4400.cpp
// compile with: /clr /W4
// C4401 expected
using namespace System;
#pragma warning (disable : 4101)
int main() {
   const String^ str;   // C4400
   volatile String^ str2;   // C4400
}
```
