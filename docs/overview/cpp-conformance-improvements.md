---
title: "C++ conformance improvements in Visual Studio 2022"
description: "Microsoft C++ in Visual Studio is improving standards conformance and fixing bugs regularly."
ms.date: 10/23/2021
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the improvements by major release, then by version. To jump directly to the changes for a specific version, use the list below **In this article**.

This document lists the changes in Visual Studio 2022. For a guide to the changes in Visual Studio 2019, see [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md). For changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md). For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_171"></a> Conformance improvements in Visual Studio 2022 version 17.1

Visual Studio 2022 version 17.1 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C++ compiler.

### Detect ill-formed capture default in non-local lambda-expressions

The C++ Standard only allows a lambda expression in block scope to have a capture-default. In Visual C++ 2022 version 17.1 and later, the compiler now detects when a capture default isn't allowed in a non-local lambda expression and emits a new level 4 warning, C5253.

This change is a source breaking change. It applies in any mode that uses the new lambda processor: **`/Zc:lambda`**, **`/std:c++20`**, or **`/std:c++latest`**.

#### Example

In Visual C++ 2022 version 17.1 this code now emits an error:

```cpp
#pragma warning(error:5253)

auto incr = [=](int value) { return value + 1; };

// capture_default.cpp(3,14): error C5253: a non-local lambda cannot have a capture default
// auto incr = [=](int value) { return value + 1; };
//              ^
```

To fix this issue, remove the capture default:

```cpp
#pragma warning(error:5253)

auto incr = [](int value) { return value + 1; };
```

### C4028 is now C4133 for function-to-pointer operations

Before Visual Studio 2022 version 17.1, the compiler reported an incorrect error message on certain pointer-to-function comparisons in C code. The incorrect message was reported when you compared two function pointers that had the same argument counts but incompatible types. Now, we issue a different warning that complains about pointer-to-function incompatibility rather than function parameter mismatch.

This change is a source breaking change. It applies when code is compiled as C.

#### Example

```C
int f1(int); 
int f2(char*); 
int main(void) 
{ 
    return (f1 == f2); 
}
// Old warning:
// C4028: formal parameter 1 different from declaration
// New warning:
// C4113: 'int (__cdecl *)(char *)' differs in parameter lists from 'int (__cdecl *)(int)'
```

### Error on a non-dependent static_assert

In Visual Studio 2022 version 17.1 and later, if the expression associated with a `static_assert` is not dependent, the compiler evaluates the expression as soon as it's parsed. If the expression evaluates to `false`, the compiler emits an error. Previously, if the `static_assert` was within the body of a function template (or within the body of a member function of a class template), the compiler wouldn't perform this analysis.

This change is a source breaking change. It applies in any mode that implies **`/Zc:permissive-`** or **`/Zc:static_assert`**.  This change in behavior can be disabled by using the **`/Zc:static_assert-`** compiler option.

#### Example

In Visual Studio 2022 version 17.1 and later, this code now causes an error:

```cpp
template<typename T>
void f()
{
   static_assert(false, "BOOM!");
}
```

To fix this issue, make the expression dependent. For example:

```cpp
template<typename>
constexpr bool dependent_false = false;

template<typename T>
void f()
{
   static_assert(dependent_false<T>, "BOOM!");
}
```

With this change, the compiler only emits an error if the function template `f` is instantiated.

## <a name="improvements_170"></a> Conformance improvements in Visual Studio 2022 version 17.0

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
