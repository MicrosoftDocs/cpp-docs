---
title: "Compiler Error C2429"
description: "Learn how to resolve Microsoft C/C++ compiler error C2429 by enabling the required C++ language standard option."
ms.date: 09/04/2026
ai-usage: ai-assisted
f1_keywords: ["C2429"]
helpviewer_keywords: ["C2429"]
---
# Compiler Error C2429

> '*language feature*' requires compiler flag '*compiler option*'

## Remarks

The language feature requires the compiler option shown in the error message.

To set the C++ language standard in Visual Studio:

1. Open the **Property Pages** dialog for your project.
1. Select **Configuration Properties** > **C/C++** > **Language**.
1. For **C++ Language Standard**, select the standard specified by the error message, and then select **OK** or **Apply**. For example, select **ISO C++17 Standard (/std:c++17)** when the error specifies **`/std:c++17`**.

For command-line builds, add the specified option to the `cl` command.

## Example

The following example generates **C2429: language feature 'nested-namespace-definition' requires compiler flag '/std:c++17'** when the compiler uses its default C++14 language standard. Nested namespace definitions require C++17 or later. To fix the error, compile with the [`/std:c++17`](../../build/reference/std-specify-language-standard-version.md) option or later, or define each namespace separately.

```cpp
// C2429.cpp
namespace a::b { int i; } // C2429 when the compiler uses C++14.
                          // Use /std:c++17 or later, or define each namespace as follows:
                          // namespace a { namespace b { int i; }}

int main() {
    a::b::i = 2;
}
```

## See also

- [`/std` (Specify language standard version)](../../build/reference/std-specify-language-standard-version.md)
- [Set C++ compiler and build properties in Visual Studio](../../build/working-with-project-properties.md)
