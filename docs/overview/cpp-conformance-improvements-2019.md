---
title: "C++ conformance improvements in Visual Studio 2019"
description: "Microsoft C++ in Visual Studio is progressing toward full conformance with the C++20 language standard."
ms.date: 06/29/2022
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2019

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the improvements by major release, then by version. To jump directly to the changes for a specific version, use the list below **In this article**.

This document lists the changes in Visual Studio 2019. For a guide to the changes in Visual Studio 2022, see [C++ conformance improvements in Visual Studio 2022](cpp-conformance-improvements.md). For changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md). For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_160"></a> Conformance improvements in Visual Studio 2019 RTW (version 16.0)

Visual Studio 2019 RTW contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C++ compiler.

> [!NOTE]
> C++20 features were available only in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) mode in Visual Studio 2019 until the C++20 implementation was considered complete. Visual Studio 2019 version 16.11 introduces the [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) compiler mode. In this article, features that originally required **`/std:c++latest`** mode now work in **`/std:c++20`** mode or later in the latest versions of Visual Studio. We've updated the documentation to mention **`/std:c++20`**, even though this option wasn't available when the features were first released.

### Improved modules support for templates and error detection

Modules are now officially in the C++20 standard. Improved support was added in Visual Studio 2017 version 15.9. For more information, see [Better template support and error detection in C++ Modules with MSVC 2017 version 15.9](https://devblogs.microsoft.com/cppblog/better-template-support-and-error-detection-in-c-modules-with-msvc-2017-version-15-9/).

### Modified specification of aggregate type

The specification of an aggregate type has changed in C++20 (see [Prohibit aggregates with user-declared constructors](https://wg21.link/p1008r1)). In Visual Studio 2019, under **`/std:c++latest`** (or **`/std:c++20`** in Visual Studio 2019 version 16.11 and later), a class with any user-declared constructor (for example, including a constructor declared `= default` or `= delete`) isn't an aggregate. Previously, only user-provided constructors would disqualify a class from being an aggregate. This change puts more restrictions on how such types can be initialized.

The following code compiles without errors in Visual Studio 2017 but raises errors C2280 and C2440 in Visual Studio 2019 under **`/std:c++20`** or **`/std:c++latest`**:

```cpp
struct A
{
    A() = delete; // user-declared ctor
};

struct B
{
    B() = default; // user-declared ctor
    int i = 0;
};

A a{}; // ill-formed in C++20, previously well-formed
B b = { 1 }; // ill-formed in C++20, previously well-formed
```

### Partial support for `operator <=>`

[P0515R3](https://wg21.link/p0515r3) C++20 introduces the `<=>` three-way comparison operator, also known as the "spaceship operator". Visual Studio 2019 version 16.0 in **`/std:c++latest`** mode introduces partial support for the operator by raising errors for syntax that's now disallowed. For example, the following code compiles without errors in Visual Studio 2017 but raises multiple errors in Visual Studio 2019 under **`/std:c++20`** or **`/std:c++latest`**:

```cpp
struct S
{
    bool operator<=(const S&) const { return true; }
};

template <bool (S::*)(const S&) const>
struct U { };

int main(int argc, char** argv)
{
    U<&S::operator<=> u; // In Visual Studio 2019 raises C2039, 2065, 2146.
}
```

To avoid the errors, insert a space in the offending line before the final angle bracket: `U<&S::operator<= > u;`.

### References to types with mismatched cv-qualifiers

>[!Note]
> This change only affects Visual Studio 2019 versions 16.0 through 16.8. It was reverted starting in Visual Studio 2019 version 16.9

Previously, MSVC allowed direct binding of a reference from a type with mismatched cv-qualifiers below the top level. This binding could allow modification of supposedly const data referred to by the reference.

The compiler for Visual Studio 2019 versions 16.0 through 16.8 instead creates a temporary, as was required by the standard at that time. Later, the standard retroactively changed making the previous behavior of Visual Studio 2017 and earlier correct, and the behavior of Visual Studio 2019 version 16.0 through 16.8 wrong. Consequently, this change was reverted starting in Visual Studio 2019 version 16.9.

See [Similar types and reference binding](#similar-types-and-reference-binding) for a related change.

As an example, in Visual Studio 2017, the following code compiles without warnings. In Visual Studio 2019 versions 16.0 through 16.8, the compiler raises warning C4172. Starting with Visual Studio 2019 version 16.9, the code once again compiles without warnings:

```cpp
struct X
{
    const void* const& PData() const
    {
        return _pv;
    }

    void* _pv;
};

int main()
{
    X x;
    auto p = x.PData(); // C4172 <func:#1 "?PData@X@@QBEABQBXXZ"> returning address of local variable or temporary
}
```

### `reinterpret_cast` from an overloaded function

The argument to **`reinterpret_cast`** isn't one of the contexts in which the address of an overloaded function is permitted. The following code compiles without errors in Visual Studio 2017, but in Visual Studio 2019 it raises error C2440:

```cpp
int f(int) { return 1; }
int f(float) { return .1f; }
using fp = int(*)(int);

int main()
{
    fp r = reinterpret_cast<fp>(&f); // C2440: cannot convert from 'overloaded-function' to 'fp'
}
```

To avoid the error, use an allowed cast for this scenario:

```cpp
int f(int);
int f(float);
using fp = int(*)(int);

int main()
{
    fp r = static_cast<fp>(&f); // or just &f;
}
```

### Lambda closures

In C++14, lambda closure types aren't literals. The primary consequence of this rule is that a lambda may not be assigned to a **`constexpr`** variable. The following code compiles without errors in Visual Studio 2017, but in Visual Studio 2019 it raises error C2127:

```cpp
int main()
{
    constexpr auto l = [] {}; // C2127 'l': illegal initialization of 'constexpr' entity with a non-constant expression
}
```

To avoid the error, either remove the **`constexpr`** qualifier, or else change the conformance mode to **`/std:c++17`** or later.

### `std::create_directory` failure codes

Implemented [P1164](https://wg21.link/p1164r1) from C++20 unconditionally. This changes `std::create_directory` to check whether the target was already a directory on failure. Previously, all ERROR_ALREADY_EXISTS type errors were turned into success-but-directory-not-created codes.

### `operator<<(std::ostream, nullptr_t)`

Per [LWG 2221](https://cplusplus.github.io/LWG/issue2221), added `operator<<(std::ostream, nullptr_t)` for writing **`nullptr`** to streams.

### More parallel algorithms

New parallel versions of `is_sorted`, `is_sorted_until`, `is_partitioned`, `set_difference`, `set_intersection`, `is_heap`, and `is_heap_until`.

### Fixes in atomic initialization

[P0883 "Fixing atomic initialization"](https://wg21.link/p0883r1) changes `std::atomic` to value-initialize the contained `T` rather than default-initializing it. The fix is enabled when using Clang/LLVM with the Microsoft standard library. It's currently disabled for the Microsoft C++ compiler, as a workaround for a bug in **`constexpr`** processing.

### `remove_cvref` and `remove_cvref_t`

Implemented the `remove_cvref` and `remove_cvref_t` type traits from [P0550](https://wg21.link/p0550r2). These remove reference-ness and cv-qualification from a type without decaying functions and arrays to pointers (unlike `std::decay` and `std::decay_t`).

### Feature-test macros

[P0941R2 - feature-test macros](https://wg21.link/p0941r2) is complete, with support for `__has_cpp_attribute`. Feature-test macros are supported in all standard modes.

### Prohibit aggregates with user-declared constructors

C++20 [P1008R1 - prohibiting aggregates with user-declared constructors](https://wg21.link/p1008r1) is complete.

### `reinterpret_cast` in a `constexpr` function

A **`reinterpret_cast`** is illegal in a **`constexpr`** function. The Microsoft C++ compiler would previously reject **`reinterpret_cast`** only if it were used in a **`constexpr`** context. In Visual Studio 2019, in all language standards modes, the compiler correctly diagnoses a **`reinterpret_cast`** in the definition of a **`constexpr`** function. The following code now produces C3615:

```cpp
long long i = 0;
constexpr void f() {
    int* a = reinterpret_cast<int*>(i); // C3615: constexpr function 'f' cannot result in a constant expression
}
```

To avoid the error, remove the **`constexpr`** modifier from the function declaration.

### Correct diagnostics for basic_string range constructor

In Visual Studio 2019, the `basic_string` range constructor no longer suppresses compiler diagnostics with **`static_cast`**. The following code compiles without warnings in Visual Studio 2017, despite the possible loss of data from **`wchar_t`** to **`char`** when initializing `out`:

```cpp
std::wstring ws = /* . . . */;
std::string out(ws.begin(), ws.end()); // VS2019 C4244: 'argument': conversion from 'wchar_t' to 'const _Elem', possible loss of data.
```

Visual Studio 2019 correctly raises warning C4244. To avoid the warning, you can initialize the `std::string` as shown in this example:

```cpp
std::wstring ws = L"Hello world";
std::string out;
for (wchar_t ch : ws)
{
    out.push_back(static_cast<char>(ch));
}
```

### Incorrect calls to `+=` and `-=` under `/clr` or `/ZW` are now correctly detected

A bug was introduced in Visual Studio 2017 that caused the compiler to silently ignore errors and generate no code for the invalid calls to **`+=`** and **`-=`** under **`/clr`** or **`/ZW`**. The following code compiles without errors in Visual Studio 2017 but in Visual Studio 2019 it correctly raises error C2845:

```cpp
public enum class E { e };

void f(System::String ^s)
{
    s += E::e; // in VS2019 C2845: 'System::String ^': pointer arithmetic not allowed on this type.
}
```

To avoid the error in this example, use the **`+=`** operator with the `ToString()` method: `s += E::e.ToString();`.

### Initializers for inline static data members

Invalid member accesses within **`inline`** and **`static constexpr`** initializers are now correctly detected. The following example compiles without error in Visual Studio 2017, but in Visual Studio 2019 under **`/std:c++17`** mode or later it raises error C2248:

```cpp
struct X
{
    private:
        static inline const int c = 1000;
};

struct Y : X
{
    static inline int d = c; // VS2019 C2248: cannot access private member declared in class 'X'.
};
```

To avoid the error, declare the member `X::c` as protected:

```cpp
struct X
{
    protected:
        static inline const int c = 1000;
};
```

### C4800 reinstated

MSVC used to have a performance warning C4800 about implicit conversion to **`bool`**. It was too noisy and couldn't be suppressed, leading us to remove it in Visual Studio 2017. However, over the lifecycle of Visual Studio 2017 we got lots of feedback on the useful cases it was solving. We bring back in Visual Studio 2019 a carefully tailored C4800, along with the explanatory C4165. Both of these warnings are easy to suppress: either by using an explicit cast, or by comparison to 0 of the appropriate type. C4800 is an [off-by-default](../preprocessor/compiler-warnings-that-are-off-by-default.md) level 4 warning, and C4165 is an off-by-default level 3 warning. Both are discoverable by using the **`/Wall`** compiler option.

The following example raises C4800 and C4165 under **`/Wall`**:

```cpp
bool test(IUnknown* p)
{
    bool valid = p; // warning C4800: Implicit conversion from 'IUnknown*' to bool. Possible information loss
    IDispatch* d = nullptr;
    HRESULT hr = p->QueryInterface(__uuidof(IDispatch), reinterpret_cast<void**>(&d));
    return hr; // warning C4165: 'HRESULT' is being converted to 'bool'; are you sure this is what you want?
}
```

To avoid the warnings in the previous example, you can write the code like this:

```cpp
bool test(IUnknown* p)
{
    bool valid = p != nullptr; // OK
    IDispatch* d = nullptr;
    HRESULT hr = p->QueryInterface(__uuidof(IDispatch), reinterpret_cast<void**>(&d));
    return SUCCEEDED(hr);  // OK
}
```

### Local class member function doesn't have a body

In Visual Studio 2017, warning C4822 is raised only when compiler option **`/w14822`** is explicitly set. It isn't shown with **`/Wall`**. In Visual Studio 2019, C4822 is an [off-by-default](../preprocessor/compiler-warnings-that-are-off-by-default.md) warning, which makes it discoverable under **`/Wall`** without having to set **`/w14822`** explicitly.

```cpp
void example()
{
    struct A
        {
            int boo(); // warning C4822: Local class member function doesn't have a body
        };
}
```

### Function template bodies containing `if constexpr` statements

In Visual Studio 2019 under **`/std:c++20`** or **`/std:c++latest`**, template function bodies that have **`if constexpr`** statements have extra parsing-related checks enabled. For example, in Visual Studio 2017 the following code produces [C7510](../error-messages/compiler-errors-2/compiler-error-c7510.md) only if the **`/permissive-`** option is set. In Visual Studio 2019 the same code raises errors even when the **`/permissive`** option is set:

```cpp
// C7510.cpp
// compile using: cl /EHsc /W4 /permissive /std:c++latest C7510.cpp
#include <iostream>

template <typename T>
int f()
{
    T::Type a; // error C7510: 'Type': use of dependent type name must be prefixed with 'typename'
    // To fix the error, add the 'typename' keyword. Use this declaration instead:
    // typename T::Type a;

    if constexpr (a.val)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

struct X
{
    using Type = X;
    constexpr static int val = 1;
};

int main()
{
    std::cout << f<X>() << "\n";
}
```

To avoid the error, add the **`typename`** keyword to the declaration of `a`: `typename T::Type a;`.

### Inline assembly code isn't supported in a lambda expression

The Microsoft C++ team was recently made aware of a security issue in which the use of inline-assembler within a lambda could lead to the corruption of `ebp` (the return address register) at runtime. A malicious attacker could possibly take advantage of this scenario. The inline assembler is only supported on x86, and interaction between the inline assembler and the rest of the compiler is poor. Given these facts and the nature of the issue, the safest solution to this problem was to disallow inline assembler within a lambda expression.

The only use of inline assembler within a lambda expression that we have found 'in the wild' was to capture the return address. In this scenario, you can capture the return address on all platforms simply by using a compiler intrinsic `_ReturnAddress()`.

The following code produces [C7553](../error-messages/compiler-errors-2/compiler-error-c7553.md) in Visual Studio 2017 15.9 and later versions of Visual Studio:

```cpp
#include <cstdio>

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;

    auto lambda = [&]
    {
        __asm {  // C7553: inline assembler is not supported in a lambda

            mov eax, x
            mov y, eax
        }
    };

    lambda();
    return y;
}
```

To avoid the error, move the assembly code into a named function as shown in the following example:

```cpp
#include <cstdio>

void g(int& x, int& y)
{
    __asm {
        mov eax, x
        mov y, eax
    }
}

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;
    auto lambda = [&]
    {
        g(x, y);
    };
    lambda();
    return y;
}

int main()
{
    std::printf("%d\n", f());
}
```

### Iterator debugging and `std::move_iterator`

The iterator debugging feature has been taught to properly unwrap `std::move_iterator`. For example, `std::copy(std::move_iterator<std::vector<int>::iterator>, std::move_iterator<std::vector<int>::iterator>, int*)` can now engage the `memcpy` fast path.

### Fixes for \<xkeycheck.h> keyword enforcement

The standard library's enforcement in \<xkeycheck.h> for macros replacing a keyword was fixed. The library now emits the actual problem keyword detected rather than a generic message. It also supports C++20 keywords, and avoids tricking IntelliSense into saying random keywords are macros.

### Allocator types no longer deprecated

`std::allocator<void>`, `std::allocator::size_type`, and `std::allocator::difference_type` are no longer deprecated.

### Correct warning for narrowing string conversions

Removed a spurious **`static_cast`** from `std::string` that wasn't called for by the standard, and that accidentally suppressed C4244 narrowing warnings. Attempts to call `std::string::string(const wchar_t*, const wchar_t*)` now properly emit C4244 about narrowing a `wchar_t` into a `char`.

### Various fixes for \<filesystem> correctness

- Fixed `std::filesystem::last_write_time` failing when attempting to change a directory's last write time.
- The `std::filesystem::directory_entry` constructor now stores a failed result, rather than throwing an exception, when supplied a nonexistent target path.
- The `std::filesystem::create_directory` 2-parameter version was changed to call the 1-parameter version, as the underlying `CreateDirectoryExW` function would use `copy_symlink` when the `existing_p` was a symlink.
- `std::filesystem::directory_iterator` no longer fails when a broken symlink is found.
- `std::filesystem::space` now accepts relative paths.
- `std::filesystem::path::lexically_relative` is no longer confused by trailing slashes, reported as [LWG 3096](https://cplusplus.github.io/LWG/issue3096).
- Worked around `CreateSymbolicLinkW` rejecting paths with forward slashes in `std::filesystem::create_symlink`.
- Worked around the POSIX deletion mode `delete` function that existed in Windows 10 LTSB 1609, but couldn't actually delete files.
- The `std::boyer_moore_searcher` and `std::boyer_moore_horspool_searcher` copy constructors and copy assignment operators now actually copy things.

### Parallel algorithms on Windows 8 and later

The parallel algorithms library now properly uses the real `WaitOnAddress` family on Windows 8 and later, rather than always using the Windows 7 and earlier fake versions.

### `std::system_category::message()` whitespace

`std::system_category::message()` now trims trailing whitespace from the returned message.

### `std::linear_congruential_engine` divide by zero

Some conditions that would cause `std::linear_congruential_engine` to trigger divide by 0 have been fixed.

### Fixes for iterator unwrapping

Some iterator-unwrapping machinery was first exposed for programmer-user integration in Visual Studio 2017 15.8. It was described in C++ Team Blog article [STL Features and Fixes in VS 2017 15.8](https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/). This machinery no longer unwraps iterators derived from standard library iterators. For example, a user that derives from `std::vector<int>::iterator` and tries to customize behavior now gets their customized behavior when calling standard library algorithms, rather than the behavior of a pointer.

The unordered container `reserve` function now actually reserves for N elements, as described in [LWG 2156](https://cplusplus.github.io/LWG/issue2156).

### Time handling

- Previously, some time values that were passed to the concurrency library would overflow, for example, `condition_variable::wait_for(seconds::max())`. Now fixed, the overflows changed behavior on a seemingly random 29-day cycle (when uint32_t milliseconds accepted by underlying Win32 APIs overflowed).

- The \<ctime> header now correctly declares `timespec` and `timespec_get` in namespace `std`, and also declares them in the global namespace.

### Various fixes for containers

- Many standard library internal container functions have been made `private` for an improved IntelliSense experience. More fixes to mark members as `private` are expected in later releases of MSVC.

- We fixed exception safety correctness problems that caused node-based containers, such as `list`, `map`, and `unordered_map`, to become corrupted. During a `propagate_on_container_copy_assignment` or `propagate_on_container_move_assignment` reassignment operation, we would free the container's sentinel node with the old allocator, do the POCCA/POCMA assignment over the old allocator, and then try to acquire the sentinel node from the new allocator. If this allocation failed, the container was corrupted. It couldn't even be destroyed, as owning a sentinel node is a hard data structure invariant. This code was fixed to create the new sentinel node by using the source container's allocator before destroying the existing sentinel node.

- The containers were fixed to always copy/move/swap allocators according to `propagate_on_container_copy_assignment`, `propagate_on_container_move_assignment`, and `propagate_on_container_swap`, even for allocators declared `is_always_equal`.

- Added the overloads for container merge and extract member functions that accept rvalue containers. For more information, see [P0083 "Splicing Maps And Sets"](https://wg21.link/p0083r3)

### `std::basic_istream::read` processing of `\r\n`` =>`\n`

`std::basic_istream::read` was fixed to not write into parts of the supplied buffer temporarily as part of `\r\n` to `\n` processing. This change gives up some of the performance advantage that was gained in Visual Studio 2017 15.8 for reads larger than 4K in size. However, efficiency improvements from avoiding three virtual calls per character are still present.

### `std::bitset` constructor

The `std::bitset` constructor no longer reads the ones and zeroes in reverse order for large bitsets.

### `std::pair::operator=` regression

We fixed a regression in the `std::pair` assignment operator introduced when implementing [LWG 2729 "Missing SFINAE on `std::pair::operator=`";](https://cplusplus.github.io/LWG/issue2729). It now correctly accepts types convertible to `std::pair` again.

### Non-deduced contexts for `add_const_t`

We fixed a minor type traits bug, where `add_const_t` and related functions are supposed to be a non-deduced context. In other words, `add_const_t` should be an alias for `typename add_const<T>::type`, not `const T`.

## <a name="improvements_161"></a> Conformance improvements in 16.1

### char8_t

[P0482r6](https://wg21.link/p0482r6). C++20 adds a new character type that is used to represent UTF-8 code units. `u8` string literals in C++20 have type `const char8_t[N]` instead of `const char[N]`, which was the case previously. Similar changes have been proposed for the C standard in [N2231](https://wg14.link/n2231). Suggestions for **`char8_t`** backward compatibility remediation are given in [P1423r3](https://wg21.link/p1423r3). The Microsoft C++ compiler adds support for **`char8_t`** in Visual Studio 2019 version 16.1 when you specify the [`/Zc:char8_t`](../build/reference/zc-char8-t.md) compiler option. It can be reverted to C++17 behavior via **`/Zc:char8_t-`**. The EDG compiler that powers IntelliSense doesn't yet support it in Visual Studio 2019 version 16.1. You may see spurious IntelliSense-only errors that don't affect the actual compilation.

#### Example

```cpp
const char* s = u8"Hello"; // C++17
const char8_t* s = u8"Hello"; // C++20
```

### `std::type_identity` metafunction and `std::identity` function object

[P0887R1 type_identity](https://wg21.link/p0887r1). The deprecated `std::identity` class template extension has been removed, and replaced with the C++20 `std::type_identity` metafunction and `std::identity` function object. Both are available only under **`/std:c++latest`** (**`/std:c++20`** in Visual Studio 2019 version 16.11 and later).

The following example produces deprecation warning C4996 for `std::identity` (defined in \<type_traits>) in Visual Studio 2017:

```cpp
#include <type_traits>

using T = std::identity<int>::type;
T x, y = std::identity<T>{}(x);
int i = 42;
long j = std::identity<long>{}(i);
```

The following example shows how to use the new `std::identity` (defined in \<functional>) together with the new `std::type_identity`:

```cpp
#include <type_traits>
#include <functional>

using T = std::type_identity<int>::type;
T x, y = std::identity{}(x);
int i = 42;
long j = static_cast<long>(i);
```

### Syntax checks for generic lambdas

The new lambda processor enables some conformance-mode syntactic checks in generic lambdas, under **`/std:c++latest`** (**`/std:c++20`** in Visual Studio 2019 version 16.11 and later) or under any other language mode with [`/Zc:lambda`](../build/reference/zc-lambda.md) in Visual Studio 2019 version 16.9 or later (previously available as **`/experimental:newLambdaProcessor`** beginning in Visual Studio 2019 version 16.3).

The legacy lambda processor compiles this example without warnings, but the new lambda processor produces error C2760:

```cpp
void f() {
    auto a = [](auto arg) {
        decltype(arg)::Type t; // C2760 syntax error: unexpected token 'identifier', expected ';'
    };
}
```

This example shows the correct syntax, now enforced by the compiler:

```cpp
void f() {
    auto a = [](auto arg) {
        typename decltype(arg)::Type t;
    };
}
```

### Argument-dependent lookup for function calls

[P0846R0](https://wg21.link/p0846r0) (C++20) Increased ability to find function templates via argument-dependent lookup for function-call expressions with explicit template arguments. Requires **`/std:c++latest`** (or **`/std:c++20`** in Visual Studio 2019 version 16.11 and later).

### Designated initialization

[P0329R4](https://wg21.link/p0329r4) (C++20) *Designated initialization* allows specific members to be selected in aggregate initialization by using the `Type t { .member = expr }` syntax. Requires **`/std:c++latest`** (or **`/std:c++20`** in Visual Studio 2019 version 16.11 and later).

### Ranking of enum conversion to its fixed underlying type

The compiler now ranks enum conversions according to [N4800](https://wg21.link/n4800) 11.3.3.2 Ranking implicit conversion sequences (4.2):

- A conversion that promotes an enumeration whose underlying type is fixed to its underlying type is better than one that promotes to the promoted underlying type, if the two are different.

This conversion ranking wasn't implemented correctly before Visual Studio 2019 version 16.1. The conforming behavior may change overload resolution behavior or expose an ambiguity where one previously wasn't detected.

This compiler behavior change applies to all **`/std`** modes and is both a source and binary breaking change.

The following example demonstrates how compiler behavior changes in 16.1 and later versions:

```cpp
#include <type_traits>

enum E : unsigned char { e };

int f(unsigned int)
{
    return 1;
}

int f(unsigned char)
{
    return 2;
}

struct A {};
struct B : public A {};

int f(unsigned int, const B&)
{
    return 3;
}

int f(unsigned char, const A&)
{
    return 4;
}

int main()
{
    // Calls f(unsigned char) in 16.1 and later. Called f(unsigned int) in earlier versions.
    // The conversion from 'E' to the fixed underlying type 'unsigned char' is better than the
    // conversion from 'E' to the promoted type 'unsigned int'.
    f(e);
  
    // Error C2666. This call is ambiguous, but previously called f(unsigned int, const B&). 
    f(e, B{});
}
```

### New and updated standard library functions (C++20)

- `starts_with()` and `ends_with()` for `basic_string` and `basic_string_view`.
- `contains()` for associative containers.
- `remove()`, `remove_if()`, and `unique()` for `list` and `forward_list` now return `size_type`.
- `shift_left()` and `shift_right()` added to \<algorithm>.

## <a name="improvements_162"></a> Conformance improvements in 16.2

### `noexcept` `constexpr` functions

**`constexpr`** functions are no longer considered **`noexcept`** by default when used in a constant expression. This behavior change comes from the resolution of Core Working Group (CWG) [CWG 1351](https://wg21.link/cwg1351) and is enabled in [`/permissive-`](../build/reference/permissive-standards-conformance.md). The following example compiles in Visual Studio 2019 version 16.1 and earlier, but produces C2338 in Visual Studio 2019 version 16.2:

```cpp
constexpr int f() { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept"); // C2338 in 16.2
}
```

To fix the error, add the **`noexcept`** expression to the function declaration:

```cpp
constexpr int f() noexcept { return 0; }

int main() {
    static_assert(noexcept(f()), "f should be noexcept");
}
```

### Binary expressions with different enum types

C++20 has deprecated the usual arithmetic conversions on operands, where:

- One operand is of enumeration type, and

- the other is of a different enumeration type or a floating-point type.

For more information, see [P1120R0](https://wg21.link/p1120r0).

In Visual Studio 2019 version 16.2 and later, the following code produces a level 4 C5054 warning when the **`/std:c++latest`** compiler option is enabled (**`/std:c++20`** in Visual Studio 2019 version 16.11 and later):

```cpp
enum E1 { a };
enum E2 { b };
int main() {
    int i = a | b; // warning C5054: operator '|': deprecated between enumerations of different types
}
```

To avoid the warning, use [`static_cast`](../cpp/static-cast-operator.md) to convert the second operand:

```cpp
enum E1 { a };
enum E2 { b };
int main() {
  int i = a | static_cast<int>(b);
}
```

Using a binary operation between an enumeration and a floating-point type is now a level 1 C5055 warning when the **`/std:c++latest`** compiler option is enabled (**`/std:c++20`** in Visual Studio 2019 version 16.11 and later):

```cpp
enum E1 { a };
int main() {
  double i = a * 1.1;
}
```

To avoid the warning, use [`static_cast`](../cpp/static-cast-operator.md) to convert the second operand:

```cpp
enum E1 { a };
int main() {
   double i = static_cast<int>(a) * 1.1;
}
```

### Equality and relational comparisons of arrays

Equality and relational comparisons between two operands of array type are deprecated in C++20 ([P1120R0](https://wg21.link/p1120r0)). In other words, a comparison operation between two arrays (despite rank and extent similarities) is now a warning. In Visual Studio 2019 version 16.2 and later, the following code produces level 1 warning C5056 when the **`/std:c++latest`** compiler option is enabled (**`/std:c++20`** in Visual Studio 2019 version 16.11 and later):

```cpp
int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 1, 2, 3 };
    if (a == b) { return 1; } // warning C5056: operator '==': deprecated for array types
}
```

To avoid the warning, you can compare the addresses of the first elements:

```cpp
int main() {
    int a[] = { 1, 2, 3 };
    int b[] = { 1, 2, 3 };
    if (&a[0] == &b[0]) { return 1; }
}
```

To determine whether the contents of two arrays are equal, use the [`std::equal`](../standard-library/algorithm-functions.md#equal) function:

```cpp
std::equal(std::begin(a), std::end(a), std::begin(b), std::end(b));
```

### Effect of defining spaceship operator on `==` and `!=`

A definition of the spaceship operator (**`<=>`**) alone will no longer rewrite expressions involving **`==`** or **`!=`** unless the spaceship operator is marked as **`= default`** ([P1185R2](https://wg21.link/p1185r2)). The following example compiles in Visual Studio 2019 RTW and version 16.1, but produces C2678 in Visual Studio 2019 version 16.2:

```cpp
#include <compare>

struct S {
  int a;
  auto operator<=>(const S& rhs) const {
    return a <=> rhs.a;
  }
};
bool eq(const S& lhs, const S& rhs) {
  return lhs == rhs; // error C2676
}
bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs; // error C2676
}
```

To avoid the error, define `operator==` or declare it as defaulted:

```cpp
#include <compare>

struct S {
  int a;
  auto operator<=>(const S& rhs) const {
    return a <=> rhs.a;
  }
  bool operator==(const S&) const = default;
};
bool eq(const S& lhs, const S& rhs) {
  return lhs == rhs;
}
bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;
}
```

### Standard Library improvements

- \<charconv> `to_chars()` with fixed/scientific precision. (General precision is currently planned for 16.4.)
- [P0020R6](https://wg21.link/p0020r6): `atomic<float>`, `atomic<double>`, `atomic<long double>`
- [P0463R1](https://wg21.link/p0463r1): endian
- [P0482R6](https://wg21.link/p0482r6): Library Support For `char8_t`
- [P0600R1](https://wg21.link/p0600r1): `[[nodiscard]]` For The STL, Part 1
- [P0653R2](https://wg21.link/p0653r2): `to_address()`
- [P0754R2](https://wg21.link/p0754r2): \<version>
- [P0771R1](https://wg21.link/p0771r1): `noexcept` For `std::function`'s move constructor

### Const comparators for associative containers

Code for search and insertion in [`set`](../standard-library/set-class.md), [`map`](../standard-library/map-class.md), [`multiset`](../standard-library/multiset-class.md), and [`multimap`](../standard-library/multimap-class.md) has been merged for reduced code size. Insertion operations now call the less-than comparison on a **`const`** comparison functor, in the same way that search operations have done previously. The following code compiles in Visual Studio 2019 version 16.1 and earlier, but raises C3848 in Visual Studio 2019 version 16.2:

```cpp
#include <iostream>
#include <map>

using namespace std;

struct K
{
   int a;
   string b = "label";
};

struct Comparer  {
   bool operator() (K a, K b) {
      return a.a < b.a;
   }
};

map<K, double, Comparer> m;

K const s1{1};
K const s2{2};
K const s3{3};

int main() {

   m.emplace(s1, 1.08);
   m.emplace(s2, 3.14);
   m.emplace(s3, 5.21);

}
```

To avoid the error, make the comparison operator **`const`**:

```cpp
struct Comparer  {
   bool operator() (K a, K b) const {
      return a.a < b.a;
   }
};
```

## <a name="improvements_163"></a> Conformance improvements in Visual Studio 2019 version 16.3

### Stream extraction operators for `char*` removed

Stream extraction operators for pointer-to-characters have been removed and replaced by extraction operators for array-of-characters (per [P0487R1](https://wg21.link/p0487r1)). WG21 considers the removed overloads to be unsafe. In **`/std:c++20`** or **`/std:c++latest`** mode, the following example now produces C2679:

```cpp
// stream_extraction.cpp
// compile by using: cl /std:c++latest stream_extraction.cpp

#include <iostream>
#include <iomanip>

int main() {
    char x[42];
    char* p = x;
    std::cin >> std::setw(42);
    std::cin >> p;  // C2679: binary '>>': no operator found which takes a right-hand operand of type 'char *' (or there is no acceptable conversion)
}
```

To avoid the error, use the extraction operator with a `char[]` variable:

```cpp
#include <iostream>
#include <iomanip>

int main() {
    char x[42];
    std::cin >> std::setw(42);
    std::cin >> x;  // OK
}
```

### New keywords `requires` and `concept`

New keywords **`requires`** and **`concept`** have been added to the Microsoft C++ compiler. If you attempt to use either one as an identifier in **`/std:c++20`** or **`/std:c++latest`** mode, the compiler raises C2059 to indicate a syntax error.

### Constructors as type names disallowed

The compiler no longer considers constructor names as injected-class-names in this case: when they appear in a qualified name after an alias to a class-template specialization. Previously, constructors were usable as a type name to declare other entities. The following example now produces C3646:

```cpp
#include <chrono>

class Foo {
   std::chrono::milliseconds::duration TotalDuration{}; // C3646: 'TotalDuration': unknown override specifier
};
```

To avoid the error, declare `TotalDuration` as shown here:

```cpp
#include <chrono>

class Foo {
  std::chrono::milliseconds TotalDuration {};
};
```

### Stricter checking of `extern "C"` functions

If an **`extern "C"`** function was declared in different namespaces, previous versions of the Microsoft C++ compiler didn't check whether the declarations were compatible. In Visual Studio 2019 version 16.3 and later, the compiler checks for compatibility. In [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode, the following code produces errors C2371 and C2733:

```cpp
using BOOL = int;

namespace N
{
   extern "C" void f(int, int, int, bool);
}

void g()
{
   N::f(0, 1, 2, false);
}

extern "C" void f(int, int, int, BOOL){}
    // C2116: 'N::f': function parameter lists do not match between declarations
    // C2733: 'f': you cannot overload a function with 'extern "C"' linkage
```

To avoid the errors in the previous example, use **`bool`** instead of `BOOL` consistently in both declarations of `f`.

### Standard Library improvements

The non-standard headers \<stdexcpt.h> and \<typeinfo.h> have been removed. Code that includes them should instead include the standard headers \<exception> and \<typeinfo>, respectively.

## <a name="improvements_164"></a> Conformance improvements in Visual Studio 2019 version 16.4

### Better enforcement of two-phase name lookup for qualified-ids in `/permissive-`

Two-phase name lookup requires that non-dependent names used in template bodies must be visible to the template at definition time. Previously, such names may have been found when the template is instantiated. This change makes it easier to write portable and conforming code in MSVC under the [`/permissive-`](../build/reference/permissive-standards-conformance.md) flag.

In Visual Studio 2019 version 16.4 with the **`/permissive-`**  flag set, the following example produces an error, because `N::f` isn't visible when the `f<T>` template is defined:

```cpp
template <class T>
int f() {
    return N::f() + T{}; // error C2039: 'f': is not a member of 'N'
}

namespace N {
    int f() { return 42; }
}
```

Typically, this error can be fixed by including missing headers or forward-declaring functions or variables, as shown in the following example:

```cpp
namespace N {
    int f();
}

template <class T>
int f() {
    return N::f() + T{};
}

namespace N {
    int f() { return 42; }
}
```

### Implicit conversion of integral constant expressions to null pointer

The MSVC compiler now implements [CWG Issue 903](https://wg21.link/cwg903) in conformance mode (**`/permissive-`**). This rule disallows implicit conversion of integral constant expressions (except for the integer literal '0') to null pointer constants. The following example produces C2440 in conformance mode:

```cpp
int* f(bool* p) {
    p = false; // error C2440: '=': cannot convert from 'bool' to 'bool *'
    p = 0; // OK
    return false; // error C2440: 'return': cannot convert from 'bool' to 'int *'
}
```

To fix the error, use **`nullptr`** instead of **`false`**. A literal 0 is still allowed:

```cpp
int* f(bool* p) {
    p = nullptr; // OK
    p = 0; // OK
    return nullptr; // OK
}
```

### Standard rules for types of integer literals

In conformance mode (enabled by [`/permissive-`](../build/reference/permissive-standards-conformance.md)), MSVC uses the standard rules for types of integer literals. Decimal literals too large to fit in a **`signed int`** were previously given type **`unsigned int`**. Now such literals are given the next largest **`signed`** integer type, **`long long`**. Additionally, literals with the 'll' suffix that are too large to fit in a **`signed`** type are given type **`unsigned long long`**.

This change can lead to different warning diagnostics being generated, and behavior differences for arithmetic operations on literals.

The following example shows the new behavior in Visual Studio 2019 version 16.4. The `i` variable is now of type **`unsigned int`**, so the warning is raised. The high-order bits of the variable `j` are set to 0.

```cpp
void f(int r) {
    int i = 2964557531; // warning C4309: truncation of constant value
    long long j = 0x8000000000000000ll >> r; // literal is now unsigned, shift will fill high-order bits with 0
}
```

The following example demonstrates how to keep the old behavior and avoid the warnings and run-time behavior change:

```cpp
void f(int r) {
int i = 2964557531u; // OK
long long j = (long long)0x8000000000000000ll >> r; // shift will keep high-order bits
}
```

### Function parameters that shadow template parameters

The MSVC compiler now raises an error when a function parameter shadows a template parameter:

```cpp
template<typename T>
void f(T* buffer, int size, int& size_read);

template<typename T, int Size>
void f(T(&buffer)[Size], int& Size) // error C7576: declaration of 'Size' shadows a template parameter
{
    return f(buffer, Size, Size);
}
```

To fix the error, change the name of one of the parameters:

```cpp
template<typename T>
void f(T* buffer, int size, int& size_read);

template<typename T, int Size>
void f(T (&buffer)[Size], int& size_read)
{
    return f(buffer, Size, size_read);
}
```

### User-provided specializations of type traits

In conformance with the *meta.rqmts* subclause of the Standard, the MSVC compiler now raises an error when it finds a user-defined specialization of one of the specified `type_traits` templates in the `std` namespace. Unless otherwise specified, such specializations result in undefined behavior. The following example has undefined behavior because it violates the rule, and the **`static_assert`** fails with error C2338.

```cpp
#include <type_traits>
struct S;

template<>
struct std::is_fundamental<S> : std::true_type {};

static_assert(std::is_fundamental<S>::value, "fail");
```

To avoid the error, define a struct that inherits from the preferred `type_trait`, and specialize that:

```cpp
#include <type_traits>

struct S;

template<typename T>
struct my_is_fundamental : std::is_fundamental<T> {};

template<>
struct my_is_fundamental<S> : std::true_type { };

static_assert(my_is_fundamental<S>::value, "fail");
```

### Changes to compiler-provided comparison operators

The MSVC compiler now implements the following changes to comparison operators per [P1630R1](https://wg21.link/p1630r1) when the **`/std:c++20`** or **`/std:c++latest`** option is enabled:

The compiler no longer rewrites expressions using `operator==` if they involve a return type that isn't a **`bool`**. The following code now produces error C2088:

```cpp
struct U {
    operator bool() const;
};

struct S {
    U operator==(const S&) const;
};

bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;  // C2088: '!=': illegal for struct
}
```

To avoid the error, you must explicitly define the needed operator:

```cpp
struct U {
    operator bool() const;
};

struct S {
    U operator==(const S&) const;
    U operator!=(const S&) const;
};

bool neq(const S& lhs, const S& rhs) {
    return lhs != rhs;
}
```

The compiler no longer defines a defaulted comparison operator if it's a member of a union-like class. The following example now produces error C2120:

```cpp
#include <compare>

union S {
    int a;
    char b;
    auto operator<=>(const S&) const = default;
};

bool lt(const S& lhs, const S& rhs) {
    return lhs < rhs;
}
```

To avoid the error, define a body for the operator:

```cpp
#include <compare>

union S {
    int a;
    char b;
    auto operator<=>(const S&) const { ... }
};

bool lt(const S& lhs, const S& rhs) {
    return lhs < rhs;
}
```

The compiler will no longer define a defaulted comparison operator if the class contains a reference member. The following code now produces error C2120:

```cpp
#include <compare>

struct U {
    int& a;
    auto operator<=>(const U&) const = default;
};

bool lt(const U& lhs, const U& rhs) {
    return lhs < rhs;
}
```

To avoid the error, define a body for the operator:

```cpp
#include <compare>

struct U {
    int& a;
    auto operator<=>(const U&) const { ... };
};

bool lt(const U& lhs, const U& rhs) {
    return lhs < rhs;
}
```

## <a name="improvements_165"></a> Conformance improvements in Visual Studio 2019 version 16.5

### Explicit specialization declaration without an initializer isn't a definition

Under `/permissive-`, MSVC now enforces a standard rule that explicit specialization declarations without initializers aren't definitions. Previously, the declaration would be considered a definition with a default-initializer. The effect is observable at link time, since a program depending on this behavior may now have unresolved symbols. This example now results in an error:

```cpp
template <typename> struct S {
    static int a;
};

// In permissive-, this declaration isn't a definition, and the program won't link.
template <> int S<char>::a;

int main() {
    return S<char>::a;
}
```

```Output
error LNK2019: unresolved external symbol "public: static int S<char>::a" (?a@?$S@D@@2HA) referenced in function _main at link time.
```

To resolve the issue, add an initializer:

```cpp
template <typename> struct S {
    static int a;
};

// Add an initializer for the declaration to be a definition.
template <> int S<char>::a{};

int main() {
    return S<char>::a;
}
```

### Preprocessor output preserves newlines

The experimental preprocessor now preserves newlines and whitespace when using **`/P`** or **`/E`** with **`/experimental:preprocessor`**.

Given this example source,

```cpp
#define m()
line m(
) line
```

The previous output of **`/E`** was:

```Output
line line
#line 2
```

The new output of **`/E`** is now:

```Output
line
 line
```

### `import` and `module` keywords are context-dependent

Per [P1857R1](https://wg21.link/P1857R1), `import` and `module` preprocessor directives have new restrictions on their syntax. This example no longer compiles:

```cpp
import // Invalid
m;     // error C2146: syntax error: missing ';' before identifier 'm'
```

To resolve the issue, keep the import on the same line:

```cpp
import m; // OK
```

### Removal of `std::weak_equality` and `std::strong_equality`

The merge of [P1959R0](https://wg21.link/P1959R0) requires the compiler to remove behavior and references to the `std::weak_equality` and `std::strong_equality` types.

The code in this example no longer compiles:

```cpp
#include <compare>

struct S {
    std::strong_equality operator<=>(const S&) const = default;
};

void f() {
    nullptr<=>nullptr;
    &f <=> &f;
    &S::operator<=> <=> &S::operator<=>;
}
```

The example now leads to these errors:

```Output
error C2039: 'strong_equality': is not a member of 'std'
error C2143: syntax error: missing ';' before '<=>'
error C4430: missing type specifier - int assumed. Note: C++ does not support default-int
error C4430: missing type specifier - int assumed. Note: C++ does not support default-int
error C7546: binary operator '<=>': unsupported operand types 'nullptr' and 'nullptr'
error C7546: binary operator '<=>': unsupported operand types 'void (__cdecl *)(void)' and 'void (__cdecl *)(void)'
error C7546: binary operator '<=>': unsupported operand types 'int (__thiscall S::* )(const S &) const' and 'int (__thiscall S::* )(const S &) const'
```

To resolve the issue, update to prefer the built-in relational operators and replace the removed types:

```cpp
#include <compare>

struct S {
    std::strong_ordering operator<=>(const S&) const = default; // prefer 'std::strong_ordering'
};

void f() {
    nullptr != nullptr; // use pre-existing builtin operator != or ==.
    &f != &f;
    &S::operator<=> != &S::operator<=>;
}
```

### TLS Guard changes

Previously, thread-local variables in DLLs weren't correctly initialized. Other than on the thread that loaded the DLL, they weren't initialized before first use on threads that existed before the DLL was loaded. This defect has now been corrected. Thread-local variables in such a DLL get initialized immediately before their first use on such threads.

This new behavior of testing for initialization on uses of thread-local variables may be disabled by using the **`/Zc:tlsGuards-`** compiler option. Or, by adding the `[[msvc:no_tls_guard]]` attribute to particular thread local variables.

### Better diagnosis of call to deleted functions

Our compiler was more permissive about calls to deleted functions previously. For example, if the calls happened in the context of a template body, we wouldn't diagnose the call. Additionally, if there were multiple instances of calls to deleted functions, we would only issue one diagnostic. Now we issue a diagnostic for each of them.

One consequence of the new behavior can produce a small breaking change: Code that called a deleted function wouldn't get diagnosed if it was never needed for code generation. Now we diagnose it up front.

This example shows code that now produces an error:

```cpp
struct S {
  S() = delete;
  S(int) { }
};

struct U {
  U() = delete;
  U(int i): s{ i } { }

  S s{};
};

U u{ 0 };
```

```Output
error C2280: 'S::S(void)': attempting to reference a deleted function
note: see declaration of 'S::S'
note: 'S::S(void)': function was explicitly deleted
```

To resolve the issue, remove calls to deleted functions:

```cpp
struct S {
  S() = delete;
  S(int) { }
};

struct U {
  U() = delete;
  U(int i): s{ i } { }

  S s;  // Do not call the deleted ctor of 'S'.
};

U u{ 0 };
```

## <a name="improvements_166"></a> Conformance improvements in Visual Studio 2019 version 16.6

### Standard library streams reject insertions of mis-encoded character types

Traditionally, inserting a **`wchar_t`** into a `std::ostream`, and inserting **`char16_t`** or **`char32_t`** into a `std::ostream` or `std::wostream`, outputs its integral value. Inserting pointers to those character types outputs the pointer value. Programmers don't find either case intuitive. They often expect the standard library to transcode the character or null-terminated character string instead, and to output the result.

The C++20 proposal [P1423R3](https://wg21.link/p1423r3) adds deleted stream insertion operator overloads for these combinations of stream and character or character pointer types. Under **`/std:c++20`** or **`/std:c++latest`**, the overloads make these insertions ill-formed, instead of behaving in what is likely an unintended manner. The compiler raises error C2280 when one is found. You can define the "escape hatch" macro `_HAS_STREAM_INSERTION_OPERATORS_DELETED_IN_CXX20` to `1` to restore the old behavior. (The proposal also deletes stream insertion operators for **`char8_t`**. Our standard library implemented similar overloads when we added **`char8_t`** support, so the "wrong" behavior has never been available for **`char8_t`**.)

This sample shows the behavior with this change:

```cpp
#include <iostream>
int main() {
    const wchar_t cw = L'x', *pw = L"meow";
    const char16_t c16 = u'x', *p16 = u"meow";
    const char32_t c32 = U'x', *p32 = U"meow";
    std::cout << cw << ' ' << pw << '\n';
    std::cout << c16 << ' ' << p16 << '\n';
    std::cout << c32 << ' ' << p32 << '\n';
    std::wcout << c16 << ' ' << p16 << '\n';
    std::wcout << c32 << ' ' << p32 << '\n';
}
```

The code now produces these diagnostic messages:

```Output
error C2280: 'std::basic_ostream<char,std::char_traits<char>> &std::<<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,wchar_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<char,std::char_traits<char>> &std::<<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,char16_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<char,std::char_traits<char>> &std::<<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,char32_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::<<<std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,char16_t)': attempting to reference a deleted function
error C2280: 'std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &std::<<<std::char_traits<wchar_t>>(std::basic_ostream<wchar_t,std::char_traits<wchar_t>> &,char32_t)': attempting to reference a deleted function
```

You can achieve the effect of the old behavior in all language modes by converting character types to **`unsigned int`**, or pointer-to-character types to `const void*`:

```cpp
#include <iostream>
int main() {
    const wchar_t cw = L'x', *pw = L"meow";
    const char16_t c16 = u'x', *p16 = u"meow";
    const char32_t c32 = U'x', *p32 = U"meow";
    std::cout << (unsigned)cw << ' ' << (const void*)pw << '\n'; // Outputs "120 0052B1C0"
    std::cout << (unsigned)c16 << ' ' << (const void*)p16 << '\n'; // Outputs "120 0052B1CC"
    std::cout << (unsigned)c32 << ' ' << (const void*)p32 << '\n'; // Outputs "120 0052B1D8"
    std::wcout << (unsigned)c16 << ' ' << (const void*)p16 << '\n'; // Outputs "120 0052B1CC"
    std::wcout << (unsigned)c32 << ' ' << (const void*)p32 << '\n'; // Outputs "120 0052B1D8"
}
```

### Changed return type of `std::pow()` for `std::complex`

Previously, the MSVC implementation of the promotion rules for the return type of function template `std::pow()` was incorrect. For example, previously `pow(complex<float>, int)` returned `complex<float>`. Now it correctly returns `complex<double>`. The fix has been implemented unconditionally for all standards modes in Visual Studio 2019 version 16.6.

This change can cause compiler errors. For example, previously you could multiply `pow(complex<float>, int)` by a **`float`**. Because `complex<T> operator*` expects arguments of the same type, the following example now emits compiler error C2676:

```cpp
// pow_error.cpp
// compile by using: cl /EHsc /nologo /W4 pow_error.cpp
#include <complex>

int main() {
    std::complex<float> cf(2.0f, 0.0f);
    (void) (std::pow(cf, -1) * 3.0f);
}
```

```Output
pow_error.cpp(7): error C2676: binary '*': 'std::complex<double>' does not define this operator or a conversion to a type acceptable to the predefined operator
```

There are many possible fixes:

- Change the type of the **`float`** multiplicand to **`double`**. This argument can be converted directly to a `complex<double>` to match the type returned by `pow`.

- Narrow the result of `pow` to `complex<float>` by saying `complex<float>{pow(ARG, ARG)}`. Then you can continue to multiply by a **`float`** value.

- Pass **`float`** instead of **`int`** to `pow`. This operation may be slower.

- In some cases, you can avoid `pow` entirely. For example, `pow(cf, -1)` can be replaced by division.

### `switch` warnings for C

In Visual Studio 2019 version 16.6 and later, the compiler implements some preexisting C++ warnings for code compiled as C. The following warnings are now enabled at different levels: C4060, C4061, C4062, C4063, C4064, C4065, C4808, and C4809. Warnings C4065 and C4060 are disabled by default in C.

The warnings trigger on missing **`case`** statements, undefined **`enum`**, and bad **`bool`** switch statements (that is, ones that contain too many cases). For example:

```c
#include <stdbool.h>

int main() {
    bool b = true;
    switch (b) {
        case true: break;
        case false: break;
        default: break; // C4809: switch statement has redundant 'default' label;
                        // all possible 'case' labels are given
    }
}
```

To fix this code, remove the redundant **`default`** case:

```c
#include <stdbool.h>

int main() {
    bool b = true;
    switch (b) {
        case true: break;
        case false: break;
    }
}
```

### Unnamed classes in `typedef` declarations

In Visual Studio 2019 version 16.6 and later, the behavior of **`typedef`** declarations has been restricted to conform to [P1766R1](https://wg21.link/P1766R1). With this update, unnamed classes within a **`typedef`** declaration can't have any members other than:

- non-static data members with no default member initializers,
- member classes, or
- member enumerations.

The same restrictions are applied recursively to each nested class. The restriction is meant to ensure the simplicity of structs that have **`typedef`** names for linkage purposes. They must be simple enough that no linkage calculations are necessary before the compiler gets to the **`typedef`** name for linkage.

This change affects all standards modes of the compiler. In default (**`/std:c++14`**) and  **`/std:c++17`** modes, the compiler emits warning C5208 for non-conforming code. If **`/permissive-`** is specified, the compiler emits warning C5208 as an error under **`/std:c++14`** and emits error C7626 under **`/std:c++17`**. The compiler emits error C7626 for non-conforming code when **`/std:c++20`** or **`/std:c++latest`** is specified.

The following sample shows the constructs that are no longer allowed in unnamed structs. Depending on the standards mode specified, C5208 or C7626 errors or warnings are emitted:

```cpp
struct B { };
typedef struct : B { // inheriting from 'B'; ill-formed
    void f(); // ill-formed
    static int i; // ill-formed
    struct U {
        void f(); // nested class has non-data member; ill-formed
    };
    int j = 10; // default member initializer; ill-formed
} S;
```

The code above can be fixed by giving the unnamed class a name:

```cpp
struct B { };
typedef struct S_ : B {
    void f();
    static int i;
    struct U {
        void f();
    };
    int j = 10;
} S;
```

### Default argument import in C++/CLI

An increasing number of APIs have default arguments in .NET Core. So, we now support default argument import in C++/CLI. This change can break existing code where multiple overloads are declared, as in this example:

```cpp
public class R {
    public void Func(string s) {}   // overload 1
    public void Func(string s, string s2 = "") {} // overload 2;
}
```

When this class is imported into C++/CLI, a call to one of the overloads causes an error:

```cpp
    (gcnew R)->Func("abc"); // error C2668: 'R::Func' ambiguous call to overloaded function
```

The compiler emits error C2668 because both overloads match this argument list. In the second overload, the second argument is filled in by the default argument. To work around this problem, you can delete the redundant overload (1). Or, use the full argument list and explicitly supply the default arguments.

## <a name="improvements_167"></a> Conformance improvements in Visual Studio 2019 version 16.7

### *is trivially copyable* definition

C++20 changed the definition of *is trivially copyable*. When a class has a non-static data member with **`volatile`** qualified-type, it no longer implies that any compiler-generated copy or move constructor, or copy or move assignment operator, is non-trivial. The C++ Standard committee applied this change retroactively as a Defect Report. In MSVC, the compiler behavior doesn't change in different language modes, such as **`/std:c++14`** or **`/std:c++latest`**.

Here's an example of the new behavior:

```cpp
#include <type_traits>

struct S
{
    volatile int m;
};

static_assert(std::is_trivially_copyable_v<S>, "Meow!");
```

This code doesn't compile in versions of MSVC before Visual Studio 2019 version 16.7. There's an [off-by-default](../preprocessor/compiler-warnings-that-are-off-by-default.md) compiler warning that you can use to detect this change. If you compile the code above by using **`cl /W4 /w45220`**, you'll see the following warning:

```Output
warning C5220: `'S::m': a non-static data member with a volatile qualified type no longer implies that compiler generated copy/move constructors and copy/move assignment operators are non trivial`
```

### Pointer-to-member and string literal conversions to `bool` are narrowing

The C++ Standard committee recently adopted Defect Report [P1957R2](https://wg21.link/p1957r2), which considers `T*` to **`bool`** as a narrowing conversion. MSVC fixed a bug in its implementation, which would previously diagnose `T*` to **`bool`** as narrowing, but didn't diagnose the conversion of a string literal to **`bool`** or a pointer-to-member to **`bool`**.

The following program is ill-formed in Visual Studio 2019 version 16.7:

```cpp
struct X { bool b; };
void f(X);

int main() {
    f(X { "whoops?" }); // error: conversion from 'const char [8]' to 'bool' requires a narrowing conversion

    int (X::* p) = nullptr;
    f(X { p }); // error: conversion from 'int X::*' to 'bool' requires a narrowing conversion
}
```

To correct this code, either add explicit comparisons to **`nullptr`**, or avoid contexts where narrowing conversions are ill-formed:

```cpp
struct X { bool b; };
void f(X);

int main() {
    f(X { "whoops?" != nullptr }); // Absurd, but OK

    int (X::* p) = nullptr;
    f(X { p != nullptr }); // OK
}
```

### `nullptr_t` is only convertible to `bool` as a direct-initialization

In C++11, **`nullptr`** is only convertible to **`bool`** as a *direct-conversion*; for example, when you initialize a **`bool`** by using a braced initializer-list. This restriction was never enforced by MSVC. MSVC now implements the rule under [`/permissive-`](../build/reference/permissive-standards-conformance.md). Implicit conversions are now diagnosed as ill-formed. A contextual conversion to **`bool`** is still allowed, because the direct-initialization `bool b(nullptr)` is valid.

In most cases, the error can be fixed by replacing **`nullptr`** with **`false`**, as shown in this example:

```cpp
struct S { bool b; };
void g(bool);
bool h() { return nullptr; } // error, should be 'return false;'

int main() {
    bool b1 = nullptr; // error: cannot convert from 'nullptr' to 'bool'
    S s { nullptr }; // error: cannot convert from 'nullptr' to 'bool'
    g(nullptr); // error: cannot convert argument 1 from 'nullptr' to 'bool'

    bool b2 { nullptr }; // OK: Direct-initialization
    if (!nullptr) {} // OK: Contextual conversion to bool
}
```

### Conforming initialization behavior for array initializations with missing initializers

Previously, MSVC had non-conforming behavior for array initializations that had missing initializers. MSVC always called the default constructor for each array element that didn't have an initializer. The standard behavior is to initialize each element with an empty braced-initializer-list (**`{}`**). The initialization context for an empty braced-initializer-list is copy-initialization, which doesn't allow calls to explicit constructors. There also may be runtime differences, because use of `{}` to initialize may call a constructor that takes a `std::initializer_list`, instead of the default constructor. The conforming behavior is enabled under [`/permissive-`](../build/reference/permissive-standards-conformance.md).

Here's an example of the changed behavior:

```cpp
struct B {
    explicit B() {}
};

void f() {
    B b1[1]{}; // Error in /permissive-, because aggregate init calls explicit ctor
    B b2[1]; // OK: calls default ctor for each array element
}
```

### Initialization of class members with overloaded names is correctly sequenced

We identified a bug in class data members' internal representation when a type name is also overloaded as a data member's name. This bug caused inconsistencies in aggregate initialization and member initialization order. The generated initialization code is now correct. However, this change can lead to errors or warnings in source that inadvertently relied on the mis-ordered members, as in this example:

```cpp
// Compiling with /w15038 now gives:
// warning C5038: data member 'Outer::Inner' will be initialized after data member 'Outer::v'
struct Outer {
    Outer(int i, int j) : Inner{ i }, v{ j } {}

    struct Inner { int x; };
    int v;
    Inner Inner; // 'Inner' is both a type name and data member name in the same scope
};
```

In previous versions, the constructor would incorrectly initialize the data member `Inner` before the data member `v`. (The C++ standard requires an initialization order that's the same as the declaration order of the members). Now that the generated code follows the standard, the member-init-list is out of order. The compiler generates a warning for this example. To fix it, reorder the member-initializer-list to reflect the declaration order.

### Overload resolution involving integral overloads and `long` arguments

The C++ standard requires ranking a **`long`** to **`int`** conversion as a standard conversion. Previous MSVC compilers incorrectly rank it as an integral promotion, which ranks higher for overload resolution. This ranking can cause overload resolution to resolve successfully when it should be considered ambiguous.

The compiler now considers the rank correctly in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode. Invalid code gets diagnosed properly, as in this example:

```cpp
void f(long long);
void f(int);

int main() {
    long x {};
    f(x); // error: 'f': ambiguous call to overloaded function
    f(static_cast<int>(x)); // OK
}
```

You can fix this issue in several ways:

- At the call site, change the type of the passed argument to **`int`**. You can either change the variable type, or cast it.

- If there are many call sites, you can add another overload that takes a **`long`** argument. In this function, cast and forward the argument to the **`int`** overload.

### Use of undefined variable with internal linkage

Versions of MSVC before Visual Studio 2019 version 16.7 accepted use of a variable declared **`extern`** that had internal linkage and wasn't defined. Such variables can't be defined in any other translation unit and can't form a valid program. The compiler now diagnoses this case at compile time. The error is similar to the error for undefined static functions.

```cpp
namespace {
    extern int x; // Not a definition, but has internal linkage because of the anonymous namespace
}

int main()
{
    return x; // Use of 'x' that no other translation unit can possibly define.
}
```

This program previously incorrectly compiled and linked, but will now emit error C7631.

```Output
error C7631: 'anonymous-namespace::x': variable with internal linkage declared but not defined
```

Such variables must be defined in the same translation unit they're used in. For example, you can provide an explicit initializer or a separate definition.

### Type completeness and derived-to-base pointer conversions

In C++ standards before C++20, a conversion from a derived class to a base class didn't require the derived class to be a complete class type. The C++ standard committee has approved a retroactive Defect Report change that applies to all versions of the C++ language. This change aligns the conversion process with type traits, such as `std::is_base_of`, which do require that the derived class is a complete class type.

Here's an example:

```cpp
template<typename A, typename B>
struct check_derived_from
{
    static A a;
    static constexpr B* p = &a;
};

struct W { };
struct X { };
struct Y { };

// With this change this code will fail as Z1 is not a complete class type
struct Z1 : X, check_derived_from<Z1, X>
{
};

// This code failed before and it will still fail after this change
struct Z2 : check_derived_from<Z2, Y>, Y
{
};

// With this change this code will fail as Z3 is not a complete class type
struct Z3 : W
{
    check_derived_from<Z3, W> cdf;
};
```

This behavior change applies to all C++ language modes of MSVC, not just **`/std:c++20`** or **`/std:c++latest`**.

### Narrowing conversions are more consistently diagnosed

MSVC emits a warning for narrowing conversions in a braced-list initializer. Previously, the compiler wouldn't diagnose narrowing conversions from larger **`enum`** underlying types to narrower integral types. (The compiler incorrectly considered them an integral promotion instead of a conversion). If the narrowing conversion is intentional, you can avoid the warning by using a **`static_cast`** on the initializer argument. Or, choose a larger destination integral type.

Here's an example of using an explicit **`static_cast`** to address the warning:

```cpp
enum E : long long { e1 };
struct S { int i; };

void f(E e) {
    S s = { e }; // warning: conversion from 'E' to 'int' requires a narrowing conversion
    S s1 = { static_cast<int>(e) }; // Suppress warning with explicit conversion
}
```

## <a name="improvements_168"></a> Conformance improvements in Visual Studio 2019 version 16.8

### 'Class rvalue used as lvalue' extension

MSVC has an extension that allows using a class rvalue as an lvalue. The extension doesn't extend the lifetime of the class rvalue and can lead to undefined behavior at runtime. We now enforce the standard rule and disallow this extension under **`/permissive-`**.
If you can't use **`/permissive-`** yet, you can use **`/we4238`** to explicitly disallow the extension. Here's an example:

```cpp
// Compiling with /permissive- now gives:
// error C2102: '&' requires l-value
struct S {};

S f();

void g()
{
    auto p1 = &(f()); // The temporary returned by 'f' is destructed after this statement. So 'p1' points to an invalid object.

    const auto &r = f(); // This extends the lifetime of the temporary returned by 'f'
    auto p2 = &r; // 'p2' points to a valid object
}
```

### 'Explicit specialization in non-namespace scope' extension

MSVC had an extension that allowed explicit specialization in non-namespace scope. It's now part of the standard, after the resolution of CWG 727. However, there are behavior differences. We've adjusted the behavior of our compiler to align with the standard.

```cpp
// Compiling with 'cl a.cpp b.cpp /permissive-' now gives:
//   error LNK2005: "public: void __thiscall S::f<int>(int)" (??$f@H@S@@QAEXH@Z) already defined in a.obj
// To fix the linker error,
// 1. Mark the explicit specialization with 'inline' explicitly. Or,
// 2. Move its definition to a source file.

// common.h
struct S {
    template<typename T> void f(T);
    template<> void f(int);
};

// This explicit specialization is implicitly inline in the default mode.
template<> void S::f(int) {}

// a.cpp
#include "common.h"

int main() {}

// b.cpp
#include "common.h"
```

### Checking for abstract class types

The C++20 Standard changed the process compilers use to detect the use of an abstract class type as a function parameter. Specifically, it's no longer a SFINAE error. Previously, if the compiler detected that a specialization of a function template would have an abstract class type instance as a function parameter, then that specialization would be considered ill-formed. It wouldn't be added to the set of viable candidate functions. In C++20, the check for a parameter of abstract class type doesn't happen until the function is called. The effect is, code that used to compile won't cause an error. Here's an example:

```cpp
class Node {
public:
    int index() const;
};

class String : public Node {
public:
    virtual int size() const = 0;
};

class Identifier : public Node {
public:
    const String& string() const;
};

template<typename T>
int compare(T x, T y)
{
    return x < y ? -1 : (x > y ? 1 : 0);
}

int compare(const Node& x, const Node& y)
{
    return compare(x.index(), y.index());
}

int f(const Identifier& x, const String& y)
{
    return compare(x.string(), y);
}
```

Previously, the call to `compare` would have attempted to specialize the function template `compare` by using a `String` template argument for `T`. It would fail to generate a valid specialization, because `String` is an abstract class. The only viable candidate would have been `compare(const Node&, const Node&)`. However, under C++20 the check for the abstract class type doesn't happen until the function is called. So, the specialization `compare(String, String)` gets added to the set of viable candidates, and it's chosen as the best candidate because the conversion from `const String&` to `String` is a better conversion sequence than the conversion from `const String&` to `const Node&`.

Under C++20, one possible fix for this example is to use concepts; that is, change the definition of `compare` to:

```cpp
template<typename T>
int compare(T x, T y) requires !std::is_abstract_v<T>
{
    return x < y ? -1 : (x > y ? 1 : 0);
}
```

Or, if C++ concepts aren't available, you can fall back to SFINAE:

```cpp
template<typename T, std::enable_if_t<!std::is_abstract_v<T>, int> = 0>
int compare(T x, T y)
{
    return x < y ? -1 : (x > y ? 1 : 0);
}
```

### Support for P0960R3 - allow initializing aggregates from a parenthesized list of values

C++20 [P0960R3](https://wg21.link/P0960R3) adds support for initializing an aggregate using a parenthesized initializer-list. For example, the following code is valid in C++20:

```cpp
struct S {
    int i;
    int j;
};

S s(1, 2);
```

Most of this feature is additive, that is, code now compiles that didn't compile before. However, it does change the behavior of `std::is_constructible`. In C++17 mode this **`static_assert`** fails, but in C++20 mode it succeeds:

```cpp
static_assert(std::is_constructible_v<S, int, int>, "Assertion failed!");
```

If you use this type-trait for control of overload resolution, it can lead to a change in behavior between C++17 and C++20.

### Overload resolution involving function templates

Previously, the compiler allowed some code to compile under **`/permissive-`** that shouldn't compile. The effect was, the compiler called the wrong function leading to a change in runtime behavior:

```cpp
int f(int);

namespace N
{
    using ::f;
    template<typename T>
    T f(T);
}

template<typename T>
void g(T&& t)
{
}

void h()
{
    using namespace N;
    g(f);
}
```

The call to `g` uses an overload set that contains two functions, `::f` and `N::f`. Since `N::f` is a function template, the compiler should treat the function argument as a *non-deduced context*. It means that, in this case, the call to `g` should fail, as the compiler can't deduce a type for the template parameter `T`. Unfortunately, the compiler didn't discard the fact that it had already decided that `::f` was a good match for the function call. Instead of emitting an error, the compiler would generate code to call `g` using `::f` as the argument.

Given that in many cases using `::f` as the function argument is what the user expects, we only emit an error if the code is compiled with **`/permissive-`**.

### Migrating from `/await` to C++20 coroutines

Standard C++20 coroutines are now on by default under **`/std:c++20`** and **`/std:c++latest`**. They differ from the Coroutines TS and the support under the **`/await`** option. Migrating from **`/await`** to standard coroutines may require some source changes.

#### Non-standard keywords

The old **`await`** and **`yield`** keywords aren't supported in C++20 mode. Code must use **`co_await`** and **`co_yield`** instead. Standard mode also doesn't allow the use of `return` in a coroutine. Every **`return`** in a coroutine must use **`co_return`**.

```cpp
// /await
task f_legacy() {
    ...
    await g();
    return n;
}
// /std:c++latest
task f() {
    ...
    co_await g();
    co_return n;
}
```

#### Types of initial_suspend/final_suspend

Under **`/await`**, the promise initial and suspend functions may be declared as returning **`bool`**. This behavior isn't standard. In C++20, these functions must return an awaitable class type, often one of the trivial awaitable types: `std::suspend_always` if the function previously returned **`true`**, or `std::suspend_never` if it returned **`false`**.

```cpp
// /await
struct promise_type_legacy {
    bool initial_suspend() noexcept { return false; }
    bool final_suspend() noexcept { return true; }
    ...
};

// /std:c++latest
struct promise_type {
    auto initial_suspend() noexcept { return std::suspend_never{}; }
    auto final_suspend() noexcept { return std::suspend_always{}; }
    ...
};
```

#### Type of `yield_value`

In C++20, the promise `yield_value` function must return an awaitable type. In **`/await`** mode, the `yield_value` function was permitted to return **`void`**, and would always suspend. Such functions can be replaced with a function that returns `std::suspend_always`.

```cpp
// /await
struct promise_type_legacy {
    ...
    void yield_value(int x) { next = x; };
};

// /std:c++latest
struct promise_type {
    ...
    auto yield_value(int x) { next = x; return std::suspend_always{}; }
};
```

#### Exception handling function

**`/await`** supports a promise type with either no exception-handling function or an exception handling function named `set_exception` that takes a `std::exception_ptr`. In C++20, the promise type must have a function named `unhandled_exception` that takes no arguments. The exception object can be obtained from `std::current_exception` if needed.

```cpp
// /await
struct promise_type_legacy {
    void set_exception(std::exception_ptr e) { saved_exception = e; }
    ...
};
// /std:c++latest
struct promise_type {
    void unhandled_exception() { saved_exception = std::current_exception(); }
    ...
};
```

#### Deduced return types of coroutines not supported

C++20 doesn't support coroutines with a return type that includes a placeholder type such as **`auto`**. Return types of coroutines must be explicitly declared. Under **`/await`**, these deduced types always involve an experimental type and require inclusion of a header that defines the required type: One of `std::experimental::task<T>`, `std::experimental::generator<T>`, or `std::experimental::async_stream<T>`.

```cpp
// /await
auto my_generator() {
    ...
    co_yield next;
};

// /std:c++latest
#include <experimental/generator>
std::experimental::generator<int> my_generator() {
    ...
    co_yield next;
};
```

#### Return type of `return_value`

The return type of the promise `return_value` function must be **`void`**. In **`/await`** mode, the return type can be anything, and is ignored. This diagnostic can help detect subtle errors, such as when the author incorrectly assumes the return value of `return_value` is returned to a caller.

```cpp
// /await
struct promise_type_legacy {
    ...
    int return_value(int x) { return x; } // incorrect, the return value of this function is unused and the value is lost.
};

// /std:c++latest
struct promise_type {
    ...
    void return_value(int x) { value = x; }; // save return value
};
```

#### Return object conversion behavior

If the declared return type of a coroutine doesn't match the return type of the promise `get_return_object` function, the object returned from `get_return_object` gets converted to the return type of the coroutine. Under **`/await`**, this conversion is done early, before the coroutine body has a chance to execute. In **`/std:c++20`** or **`/std:c++latest`**, this conversion is done when the value is returned to the caller. It allows coroutines that don't suspend at the initial suspend point to make use of the object returned by `get_return_object` within the coroutine body.

#### Coroutine promise parameters

In C++20, the compiler attempts to pass the coroutine parameters (if any) to a constructor of the promise type. If it fails, it retries with a default constructor. In **`/await`** mode, only the default constructor was used. This change can lead to a difference in behavior if the promise has multiple constructors. Or, if there's a conversion from a coroutine parameter to the promise type.

```cpp
struct coro {
    struct promise_type {
        promise_type() { ... }
        promise_type(int x) { ... }
        ...
    };
};

coro f1(int x);

// Under /await the promise gets constructed using the default constructor.
// Under /std:c++latest the promise gets constructed using the 1-argument constructor.
f1(0);

struct Object {
template <typename T> operator T() { ... } // Converts to anything!
};

coro f2(Object o);

// Under /await the promise gets constructed using the default constructor
// Under /std:c++latest the promise gets copy- or move-constructed from the result of
// Object::operator coro::promise_type().
f2(Object{});
```

### `/permissive-` and C++20 Modules are on by default under `/std:c++20`

C++20 Modules support is on by default under **`/std:c++20`** and **`/std:c++latest`**. For more information about this change, and the scenarios where **`module`** and **`import`** are conditionally treated as keywords, see [Standard C++20 Modules support with MSVC in Visual Studio 2019 version 16.8](https://devblogs.microsoft.com/cppblog/standard-c20-modules-support-with-msvc-in-visual-studio-2019-version-16-8/).

As a prerequisite for Modules support, **`permissive-`** is now enabled when **`/std:c++20`** or **`/std:c++latest`** is specified. For more information, see [`/permissive-`](../build/reference/permissive-standards-conformance.md).

For code that previously compiled under **`/std:c++latest`** and requires non-conforming compiler behaviors, **`/permissive`** may be specified to turn off strict conformance mode in the compiler. The compiler option must appear after **`/std:c++latest`** in the command-line argument list. However, **`/permissive`** results in an error if Modules usage is detected:

> error C1214: Modules conflict with non-standard behavior requested via '*option*'

The most common values for *option* are:

| Option | Description |
|--|--|
| **`/Zc:twoPhase-`** | Two-phase name lookup is required for C++20 Modules and implied by **`/permissive-`**. |
| **`/Zc:hiddenFriend-`** | Standard hidden friend name lookup rules are required for C++20 Modules and implied by **`/permissive-`**. |
| **`/Zc:lambda-`** | Standard lambda processing is required for C++20 Modules and is implied by **`/std:c++20`** mode or later. |
| **`/Zc:preprocessor-`** | The conforming preprocessor is required for C++20 header unit usage and creation only. Named Modules don't require this option. |

The [`/experimental:module`](../build/reference/experimental-module.md) option is still required to use the *`std.*`* Modules that ship with Visual Studio, because they're not standardized yet.

The **`/experimental:module`** option also implies **`/Zc:twoPhase`**, **`/Zc:lambda`**, and **`/Zc:hiddenFriend`**. Previously, code compiled with Modules could sometimes be compiled with **`/Zc:twoPhase-`** if the Module was only consumed. This behavior is no longer supported.

## <a name="improvements_169"></a> Conformance improvements in Visual Studio 2019 version 16.9

### Copy-initialization of temporary in reference direct-initialization

Core Working Group issue [CWG 2267](https://wg21.link/cwg2267) dealt with an inconsistency between a parenthesized initializer list and a braced initializer list. The resolution harmonizes the two forms.

Visual Studio 2019 version 16.9 implements the changed behavior in all **`/std`** compiler modes. However, because it's potentially a source breaking change, it's only supported if the code is compiled by using **`/permissive-`**.

This sample demonstrates the change in behavior:

```cpp
struct A { };

struct B {
    explicit B(const A&);
};

void f()
{
    A a;
    const B& b1(a);     // Always an error
    const B& b2{ a };   // Allowed before resolution to CWG 2267 was adopted: now an error
}
```

### Destructor characteristics and potentially constructed subobjects

Core Working Group issue [CWG 2336](https://wg21.link/cwg2336) covers an omission about implicit exception specifications of destructors in classes that have virtual base classes. The omission meant a destructor in a derived class could have a weaker exception specification than a base class, if that base was abstract and had a `virtual` base.

Visual Studio 2019 version 16.9 implements the changed behavior in all **`/std`** compiler modes.

This sample shows how the interpretation changed:

```cpp
class V {
public:
    virtual ~V() noexcept(false);
};

class B : virtual V {
    virtual void foo () = 0;
    // BEFORE: implicitly defined virtual ~B() noexcept(true);
    // AFTER: implicitly defined virtual ~B() noexcept(false);
};

class D : B {
    virtual void foo ();
    // implicitly defined virtual ~D () noexcept(false);
};
```

Before this change, the implicitly defined destructor for `B` was `noexcept`, because only potentially constructed subobjects get considered. And, base class `V` isn't a potentially constructed subobject, because it's a `virtual` base and `B` is abstract. However, base class `V` is a potentially constructed subobject of class `D`, and so `D::~D` is determined to be `noexcept(false)`, leading to a derived class with a weaker exception specification than its base. This interpretation is unsafe. It can lead to incorrect runtime behavior if an exception gets thrown from a destructor of a class derived from B.

With this change, a destructor is also potentially throwing if it has a virtual destructor and any virtual base class has a potentially throwing destructor.

### Similar types and reference binding

Core Working Group issue [CWG 2352](https://wg21.link/cwg2352) deals with an inconsistency between the reference binding rules and changes to type similarity. The inconsistency was introduced in earlier Defect Reports (such as [CWG 330](https://wg21.link/cwg330)). This affected Visual Studio 2019 versions 16.0 through 16.8.

With this change, starting in Visual Studio 2019 version 16.9, code that previously bound a reference to a temporary in Visual Studio 2019 version 16.0 throught 16.8 may now bind directly when the types involved differ only by cv-qualifiers.

Visual Studio 2019 version 16.9 implements the changed behavior in all **`/std`** compiler modes. It's potentially a source breaking change.

See [References to types with mismatched cv-qualifiers](#references-to-types-with-mismatched-cv-qualifiers) for a related change.

This sample shows the changed behavior:

```cpp
int *ptr;
const int *const &f() {
    return ptr; // Now returns a reference to 'ptr' directly.
    // Previously returned a reference to a temporary and emitted C4172
}
```

The update may change program behavior that relied on an introduced temporary:

```cpp
int func() {
    int i1 = 13;
    int i2 = 23;
    
    int* iptr = &i1;
    int const * const&  iptrcref = iptr;

    // iptrcref is a reference to a pointer to i1 with value 13.
    if (*iptrcref != 13)
    {
        return 1;
    }
    
    // Now change what iptr points to.

    // Prior to CWG 2352 iptrcref should be bound to a temporary and still points to the value 13.
    // After CWG 2352 it is bound directly to iptr and now points to the value 23.
    iptr = &i2;
    if (*iptrcref != 23)
    {
        return 1;
    }

    return 0;
}
```

### `/Zc:twoPhase` and `/Zc:twoPhase-` option behavior change

Normally, the MSVC compiler options work on the principle that the last one seen wins. Unfortunately, it wasn't the case with the **`/Zc:twoPhase`** and **`/Zc:twoPhase-`** options. These options were "sticky," so later options couldn't override them. For example:

`cl /Zc:twoPhase /permissive a.cpp`

In this case, the first **`/Zc:twoPhase`** option enables strict two-phase name lookup. The second option is meant to disable the strict conformance mode (it's the opposite of **`/permissive-`**), but it didn't disable **`/Zc:twoPhase`**.

Visual Studio 2019 version 16.9 changes this behavior in all **`/std`** compiler modes. **`/Zc:twoPhase`** and **`/Zc:twoPhase-`** are no longer "sticky," and later options can override them.

### Explicit noexcept-specifiers on destructor templates

The compiler previously accepted a destructor template declared with a non-throwing exception specification but defined without an explicit noexcept-specifier. The implicit exception specification of a destructor depends on properties of the class - properties that may not be known at the point of definition of a template. The C++ Standard also requires this behavior: If a destructor is declared without a noexcept-specifier, then it has an implicit exception specification, and no other declaration of the function may have a noexcept-specifier.

Visual Studio 2019 version 16.9 changes to conforming behavior in all **`/std`** compiler modes.

This sample shows the change in compiler behavior:

```cpp
template <typename T>
class B {
    virtual ~B() noexcept; // or throw()
};

template <typename T>
B<T>::~B() { /* ... */ } // Before: no diagnostic.
// Now diagnoses a definition mismatch. To fix, define the implementation by 
// using the same noexcept-specifier. For example,
// B<T>::~B() noexcept { /* ... */ }
```

### Rewritten expressions in C++20

Since Visual Studio 2019 version 16.2, under **`/std:c++latest`**, the compiler has accepted code like this example:

```cpp
#include <compare>

struct S {
    auto operator<=>(const S&) const = default;
    operator bool() const;
};

bool f(S a, S b) {
    return a < b;
}
```

However, the compiler wouldn't invoke the comparison function the author might expect. The code above should have rewritten `a < b` as `(a <=> b) < 0`. Instead, the compiler used the `operator bool()` user-defined conversion function and compared `bool(a) < bool(b)`. In Visual Studio 2019 version 16.9 and later, the compiler rewrites the expression using the expected spaceship operator expression.

#### Source breaking change

Properly applying conversions to rewritten expressions has another effect: The compiler also correctly diagnoses ambiguities from attempts to rewrite the expression. Consider this example:

```cpp
struct Base {
    bool operator==(const Base&) const;
};

struct Derived : Base {
    Derived();
    Derived(const Base&);
    bool operator==(const Derived& rhs) const;
};

bool b = Base{} == Derived{};
```

In C++17, this code would be accepted because of the derived-to-base conversion of `Derived` on the right-hand side of the expression. In C++20, the synthesized expression candidate is also added: `Derived{} == Base{}`. Because of the rules in the standard about which function wins based on conversions, it turns out that the choice between `Base::operator==` and `Derived::operator==` is undecidable. Because the conversion sequences in the two expressions are no better or worse than each other, the example code results in an ambiguity.

To resolve the ambiguity, add a new candidate that won't be subject to the two conversion sequences:

```cpp
bool operator==(const Derived&, const Base&);
```

#### Runtime breaking change

Because of the operator rewriting rules in C++20, it's possible for overload resolution to find a new candidate that it wouldn't otherwise find in a lower language mode. And, the new candidate may be a better match than the older candidate. Consider this example:

```cpp
struct iterator;
struct const_iterator {
  const_iterator(const iterator&);
  bool operator==(const const_iterator &ci) const;
};

struct iterator {
  bool operator==(const const_iterator &ci) const { return ci == *this; }
};
```

In C++17, the only candidate for `ci == *this` is `const_iterator::operator==`. It's a match because `*this` goes through a derived-to-base conversion to `const_iterator`. In C++20, another rewritten candidate gets added: `*this == ci`, which invokes `iterator::operator==`. This candidate requires no conversions, so it's a better match than `const_iterator::operator==`. The problem with the new candidate is that it's the function currently being defined, so the new semantics of the function causes an infinitely recursive definition of `iterator::operator==`.

To help in code like the example, the compiler implements a new warning:

```cmd
$ cl /std:c++latest /c t.cpp
t.cpp
t.cpp(8): warning C5232: in C++20 this comparison calls 'bool iterator::operator ==(const const_iterator &) const' recursively
```

To fix the code, be explicit about which conversion to use:

```cpp
struct iterator {
  bool operator==(const const_iterator &ci) const { return ci == static_cast<const const_iterator&>(*this); }
};
```

## <a name="improvements_16a"></a> Conformance improvements in Visual Studio 2019 version 16.10

### Wrong overload chosen for copy initialization of class

Given this sample code:

```cpp
struct A { template <typename T> A(T&&); };
struct B { operator A(); };
struct C : public B{};
void f(A);
f(C{});
```

Earlier versions of the compiler would incorrectly convert the argument of `f` from type `C` to an `A` by using the templated converting constructor of `A`. Standard C++ requires use of the conversion operator `B::operator A` instead. In Visual Studio 2019 version 16.10 and later, the overload resolution behavior is changed to use the correct overload.

This change can also correct the chosen overload in some other situations:

```cpp
struct Base 
{
    operator char *();
};

struct Derived : public Base
{
    operator bool() const;
};

void f(Derived &d)
{
    // Implicit conversion to bool previously used Derived::operator bool(), now uses Base::operator char*.
    // The Base function is preferred because operator bool() is declared 'const' and requires a qualification
    // adjustment for the implicit object parameter, while the Base function does not.
    if (d)
    {
        // ...
    }
}
```

### Incorrect parsing of floating-point literals

In Visual Studio 2019 version 16.10 and later, floating-point literals are parsed based on their actual type. Earlier versions of the compiler always parsed a floating-point literal as if it had type **`double`** and then converted the result to the actual type. This behavior could lead to incorrect rounding and rejection of valid values:

```cpp
// The binary representation is '0x15AE43FE' in VS2019 16.9
// The binary representation is '0x15AE43FD' in VS2019 16.10
// You can use 'static_cast<float>(7.038531E-26)' if you want the old behavior.
float f = 7.038531E-26f;
```

### Incorrect point of declaration

Earlier versions of the compiler couldn't compile self-referential code like this example:

```cpp
struct S {
    S(int, const S*);

    int value() const;
};

S s(4, &s);
```

The compiler wouldn't declare the variable `s` until it parsed the whole declaration, including the constructor arguments. The lookup of the `s` in the constructor argument list would fail. In Visual Studio 2019 version 16.10 and later, this example now compiles correctly.

Unfortunately, this change can break existing code, as in this example:

```cpp
S s(1, nullptr); // outer s
// ...
{
   S s(s.value(), nullptr); // inner s
}
```

In earlier versions of the compiler, when it looks up `s` in the constructor arguments for the "inner" declaration of `s`, it finds the previous declaration ("outer" `s`) and the code compiles. Starting in version 16.10, the compiler emits warning [C4700](../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md) instead. It's because the compiler now declares the "inner" `s` before parsing the constructor arguments. So, the `s` lookup finds the "inner" `s`, which hasn't been initialized yet.

### Explicitly specialized member of a class template

Earlier versions of the compiler incorrectly marked an explicit specialization of a class template member as `inline` if it was also defined in the primary template. This behavior meant the compiler would sometimes reject conforming code. In Visual Studio 2019 version 16.10 and later, an explicit specialization is no longer implicitly marked as `inline` in **`/permissive-`** mode. Consider this example:

Source file `s.h`:

```cpp
// s.h
template<typename T>
struct S {
    int f() { return 1; }
};
template<> int S<int>::f() { return 2; }
```

Source file `s.cpp`:

```cpp
// s.cpp
#include "s.h"
```

Source file `main.cpp`:

```cpp
// main.cpp
#include "s.h"

int main()
{
}
```

To address the linker error in the above example, add `inline` explicitly to `S<int>::f`:

```cpp
template<> inline int S<int>::f() { return 2; }
```

### Deduced return type name mangling

In Visual Studio 2019 version 16.10 and later, the compiler changed how it generates mangled names for functions that have deduced return types. For example, consider these functions:

```cpp
auto f() { return 0; }
auto g() { []{}; return 0; }
```

Earlier versions of the compiler would generate these names for the linker:

```Console
f: ?f@@YAHXZ -> int __cdecl f(void)
g: ?g@@YA@XZ -> __cdecl g(void)
```

Surprisingly, the return type would be omitted from `g` because of other semantic behavior caused by the local lambda in the function body. This inconsistency made it difficult to implement exported functions that have a deduced return type: The module interface requires information about how the body of a function was compiled. It needs the information to produce a function on the import side that can properly link to the definition.

The compiler now omits the return type of a deduced return type function. This behavior is consistent with other major implementations. There's an exception for function templates: this version of the compiler introduces a new mangled-name behavior for function templates that have a deduced return type:

```cpp
template <typename T>
auto f(T) { return 1; }

template <typename T>
decltype(auto) g(T) { return 1.; }

int (*fp1)(int) = &f;
double (*fp2)(int) = &g;
```

The mangled names for `auto` and `decltype(auto)` now appear in the binary, not the deduced return type:

```Console
f: ??$f@H@@YA?A_PH@Z -> auto __cdecl f<int>(int)
g: ??$g@H@@YA?A_TH@Z -> decltype(auto) __cdecl g<int>(int)
```

Earlier versions of the compiler would include the deduced return type as part of the signature. When the compiler included the return type in the mangled name, it could cause linker issues. Some otherwise well-formed scenarios would become ambiguous to the linker.

The new compiler behavior can produce a binary breaking change. Consider this example:

Source file `a.cpp`:

```cpp
// a.cpp
auto f() { return 1; }
```

Source file `main.cpp`:

```cpp
// main.cpp
int f();
int main() { f(); }
```

In versions before version 16.10, the compiler produced a name for `auto f()` that looked like `int f()`, even though they're semantically distinct functions. That means the example would compile. To fix the issue, don't rely on `auto` in the original definition of `f`. Instead, write it as `int f()`. Because functions that have deduced return types are always compiled, the ABI implications are minimized.

### Warning for ignored `nodiscard` attribute

Previous versions of the compiler would silently ignore certain uses of a `nodiscard` attribute. They ignored the attribute if it was in a syntactic position that didn't apply to the function or class being declared. For example:

```cpp
static [[nodiscard]] int f() { return 1; }
```

In Visual Studio 2019 version 16.10 and later, the compiler emits level 4 warning C5240 instead:

```Console
a.cpp(1): warning C5240: 'nodiscard': attribute is ignored in this syntactic position
```

To fix this issue, move the attribute to the correct syntactic position:

```cpp
[[nodiscard]] static int f() { return 1; }
```

### Warning for `include` directives with system header-names in module purview

In Visual Studio 2019 version 16.10 and later, the compiler emits a warning to prevent a common module interface authoring mistake. If you include a standard library header after an `export module` statement, the compiler emits warning C5244. Here's an example:

```cpp
export module m;
#include <vector>

export
void f(std::vector<int>);
```

The developer probably didn't intend module `m` to own the contents of `<vector>`. The compiler now emits a warning to help find and fix the issue:

```Console
m.ixx(2): warning C5244: '#include <vector>' in the purview of module 'm' appears erroneous. Consider moving that directive before the module declaration, or replace the textual inclusion with an "import <vector>;".
m.ixx(1): note: see module 'm' declaration
```

To fix this issue, move `#include <vector>` before `export module m;`:

```cpp
#include <vector>
export module m;

export
void f(std::vector<int>);
```

### Warning for unused internal linkage functions

In Visual Studio 2019 version 16.10 and later, the compiler warns in more situations where an unreferenced function with internal linkage has been removed. Earlier versions of the compiler would emit warning [C4505](../error-messages/compiler-warnings/compiler-warning-level-4-c4505.md) for the following code:

```cpp
static void f() // warning C4505: 'f': unreferenced function with internal linkage has been removed
{
}
```

The compiler now also warns about unreferenced `auto` functions and unreferenced functions in anonymous namespaces. It emits an [off-by-default](../preprocessor/compiler-warnings-that-are-off-by-default.md) warning C5245 for both of the following functions:

```cpp
namespace
{
    void f1() // warning C5245: '`anonymous-namespace'::f1': unreferenced function with internal linkage has been removed
    {
    }
}

auto f2() // warning C5245: 'f2': unreferenced function with internal linkage has been removed
{
    return []{ return 13; };
}
```

### Warning on brace elision

In Visual Studio 2019 version 16.10 and later, the compiler warns on initialization lists that don't use braces for subobjects. The compiler emits [off-by-default](../preprocessor/compiler-warnings-that-are-off-by-default.md) warning C5246.

Here's an example:

```cpp
struct S1 {
  int i, j;
};

struct S2 {
   S1 s1;
   int k;
};

S2 s2{ 1, 2, 3 }; // warning C5246: 'S2::s1': the initialization of a subobject should be wrapped in braces
```

To fix this issue, wrap the initialization of the subobject in braces:

```cpp
S2 s2{ { 1, 2 }, 3 };
```

### Correctly detect if a `const` object isn't initialized

In Visual Studio 2019 version 16.10 and later, the compiler now emits error C2737 when you attempt to define a `const` object that isn't fully initialized:

```cpp
struct S {
   int i;
   int j = 2;
};

const S s; // error C2737: 's': const object must be initialized
```

Earlier versions of the compiler allowed this code to compile, even though `S::i` isn't initialized.

To fix this issue, initialize all members before you create a `const` instance of an object:

```cpp
struct S {
   int i = 1;
   int j = 2;
};
```

## <a name="improvements_16b"></a> Conformance improvements in Visual Studio 2019 version 16.11

### `/std:c++20` compiler mode

In Visual Studio 2019 version 16.11 and later, the compiler now supports the [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) compiler mode. Previously, C++20 features were available only in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) mode in Visual Studio 2019. C++20 features that originally required **`/std:c++latest`** mode now work in **`/std:c++20`** mode or later in the latest versions of Visual Studio.

## See also

[Microsoft C/C++ language conformance](visual-cpp-language-conformance.md)
