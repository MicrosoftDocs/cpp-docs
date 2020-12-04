---
description: "Learn more about: Compiler Warning (level 1) C4319"
title: "Compiler Warning (level 1) C4319"
ms.date: "01/18/2018"
f1_keywords: ["C4319"]
helpviewer_keywords: ["C4319"]
ms.assetid: 1fac8048-9bd6-4552-a21c-192c67772bb9
---
# Compiler Warning (level 1) C4319

> '~' : zero extending '*type1*' to '*type2*' of greater size

The result of the **~** (bitwise complement) operator is unsigned and then zero-extended when it is converted to a larger type.

## Example

In the following example, `~(a - 1)` is evaluated as a 32-bit unsigned long expression and then converted to 64 bits by zero extension. This could lead to unexpected operation results.

```cpp
// C4319.cpp
// compile with: cl /W4 C4319.cpp
int main() {
   unsigned long a = 0;
   unsigned long long q = 42;
   q = q & ~(a - 1);    // C4319 expected
}
```
