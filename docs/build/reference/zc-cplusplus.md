---
description: "Learn more about: /Zc:__cplusplus (Enable updated __cplusplus macro)"
title: "/Zc:__cplusplus (Enable updated __cplusplus macro)"
ms.date: "05/16/2019"
f1_keywords: ["/Zc:__cplusplus"]
helpviewer_keywords: ["-Zc:__cplusplus compiler option (C++)", "__cplusplus macro (C++)"]
---
# /Zc:__cplusplus (Enable updated __cplusplus macro)

The **/Zc:__cplusplus** compiler option enables the **\_\_cplusplus** preprocessor macro to report an updated value for recent C++ language standards support. By default, Visual Studio always returns the value "199711L" for the **\_\_cplusplus** preprocessor macro.

## Syntax

> **/Zc:__cplusplus**[**-**]

## Remarks

The **\_\_cplusplus** preprocessor macro is commonly used to report support for a particular version of the C++ standard. Because lots of existing code appears to depend on the value of this macro matching "199711L", the compiler does not change the value of the macro unless you explicitly opt-in by using the **/Zc:__cplusplus** compiler option. The **/Zc:__cplusplus** option is available starting in Visual Studio 2017 version 15.7, and is off by default. In earlier versions of Visual Studio, and by default, or if **/Zc:__cplusplus-** is specified, Visual Studio returns the value "199711L" for the **\_\_cplusplus** preprocessor macro. The [/permissive-](permissive-standards-conformance.md) option does not enable **/Zc:__cplusplus**.

When the **/Zc:__cplusplus** option is enabled, the value reported by the **\_\_cplusplus** macro depends on the [/std](std-specify-language-standard-version.md) version switch setting. This table shows the possible values for the macro:

|/Zc:__cplusplus switch|/std:c++ switch|__cplusplus value|
|-|-|-|
Zc:__cplusplus|/std:c++14 (default)|201402L
Zc:__cplusplus|/std:c++17|201703L
Zc:__cplusplus|/std:c++latest|201704L
Zc:__cplusplus- (disabled)|Any value|199711L
Not specified|Any value|199711L

The compiler does not support standards switches for C++98, C++03, or C++11.

For finer-grained detection of changes to the compiler toolset, use the [_MSC_VER](../../preprocessor/predefined-macros.md) predefined macro. The value of this built-in macro is incremented for every toolset update in Visual Studio 2017 and later versions. The [_MSVC_LANG](../../preprocessor/predefined-macros.md) predefined macro reports the standard version whether the **/Zc:__cplusplus** option is enabled or disabled. When **/Zc:__cplusplus** is enabled, `__cplusplus == _MSVC_LANG`.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **/Zc:__cplusplus** or **/Zc:__cplusplus-** to the **Additional options:** pane.

## See also

- [/Zc (Conformance)](zc-conformance.md)
- [/std (Specify language standard version)](std-specify-language-standard-version.md)
- [Predefined macros](../../preprocessor/predefined-macros.md)
