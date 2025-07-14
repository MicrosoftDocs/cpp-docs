---
title: "Compiler Error C2102"
description: "Learn more about: Compiler Error C2102"
ms.date: 03/03/2024
f1_keywords: ["C2102"]
helpviewer_keywords: ["C2102"]
---
# Compiler Error C2102

> '&' requires l-value

## Remarks

The [address-of operator (**`&`**)](../../cpp/address-of-operator-amp.md) must have an l-value as operand. Address of temporary values cannot be taken.

## Example

The following example generates C2102:

```cpp
// C2102.cpp
int func()
{
    return 1;
}

int main()
{
    int* ptr = &func();   // C2102
}
```
