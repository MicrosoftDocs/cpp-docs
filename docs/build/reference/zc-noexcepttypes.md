---
title: "-Zc:noexceptTypes (C++17 noexcept rules) | Microsoft Docs"
ms.date: "11/14/2017"
ms.technology: 
  - "cpp-tools"
ms.topic: "article"
f1_keywords: 
  - "/Zc:noexceptTypes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc:noexceptTypes"
  - "Zc:noexceptTypes"
  - "-Zc:noexceptTypes"
ms.assetid: 1cbf7e3c-0f82-4f91-84dd-612bcf26d2c6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# /Zc:noexceptTypes (C++17 noexcept rules)

The C++17 standard makes `throw()` as an alias for `noexcept`, removes `throw(<type list>)` and `throw(...)`, and allows certain types to include `noexcept`. This can cause a number of source compatibility issues in code that conforms to C++14 or earlier. The **/Zc:noexceptTypes** option can specify conformance to the C++17 standard or allow the C++14 and earlier behavior when code is compiled in C++17 mode.

## Syntax

> **/Zc:noexceptTypes**[-]

## Remarks

When the **/Zc:noexceptTypes** option is specified, the compiler conforms to the C++17 standard and treats [throw()](../../cpp/exception-specifications-throw-cpp.md) as an alias for [noexcept](../../cpp/noexcept-cpp.md), removes `throw(<type list>)` and `throw(...)`, and allows certain types to include `noexcept`. The **/Zc:noexceptTypes** option is only available when [/std:c++17](std-specify-language-standard-version.md) or [/std:latest](std-specify-language-standard-version.md) is enabled. **/Zc:noexceptTypes** is enabled by default to conform to the ISO C++17 standard. Turn this option off by specifying **/Zc:noexceptTypes-** to revert to the C++14 behavior of `noexcept` when **/std::C++17** or **/std::latest** is specified.

Beginning in Visual Studio 2017 version 15.5, the C++ compiler diagnoses more mismatched exception specifications in declarations in C++17 mode or when the [/permissive-](permissive-standards-conformance.md) option is specified.

This sample shows how declarations with an exception specifier behave when the **/Zc:noexceptTypes** option is set or disabled. To show the behavior when set, compile by using `cl /EHsc /W4 noexceptTypes.cpp`. To show the behavior when disabled, compile by using `cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp`.

```cpp
// noexceptTypes.cpp
// Compile by using: cl /EHsc /W4 noexceptTypes.cpp
// Compile by using: cl /EHsc /W4 /Zc:noexceptTypes- noexceptTypes.cpp

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

When compiled by using the default setting **/Zc:noexceptTypes**, the sample generates the listed warnings. To update your code, use the following instead:

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

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Command Line** property page in the **C/C++** folder.

1. Modify the **Additional Options** property to include **/Zc:noexceptTypes** or **/Zc:noexceptTypes-** and then choose **OK**.

## See also

[/Zc (Conformance)](../../build/reference/zc-conformance.md)  
[noexcept](../../cpp/noexcept-cpp.md)  
[Exception Specifications (throw)](../../cpp/exception-specifications-throw-cpp.md)  
