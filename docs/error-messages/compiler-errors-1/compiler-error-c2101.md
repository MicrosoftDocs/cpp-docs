---
title: "Compiler Error C2101"
description: "Learn more about: Compiler Error C2101"
ms.date: 03/04/2024
f1_keywords: ["C2101"]
helpviewer_keywords: ["C2101"]
---
# Compiler Error C2101

> '&' on constant

## Remarks

The [address-of operator (**`&`**)](../../cpp/address-of-operator-amp.md) must have an l-value as operand.

## Example

The following example generates C2101:

```cpp
// C2101.cpp
int main()
{
    int* ptr = &123;   // C2101
}
```
