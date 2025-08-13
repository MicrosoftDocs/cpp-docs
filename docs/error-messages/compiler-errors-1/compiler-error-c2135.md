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

The [address-of operator (`&`)](../../cpp/address-of-operator-amp.md), [unary plus operator (`+`)](../../cpp/unary-plus-and-negation-operators-plus-and.md), [unary negation operator (`-`)](../../cpp/unary-plus-and-negation-operators-plus-and.md), [logical negation operator (`!`)](../../cpp/logical-negation-operator-exclpt.md), [one's complement operator (`~`)](../../cpp/one-s-complement-operator-tilde.md), and [indirection operator (`*`)](../../cpp/indirection-operator-star.md) cannot be applied to a bit-field in this context.

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

## See also

[C2104](compiler-error-c2104.md)
