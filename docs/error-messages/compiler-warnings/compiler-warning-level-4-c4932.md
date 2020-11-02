---
title: "Compiler Warning (level 4) C4932"
description: "Describes Microsoft C/C++ compiler warning C4932."
ms.date: 08/25/2020
f1_keywords: ["C4932"]
helpviewer_keywords: ["C4932"]
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
---
# Compiler Warning (level 4) C4932

> `__identifier(identifier_1)` and `__identifier(identifier_2)` are indistinguishable

The compiler is unable to distinguish between **`_finally`** and **`__finally`** or **`__try`** and **`_try`** as a parameter passed to [`__identifier`](../../extensions/identifier-cpp-cli.md). You should not attempt to use them both as identifiers in the same program, as it will result in a [C2374](../../error-messages/compiler-errors-1/compiler-error-c2374.md) error.

The following sample generates C4932:

```cpp
// C4932.cpp
// compile with: /clr /W4 /WX
int main() {
   int __identifier(_finally) = 245;   // C4932
   int __identifier(__finally) = 25;   // C4932
}
```
