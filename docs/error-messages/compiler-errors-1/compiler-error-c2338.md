---
description: "Learn more about: Compiler Error C2338"
title: "Compiler Error C2338"
ms.date: 02/22/2022
f1_keywords: ["C2338"]
helpviewer_keywords: ["C2338"]
ms.assetid: 49bba575-1de4-4963-86c6-ce3226a2ba51
---
# Compiler Error C2338

> *Error message*

Error C2338 can be caused by a **`static_assert`** error during compilation. The message is supplied by the **`static_assert`** parameters.

Error C2338 can also be generated by external providers to the compiler. In most cases, these errors are reported by an attribute provider DLL, such as ATLPROV. Some common forms of this message include:

- '*attribute*' Atl Attribute Provider : error ATL*number* *message*

- Incorrect usage of attribute '*attribute*'

- '*usage*': incorrect format for attribute 'usage'

These errors are often unrecoverable, and may be followed by a fatal compiler error.

To fix these issues, correct the attribute usage. For example, in some cases, attribute parameters must be declared before they can be used. If an ATL error number is provided, check the documentation for that error for more specific information.

In Standard C++11 and later, **`constexpr`** functions are no longer considered **`noexcept`** by default when used in a constant expression. This behavior change comes from the resolution of Core Working Group (CWG) [CWG 1351](https://wg21.link/cwg1351) and is enabled in [`/permissive-`](../../build/reference/permissive-standards-conformance.md) mode. The following example compiles in Visual Studio 2019 version 16.1 and earlier, but produces C2338 in Visual Studio 2019 version 16.2:

```cpp
// c2338.cpp
// Compile using: cl /EHsc /W4 /permissive- c2338.cpp
constexpr int f() { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept"); // C2338 in 16.2
}
```

To fix the error, add the **`noexcept`** expression to the function declaration:

```cpp
// c2338_fixed.cpp
// Compile using: cl /EHsc /W4 /permissive- c2338_fixed.cpp
constexpr int f() noexcept { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept");
}
```
