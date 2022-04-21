---
description: "Learn more about: /await (Enable coroutine support)"
title: "/await (Enable coroutine support)"
ms.date: "08/15/2017"
f1_keywords: ["/await", "-await"]
helpviewer_keywords: ["/await enable coroutine support [C++]", "-await enable coroutine support [C++]", "await enable coroutine support [C++]"]
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
---
# `/await` (Enable coroutine support)

Use the **`/await`** compiler option to enable compiler support for coroutines.

## Syntax

> **`/await`**\
> **`/await:strict`**

## Remarks

The **`/await`** compiler option enables compiler support for C++ coroutines and the keywords **`co_await`**, **`co_yield`**, and **`co_return`**. This option is off by default. For information about support for coroutines in Visual Studio, see the [Visual Studio Team Blog](https://devblogs.microsoft.com/cppblog/category/coroutine/). For more information about the coroutines standard proposal, see [N4628 Working Draft, Technical Specification for C++ Extensions for Coroutines](https://wg21.link/n4628).

The **`/await`** option is available beginning in Visual Studio 2015.

Starting in Visual Studio 2019 version 16.10, the **`/await:strict`** option can be used in place of **`/await`**. The option provides C++20-compatible coroutine support in projects that build in C++14 or C++17 mode. In **`/await:strict`** mode, library support is provided in \<coroutine> and in the `std` namespace.

The **`/await:strict`** option disables language extensions present in **`/await`** that weren't adopted into the C++20 standard. Use of such features results in a compiler error. The option also implements coroutine behaviors such as promise parameter preview. These behaviors aren't available under **`/await`** because of binary compatibility issues in older versions of Visual Studio.

> [!NOTE]
> Coroutine state objects obtained from `coroutine_handle<T>::address()` aren't compatible between **`/await`** and **`/await:strict`** modes. Use of `coroutine_handle<T>::from_address()` on an address obtained from a coroutine handle created by code compiled in an incompatible mode results in undefined behavior.

### To set this compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **`/await`** or **`/await:strict`** compiler option in the **Additional Options** box. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
