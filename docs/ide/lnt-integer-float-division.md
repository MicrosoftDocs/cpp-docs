---
title: lnt-integer-float-division
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-integer-float-division."
ms.date: 09/29/2021
f1_keywords: ["lnt-integer-float-division"]
helpviewer_keywords: ["lnt-integer-float-division"]
monikerRange: ">=msvc-160"
---
# `lnt-integer-float-division`

An integer division expression was implicitly cast to a floating-point type.

The division is carried out using integer operations, which truncates the fractional part before it's assigned to the floating-point result type. This check doesn't always indicate a bug, because sometimes the truncation is intentional.

::: moniker range=">=msvc-170"

In Visual Studio 2022, the `lnt-integer-float-division` check is controlled by the **Truncated Division Result** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

::: moniker-end
::: moniker range="msvc-160"

In Visual Studio 2019, the `lnt-integer-float-division` check is controlled by the **Integer division converted to floating point** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

::: moniker-end

## Examples

```cpp
float divide(int i, int j) {
    return i / j;  // Flagged: The integer division result is implicitly cast to float.
}

float half(int i) {
    return i / 2;  // Flagged: An integer literal is used.
}
```

## How to fix the issue

The fix the linter suggests is to explicitly cast one of the division operands to a floating-point type, so the division result isn't truncated. You can also use a floating-point literal instead of a cast.

```cpp
float divide(int i, int j) {
    return static_cast<float>(i) / j;
}

float half(int i) {
    return i / 2.0;
}
```

## Remarks

If the truncation is intentional, you can add an explicit cast to prevent the warning.

```cpp
float int_divide(int i, int j) {
    return static_cast<float>(i / j);  // Not flagged because of the explicit cast.
}
```

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
