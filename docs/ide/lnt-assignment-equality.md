---
title: lnt-assignment-equality
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-assignment-equality."
ms.date: 09/29/2021
f1_keywords: ["lnt-assignment-equality"]
helpviewer_keywords: ["lnt-assignment-equality"]
monikerRange: ">=msvc-160"
---
# `lnt-assignment-equality`

A variable is assigned a constant in a Boolean context.

An assignment expression that takes a constant always evaluates to the value of the constant. A comparison operation, such as `==` or `!=`, was probably intended instead.

::: moniker range=">=msvc-170"

In Visual Studio 2022, The `lnt-assignment-equality` check is controlled by the **Accidental Assignment** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

::: moniker-end
::: moniker range="msvc-160"

In Visual Studio 2019, the `lnt-assignment-equality` check is controlled by the **Assignation Instead of Equality** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

::: moniker-end

## Examples

```cpp
int read();

void accidental_assignment(int i)
{
    if (i = 2) {}       // Flagged: 'i' is being assigned to a constant.

    if (i = read()) {}  // OK: 'i' is being assigned the result of a function call.

    while (i = 0) {}    // Flagged.
}
```

## How to fix the issue

The fix the linter suggests is to change the assignment operator to an equality operator.

```cpp
void accidental_assignment(int i)
{
    if (i == 2) {}

    while (i != 0) {}
}
```

## Remarks

This check only flags assignment from a constant or constant expression.

## Known Issues

```cpp
void known_issues(bool b) {
    if (b = true) {}  // Not flagged because there is no implicit conversion to bool.
}
```

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
