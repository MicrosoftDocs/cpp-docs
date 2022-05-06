---
title: "C++ conformance improvements in Visual Studio 2022"
description: "Microsoft C++ in Visual Studio is improving standards conformance and fixing bugs regularly."
ms.date: 10/23/2021
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the improvements by major release, then by version. To jump directly to the changes for a specific version, use the list below **In this article**.

This document lists the changes in Visual Studio 2022. For a guide to the changes in Visual Studio 2019, see [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md). For changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md). For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_172"></a> Conformance improvements in Visual Studio 2022 version 17.2

Visual Studio 2022 version 17.2 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C++ compiler.

### Unterminated bidirectional character warnings

| Source/Binary Breaking Change? | Compiler mode | Backward compatible? | EDG Behavior | Commit |
| ------------------------------ | ------------- | -------------------- | ------------ | ------ |
|  Source                        |   Any mode            |      Yes                |    N/A          | [cb382c5](https://devdiv.visualstudio.com/DevDiv/_git/msvc/commit/cb382c5578c4dcf6aaeec3276351b297f10f80f7?refName=refs%2Fheads%2Fdev%2Feldakesh%2Fbidi)|

#### Description/Rationale

Adds a W3 warning C5255 to warn about unterminated Unicode bidirectional characters in comments and strings.
This was a security concern that was raised by a feedback ticket and is covered in https://www.trojansource.codes/trojan-source.pdf.
This warning only concerns files that, after conversion, contain Unicode bidirectional characters. This applies to UTF-8/16/32 files, so the proper source encoding must be provided.

#### Example (before/after)

Before, an unterminated bidi character (see https://unicode.org/reports/tr9/) did not produce a warning.
Now it does:

```cpp
int main() {
    const char *access_level = "user";
    if (strcmp(access_level, "user‮ ⁦// Check if admin ⁩ ⁦")) {
        printf("You are an admin.\n");
    }
    return 0;
}

bidi.cpp(4): warning C5255: unterminated bidirectional character encountered: 'U+202e'
bidi.cpp(4): warning C5255: unterminated bidirectional character encountered: 'U+2066'
```

### `from_chars()` `float` tiebreaking

| Source/Binary Breaking Change? | Compiler mode  | Backward compatible? | EDG Behavior  | Commit       |
| ------------------------------ | -------------- | -------------------- | ------------- | ------------ |
| Runtime behavior only          | C++17 or later | Yes                  | N/A (runtime) | [b24e13c4][] |

[b24e13c4]: https://devdiv.visualstudio.com/DevDiv/_git/msvc/commit/b24e13c449def96d4ad504eb2aae6602eaecdf13?refName=refs%2Fheads%2Fprod%2Ffe

#### Description/Rationale

Fixed a bug in `<charconv>` `from_chars()` `float` tiebreaking that produced incorrect results. This affected decimal strings that were at the exact midpoint of consecutive `float` values, within a narrow range (the smallest and largest affected values were `"32768.009765625"` and `"131071.98828125"`), where the tiebreaker rule wanted to round to "even" and "even" happened to be "down", but the implementation incorrectly rounded "up". (`double` was unaffected.) [microsoft/STL#2366](https://github.com/microsoft/STL/pull/2366)

#### Example (before/after)

```cmd
C:\Temp>type meow.cpp
```
```cpp
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

Before:

```
C:\Temp>cl /EHsc /nologo /W4 /std:c++17 meow.cpp && meow
meow.cpp
from_chars() returned: 32768.01171875
This rounded UP.
```

After:

```
C:\Temp>cl /EHsc /nologo /W4 /std:c++17 meow.cpp && meow
meow.cpp
from_chars() returned: 32768.0078125
This rounded DOWN.
```

### `/Zc:__STDC__` makes `__STDC__` available for C

| Source/Binary Breaking Change? | Compiler mode | Backward compatible? | EDG Behavior | Commit |
| ------------------------------ | ------------- | -------------------- | ------------ | ------ |
|  Source                        |   C11/C17           |      Yes               |    Follows us         | [d315cf09](https://dev.azure.com/devdiv/DevDiv/_git/msvc/commit/d315cf097bfab063473ad1c579206ef75a846f99?refName=refs%2Fheads%2Fdev%2Feldakesh%2Fstdc) [3afb22](https://devdiv.visualstudio.com/DevDiv/_git/msvc/commit/3afb22a8059a95cab1406237c04df8f12bd5333f)|

#### Description/Rationale

The C standard requires that a conforming C implementation defines `__STDC__` as `1`. Due to the behavior of the UCRT, which doesn't expose POSIX functions when `__STDC__` is `1`, it isn't possible to define this macro for C by default without introducing breaking changes to the stable language versions. Visual Studio 2022 version 17.2 and later add a conformance option, `/Zc:__STDC__`, that defines this macro. There's no negative version of the option. Currently, we plan to use this option by default for future versions of C.

This change is a source breaking change. It applies when C11 or C17 mode is enabled, **`/std:c11`** or **`/std:c17`**, together with `/Zc:__STDC__`.

#### Example

```c
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

C:\Temp>cl /EHsc /W4 /Zc:__STDC__ meow.c && meow

*/
```

### Additional warning for missing braces

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
