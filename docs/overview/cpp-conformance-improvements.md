---
title: "C++ conformance improvements in Visual Studio 2022"
description: "Microsoft C++ in Visual Studio is improving standards conformance and fixing bugs regularly."
ms.date: 05/13/2025
ms.service: "visual-cpp"
ms.subservice: "cpp-lang"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the significant improvements by major release, then by version. To jump directly to the changes for a specific version, use the **In this article** links at the top of this article.

This document lists the changes in Visual Studio 2022.

For changes in earlier versions of Visual Studio:

| Version  | Conformance improvements link |
|---|---|
| 2019 | [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md) |
| 2017 | [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md) |
| 2003-2015 | [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md) |

## <a name="improvements_1714"></a> Conformance improvements in Visual Studio 2022 version 17.14

Visual Studio 2022 version 17.14 includes the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### Conformance improvements


- Standard library hardening ([P3471R4](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2025/p3471r4.html)) allows turning some instances of undefined behavior in the standard library into a contract violation. Off by default. Define `_MSVC_STL_HARDENING=1` project-wide to enable.

### Enhanced behavior

- Implemented "destructor tombstones" to mitigate use-after-free mistakes. Off by default. Define `_MSVC_STL_DESTRUCTOR_TOMBSTONES=1` project-wide to enable.

### Behavior changes

- [LWG-4014](https://cplusplus.github.io/LWG/issue4014) and [LWG-3809](https://cplusplus.github.io/LWG/issue3809) changes the behavior of some existing `std::subtract_with_carry_engine` pseudo-random number generator with regard to seeding. Previously, if the engine was seeded with values from a `linear_congruential_engine<T, 40014u, 0u, 2147483563u>` object, narrowing resulted when `T` was less than 32 bits. New Behavior: The seed sequence uses `linear_congruential_engine<uint_least32_t, 40014u, 0u, 2147483563u>` with the seed value reduced modulo `2147483563u` so that it isn't narrowed if `T` is less than 32 bits.

### Bug fixes

- Fixed compiler errors when using `<format>` in a CUDA project.
- Fixed a compiler issue where the address of a local variable could "leak" during `constexpr` evaluation. For example:

    ```cpp
    const unsigned & func() 
    {
      const int x = 0;
      constexpr const unsigned & r1 = x; // Previously accepted, now an error
      return r1;
    }
    
    auto r = func();  // Previously, the local address leaked
    ```

    **Example #2**

    ```cpp
    #include <initializer_list>

    void test()
    {
        constexpr std::initializer_list<int> xs { 1, 2, 3 };        // Previously accepted, now an error

        static constexpr std::initializer_list<int> ys { 1, 2, 3 }; // Correct usage - note use of static
    }
    ```

- Code compiled with `/permissive-` no longer accepts a combination of `friend` and `static` on a declaration. The fix is usually to remove `static` from the declaration. For example:

    ```cpp
    struct S
    {
        friend static void f(); // Previously accepted, now emits error C2440: 'static' cannot be used with 'friend'
    };
    ```

- Referencing binding to volatile-qualified types fixed when referring to a base/derived class. For example:

```cpp
struct A {};
struct B : public A {};

void f(A&);                 // 1
void f(const volatile A&);  // 2

f(B{}); // Previously called 2. This is ill-formed under /permissive- or /Zc:referenceBinding. Chooses 1 if relaxed reference binding rules are enabled.
```

For an in-depth summary of changes made to the Standard Template Library, including conformance changes, bug fixes, and performance improvements, see [STL Changelog VS 2022 17.14](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1714).


## <a name="improvements_1713"></a> Conformance improvements in Visual Studio 2022 version 17.13

Visual Studio 2022 version 17.13 includes the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

For an in-depth summary of changes made to the Standard Template Library, including conformance changes, bug fixes, and performance improvements, see [STL Changelog VS 2022 17.13](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1713).

### Argument-dependent lookup (ADL)

Language constructs such as range-for and structured bindings have special argument-dependent lookup rules for certain identifiers such as `begin`, `end`, or `get`. Previously, this lookup included candidates from the `std` namespace, even when namespace `std` isn't part of the ordinary set of associated namespaces for argument-dependent lookup.

Programs that introduced declarations to `std` for these constructs no longer compile. Instead, the declarations should be in a normal associated namespace for the types involved (possibly including the global namespace).

```cpp
template <typename T>
struct Foo {};

namespace std
{
    // To correct the program, move these declarations from std to the global namespace
    template <typename T>
    T* begin(Foo<T>& f);
    template <typename T>
    T* end(Foo<T>& f);
}

void f(Foo<int> foo)
{
   for (auto x : foo) // Previously compiled. Now emits error C3312: no callable 'begin' function found for type 'Foo<int>'
   {
      ...
   }
}
```

### Can't modify implementation-reserved macros

Previously, the compiler permitted changing or undefining certain implementation-provided macros such as `_MSC_EXTENSIONS`. Altering the definition of certain macros can result in undefined behavior.

Attempting to alter or undefine certain reserved macro names now results in the level-1 warning `C5308`. In `/permissive-` mode, this warning is treated as an error.

```cpp
#undef _MSC_EXTENSIONS // Warning C5308: Modifying reserved macro name `_MSC_EXTENSIONS` may cause undefined behavior
```

## <a name="improvements_1712"></a> Conformance improvements in Visual Studio 2022 version 17.12

Visual Studio 2022 version 17.12 includes the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

For an in-depth summary of changes made to the Standard Template Library, including conformance changes, bug fixes, and performance improvements, see [STL Changelog VS 2022 17.12](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1712).

### `_com_ptr_t::operator bool()` is now explicit

This is a source/binary breaking change.

The implicit conversion to `bool` from `_com_ptr_t` instances can be surprising or lead to compiler errors. The [C++ Core Guidelines (C.164)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Ro-conversion) discourages implicit conversion functions. And `_com_ptr_t` contained implicit conversions to both `bool` and `Interface*`. These two implicit conversions can lead to ambiguities.

To address this, the conversion to `bool` is now explicit. The conversion to `Interface*` is unchanged.

A macro is provided to opt-out of this new behavior and restore the previous implicit conversion. Compile with `/D_COM_DISABLE_EXPLICIT_OPERATOR_BOOL` to opt-out of this change. We recommend that you modify the code to not rely on implicit conversions.

For example:

```cpp
#include <comip.h>

template<class Iface>
using _com_ptr = _com_ptr_t<_com_IIID<Iface, &__uuidof(Iface)>>;

int main()
{
   _com_ptr<IUnknown> unk;
   if (unk) // Still valid
   { 
      // ...
   }
   bool b = unk; // Still valid.
   int v = unk; // Previously permitted, now emits C2240: cannot convert from '_com_ptr_t<_com_IIID<IUnknown,& _GUID_00000000_0000_0000_c000_000000000046>>' to 'int'
}
```

### Constant expressions are no longer always `noexcept` in permissive mode

This is a source/binary breaking change.

A constant expression was always `noexcept`, even if it involved a function call to a function declared with a potentially throwing exception specification. This wording was removed in C++17, although the Microsoft Visual C++ compiler still supported it in `/permissive` mode in all C++ language versions.

This `/permissive` mode behavior is removed. Constant expressions are no longer given special implicit behavior.

The `noexcept` specifier on `constexpr` functions is now respected in all modes. This change is required for correct implementation of later core issue resolutions that rely on the standard `noexcept` behavior.

For example:

```cpp
constexpr int f(bool b) noexcept(false)
{ 
    if (b)
    {
        throw 1;
    }
    else
    {
        return 1;
    }
}

void g(bool b)
{
   noexcept(f(b)); // false. No change to behavior
   noexcept(f(true)); // false. No change to behavior
   noexcept(f(false)); // false. Was true in /permissive mode only in previous versions.
}
```

## <a name="improvements_1711"></a> Conformance improvements in Visual Studio 2022 version 17.11

Visual Studio 2022 version 17.11 includes the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

For an in-depth summary of changes made to the Standard Template Library, including conformance changes, bug fixes, and performance improvements, see [STL Changelog VS 2022 17.11](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1711).

### Print blank lines with `println`

Per [P3142R0](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2024/p3142r0.pdf), it's now easy to generate a blank line with `println`. This feature is available when compiling with `/std:c++latest`.
Before this change, you wrote: `println("");` Now you write: `println();`.
- `println();` is equivalent to `println(stdout);`
- `println(FILE* stream);` is equivalent to `println(stream, "\n");`

### Implemented `range_formatter`

Per [P2286R8](https://wg21.link/P2286R8), `range_formatter` is now implemented. This feature is available when compiling with `/std:c++latest`.

## <a name="improvements_1710"></a> Conformance improvements in Visual Studio 2022 version 17.10

Visual Studio 2022 version 17.10 includes the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

For an in-depth summary of changes made to the Standard Template Library, including conformance changes, bug fixes, and performance improvements, see [STL Changelog VS 2022 17.10](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1710).

### Conversion operator specialization with explicitly specified return type

The compiler used to specialize conversion operators incorrectly in some cases, which could lead to a mismatched return type. These invalid specializations no longer happen. This is a source code breaking change.

```cpp
// Example 1
struct S
{
    template<typename T> operator const T*();
};

void test()
{
    S{}.operator int*(); // this is invalid now
    S{}.operator const int*(); // this is valid
}
```

```cpp
// Example 2
// In some cases, the overload resolution result may change
struct S
{
    template <typename T> operator T*(); // overload 1
    template <typename T> operator const T*(); // overload 2
};

void test()
{
    S{}.operator int*(); // this used to call overload 2, now it calls overload 1
}
```

### Added Support for `#elifdef` and `#elifndef`

Support added for WG21 [P2334R1](https://www.open-std.org/JTC1/SC22/WG21/docs/papers/2021/p2334r1.pdf) (C++23) and WG14 [N2645](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2645.pdf) (C++23) which introduced the `#elifdef` and `#elifndef` preprocessor directives.
Requires `/std:clatest` or `/std:c++latest`.

Before:

```cpp
#ifdef __cplusplus
  #include <atomic>
#elif !defined(__STDC_NO_ATOMICS__)
  #include <stdatomic.h>
#else
  #include <custom_atomics_library.h>
#endif
```

After:

```cpp
#ifdef __cplusplus
  #include <atomic>
#elifndef __STDC_NO_ATOMICS__
  #include <stdatomic.h>
#else
  #include <custom_atomics_library.h>
#endif
```

### Application of `_Alignas` on a structured type in C

Applies to the C language (C17 and later). Also added to Microsoft Visual Studio 17.9

In versions of Visual C++ before Visual Studio 2022 version 17.9, if the `_Alignas` specifier appeared next to a structured type in a declaration, it wasn't applied correctly according to the ISO-C Standard.

```cpp
// compile with /std:c17
#include <stddef.h>

struct Outer
{
    _Alignas(32) struct Inner { int i; } member1;
    struct Inner member2;
};
static_assert(offsetof(struct Outer, member2)==4, "incorrect alignment");
```

According to the ISO-C Standard, this code should compile without `static_assert` emitting a diagnostic.

The `_Alignas` directive applies only to the member variable `member1`. It must not change the alignment of `struct Inner`. However, before Visual Studio 17.9.1, the diagnostic "incorrect alignment" was emitted. The compiler aligned `member2` to an offset of 32 bytes within the `struct Outer` type.

This is a binary breaking change, so a warning is now emitted when this change takes effect. Warning C5274 is now emitted at warning level 1 for the previous example: `
warning C5274: behavior change: _Alignas no longer applies to the type 'Inner' (only applies to declared data objects)`.

Also, in previous versions of Visual Studio, when the `_Alignas` specifier appeared next to an anonymous type declaration, it was ignored.

```cpp
// compile with /std:c17
#include <stddef.h>
struct S
{
    _Alignas(32) struct { int anon_member; };
    int k;
};

static_assert(offsetof(struct S, k)==4, "incorrect offsetof");
static_assert(sizeof(struct S)==32, "incorrect size");
```

Previously, both `static_assert` statements failed when compiling this code. Now the code compiles, but emits the following level 1 warnings:

```c
warning C5274: behavior change: _Alignas no longer applies to the type '<unnamed-tag>' (only applies to declared data objects)
warning C5273: behavior change: _Alignas on anonymous type no longer ignored (promoted members will align)
```

To get the previous behavior, replace `_Alignas(N)` with `__declspec(align(N))`. Unlike `_Alignas`, `declspec(align)` applies to the type.

### Improved warning C4706

This is a source code breaking change. Previously, the compiler didn't detect the convention of wrapping an assignment in parentheses, if assignment was intended, to suppress [warning C4706](../error-messages/compiler-warnings/compiler-warning-level-4-c4706.md) about assignment within a conditional expression. The compiler now detects the parentheses and suppresses the warning.

```cpp
#pragma warning(error: 4706)

struct S
{
   auto mf()
   {
      if (value = 9)
         return value + 4;
      else
         return value;
   }

   int value = 9;
};
```

The compiler now also emits the warning in cases where the function isn't referenced. Previously, because `mf` is an inline function that isn't referenced, warning C4706 wasn't emitted for this code. Now the warning is emitted:

```cpp
error C4706: assignment used as a condition
note: if an assignment is intended you can enclose it in parentheses, '(e1 = e2)', to silence this warning
```

To fix this warning, either use an equality operator, `value == 9`, if this is what was intended. Or, wrap the assignment in parentheses, `(value = 9)`, if assignment is intended. Otherwise, since the function is unreferenced, remove it.

## <a name="improvements_179"></a> Conformance improvements in Visual Studio 2022 version 17.9

Visual Studio 2022 version 17.9 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

For a broader summary of changes made to the Standard Template Library, see [STL Changelog VS 2022 17.9](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-179).

### Application of `_Alignas` on a structured type in C

In versions of Visual C++ before Visual Studio 2022 version 17.9, when `_Alignas` appeared next to a structure type in a declaration, it wasn't applied correctly according to the ISO-C Standard. For example:

```c
// compile with /std:c17
#include <stddef.h>
struct Outer
{
    _Alignas(32) struct Inner { int i; } member1;
    struct Inner member2;
};
static_assert(offsetof(struct Outer, member2)==4, "incorrect alignment");
```

According to the ISO-C Standard, this code should compile without the `static_assert` emitting a diagnostic. The `_Alignas` directive applies only to the member variable `member1`. It must not change the alignment of `struct Inner`. However, before release 17.9.1 of Visual Studio, the diagnostic "incorrect alignment" was  emitted. The compiler aligned `member2` to a 32 byte offset within `struct Outer`.

Fixing this is a binary breaking change, so when this change in behavior is applied a warning is emitted. For the preceding code, Warning C5274, "`_Alignas` no longer applies to the type 'Inner' (only applies to declared data objects)" is now emitted at warning level 1.

In previous versions of Visual Studio, `_Alignas` was ignored when it appeared next to an anonymous type declaration. For example:

```c
// compile with /std:c17
#include <stddef.h>
struct S {
    _Alignas(32) struct { int anon_member; };
    int k;
};
static_assert(offsetof(struct S, k)==4, "incorrect offsetof");
static_assert(sizeof(struct S)==32, "incorrect size");
```

Previously, both `static_assert` statements failed when compiling this code. The code now compiles, but with the following level 1 warnings:

```c
warning C5274: behavior change: _Alignas no longer applies to the type '<unnamed-tag>' (only applies to declared data objects)
warning C5273: behavior change: _Alignas on anonymous type no longer ignored (promoted members will align)
```

If you want the earlier behavior, replace `_Alignas(N)` with `__declspec(align(N))`. Unlike `_Alignas`, `declspec(align)` can be applied to a type.

### `__VA_OPT__` is enabled as an extension under `/Zc:preprocessor`

`__VA_OPT__` was added to C++20 and C23. Previous to its addition, there wasn't a standard way to elide a comma in a variadic macro. To provide better backward compatibility, `__VA_OPT__` is enabled under the token based preprocessor `/Zc:preprocessor` across all language versions.

For example, this now compiles without error:

```cpp
#define LOG_WRAPPER(message, ...) WRITE_LOG(__LINE__, message __VA_OPT__(, __VA_ARGS__))

// Failed to build under /std:c11, now succeeds.
LOG_WRAPPER("Log message");
LOG_WRAPPER("Log message with %s", "argument")
```

### C23 language ###

For C23, the following are available when using the `/std:clatest` compiler switch:

[`typeof`](../c-language/typeof-c.md)\
[`typeof_unqual`](../c-language/typeof-unqual-c.md)

The following are available for all C language versions:

[`__typeof__`](../c-language/typeof-c.md)\
[`__typeof_unqual__`](../c-language/typeof-unqual-c.md)

### C++ Standard Library

**C++23 features**

- `formattable`, `range_format`, `format_kind`, and `set_debug_format()` as part of [P2286R8 Formatting Ranges](https://wg21.link/P2286R8)
- `<mdspan>` per [P0009R18](https://wg21.link/P0009R18) and subsequent wording changes that were applied to the C++23 Standard.
- `format()` pointers per [P2510R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2510r3.pdf).

## <a name="improvements_178"></a> Conformance improvements in Visual Studio 2022 version 17.8

Visual Studio 2022 version 17.8 contains the following conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### `/FU` issues an error

The C compiler used to accept the `/FU` option, even though it hasn't support managed compilation for some time. It now issues an error. Projects that pass this option need to restrict it to C++/CLI projects only.

### C++ Standard Library

The C++23 named modules `std` and `std.compat` are now available when compiling with `/std:c++20`.

For a broader summary of changes made to the C++ Standard Library, see [STL Changelog VS 2022 17.8](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-178).

## <a name="improvements_177"></a> Conformance improvements in Visual Studio 2022 version 17.7

Visual Studio 2022 version 17.7 contains the following highlighted conformance improvements, bug fixes, and behavior changes in the Microsoft C/C++ compiler.

### Added `/std:clatest` to the C compiler

This switch behaves like the `/std:c++latest` switch for the C++ compiler. The switch enables all currently implemented compiler and standard library features proposed for the next draft C standard, as well as some in-progress and experimental features.

### C++ Standard Library

The `<print>` library is now supported. See [P2093R14 Formatted output](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2093r14.html).

Implemented `views::cartesian_product`.

For a broader summary of changes made to the Standard Template Library, see [STL Changelog VS 2022 17.7](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-177).

### `using` conformance

Previously, the `using` directive could cause names from used namespaces to remain visible when they shouldn't. This could cause unqualified name lookup to find a name in a namespace even when there's no `using` directive active.

Here are some examples of the new and old behavior.\
References in the following comments to "(1)" mean the call to `f<K>(t)` in namespace `A`:

```cpp
namespace A
{ 
    template<typename K, typename T> 
    auto f2(T t)
    { 
        return f<K>(t); // (1) Unqualified lookup should not find anything
    } 
} 

namespace B
{ 
    template<typename K, typename T> 
    auto f(T t) noexcept
    { // Previous behavior: This function was erroneously found during unqualified lookup at (1)
        return A::f2<K>(t); 
    } 
} 

namespace C
{ 
    template<typename T> 
    struct S {}; 

    template<typename, typename U> 
    U&& f(U&&) noexcept; // New behavior: ADL at (1) correctly finds this function 
} 

namespace D
{ 
    using namespace B; 

    void h()
    { 
        D::f<void>(C::S<int>()); 
    } 
} 
```

The same underlying issue can cause code that previously compiled to now be rejected:

```cpp
#include <memory>
namespace Addin {}
namespace Gui
{
    using namespace Addin;
}

namespace Addin
{
    using namespace std;
}

// This previously compiled, but now emits error C2065 for undeclared name 'allocator'.
// This should be declared as 'std::allocator<T*>' because the using directive nominating
// 'std' is not active at this point.
template <class T, class U = allocator<T*>>
class resource_list
{
};

namespace Gui
{
    typedef resource_list<int> intlist;
}
```

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

```cpp
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

When enabled, the **`/Zc:enumTypes`** option is a potential source and binary breaking change. It's off by default, and not enabled by **`/permissive-`**, because the fix might affect binary compatibility. Some enumeration types change size when the conformant fix is enabled. Certain Windows SDK headers include such enumeration definitions.

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

When enabled, the **`/Zc:enumTypes`** option is a potential source and binary breaking change. It's off by default, and not enabled by **`/permissive-`**, because the fix might affect binary compatibility. Some enumeration types change size when the conformant fix is enabled. Certain Windows SDK headers include such enumeration definitions.

#### Example

```cpp
enum Enum {
    A = 'A',
    B = sizeof(A)
};

static_assert(B == 1); // previously failed, now succeeds under /Zc:enumTypes
```

In this example the enumerator `A` should have type **`char`** before the closing brace of the enumeration, so `B` should be initialized using `sizeof(char)`. Before the **`/Zc:enumTypes`** fix, `A` had enumeration type `Enum` with a deduced underlying type **`int`**, and `B` was initialized using `sizeof(Enum)`, or 4.

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

Visual Studio 2022 version 17.2 fixes a bug in `<charconv>` `from_chars()` `float` tiebreaker rules that produced incorrect results. This bug affected decimal strings that were at the exact midpoint of consecutive `float` values, within a narrow range. (The smallest and largest affected values were `32768.009765625` and `131071.98828125`, respectively.) The tiebreaker rule wanted to round to "even," and "even" happened to be "down," but the implementation incorrectly rounded "up" (`double` was unaffected.) For more information and implementation details, see [microsoft/STL#2366](https://github.com/microsoft/STL/pull/2366).

This change affects runtime behavior in the specified range of cases:

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

This change is a source breaking change. It applies when C11 or C17 mode is enabled (**`/std:c11`** or **`/std:c17`**) and **`/Zc:__STDC__`** is specified.

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

In Visual Studio 2022 version 17.1 and later, if the expression associated with a `static_assert` isn't a dependent expression, the compiler evaluates the expression when it's parsed. If the expression evaluates to `false`, the compiler emits an error. Previously, if the `static_assert` was within the body of a function template (or within the body of a member function of a class template), the compiler wouldn't perform this analysis.

This change is a source breaking change. It applies in any mode that implies **`/permissive-`** or **`/Zc:static_assert`**. This change in behavior can be disabled by using the **`/Zc:static_assert-`** compiler option.

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

WG21 paper [N3478](https://wg21.link/n3478) removed this oversight. This change is implemented in MSVC. When the example is compiled by using **`/permissive-`** (and **`/diagnostics:caret`**), it emits the following error:

```Output
t.cpp(3,14): error C7664: '>=': ordered comparison of pointer and integer zero ('int *' and 'int')
    return p >= 0;
             ^
```

This compiler behavior is a source and binary breaking change that affects code compiled using **`/permissive-`** in all **`/std`** modes.

## See also

[Microsoft C/C++ language conformance](visual-cpp-language-conformance.md)
