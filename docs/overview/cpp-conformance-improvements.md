---
title: "C++ conformance improvements in Visual Studio 2022"
description: "Microsoft C++ in Visual Studio is improving standards conformance and fixing bugs regularly."
ms.date: 06/19/2023
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the significant improvements by major release, then by version. To jump directly to the changes for a specific version, use **In this article** links, above.

This document lists the changes in Visual Studio 2022:

- For a guide to the changes in Visual Studio 2019, see [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md).
- For changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md).
- For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_176"></a> Conformance improvements in Visual Studio 2022 version 17.6

Visual Studio 2022 version 17.6 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### Compound `volatile` assignments no longer deprecated

C++20 deprecated applying certain operators to types qualified with `volatile`. For example, when the following code is compiled with `cl /std:c++20 /Wall test.cpp`:

```cpp
void f(volatile int& expr)
{
   ++expr;
}
```

The compiler produces `test.cpp(3): warning C5214: applying '++' to an operand with a volatile qualified type is deprecated in C++20`.

In C++20, compound assignment operators (operators of the form `@=`) were deprecated. In C++23, compound operators excluded in C++20 are no longer deprecated. For example, in C++23 the following code doesn't produce a warning, whereas it does in C++20:

```cpp
void f(volatile int& e1, int e2)
{
   e1 += e2;
}
```

For more information about this change, see [CWG:2654](https://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#2654)

### Rewriting equality in expressions is less of a breaking change (P2468R2)

In C++20, [P2468R2](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2468r2.html) changed the compiler to accept code such as:

```cpp
struct S
{
    bool operator==(const S&);
    bool operator!=(const S&);
};
bool b = S{} != S{};
```

The compiler accepts this code, which means that the compiler is more strict with code such as:

```c++
struct S
{
  operator bool() const;
  bool operator==(const S&);
};

bool b = S{} == S{};
```

Version 17.5 of the compiler accepts this program. Version 17.6 of the compiler rejects it. To fix it, add `const` to `operator==` to remove the ambiguity. Or, add a corresponding `operator!=` to the definition as shown in the following example:

```cpp
struct S
{
  operator bool() const;
  bool operator==(const S&);
  bool operator!=(const S&);
};

bool b = S{} == S{};
```

Microsoft C/C++ compiler versions 17.5 and 17.6 accept the previous program, and calls `S::operator==` in both versions.

The general programming model outlined in P2468R2 is that if there's a corresponding `operator!=` for a type, it typically suppresses the rewrite behavior. Adding a corresponding `operator!=` is the suggested fix for code that previously compiled in C++17. For more information, see [Programming Model](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2468r2.html#programming-model).

## <a name="improvements_174"></a> Conformance improvements in Visual Studio 2022 version 17.4

Visual Studio 2022 version 17.4 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### Underlying types of unscoped `enum` with no fixed type

In versions of Visual Studio before Visual Studio 2022 version 17.4, the C++ compiler didn't correctly determine the underlying type of an unscoped enumeration with no fixed base type. Under [`/Zc:enumTypes`](../build/reference/zc-enumtypes.md), we now correctly implement the standard behavior.

The C++ Standard requires the underlying type of an **`enum`** to be large enough to hold all enumerators in that **`enum`**. Sufficiently large enumerators can set the underlying type of the **`enum`** to **`unsigned int`**, **`long long`**, or **`unsigned long long`**. Previously, such **`enum`** types always had an underlying type of **`int`** in the Microsoft compiler, regardless of enumerator values.

When enabled, the **`/Zc:enumTypes`** option is a potential source and binary breaking change. It's off by default, and not enabled by **`/permissive-`**, because the fix may affect binary compatibility. Some enumeration types change size when the conformant fix is enabled. Certain Windows SDK headers include such enumeration definitions.

#### Example

```cpp
enum Unsigned
{
    A = 0xFFFFFFFF // Value 'A' does not fit in 'int'.
};

// Previously, failed this static_assert. Now passes with /Zc:enumTypes.
static_assert(std::is_same_v<std::underlying_type_t<Unsigned>, unsigned int>);

template <typename T>
void f(T x)
{
}

int main()
{
    // Previously called f<int>, now calls f<unsigned int>.
    f(+A);
}

// Previously this enum would have an underlying type of `int`, but Standard C++ requires this to have
// a 64-bit underlying type. Using /Zc:enumTypes changes the size of this enum from 4 to 8, which could
// impact binary compatibility with code compiled with an earlier compiler version or without the switch.
enum Changed
{
    X = -1,
    Y = 0xFFFFFFFF
};
```

### Types of enumerators within an `enum` definition with no fixed underlying type

In versions of Visual Studio before Visual Studio 2022 version 17.4, the C++ compiler didn't correctly model the types of enumerators. It could assume an incorrect type in enumerations without a fixed underlying type before the closing brace of the enumeration. Under [`/Zc:enumTypes`](../build/reference/zc-enumtypes.md), the compiler now correctly implements the standard behavior.

The C++ Standard specifies that within an enumeration definition of no fixed underlying type, initializers determine the types of enumerators. Or, for the enumerators with no initializer, by the type of the previous enumerator (accounting for overflow). Previously, such enumerators were always given the deduced type of the enumeration, with a placeholder for the underlying type (typically **`int`**).

When enabled, the **`/Zc:enumTypes`** option is a potential source and binary breaking change. It's off by default, and not enabled by **`/permissive-`**, because the fix may affect binary compatibility. Some enumeration types change size when the conformant fix is enabled. Certain Windows SDK headers include such enumeration definitions.

#### Example

```cpp
enum Enum {
    A = 'A',
    B = sizeof(A)
};

static_assert(B == 1); // previously failed, now succeeds under /Zc:enumTypes
```

In this example the enumerator `A` should have type **`char`** prior to the closing brace of the enumeration, so `B` should be initialized using `sizeof(char)`. Before the **`/Zc:enumTypes`** fix, `A` had enumeration type `Enum` with a deduced underlying type **`int`**, and `B` was initialized using `sizeof(Enum)`, or 4.

## <a name="improvements_173"></a> Conformance improvements in Visual Studio 2022 version 17.3

Visual Studio 2022 version 17.3 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### C: Improved modifier compatibility checking between pointers

The C compiler didn't properly compare modifiers between pointers, especially `void*`. This defect could result in an improper diagnosis of incompatibility between `const int**` and `void*` and compatibility between `int* volatile*` and `void*`.

#### Example

```c
void fn(void* pv) { (pv); }

int main()
{
    int t = 42;
    int* pt = &t;
    int* volatile * i = &pt;
    fn(i);    // Now raises C4090
    const int** j = &pt;
    fn(j);    // No longer raises C4090
}
```

## <a name="improvements_172"></a> Conformance improvements in Visual Studio 2022 version 17.2

Visual Studio 2022 version 17.2 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### Unterminated bidirectional character warnings

Visual Studio 2022 version 17.2 adds level 3 warning C5255 for unterminated Unicode bidirectional characters in comments and strings. The warning addresses a security concern described in [Trojan Source: Invisible Vulnerabilities](https://www.trojansource.codes/trojan-source.pdf) by Nicholas Boucher and Ross Anderson. For more information on Unicode bidirectional characters, see [Unicode® Standard Annex #9: UNICODE BIDIRECTIONAL ALGORITHM](https://unicode.org/reports/tr9/).

Warning C5255 only addresses files that, after conversion, contain Unicode bidirectional characters. This warning applies to UTF-8, UTF-16, and UTF-32 files, so the proper source-encoding must be provided. This change is a source breaking change.

#### Example (before/after)

In versions of Visual Studio before Visual Studio 2022 version 17.2, an unterminated bidirectional character didn't produce a warning. Visual Studio 2022 version 17.2 produces warning C5255:

```cpp
// bidi.cpp
int main() {
    const char *access_level = "user";
    // The following source line contains bidirectional Unicode characters equivalent to:
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

The C standard requires that a conforming C implementation defines `__STDC__` as `1`. Due to the behavior of the UCRT, which doesn't expose POSIX functions when `__STDC__` is `1`, it isn't possible to define this macro for C by default without introducing breaking changes to the stable language versions. Visual Studio 2022 version 17.2 and later add a conformance option [`/Zc:__STDC__`](../build/reference/zc-stdc.md) that defines this macro. There's no negative version of the option. Currently, we plan to use this option by default for future versions of C.

This change is a source breaking change. It applies when C11 or C17 mode is enabled, **`/std:c11`** or **`/std:c17`**, together with **`/Zc:__STDC__`**.

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

Visual Studio 2022 version 17.1 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### Detect ill-formed capture default in nonlocal lambda-expressions

The C++ Standard only allows a lambda expression in block scope to have a capture-default. In Visual Studio 2022 version 17.1 and later, the compiler detects when a capture default isn't allowed in a nonlocal lambda expression. It emits a new level 4 warning, C5253.

This change is a source breaking change. It applies in any mode that uses the new lambda processor: **`/Zc:lambda`**, **`/std:c++20`**, or **`/std:c++latest`**.

#### Example

In Visual Studio 2022 version 17.1 this code now emits an error:

```cpp
#pragma warning(error:5253)

auto incr = [=](int value) { return value + 1; };

// capture_default.cpp(3,14): error C5253: a nonlocal lambda cannot have a capture default
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

### Error on a nondependent `static_assert`

In Visual Studio 2022 version 17.1 and later, if the expression associated with a `static_assert` isn't a dependent expression, the compiler evaluates the expression as soon as it's parsed. If the expression evaluates to `false`, the compiler emits an error. Previously, if the `static_assert` was within the body of a function template (or within the body of a member function of a class template), the compiler wouldn't perform this analysis.

This change is a source breaking change. It applies in any mode that implies **`/permissive-`** or **`/Zc:static_assert`**.  This change in behavior can be disabled by using the **`/Zc:static_assert-`** compiler option.

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

Visual Studio 2022 version 17.0 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

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
