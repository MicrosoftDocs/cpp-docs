---
description: "Learn more about: /Zc:static_assert (Strict static_assert handling)"
title: "/Zc:static_assert (Strict static_assert handling)"
ms.date: 12/15/2021
f1_keywords: ["/Zc:static_assert"]
helpviewer_keywords: ["/Zc:static_assert compiler option (C++)"]
---
# `/Zc:static_assert` (Strict static_assert handling)

The **`/Zc:static_assert`** compiler option tells the compiler to evaluate `static_assert` calls with non-dependent test expressions when class or function templates are parsed.

## Syntax

> **`/Zc:static_assert`**\
> **`/Zc:static_assert-`**

## Remarks

The **`/Zc:static_assert`** compiler option tells the compiler to evaluate a `static_assert` in the body of a function template or in the body of a class template member function when first parsed, if the test expression isn't dependent. If the non-dependent test expression isn't `false`, the compiler emits an error immediately. When the test expression is dependent, the `static_assert` isn't evaluated until the template is instantiated.

The **`/Zc:static_assert`** option is available starting in Visual Studio 2022 version 17.1. In earlier versions of Visual Studio, or if **`/Zc:static_assert-`** is specified, Visual Studio doesn't do dependent analysis if the `static_assert` is within the body of a function template or within the body of a member function of a class template. Instead, it only evaluates the `static_assert` when a template is instantiated.

The **`/permissive-`** option enables **`/Zc:static_assert`**, so it's on by default in projects that use **`/std:c++20`** or **`/std:c++latest`**. The **`/Zc:static_assert-`** option must come after a **`/std:c++20`**, **`/std:c++latest`**, or **`/permissive-`** option on the command line.

If the compiler is in the default C++14 mode and **`/permissive-`** or **`/Zc:static_assert`** is specified, it uses **`/Zc:static_assert`** behavior. However, if it evaluates a `static_assert` in a template body, it also reports off-by-default warning C5254, "language feature 'terse static assert' requires compiler flag '**`/std:c++17`**'", since this behavior isn't required until C++17.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **`/Zc:static_assert`** or **`/Zc:static_assert-`** to the **Additional options:** pane.

## See also

[`/Zc` (Conformance)](zc-conformance.md)
