---
title: lnt-accidental-copy
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-accidental-copy."
ms.date: 09/29/2021
f1_keywords: ["lnt-accidental-copy"]
helpviewer_keywords: ["lnt-accidental-copy"]
monikerRange: ">=msvc-160"
---
# `lnt-accidental-copy`

A copy is being made because `auto` doesn't deduce references.

Variables declared by using `auto` are never deduced to be type references. If you initialize an `auto` variable from the result of a function that returns by reference, it results in a copy. Sometimes this effect is desirable, but in many cases it causes an unintentional copy.

The `lnt-accidental-copy` check is controlled by the **Accidental Copy** setting in the C/C++ Code Style options. For information on how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Examples

```cpp
#include <string>
#include <vector>

std::string& return_by_ref();

int& return_int_by_ref();

void accidental_copy(std::vector<std::string>& strings)
{
    for (auto s : strings) {} // Flagged: A new copy of each string is
                              // made when the vector is iterated.

    auto s = return_by_ref(); // Flagged: the function returns by-reference
                              // but a copy is made to initialize 's'.

    auto i = return_int_by_ref(); // Not flagged because no copy constructor is called.
}
```

## How to fix the issue

The fix the linter suggests is to change `auto` to `auto&` on the declaration.

```cpp
#include <string>

std::string& return_by_ref();

void accidental_copy(std::vector<std::string>& strings)
{
    for (auto& s : strings) {}

    auto& s = return_by_ref();
}
```

## Remarks

The suggested fix isn't safe to apply in all cases. The fix may cause a compilation error or change the behavior of the code. It's important to understand how the suggested fix affects the code before applying it.

In cases where a temporary is returned, `const auto&` is necessary to prevent a compilation error. In this case, it may be preferable to continue to use `auto`.

Sometimes a copy is intentional, such as when you want to modify the copy without affecting the source instance, as shown in this example.

```cpp
void modifies_string(std::string& s);

void example(std::vector<std::string>& strings)
{
    for (auto s : strings) {
        modifies_string(s);    // In this case, the copy may be intended so that
                               // the original strings are not modified.
    }
}
```

## See also

[IntelliSense code linter for C++ overview](cpp-linter-overview.md)
