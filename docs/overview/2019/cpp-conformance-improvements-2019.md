---
title: "C++ conformance improvements"
ms.date: "05/13/2019"
description: "Microsoft C++ in Visual Studio 2019 is progressing toward full conformance with the C++20 language standard."
ms.technology: "cpp-language"
author: "mikeblome"
ms.author: "mblome"
---
# C++ conformance improvements in Visual Studio 2019 RTW and version [16.1](#improvements_161)

## Improvements in Visual Studio 2019 RTW

Visual Studio 2019 RTW contains the following conformance improvements, bug fixes and behavior changes in the Microsoft C++ compiler (MSVC).

**Note:** C++20 features will be made available in `/std:c++latest` mode until the C++20 implementation is complete for both the compiler and IntelliSense. At that time, the `/std:c++20` compiler mode will be introduced.

### Improved modules support for templates and error detection

Modules are now officially in the C++20 standard. Improved support was added in Visual Studio 2017 version 15.9. For more information, see [Better template support and error detection in C++ Modules with MSVC 2017 version 15.9](https://devblogs.microsoft.com/cppblog/better-template-support-and-error-detection-in-c-modules-with-msvc-2017-version-15-9/).

### Modified specification of aggregate type

The specification of an aggregate type has changed in C++20 (see [Prohibit aggregates with user-declared constructors](http://wg21.link/p1008r1)). In Visual Studio 2019, under `/std:c++latest`, a class with any user-declared constructor (e.g. including a constructor declared `= default` or `= delete`) is not an aggregate. Previously, only user-provided constructors would disqualify a class from being an aggregate. This change puts additional restrictions on how such types can be initialized.

The following code compiles without errors in Visual Studio 2017 but raises errors C2280 and C2440 in Visual Studio 2019 under `/std:c++latest`:

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

### Partial support for operator <=>

C++20 introduces the `<=>` three-way comparison operator, also known as the "spaceship operator". Visual Studio 2019 in `/std:c++latest` mode introduces partial support for the operator by raising errors for syntax that is now disallowed. For example, the following code compiles without errors in Visual Studio 2017 but raises multiple errors in Visual Studio 2019 under `/std:c++latest`:

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

To avoid the errors, insert a space in the offending line before the final bracket: `U<&S::operator<= > u;`.

### References to types with mismatched cv-qualifiers

MSVC previously allowed direct binding of a reference from a type with mismatched cv-qualifiers below the top level. This could allow modification of supposedly const data referred to by the reference, and the compiler now creates a temporary as required by the standard. In Visual Studio 2017, the following code compiles without warnings. In Visual Studio 2019, the compiler raises *warning C4172: \<func:#1 "?PData@X@@QBEABQBXXZ"> returning address of local variable or temporary*.

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
    auto p = x.PData(); // C4172
}
```
### `reinterpret_cast` from an overloaded function

The argument to `reinterpret_cast` is not one of the contexts in which the address of an overloaded function is permitted. The following code compiles without errors in Visual Studio 2017, but in Visual Studio 2019 it raises *C2440: cannot convert from 'overloaded-function' to 'fp'*:

```cpp
int f(int) { return 1; }
int f(float) { return .1f; }
using fp = int(*)(int);

int main()
{
    fp r = reinterpret_cast<fp>(&f);
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

In C++14, lambda closure types are not literal. The primary consequence of this rule is that a lambda may not be assigned to a `constexpr` variable. The following code compiles without errors in Visual Studio 2017 but in Visual Studio 2019 it raises *C2127: 'l': illegal initialization of 'constexpr' entity with a non-constant expression* :

```cpp
int main()
{
    constexpr auto l = [] {}; // C2127 in VS2019
}
```

To avoid the error, either remove the `constexpr` qualifier, or else change the conformance mode to `/std:c++17`.

### std::create_directory failure codes

Implemented [P1164](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1164r1.pdf) from C++20 unconditionally. This changes `std::create_directory` to check whether the target was already a directory on failure. Previously, all ERROR_ALREADY_EXISTS type errors were turned into success-but-directory-not-created codes.

### operator<<(std::ostream, nullptr_t)

Per [LWG 2221](https://cplusplus.github.io/LWG/issue2221), added `operator<<(std::ostream, nullptr_t)` for writing nullptrs to streams. 

### Additional parallel algorithms

New parallel versions of `is_sorted`, `is_sorted_until`, `is_partitioned`, `set_difference`, `set_intersection`, `is_heap`, and `is_heap_until`.

### atomic initialization

[P0883 "Fixing atomic initialization"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0883r1.pdf) changes `std::atomic` to value-initialize the contained T rather than default-initializing it. The fix is enabled when using Clang/LLVM with the Microsoft Standard Library. It is currently disabled for the Microsoft C++ compiler as a workaround for a bug in constexpr processing.

### remove_cvref and remove_cvref_t

Implemented the `remove_cvref` and `remove_cvref_t` type traits from [P0550](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0550r2.pdf). These remove reference-ness and cv-qualification from a type without decaying functions and arrays to pointers (unlike `std::decay` and `std::decay_t`).

### Feature-test macros

[P0941R2 - feature-test macros](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0941r2.html) is complete, with support for `__has_cpp_attribute`. Feature-test macros are supported in all Standard modes.

### Prohibit aggregates with user-declared constructors

[C++20 P1008R1 - prohibiting aggregates with user-declared constructors](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p1008r1.pdf) is complete.

## <a name="improvements_161"></a> Improvements in Visual Studio 2019 version 16.1

### char8_t

C++20 adds a new character type that is used to represent UTF-8 code units. u8 string literals in C++20 have type `const char8_t[N]` instead of `const char[N]`, which was the case up until C++17 [P0482r6](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0482r6.html). The C standard makes similar changes in [N2231](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2231.htm). Suggestions for char8_t backward compatibility remediation are given in [P1423r0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1423r0.html). The Microsoft C++ compiler adds support for char8_t in Visual Studio 2019 version 16.1 when you specify the **/Zc:char8_t** compiler option. In the future, it will be supported with [/std:c++latest](../../build/reference/std-specify-language-standard-version.md), which can be reverted to C++17 behavior via **/Zc:char8_t-**. The EDG compiler which powers IntelliSense does not yet support it, so you will see spurious IntelliSense-only errors which do not impact the actual compilation.

#### Example

```cpp
const char* s = u8"Hello"; //C++17
const char8_t* s = u8"Hello"; // C++20
```

### std::type_identity metafunction and std::identity function object

The deprecated `std::identity` class template extension has been removed, and replaced with the C++20 `std::type_identity` metafunction and `std::identity` function object. Both are available only under [/std:c++latest](../../build/reference/std-specify-language-standard-version.md). 

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

The new lambda preprocessor enables some conformance-mode syntactic checks in generic lambdas, under [/std:c++latest](../../build/reference/std-specify-language-standard-version.md) or with or with **/experimental:newLambdaProcessor**. 

In Visual Studio 2017, this code compiles without warnings, but in Visual Studo 2019 it produces *error C2760: syntax error: unexpected token '\<id-expr>', expected 'id-expression'*

```cpp
void f() {
    auto a = [](auto arg) {
        decltype(arg)::Type t;
    };
}
```

The following example shows the correct syntax, now enforced by the compiler:

```cpp
void f() {
    auto a = [](auto arg) {
        typename decltype(arg)::Type t;
    };
}
```

### Mac line endings in the editor

'\r' (Mac line ending) is now recognized in addition to '\r\n' (Windows line ending) and '\n' (Linux line ending). This change is to help compile files with mixed line ending.

```cpp
#include <assert.h>
#include <string.h>

auto s = "
"; // this is not a valid string literal

int main()
{
    assert(strcmp(s, "\r") == 0);
}

(assume '\r' follows 'auto s = "' in the file)

```

After:

```cpp
#include <assert.h>
#include <string.h>

auto s = "\r"; // this is what 's' used to have

int main()
{
    assert(strcmp(s, "\r") == 0);
}
```

## Bug fixes and behavior changes in Visual Studio 2019 RTW

### Correct diagnostics for basic_string range constructor

In Visual Studio 2019, the `basic_string` range constructor no longer suppresses compiler diagnostics with `static_cast`. The following code compiles without warnings in Visual Studio 2017, despite the possible loss of data from `wchar_t` to `char` when initializing `out`:

```cpp
std::wstring ws = /* … */;
std::string out(ws.begin(), ws.end());
```

Visual Studio 2019 correctly raises *C4244: 'argument': conversion from 'wchar_t' to 'const _Elem', possible loss of data*. To avoid the warning, you can initialize the std::string as shown in this example:

```cpp
std::wstring ws = L"Hello world";
std::string out;
for (wchar_t ch : ws)
{
    out.push_back(static_cast<char>(ch));
}
```

### Incorrect calls to += and -= under /clr or /ZW are now correctly detected

A bug was introduced in Visual Studio 2017 which caused the compiler to silently ignore errors and generate no code for the invalid calls to += and -= under `/clr` or `/ZW`. The following code compiles without errors in Visual Studio 2017 but in Visual Studio 2019 it correctly raises *error C2845: 'System::String ^': pointer arithmetic not allowed on this type*:

```cpp
public enum class E { e };

void f(System::String ^s)
{
    s += E::e; // C2845 in VS2019
}
```

To avoid the error in this example, use the operator with the ToString() method: `s += E::e.ToString();`.

### Initializers for inline static data members

Invalid member accesses within `inline` and `static constexpr` initializers are now correctly detected. The following example compiles without error in Visual Studio 2017, but in Visual Studio 2019 under `/std:c++17` mode it raises *error C2248: cannot access private member declared in class 'X'*.

```cpp
struct X
{
    private:
        static inline const int c = 1000;
};

struct Y : X
{
    static inline int d = c; // C2248 in Visual Studio 2019
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

MSVC used to have a performance warning C4800 about implicit conversion to bool that was too noisy and insuppressible, leading us to remove it in Visual Studio 2017. However, over the lifecycle of Visual Studio 2017 we got a lot of feedback on the useful cases it was solving. We bring back in Visual Studio 2019 a carefully tailored C4800 along with its accompanying C4165, both of which can be easily suppressed with either an explicit cast or comparison to 0 of the appropriate type. C4800 is an off-by-default level 4 warning, and C4165 is an off-by-default level 3 warning. Both are discoverable by using the `/Wall` compiler option.

The following example raises C4800 and C4165 under `/Wall`:

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

In Visual Studio 2017, *C4822: Local class member function doesn't have a body* is raised only when compiler option `/w14822` is explicitly set; it isn't shown with `/Wall`. In Visual Studio 2019, C4822 is an off-by-default warning, which makes it discoverable under `/Wall` without having to set `/w14822` explicitly.

```cpp
void foo()
{
    struct A
        {
            int boo(); // warning C4822
        };
}
```

### Function template bodies containing constexpr if statements

Template function bodies containing `if constexpr` statements have some `/permissive-` parsing-related checks enabled. For example, in Visual Studio 2017 the following code produces C*7510: 'Type': use of dependent type name must be prefixed with 'typename'* only if the `/permissive-` option is not set. In Visual Studio 2019 the same code raises errors whether or not the `/permissive-` option is set:

```cpp
template <typename T>

int f()
{
    T::Type a; // error C7510

    if constexpr (T::val)
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
    return f<X>();
}

```

To avoid the error, add the `typename` keyword to the declaration of `a`: `typename T::Type a;`.

### Inline assembly code is not supported in a lambda expression

The Visual C++ team was recently made aware of a security issue in which the use of inline-assembler within a lambda could lead to the corruption of 'ebp' (the return address register) at runtime. A malicious attacker might be able to take advantage of this scenario. Given the nature of the issue, the fact that inline assembler is only supported on x86, and the poor interaction of the inline assembler with the rest of the compiler it was felt that the safest solution to this problem was disallow inline assembler within a lambda expression.

Note: the only use of inline assembler within a lambda expression that we have encountered in the 'wild' was a use in which the aim was to capture the return address. In this scenario, you can capture the return address on all platforms simply by using a compiler intrinsic `_ReturnAddress()`.

The following code produces *C7552: inline assembler is not supported in a lambda* in both Visual Studio 2017 15.9 and in Visual Studio 2019:

```cpp
#include <cstdio>

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;

    auto lambda = [&]
    {
        __asm {

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

### Iterator debugging and std::move_iterator

The iterator debugging feature has been taught to properly unwrap `std::move_iterator`. For example, `std::copy(std::move_iterator<std::vector<int>::iterator>, std::move_iterator<std::vector<int>::iterator>, int*)` can now engage the `memcpy` fast path.

### Fixes for \<xkeycheck.h> keyword enforcement

The Standard Library’s macro-ized keyword enforcement \<xkeycheck.h> was fixed to emit the actual problem keyword detected rather than a generic message. It also supports C++20 keywords, and avoids tricking IntelliSense into saying random keywords are macros.

### Allocator types un-deprecated

`std::allocator<void>`, `std::allocator::size_type`, and `std::allocator::difference_type` have been un-deprecated.

### Correct warning for narrowing string conversions

A spurious `static_cast` not called for by the standard that accidentally suppressed C4244 narrowing warnings was removed from std::string. Attempting to call `std::string::string(const wchar_t*, const wchar_t*)` will now properly emit *C4244 "narrowing a wchar_t into a char."*

### Various \<filesystem> correctness fixes

- Fixed `std::filesystem::last_write_time` failing when attempting to change a directory’s last write time.
- The `std::filesystem::directory_entry` constructor now stores a failed result, rather than throwing an exception, when supplied a nonexistent target path.
- The `std::filesystem::create_directory` 2-parameter version was changed to call the 1-parameter version, as the underlying `CreateDirectoryExW` function would perform `copy_symlink` when the existing_p was a symlink.
- `std::filesystem::directory_iterator` no longer fails when encountering a broken symlink.
- `std::filesystem::space` now accepts relative paths.
- `std::filesystem::path::lexically_relative` is no longer confused by trailing slashes, reported as [LWG 3096](https://cplusplus.github.io/LWG/issue3096).
- Worked around `CreateSymbolicLinkW` rejecting paths with forward slashes in `std::filesystem::create_symlink`.
- Worked around the POSIX deletion mode `delete` function existing on Windows 10 LTSB 1609 but not actually being capable of deleting files.
- `std::boyer_moore_searcher` and `std::boyer_moore_horspool_searcher`'s copy constructors and copy assignment operators now actually copy things.

### Parallel algorithms on Windows 8 and later

The parallel algorithms library now properly uses the real `WaitOnAddress` family on Windows 8 and later, rather than always using the Windows 7 and earlier fake versions.

### std::system_category::message() whitespace

`std::system_category::message()` now trims trailing whitespace from the returned message.

### std::linear_congruential_engine divide by zero

Some conditions that would cause `std::linear_congruential_engine` to trigger divide by 0 have been fixed.

### Fixes for iterator unwrapping

The iterator unwrapping machinery that was first exposed for programmer-user integration in Visual Studio 2017 15.8 (as described in https://devblogs.microsoft.com/cppblog/stl-features-and-fixes-in-vs-2017-15-8/ ) no longer unwraps iterators derived from standard library iterators. For example, a user that derives from `std::vector<int>::iterator` and tries to customize behavior now gets their customized behavior when calling standard library algorithms, rather than the behavior of a pointer.
The unordered container reserve function now actually reserves for N elements, as described in [LWG 2156](https://cplusplus.github.io/LWG/issue2156).

### Time handling

- Previously, some time values that were passed to the concurrency library would overflow, for example, `condition_variable::wait_for(seconds::max())`. These overflows, now fixed, changed behavior on a seemingly random 29-day cycle (when uint32_t milliseconds accepted by underlying Win32 APIs overflowed).

- The <ctime> header now correctly declares timespec and timespec_get in namespace std in addition to declaring them in the global namespace.

### Various fixes for containers

- Many Standard Library internal container functions have been made private for an improved IntelliSense experience. Additional fixes to mark members as private are expected in subsequent releases of MSVC.

- Exception safety correctness problems wherein the node-based containers like `list`, `map`, and `unordered_map` would become corrupted were fixed. During a `propagate_on_container_copy_assignment` or `propagate_on_container_move_assignment` reassignment operation, we would free the container’s sentinel node with the old allocator, do the POCCA/POCMA assignment over the old allocator, and then try to acquire the sentinel node from the new allocator. If this allocation failed, the container is corrupted and can’t even be destroyed, as owning a sentinel node is a hard data structure invariant. This was fixed to allocate the new sentinel node from the source container’s allocator before destroying the existing sentinel node.

- The containers were fixed to always copy/move/swap allocators according to `propagate_on_container_copy_assignment`, `propagate_on_container_move_assignment`, and `propagate_on_container_swap`, even for allocators declared `is_always_equal`.

- Added the overloads for container merge and extract member functions that accept rvalue containers per [P0083 "Splicing Maps And Sets"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)

### std::basic_istream::read processing of \r\n => \n

`std::basic_istream::read` was fixed to not write into parts of the supplied buffer temporarily as part of \r\n => \n processing. This gives up some of the performance advantage that was gained in Visual Studio 2017 15.8 for reads larger than 4K in size, but efficiency improvements from avoiding 3 virtual calls per character are still present.

### std::bitset constructor

`std::bitset`'s constructor no longer reads the ones and zeroes in reverse order for large bitsets.

### std::pair::operator= regression

Fixed a regression in `std::pair`'s assignment operator introduced when implementing [LWG 2729 "Missing SFINAE on std::pair::operator=";](https://cplusplus.github.io/LWG/issue2729). It now correctly accepts types convertible to `std::pair` again.

### Non-deduced contexts for add_const_t

Fixed a minor type traits bug, where `add_const_t` and related functions are supposed to be a non-deduced context. In other words, `add_const_t` should be an alias for `typename add_const<T>::type`, not `const T`.

## See also

[What's new in Visual Studio 2019](../what-s-new-for-visual-cpp-in-visual-studio.md)