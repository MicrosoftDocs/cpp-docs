---
title: "/await (Enable coroutine support) (C++) - Visual Studio"
ms.date: "08/15/2017"
f1_keywords: ["/await", "-await"]
helpviewer_keywords: ["/await enable coroutine support [C++]", "-await enable coroutine support [C++]", "await enable coroutine support [C++]"]
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
---
# /await (Enable coroutine support)

Use the **/await** compiler option to enable compiler support for coroutines.

## Syntax

> /await

## Remarks

The **/await** compiler option enables compiler support for C++ coroutines and the keywords **co_await**, **co_yield**, and **co_return**. This option is off by default. For information about support for coroutines in Visual Studio, see the [Visual Studio Team Blog](https://blogs.msdn.microsoft.com/vcblog/category/coroutine/). For more information about the coroutines standard proposal, see [N4628 Working Draft, Technical Specification for C++ Extensions for Coroutines](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/n4628.pdf).

The **/await** option is available beginning in Visual Studio 2015.

### To set this compiler option in the Visual Studio development environment

1. Open your project's **Property Pages** dialog box.

1. Under **Configuration Properties**, expand the **C/C++** folder and choose the **Command Line** property page.

1. Enter the **/await** compiler option in the **Additional Options** box. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](../compiler-command-line-syntax.md)
