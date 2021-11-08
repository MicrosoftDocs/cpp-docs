---
title: "C++ conformance improvements in Visual Studio 2022"
description: "Microsoft C++ in Visual Studio is improving standards conformance and fixing bugs regularly."
ms.date: 10/23/2021
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the improvements by major release, then by version. To jump directly to the changes for a specific version, use the list below **In this article**.

This document lists the changes in Visual Studio 2022. For a guide to the changes in Visual Studio 2019, see [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md). For changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md). For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_170_preview"></a> Conformance improvements in Visual Studio 2022 version 17.0

Visual Studio 2022 version 17.0 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C++ compiler.

### Warning on bitfield width for enumeration type

When you declare an instance of an enumeration type as a bitfield, the width of the bitfield must accommodate all possible values of the enumeration. Otherwise, the compiler issues a diagnostic message. Consider this example:
Consider:

```cpp
enum class E : unsigned { Zero, One, Two };

struct S {
  E e : 1;
};
```

A programmer might expect the class member `S::e` can hold any of the explicitly named `enum` values. Given the number of enumeration elements, it isn't possible. The bitfield can't cover the range of explicitly provided values of `E` (conceptually, the *domain* of `E`). To address the concern that the bitfield width isn't large enough for the domain of the enumeration, a new (off by default) warning is added to MSVC:

```Output
t.cpp(4,5): warning C5249: 'S::e' of type 'E' has named enumerators with values that cannot be represented in the given bit field width of '1'.
  E e : 1;
    ^
t.cpp(1,38): note: see enumerator 'E::Two' with value '2'
enum class E : unsigned { Zero, One, Two };
                                     ^
```

This compiler behavior is a source and binary breaking change that affects all **`/std`** and **`/permissive`** modes.

### Error on ordered pointer comparison against `nullptr` or 0

The C++ Standard inadvertently allowed an ordered pointer comparison against `nullptr` or 0. For example:

```cpp
bool f(int *p)
{
   return p >= 0;
}
```

WG21 paper [N3478](https://wg21.link/n3478) removed this oversight. MSVC has now implemented this change. When the example is compiled by using **`/permissive-`** (and **`/diagnostics:caret`**), it emits the following error:

```Output
t.cpp(3,14): error C7664: '>=': ordered comparison of pointer and integer zero ('int *' and 'int')
    return p >= 0;
             ^
```

This compiler behavior is a source and binary breaking change that affects code compiled using **`/permissive-`** in all **`/std`** modes.

## See also

[Microsoft C/C++ language conformance](visual-cpp-language-conformance.md)
