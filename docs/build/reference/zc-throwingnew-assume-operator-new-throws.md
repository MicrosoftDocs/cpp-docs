---
description: "Learn more about: /Zc:throwingNew (Assume operator new throws)"
title: "/Zc:throwingNew (Assume operator new throws)"
ms.date: "03/01/2018"
f1_keywords: ["throwingNew", "/Zc:throwingNew"]
helpviewer_keywords: ["-Zc compiler options (C++)", "throwingNew", "Assume operator new Throws", "/Zc compiler options (C++)", "Zc compiler options (C++)"]
ms.assetid: 20ff0101-9677-4d83-8c7b-8ec9ca49f04f
---
# /Zc:throwingNew (Assume operator new throws)

When the **/Zc:throwingNew** option is specified, the compiler optimizes calls to `operator new` to skip checks for a null pointer return. This option tells the compiler to assume that all linked implementations of `operator new` and custom allocators conform to the C++ standard and throw on allocation failure. By default in Visual Studio, the compiler pessimistically generates null checks (**/Zc:throwingNew-**) for these calls, because users can link with a non-throwing implementation of `operator new` or write custom allocator routines that return null pointers.

## Syntax

> **/Zc:throwingNew**[**-**]

## Remarks

Since ISO C++98, the standard has specified that the default [operator new](../../standard-library/new-operators.md#op_new) throws `std::bad_alloc` when memory allocation fails. Versions of Visual C++ up to Visual Studio 6.0 returned a null pointer on an allocation failure. Beginning in Visual Studio 2002, `operator new` conforms to the standard and throws on failure. To support code that uses the older allocation style, Visual Studio provides a linkable implementation of `operator new` in nothrownew.obj that returns a null pointer on failure. By default, the compiler also generates defensive null checks to prevent these older-style allocators from causing an immediate crash on failure. The **/Zc:throwingNew** option tells the compiler to leave out these null checks, on the assumption that all linked memory allocators conform to the standard. This does not apply to explicit non-throwing `operator new` overloads, which are declared by using an additional parameter of type `std::nothrow_t` and have an explicit **`noexcept`** specification.

Conceptually, to create an object on the free store, the compiler generates code to allocate its memory and then to invoke its constructor to initialize the memory. Because the MSVC compiler normally cannot tell if this code will be linked to a non-conforming, non-throwing allocator, by default it also generates a null check before calling the constructor. This prevents a null pointer dereference in the constructor call if a non-throwing allocation fails. In most cases, these checks are unnecessary, because the default `operator new` allocators throw instead of returning null pointers. The checks also have unfortunate side effects. They bloat the code size, they flood the branch predictor, and they inhibit other useful compiler optimizations such as devirtualization or const propagation out of the initialized object. The checks exist only to support code that links to *nothrownew.obj* or has custom non-conforming `operator new` implementations. If you do not use non-conforming `operator new`, we recommend you use **/Zc:throwingNew** to optimize your code.

The **/Zc:throwingNew** option is off by default, and is not affected by the [/permissive-](permissive-standards-conformance.md) option.

If you compile by using link-time code generation (LTCG), you do not need to specify **/Zc:throwingNew**. When your code is compiled by using LTCG, the compiler can detect if the default, conforming `operator new` implementation is used. If so, the compiler leaves out the null checks automatically. The linker looks for the **/ThrowingNew** flag to tell if the implementation of `operator new` is conforming. You can specify this flag to the linker by including this directive in the source for your custom operator new implementation:

```cpp
#pragma comment(linker, "/ThrowingNew")
```

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

## To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. From the **Configuration** drop down menu, choose **All Configurations**.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:throwingNew** or **/Zc:throwingNew-** and then choose **OK**.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)<br/>
[/Zc (Conformance)](zc-conformance.md)<br/>
[noexcept (C++)](../../cpp/noexcept-cpp.md)<br/>
[Exception Specifications (throw) (C++)](../../cpp/exception-specifications-throw-cpp.md)<br/>
[terminate (exception)](../../standard-library/exception-functions.md#terminate)<br/>
