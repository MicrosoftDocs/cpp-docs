---
title: "Compiler Error C2703"
description: "Describes Microsoft C/C++ compiler error C2703."
ms.date: 08/24/2020
f1_keywords: ["C2703"]
helpviewer_keywords: ["C2703"]
ms.assetid: 384295c3-643d-47ae-a9a6-865b3036aa84
---
# Compiler Error C2703

> illegal `__leave` statement

## Remarks

A **`__leave`** statement must be inside a **`__try`** block.

## Example

The following sample generates C2703:

```cpp
// C2703.cpp
int main() {
   __leave;   // C2703
   __try {
      // try the following line instead
      __leave;
   }
   __finally {}
}
```

## See also

[The `__leave` keyword](../../cpp/try-except-statement.md#__leave)\
[`try-except` statement](../../cpp/try-except-statement.md)\
[`try-finally` statement](../../cpp/try-finally-statement.md)
