---
title: "/Zc:hiddenFriend (Enforce hidden friend rules)"
description: "Learn about the Microsoft C++ /Zc:hiddenFriend compiler option for conforming or relaxed hidden friend compatibility."
ms.date: "06/04/2020"
f1_keywords: ["/Zc:hiddenFriend"]
helpviewer_keywords: ["/Zc:hiddenFriend", "Zc:hiddenFriend", "-Zc:hiddenFriend"]
ms.assetid: 1cbf7e3c-0f82-4f91-84dd-612bcf26d2c6
---
# /Zc:hiddenFriend (Enforce hidden friend rules)

A *hidden friend* is a friend declaration of a function or function template within a class or
class template definition, that declaration shall be the only declaration of that function or function template
provided by an implementation.

The C++20 standard . This change can cause a number of source compatibility issues in code that conforms to C++14 or earlier. The **`/Zc:hiddenFriend`** option specifies conformance to the C++17 standard. **`/Zc:hiddenFriend-`**  allows the C++14 and earlier behavior when code is compiled in C++17 mode.

## Syntax

> **`/Zc:hiddenFriend`**\[**`-`**]

## Remarks

When the **`/Zc:hiddenFriend`** option is specified, the compiler conforms to the C++17 standard and treats [`throw()`](../../cpp/exception-specifications-throw-cpp.md) as an alias for [`noexcept`](../../cpp/noexcept-cpp.md), removes `throw(`*`type-list`*`)` and `throw(...)`, and allows certain types to include **`noexcept`**. The **`/Zc:hiddenFriend`** option is only available when [`/std:c++17`](std-specify-language-standard-version.md) or [`/std:c++latest`](std-specify-language-standard-version.md) is enabled. **`/Zc:hiddenFriend`** is enabled by default to conform to the ISO C++17 standard. The [`/permissive-`](permissive-standards-conformance.md) option doesn't affect **`/Zc:hiddenFriend`**. Turn off this option by specifying **`/Zc:hiddenFriend-`** to revert to the C++14 behavior of **`noexcept`** when **`/std:c++17`** or **`/std:c++latest`** is specified.

Beginning in Visual Studio 2017 version 15.5, the C++ compiler diagnoses more mismatched exception specifications in declarations in C++17 mode, or when you specify the [`/permissive-`](permissive-standards-conformance.md) option.

This sample shows how declarations with an exception specifier behave when the **`/Zc:hiddenFriend`** option is set or disabled. To show the behavior when set, compile by using `cl /EHsc /W4 hiddenFriend.cpp`. To show the behavior when disabled, compile by using `cl /EHsc /W4 /Zc:hiddenFriend- hiddenFriend.cpp`.

```cpp
// hiddenFriend.cpp
// Compile by using: cl /EHsc /W4 hiddenFriend.cpp
// Compile by using: cl /EHsc /W4 /Zc:hiddenFriend- hiddenFriend.cpp

void f() throw();    // equivalent to void f() noexcept;
void f() { }         // warning C5043
void g() throw(...); // warning C5040

struct A
{
    virtual void f() throw();
};

struct B : A
{
    virtual void f() { } // error C2694
};
```

When compiled by using the default setting **`/Zc:hiddenFriend`**, the sample generates the listed warnings. To update your code, use the following instead:

```cpp
void f() noexcept;
void f() noexcept { }
void g() noexcept(false);

struct A
{
    virtual void f() noexcept;
};

struct B : A
{
    virtual void f() noexcept { }
};
```

For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include *`/Zc:hiddenFriend`* or *`/Zc:hiddenFriend-`* and then choose **OK**.

## See also

[**`/Zc`** (Conformance)](zc-conformance.md)\
[noexcept](../../cpp/noexcept-cpp.md)\
[Exception specifications (throw)](../../cpp/exception-specifications-throw-cpp.md)
