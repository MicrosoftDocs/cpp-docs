---
description: 'Learn more about: /Zc:externC (Use Standard C++ extern "C" rules)'
title: '/Zc:externC (Use Standard C++ extern "C" rules)'
ms.date: 12/02/2021
f1_keywords: ["/Zc:externC"]
helpviewer_keywords: ["-Zc:externConstexpr compiler option (C++)", "extern constexpr variables (C++)"]
ms.assetid: 4da5e33a-2e4d-4ed2-8616-bd8f43265c27
---
# `/Zc:externC` (Use Standard C++ `extern "C"` rules)

The **`/Zc:externC`** compiler option tells the compiler to conform to the C++ standard and enforce consistent parameter declarations for functions declared as `extern "C"`.

## Syntax

> **`/Zc:externC`**\
> **`/Zc:externC-`**

## Remarks

The **`/Zc:externC`** compiler option checks the definitions of functions declared by using `extern "C"`.

The **`/Zc:externC`** option is available starting in Visual Studio 2019 version 16.3. It's off when the [`/permissive-`](permissive-standards-conformance.md) option isn't set. In earlier versions of Visual Studio, and by default or if **`/Zc:externC-`** is specified, Visual Studio is permissive about matching declarations of `extern "C"` functions. The **`/permissive-`** option enables **`/Zc:externC`**, so it's on by default in projects that use **`/std:c++20`** or **`/std:c++latest`**. The **`/Zc:externC`** option must come after a **`/permissive-`** option on the command line.

Mismatched `extern "C"` declarations can cause compiler errors [C2116](../../error-messages/compiler-errors-1/compiler-error-c2116.md) and [C2733](../../error-messages/compiler-errors-2/compiler-error-c2733.md). In C++ code, an error can occur if you declare an `extern "C"` function more than once and use different parameter types, even if the types have the same definitions. The **`/Zc:externC-`** option relaxes this check, and doesn't produce these errors.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **`/Zc:externC`** or **`/Zc:externC-`** to the **Additional options:** pane.

## See also

[`/Zc` (Conformance)](zc-conformance.md)
