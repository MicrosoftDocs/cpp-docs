---
title: "C++ conformance improvements in Microsoft C/C++ (MSVC)"
description: "Summary of conformance improvements in Microsoft C/C++ (MSVC)"
ms.date: 10/31/2025
ms.service: "visual-cpp"
ms.subservice: "cpp-lang"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Microsoft C/C++ (MSVC)

Microsoft C/C++ makes conformance improvements and bug fixes in every release. This article lists the significant improvements by MSVC Build Tools version. To jump directly to the changes for a specific version, use the **In this article** links at the top of this article.

This document lists changes starting in November 2025 when Visual Studio and the MSVC toolset versioning diverged. 

For changes in earlier versions of Visual Studio:

| Version  | Conformance improvements link |
|---|---|
| 2022 | [C++ conformance improvements in Visual Studio 2022](cpp-conformance-improvements.md) |
| 2019 | [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md) |
| 2017 | [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md) |
| 2003-2015 | [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md) |

## <a name="msvc_14_50"></a> C++ conformance improvements, behavior changes, and bug fixes in MSVC Build Tools v14.50

Microsoft C/C++ in Visual Studio (MSVC) Build Tools v14.50 introduces significant C++ language updates, conformance improvements, and bug fixes. This version shipped first with Visual Studio 2026 version 18.0 and includes version 19.50 of the MSVC compiler.

This document details the C++ language conformance improvements and compiler enhancements included in MSVC Build Tools v14.50. For more information about updates in the Standard Library, see [STL Changelog](https://github.com/microsoft/STL/wiki/Changelog), which is regularly updated.

The Microsoft C++ standard library (STL) no longer supports targeting Windows 7 / Server 2008 R2, Windows 8 / Server 2012, or Windows 8.1 / Server 2012 R2.\
Windows 10 / Server 2016 are the minimum supported operating systems. 

## C++23 Features

MSVC Build Tools v14.50 adds support for several C++23 features, bringing the compiler closer to full C++23 conformance.

### P0849R8: auto(x) - decay-copy in the language

[P0849R8](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p0849r8.html) introduces the `auto(x)` syntax for decay-copy operations directly in the language, providing a more concise way to express decay-copy semantics.

Prior to P0849R8, you needed to explicitly perform decay operations:

```cpp
// Prior to P0849R8:
void pop_front_alike(auto& x)
{
    using T = std::decay_t<decltype(x.front())>;
    std::erase(x, T(x.front()));
}
```

After P0849R8, you can use the simpler `auto(x)` syntax:

```cpp
// After P0849R8:
void pop_front_alike(auto& x)
{
    std::erase(x, auto(x.front()));
}
```

This feature provides a standardized way to perform decay-copy operations, making code more readable and reducing the need for verbose template metaprogramming.

### P2437R1: C++23 `#warning` directive

[P2437R1](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2437r1.pdf) implements the C++23 `#warning` preprocessor directive, providing a standard way to emit warnings during compilation.

```cpp
// Valid prior to C++23.
#error bad configuration...

// Valid after C++23.
#warning configuration deprecated...
```

The `#warning` directive allows you to emit diagnostic messages without stopping compilation, making it useful for deprecation notices and configuration warnings. For more information, see [#warning directive (C/C++)](/cpp/preprocessor/hash-warning-directive-c-cpp).

### CWG Issue 2586: Explicit object parameter for assignment and comparison

[CWG Issue 2586](https://cplusplus.github.io/CWG/issues/2586) allows explicit object parameters in assignment and comparison operators, enabling more flexible operator definitions.

```cpp
struct S
{
  S& operator=(this S&, const S&) = default; // Valid after CWG2586.
  auto operator<=>(this const S&, const S&) = default; // Valid after CWG2586.
};
```

This change allows you to use the explicit object parameter syntax (deducing `this`) in assignment and comparison operators, providing more consistent syntax across different types of member functions.


### P2266R1 : Simpler implicit move

The introduction of [P2266R1](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p2266r1.html) may cause code that was previously treated as an lvalue to be treated as an xvalue or a prvalue. For example:

```cpp
#include <utility>

template<typename T>
T& f(T&& t)
{
   return t;
}

struct S { };

void g()
{
   S s1{ };
   S& s2 = f(std::move(s1));
}
```

In C++20, and earlier, this code would have compiled because even though the type of `t` is `S&&` the use of `t` in `return t` is treated as a glvalue and so it can bind to the return type.

With C++23, `t` is treated as an xvalue and so it can't bind to an lvalue reference.

One fix is to change to the return type of the function from `T&` to `T&&` but this may affect code that calls this function. An alternative is to use the feature test macro that is associated with this change. For example:

```cpp
#include <type_traits>

template<typename T>
T& f(T&& t)
{
#if defined(__cpp_implicit_move)
   return static_cast<std::remove_reference_t<T>&>(t);
#else
   return t;
#endif
}
```

Adding the cast means that the value-category of the return expression is now an lvalue and so it can bind to the return type.

### P2280R4: References to unknown values during constant evaluation

[P2280R4](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2280r4.html) allows references to unknown values during constant evaluation, relaxing restrictions on `constexpr` evaluation.

```cpp
template <typename T, size_t N>
constexpr size_t array_size(T (&)[N])
{
    return N;
}

void check(int const (&param)[3])
{
    constexpr auto s2 = array_size(param); // Previously ill-formed, now accepted as a constant expression after P2280R4.
}
```

This improvement allows more code to be evaluated at compile time, particularly when dealing with function parameters in template contexts.

## Smaller Conformance Updates

MSVC Build Tools v14.50 includes numerous smaller conformance improvements that enhance C++ standard compliance:

- [CWG2635](https://cplusplus.github.io/CWG/issues/2635): Constrained structured bindings support
- [CWG2465](https://cplusplus.github.io/CWG/issues/2465): Coroutine parameters passed to promise constructor improvements
- [CWG2496](https://cplusplus.github.io/CWG/issues/2496): Ref-qualifiers and virtual overriding corrections
- [CWG2506](https://cplusplus.github.io/CWG/issues/2506): Structured bindings and array cv-qualifiers fixes
- [CWG2507](https://cplusplus.github.io/CWG/issues/2507): Default arguments for `operator[]` support
- [CWG2585](https://cplusplus.github.io/CWG/issues/2585): Behavior alignment with standard requirements
- [CWG2521](https://cplusplus.github.io/CWG/issues/2521): Deprecation of 'operator string-literal identifier'
- [CWG2528](https://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html#2528): Relaxed conversion rules for the spaceship operator
- [P2360R0](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p2360r0.html): Extended init-statement definition to allow alias-declarations
- [P2290R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2290r3.pdf): C++23 hexadecimal/octal delimited escape sequence support in string literals
- [P2797R0](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2023/p2797r0.html): Resolution for CWG2692 regarding static and explicit object member functions with the same parameter-type-lists
- [P2266R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2266r3.html): Simpler implicit move semantics

For more information about compiler improvements and bug fixes in MSVC Build Tools v14.50, see [C++ Language Updates in MSVC Build Tools v14.50](https://devblogs.microsoft.com/cppblog/c-language-updates-in-msvc-build-tools-v14-50/)

## Conformance Enhancements

Improved adherence to C++ standards:

### Attribute Support

- Added support for [`[[maybe_unused]]` on labels](https://developercommunity.visualstudio.com/t/unreferenced-label-when-ref-hidden-by-if/102076).
- Fixed warning C4102 (unreferenced label) when the only reference was from a discarded `if constexpr` branch.

### Template and Specialization Fixes

- [Diagnosed ill-formed friend explicit specializations](https://developercommunity.visualstudio.com/t/Defining-explicit-function-template-spec/10933841) that were incorrectly accepted in C++20 or later.
- Added `/Zc:enumEncoding` switch to [correctly encode enum non-type template parameters](https://developercommunity.visualstudio.com/t/Overload-resolution-fails-for-enum-non-t/10398088).
- Fixed issues with [missing 'template' keyword diagnostics](https://developercommunity.visualstudio.com/t/No-diagnostic-for-missing-template-in-d/10501221)

### C++20 and C++23 Features

- Enhanced [multidimensional operator[] support](https://developercommunity.visualstudio.com/t/Multidimensional-operator-with-Wall-r/10876026)
- Improved [concept and constraint evaluation](https://developercommunity.visualstudio.com/t/VS-1714-if-constexpr-requires--does/10905731)

## Bug fixes

Bug fixes for C++ Modules, `constexpr`, and other fixes were made in v14.50. For a detailed list of bug fixes, see [Compiler Improvements in v14.50](https://devblogs.microsoft.com/cppblog/c-language-updates-in-msvc-build-tools-v14-50/#compiler-improvements-in-v14.50)

**Encoding of certain non-type template arguments corrected**

Affects `/stdc++20` or later.

Certain non-type pointer type template arguments involving sub-objects could lead to linking issues or in some cases silent bad code generation where what should be distinct specializations collide.

```cpp
struct A
{
    int x;
};

struct B
{
    int y;
};

template <auto p> void f();

int main()
{
    static A a;
    static B b;
    constexpr auto px = &a.x;
    constexpr auto py = &b.y;
    f<px>(); // incorrect encoding of argument 'px'
    f<py>(); // incorrect encoding of argument 'py', collided with 'px'.
}
```

With this fix, the two calls to `f` get distinct encodings, as required. 

## Migrating to MSVC Build Tools v14.50

When upgrading to MSVC Build Tools v14.50, consider the following potential breaking changes and migration guidance:

### C++23 Feature Adoption
- Update code to take advantage of new `auto(x)` decay-copy syntax for cleaner template code
- Consider using `#warning` directives for deprecation notices instead of error-prone conditional compilation
- Review explicit object parameter usage in operators for improved consistency

### `constexpr` Improvements
- Existing `constexpr` code may now compile that previously failed, particularly with virtual functions
- Review constant evaluation code for potential new optimization opportunities
- Update CRTP patterns that may now work correctly with static constexpr members

### Modules Migration
- Projects using C++20 modules should see improved stability and compatibility
- Header units now work more reliably with large codebases like Unreal Engine 5
- Consider migrating from traditional headers to modules for better compilation performance

### Compiler Diagnostics
- New warnings may appear for previously undiagnosed issues
- Review enum type usage if using `/Zc:enumTypes`
- Update code that relies on implicit conversions that may now be flagged

### C Code Updates
- C23 features are available with `/std:clatest`
- `typeof` behavior changes may affect existing code
- Review preprocessor usage for new `__VA_OPT__` availability

## Conclusion

MSVC Build Tools v14.50 represents a significant advancement to the MSVC compiler, bringing substantial improvements in C++23 conformance, reliability, and correctness. The extensive bug fixes and enhancements make this release particularly valuable for large-scale C++ development projects.

Key highlights include:
- Advanced C++23 feature support including `auto(x)` decay-copy and `#warning` directive
- Comprehensive `constexpr` improvements, particularly for virtual functions
- Major stability improvements for C++ modules
- Extensive reliability fixes reducing internal compiler errors
- Enhanced C++/CLI support for managed code scenarios

For the latest updates and to provide feedback, please visit the [Visual Studio Developer Community](https://developercommunity.visualstudio.com/) or contact the team at [visualcpp@microsoft.com](mailto:visualcpp@microsoft.com). Follow us on Twitter [@visualc](https://twitter.com/visualc) or BlueSky [@msftcpp.bsky.social](https://bsky.app/profile/msftcpp.bsky.social).

If you encounter problems with MSVC in Visual Studio 2026, please let us know via the [Report a Problem](how-to-report-a-problem-with-the-visual-cpp-toolset.md) option, either from the installer or the Visual Studio IDE itself.

## See also

[Microsoft C/C++ language conformance](visual-cpp-language-conformance.md)  
[What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md)  
[C++ conformance improvements in Visual Studio 2022](cpp-conformance-improvements.md)