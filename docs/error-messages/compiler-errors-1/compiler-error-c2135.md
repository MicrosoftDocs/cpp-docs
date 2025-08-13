---
title: "Compiler Error C2135"
description: "Learn more about: Compiler Error C2135"
ms.date: 11/04/2016
f1_keywords: ["C2135"]
helpviewer_keywords: ["C2135"]
---
# Compiler Error C2135

> '*identifier*': you cannot apply '*operator*' to a bit-field

## Remarks

The address-of operator (`&`) cannot be applied to a bit field.

## Example

The following example generates C2135:

```cpp
// C2135.cpp

struct S
{
    int bit_field : 1;
    int integer;
};

int main()
{
    &S::bit_field;   // C2135
    &S::integer;     // OK
}
```
