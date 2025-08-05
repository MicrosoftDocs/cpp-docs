---
title: "Compiler Error C2714"
description: "Learn more about: Compiler Error C2714"
ms.date: 07/22/2020
f1_keywords: ["C2714"]
helpviewer_keywords: ["C2714"]
---
# Compiler Error C2714

> `alignof(void)` is not allowed

## Remarks

An invalid value was passed to an operator.

See [`alignof` operator](../../cpp/alignof-operator.md) for more information.

## Example

The following example generates C2714.

```cpp
// C2714.cpp
int main() {
   return alignof(void);   // C2714
   return alignof(char);   // OK
}
```
