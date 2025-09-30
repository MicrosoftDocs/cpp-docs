---
description: "Learn more about: `/Zc:externConstexpr` (Enable extern constexpr variables)"
title: "/Zc:externConstexpr (Enable extern constexpr variables)"
ms.date: 10/12/2023
f1_keywords: ["/Zc:externConstexpr"]
helpviewer_keywords: ["-Zc:externConstexpr compiler option (C++)", "extern constexpr variables (C++)"]
---
# `/Zc:externConstexpr` (Enable extern constexpr variables)

The **`/Zc:externConstexpr`** compiler option tells the compiler to conform to the C++ standard and allow external linkage for **`constexpr`** variables. By default, Visual Studio always gives a **`constexpr`** variable internal linkage, even if you specify the **`extern`** keyword.

## Syntax

> **`/Zc:externConstexpr`**[**`-`**]

## Remarks

The **`/Zc:externConstexpr`** compiler option causes the compiler to apply external linkage to variables declared by using `extern constexpr`.

In earlier versions of Visual Studio, by default or if **`/Zc:externConstexpr-`** is specified, Visual Studio applies internal linkage to **`constexpr`** variables even if the **`extern`** keyword is used. The **`/Zc:externConstexpr`** option is available starting in Visual Studio 2017 Update 15.6. and is off by default.

As of Visual Studio 2022 Update 17.6, the **`/permissive-`** option enables both **`/Zc:externConstexpr`** and [`/Zc:lambda`](zc-lambda.md). In prior versions, **`/permissive-`** didn't enable either one.

If a header file contains a variable declared **`extern constexpr`**, it must be marked [`__declspec(selectany)`](../../cpp/selectany.md) in order to merge the duplicate declarations into a single instance in the linked binary. Otherwise you may see linker errors, for example, LNK2005, for violations of the one-definition rule.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **`/Zc:externConstexpr`** or **`/Zc:externConstexpr-`** to the **Additional options:** pane.

## See also

[`auto` Keyword](../../cpp/auto-cpp.md)\
[`permissive`](permissive-standards-conformance.md)\
[`/Zc` (Conformance)](zc-conformance.md)
