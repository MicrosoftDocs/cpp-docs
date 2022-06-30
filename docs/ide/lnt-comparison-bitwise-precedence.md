---
title: lnt-comparison-bitwise-precedence
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-comparison-bitwise-precedence."
ms.date: 06/29/2022
f1_keywords: ["lnt-comparison-bitwise-precedence"]
helpviewer_keywords: ["lnt-comparison-bitwise-precedence"]
monikerRange: ">=msvc-160"
---
# `lnt-comparison-bitwise-precedence`

The comparison operator has a higher precedence than the bitwise operator.

The comparison operator will be evaluated first. The result will be implicitly cast to an integer and used as an operand in the bitwise operation. Parentheses are needed to force the expected order of operations.

The `lnt-comparison-bitwise-precedence` check is controlled by the **Comparison/Bitwise Precedence** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Examples

```cpp
bool is_flag_set(unsigned value, unsigned flag)
{
    return value & flag == flag;  // Flagged: `flag == flag` is evaluated first.
                                  // Then `value & (int)true` is evaluated which
                                  // returns an incorrect result in most cases.
}
```

Use parentheses to force the correct order of operations:

```cpp
bool is_flag_set(unsigned value, unsigned flag)
{
    return (value & flag) == flag;  // Correct
}
```

## How to fix the issue

The fix the linter suggests is to add parentheses around the bitwise operation so it will be evaluated first.

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
