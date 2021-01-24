---
description: "Learn more about: /Zc:sizedDealloc (Enable Global Sized Deallocation Functions)"
title: "/Zc:sizedDealloc (Enable Global Sized Deallocation Functions)"
ms.date: "03/06/2018"
f1_keywords: ["sizedDealloc", "/Zc:sizedDealloc"]
helpviewer_keywords: ["-Zc compiler options (C++)", "sizedDealloc", "Enable Global Sized Deallocation Functions", "/Zc compiler options (C++)", "Zc compiler options (C++)"]
ms.assetid: 3a73ace0-4d36-420a-b699-0ca6fc0dd134
---
# /Zc:sizedDealloc (Enable Global Sized Deallocation Functions)

The **/Zc:sizedDealloc** compiler option tells the compiler to preferentially call global `operator delete` or `operator delete[]` functions that have a second parameter of type `size_t` when the size of the object is available. These functions may use the `size_t` parameter to optimize deallocator performance.

## Syntax

> **/Zc:sizedDealloc**[**-**]

## Remarks

In the C++11 standard, you may define static member functions `operator delete` and `operator delete[]` that take a second, `size_t` parameter. Typically these are used in combination with [operator new](../../cpp/new-operator-cpp.md) functions to implement more efficient allocators and deallocators for the object. However, C++11 did not define an equivalent set of deallocation functions at global scope. In C++11, global deallocation functions that have a second parameter of type `size_t` are considered placement delete functions. They must be explicitly called by passing a size argument.

The C++14 standard changes the behavior of the compiler. When you define global `operator delete` and `operator delete[]` that take a second parameter of type `size_t`, the compiler prefers to call these functions when member scope versions are not invoked and the size of the object is available. The compiler passes the size argument implicitly. The single argument versions are called when the compiler can't determine the size of the object being deallocated. Otherwise, the usual rules for choosing the version of the deallocation function to invoke still apply. Calls to the global functions may be explicitly specified by prepending the scope resolution operator (`::`) to the deallocation function call.

By default, Visual C++ starting in Visual Studio 2015 implements this C++14 standard behavior. You may explicitly specify this by setting the **/Zc:sizedDealloc** compiler option. This represents a potentially breaking change. Use the **/Zc:sizedDealloc-** option to preserve the old behavior, for example, when your code defines placement delete operators that use a second parameter of type `size_t`. The default Visual Studio library implementations of the global deallocation functions that have the second parameter of type `size_t` invoke the single parameter versions. If your code supplies only single-parameter global operator delete and operator delete[], the default library implementations of the global sized deallocation functions invoke your global functions.

The **/Zc:sizedDealloc** compiler option is on by default. The [/permissive-](permissive-standards-conformance.md) option does not affect **/Zc:sizedDealloc**.

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. From the **Configurations** drop down menu, choose **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:sizedDealloc** or **/Zc:sizedDealloc-** and then choose **OK**.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/Zc (Conformance)](zc-conformance.md)<br/>
