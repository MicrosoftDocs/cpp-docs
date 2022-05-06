---
title: "C++ conformance improvements in Visual Studio 2022"
description: "Microsoft C++ in Visual Studio is improving standards conformance and fixing bugs regularly."
ms.date: 05/05/2022
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the improvements by major release, then by version. To jump directly to the changes for a specific version, use the list below **In this article**.

This document lists the changes in Visual Studio 2022. For a guide to the changes in Visual Studio 2019, see [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md). For changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md). For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_172"></a> Conformance improvements in Visual Studio 2022 version 17.2

Visual Studio 2022 version 17.2 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C++ compiler.

### Unterminated bidirectional character warnings

Visual Studio 2022 version 17.2 adds level 3 warning C5255 for unterminated Unicode bidirectional characters in comments and strings. The warning addresses a security concern raised by a feedback ticket, as described in [Trojan Source: Invisible Vulnerabilities](https://www.trojansource.codes/trojan-source.pdf) by Nicholas Boucher and Ross Anderson. For more information on Unicode bidirectional characters, see [Unicode® Standard Annex #9: UNICODE BIDIRECTIONAL ALGORITHM](https://unicode.org/reports/tr9/).

Warning C5255 only addresses files that, after conversion, contain Unicode bidirectional characters. This warning applies to UTF-8, UTF-16, and UTF-32 files, so the proper source-encoding must be provided. This change is a source breaking change.

#### Example (before/after)

In versions of Visual Studio before Visual Studio 2022 version 17.2, an unterminated bidirectional character didn't produce a warning. Visual Studio 2022 version 17.2 produces warning C5255:

```cpp
// bidi.cpp
int main() {
    const char *access_level = "user";
    // The following source line contains bidirectional Unicode equivalent to:
    //    if ( strcmp(access_level, "user\u202e \u2066// Check if admin \u2069 \u2066") ) {
    // In most editors, it's rendered as:
    //    if ( strcmp(access_level, "user") ) { // Check if admin
    if ( strcmp(access_level, "user‮ ⁦// Check if admin ⁩ ⁦") ) {
        printf("You are an admin.\n");
    }
    return 0;
}

/* build output
bidi.cpp(8): warning C5255: unterminated bidirectional character encountered: 'U+202e'
bidi.cpp(8): warning C5255: unterminated bidirectional character encountered: 'U+2066'
*/
```

### `from_chars()` `float` tiebreaker

Visual Studio 2022 version 17.2 fixes a bug in `<charconv>` `from_chars()` `float` tiebreaker rules that produced incorrect results. This bug affected decimal strings that were at the exact midpoint of consecutive `float` values, within a narrow range. (The smallest and largest affected values were `32768.009765625` and `131071.98828125`, respectively.) The tiebreaker rule wanted to round to "even" and "even" happened to be "down", but the implementation incorrectly rounded "up". (`double` was unaffected.) For more information and implementation details, see [microsoft/STL#2366](https://github.com/microsoft/STL/pull/2366).

This change affects runtime behavior in the specified range of cases.

#### Example

```cpp
// from_chars_float.cpp
#include <cassert>
#include <charconv>
#include <cstdio>
#include <string_view>
#include <system_error>
using namespace std;
int main() {
    const double dbl  = 32768.009765625;
    const auto sv     = "32768.009765625"sv;
    float flt         = 0.0f;
    const auto result = from_chars(sv.data(), sv.data() + sv.size(), flt);
    assert(result.ec == errc{});
    printf("from_chars() returned: %.1000g\n", flt);
    printf("This rounded %s.\n", flt < dbl ? "DOWN" : "UP");
}
```

In versions before Visual Studio 2022 version 17.2:

```Output
C:\Temp>cl /EHsc /nologo /W4 /std:c++17 from_chars_float.cpp && from_chars_float
from_chars_float.cpp
from_chars() returned: 32768.01171875
This rounded UP.
```

In Visual Studio 2022 version 17.2 and after:

```Output
C:\Temp>cl /EHsc /nologo /W4 /std:c++17 from_chars_float.cpp && from_chars_float
from_chars_float.cpp
from_chars() returned: 32768.0078125
This rounded DOWN.
```

### `/Zc:__STDC__` makes `__STDC__` available for C

The C standard requires that a conforming C implementation defines `__STDC__` as `1`. Due to the behavior of the UCRT, which doesn't expose POSIX functions when `__STDC__` is `1`, it isn't possible to define this macro for C by default without introducing breaking changes to the stable language versions. Visual Studio 2022 version 17.2 and later add a conformance option, `/Zc:__STDC__`, that defines this macro. There's no negative version of the option. Currently, we plan to use this option by default for future versions of C.

This change is a source breaking change. It applies when C11 or C17 mode is enabled, **`/std:c11`** or **`/std:c17`**, together with `/Zc:__STDC__`.

#### Example

```c
// test__STDC__.c
#include <io.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
#if __STDC__
    int f = _open("file.txt", _O_RDONLY);
    _close(f);
#else
    int f = open("file.txt", O_RDONLY);
    close(f);
#endif
}

/* Command line behavior

C:\Temp>cl /EHsc /W4 /Zc:__STDC__ test__STDC__.c && test__STDC__

*/
```

### Warning for missing braces

Warning C5246 reports missing braces during aggregate initialization of a subobject. Before Visual Studio 2022 version 17.2, the warning didn't handle the case of an anonymous `struct` or `union`.

This change is a source breaking change. It applies when the off-by-default warning C5246 is enabled.

#### Example

In Visual Studio 2022 version 17.2 and later, this code now causes an error:

```cpp
struct S {
   union {
      float f[4];
      double d[2];
   };
};

void f()
{
   S s = { 1.0f, 2.0f, 3.14f, 4.0f };
}

/* Command line behavior
cl /Wall /c t.cpp

t.cpp(10): warning C5246: 'anonymous struct or union': the initialization of a subobject should be wrapped in braces
*/
```

To resolve this issue, add braces to the initializer:

```cpp
void f()
{
   S s = { { 1.0f, 2.0f, 3.14f, 4.0f } };
}
```

## <a name="improvements_171"></a> Conformance improvements in Visual Studio 2022 version 17.1

Visual Studio 2022 version 17.1 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C++ compiler.

### Detect ill-formed capture default in non-local lambda-expressions

The C++ Standard only allows a lambda expression in block scope to have a capture-default. In Visual C++ 2022 version 17.1 and later, the compiler detects when a capture default isn't allowed in a non-local lambda expression. It emits a new level 4 warning, C5253.

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

In Visual Studio 2022 version 17.1 and later, if the expression associated with a `static_assert` isn't a dependent expression, the compiler evaluates the expression as soon as it's parsed. If the expression evaluates to `false`, the compiler emits an error. Previously, if the `static_assert` was within the body of a function template (or within the body of a member function of a class template), the compiler wouldn't perform this analysis.

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
