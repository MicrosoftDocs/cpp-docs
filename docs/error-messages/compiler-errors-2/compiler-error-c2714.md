---
description: "Learn more about: Compiler Error C2714"
title: "Compiler Error C2714"
ms.date: 07/22/2020
f1_keywords: ["C2714"]
helpviewer_keywords: ["C2714"]
ms.assetid: 401a5a42-660c-4bad-9d63-1a2d092bc489
---
# Compiler Error C2714

> `alignof(void)` is not allowed

An invalid value was passed to an operator.

## Remarks

See [`alignof` operator](../../cpp/alignof-operator.md) for more information.

## Example

The following sample generates C2714.

```cpp
// C2714.cpp
int main() {
   return alignof(void);   // C2714
   return alignof(char);   // OK
}
```
