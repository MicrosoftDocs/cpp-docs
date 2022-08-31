---
description: "Learn more about: Compiler warning (level 2) C4146"
title: "Compiler warning (level 2) C4146"
ms.date: 08/30/2022
f1_keywords: ["C4146"]
helpviewer_keywords: ["C4146"]
---
# Compiler warning (level 2) C4146

> unary minus operator applied to unsigned type, result still unsigned

Unsigned types can hold only non-negative values, so unary minus (negation) usually doesn't make sense when applied to an unsigned type. Both the operand and the result are non-negative.

## Remarks

When you express a negative integer literal, the **`-`** in front of the value is parsed as a [unary negation](../../cpp/unary-plus-and-negation-operators-plus-and.md) operator. The compiler applies the operator after it parses the numeric value. If the numeric value fits in the range of an unsigned integer type, but not the corresponding signed integer type, the compiler interprets the value as unsigned. An unsigned value is unchanged by the unary negation operator.

This warning often occurs when you try to express the minimum **`int`** value, -2147483648, or the minimum **`long long`** value, -9223372036854775808. These values can't be written as -2147483648 or -9223372036854775808ll, respectively. The reason is because the compiler processes the expression in two stages: first, it parses the numeric value, then it applies the negation operator. For example, when the compiler parses -2147483648, it follows these steps:

1. The number 2147483648 is evaluated. Because it's greater than the maximum **`int`** value of 2147483647, but still fits in an **`unsigned int`**, the type of 2147483648 is **`unsigned int`**.

1. Unary minus is applied to the unsigned value, with an unsigned result, which also happens to be 2147483648.

The unsigned type of the result can cause unexpected behavior. If the result is used in a comparison, then an unsigned comparison might be used, for example, when the other operand is an **`int`**.

You can avoid C4146 by using `INT_MIN` or `LLONG_MIN` from *`<limits.h>`* or the C++ equivalent, *`<climits>`*. These values have signed types.

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Example

The following sample demonstrates the unexpected behavior that can happen when the compiler generates warning C4146:

```cpp
// C4146.cpp
// compile with: /W2
#include <iostream>

void check(int i)
{
    if (i > -9223372036854775808ll)   // C4146
        std::cout << i << " is greater than the most negative long long int.\n";
}

int main()
{
    check(-100);
    check(1);
}
```

In this example, the compiler considers -9223372036854775808ll unsigned even though the literal has an `ll` suffix and the negation operator is applied. To make the `<` comparison, the compiler silently promotes signed `i` to `unsigned long long int`. The expected second line, `1 is greater than the most negative long long int`, isn't printed because `((unsigned long long int)1) > 9223372036854775808ull` is false.

To fix the example, include *`<climits>`* and change -9223372036854775808ll to `LLONG_MIN`.

## See also

[Unary negation operator (-)](../../cpp/unary-plus-and-negation-operators-plus-and.md)
