---
title: lnt-logical-bitwise-mismatch
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-logical-bitwise-mismatch."
ms.date: 09/29/2021
f1_keywords: ["lnt-logical-bitwise-mismatch"]
helpviewer_keywords: ["lnt-logical-bitwise-mismatch"]
monikerRange: ">=msvc-160"
---
# `lnt-logical-bitwise-mismatch`

A logical operator was used with integer values or a bitwise operator was used with Boolean values.

While the flagged code still compiles, it's considered bad practice to use operators incorrectly: it makes the code harder to read or modify, and may cause runtime errors.

The `lnt-logical-bitwise-mismatch` check is controlled by the **Logical/Bitwise Mismatch** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Examples

Only use logical operators on Boolean values.

```cpp
void example(bool a, bool b) {
    bool c = a & b;    // Flagged: Bitwise AND operator used with Boolean variables.
    bool d = a || b;   // OK: Logical OR operator used with Boolean variables.
}
```

Only use bitwise operators on integer values.

```cpp
void example(int i, int j) {
    int k = i && j;  // Flagged: Logical AND operator used with integer variables.
                     // The runtime behavior will be incorrect in almost all cases.
    bool l = i ^ j;  // OK: Bitwise XOR operator used with integer variables.
}
```

## How to fix the issue

The fix the linter suggests is to use the correct operator for the operand type.

## Known issues

Alternative tokens such as `and` or `bitor` are flagged by the check, but the suggested fix is incorrect.

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
