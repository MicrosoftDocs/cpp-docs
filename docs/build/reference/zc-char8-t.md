---
description: "Learn more about the /Zc:char8_t (Enable C++20 char8_t type) compiler option."
title: "/Zc:char8_t (Enable C++20 char8_t type)"
ms.date: 08/11/2021
f1_keywords: ["/Zc:char8_t"]
helpviewer_keywords: ["-Zc:char8_t compiler option (C++)", "/Zc:char8_t compiler option (C++)"]
---
# `/Zc:char8_t` (Enable C++20 char8_t type)

The **`/Zc:char8_t`** compiler option enables C++20 conforming **`char8_t`** type support. **`char8_t`** is a character type that's used to represent UTF-8 code units.

## Syntax

> **`/Zc:char8_t`**[**`-`**]

## Remarks

The **`/Zc:char8_t`** compiler option enables the **`char8_t`** type keyword as specified in the C++20 standard. It causes the compiler to generate `u8` prefixed character or string literals as `const char8_t` or `const char8_t[N]` types, respectively, instead of as `const char` or `const char[N]` types. In C++17, arrays of **`char`** may be initialized using `u8` string literals. In C++20, this initialization is ill-formed, and causes compiler error [C2440](../../error-messages/compiler-errors-1/compiler-error-c2440.md). This behavior can be a source-breaking change. You can revert the compiler to C++14 or C++17 behavior explicitly by specifying **`/Zc:char8_t-`**.

The **`/Zc:char8_t`** option is available starting in Visual Studio 2019 version 16.1. It's enabled automatically when you specify [`/std:c++20`](std-specify-language-standard-version.md) or later (such as **`/std:c++latest`**). Otherwise, it's off by default.

### Example

```cpp
const char* s = u8"Hello"; // Compiles in C++17, Error C2440 in C++20
const char8_t* s = u8"Hello"; // Compiles in C++20 or with /Zc:char8_t
```

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Add **`/Zc:char8_t`** or **`/Zc:char8_t-`** to the **Additional options:** pane.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
