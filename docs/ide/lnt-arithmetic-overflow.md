---
title: lnt-arithmetic-overflow
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-arithmetic-overflow."
ms.date: 09/29/2021
f1_keywords: ["lnt-arithmetic-overflow"]
helpviewer_keywords: ["lnt-arithmetic-overflow"]
monikerRange: ">=msvc-160"
---
# `lnt-arithmetic-overflow`

An arithmetic expression may overflow before being converted to a wider type.

In C and C++, arithmetic operations are evaluated using the widest type of the operands, not the width of the type assigned the result. When a result is converted to a wider type, it indicates the developer expects the operation may overflow the narrower types of the operands.

The `lnt-arithmetic-overflow` check is controlled by the **Arithmetic Overflow** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Examples

```cpp
void overflow(int a, int b) {
    int64_t mul = a * b;      // Flagged: 32-bit operation may overflow.
    int64_t shift = a << 34;  // Flagged: Shift would overflow.

    int64_t mul2 = mul + b;   // OK: 'mul' is 64-bit so the addition expression is
                              // evaluated using 64-bit operations.
}
```

## How to fix this issue

The fix the linter suggests is to explicitly widen one of the operands. Then the entire expression is evaluated at the wider result type, as shown in this example:

```cpp
void overflow(int a, int b) {
    int64_t mul = static_cast<int64_t>(a) * b;
    int64_t shift = static_cast<int64_t>(a) << 34;
}
```

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
