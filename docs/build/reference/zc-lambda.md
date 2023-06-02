---
description: "Learn more about: /Zc:lambda (Enable updated lambda processor)"
title: "/Zc:lambda (Enable updated lambda processor)"
ms.date: 06/01/2023
f1_keywords: ["/Zc:lambda"]
helpviewer_keywords: ["-Zc:lambda compiler option (C++)", "/Zc:lambda compiler option (C++)"]
---
# `/Zc:lambda` (Enable updated lambda processor)

The **`/Zc:lambda`** compiler option enables conforming lambda grammar and processing support.

## Syntax

> **`/Zc:lambda`**[**`-`**]

## Remarks

The **`/Zc:lambda`** compiler option enables the conforming lambda processor. It parses and implements lambda code according to the C++ standard. This option is off by default, which uses the legacy lambda processor. Use this option to enable conformance-mode syntax checks of generic lambdas when you use the default [`/std:c++14`](std-specify-language-standard-version.md) or the [`/std:c++17`](std-specify-language-standard-version.md) compiler options.

**`/Zc:lambda`** is automatically enabled by the [`/std:c++20`](std-specify-language-standard-version.md), [`/std:c++latest`]
(std-specify-language-standard-version.md), [`/permissive-`](permissive-standards-conformance.md), and [`/experimental:module`](experimental-module.md) options. You can disable it explicitly by using **`/Zc:lambda-`**.

The **`/Zc:lambda`** option is available starting in Visual Studio 2019 version 16.8. It's available as **`/experimental:newLambdaProcessor`** starting in Visual Studio 2019 version 16.3, but this spelling is now deprecated.

The legacy lambda processor has limitations when it parses and compiles lambdas. For example, this conforming code compiles correctly under **`/Zc:lambda`**, but reports errors under **`/Zc:lambda-`**:

```cpp
void f1() 
{
    constexpr auto c_value = 1;
    auto func = []()
    {
        return c_value; // error C3493: 'c_value' cannot be implicitly captured
                        // because no default capture mode has been specified
    };
    func(); // error C2064: term does not evaluate to a function taking 0 arguments
}
```

The legacy lambda processor compiles this code without warnings, but the new lambda processor produces error C2760:

```cpp
void f2() {
    auto a = [](auto arg) {
        decltype(arg)::Type t; // C2760 syntax error: unexpected token 'identifier', expected ';'
    };
}
```

This example shows the correct syntax, now enforced by the compiler under **`/Zc:lambda`**:

```cpp
void f3() {
    auto a = [](auto arg) {
        typename decltype(arg)::Type t;
    };
}
```

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **`/Zc:lambda`** or **`/Zc:lambda-`** to the **Additional options:** pane.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
