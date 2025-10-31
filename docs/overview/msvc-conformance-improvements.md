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

Microsoft C/C++ in Visual Studio (MSVC) Build Tools v14.50 introduces significant C++ language updates, conformance improvements, and bug fixes. This version ships with Visual Studio 2026 version 18.0 and includes version 19.50 of the MSVC compiler. You can try out these improvements by [downloading the Insiders release](https://aka.ms/vspreview).

This document details the C++ language conformance improvements and compiler enhancements included in MSVC Build Tools v14.50. For updates in the Standard Library, check out the [STL Changelog](https://github.com/microsoft/STL/wiki/Changelog), which is regularly updated.

As C++ standards progress in MSVC, you can follow along using the [cppreference compiler support table](https://en.cppreference.com/w/cpp/compiler_support.html) and help us identify what we should be working on next!

## C++23 Features

MSVC Build Tools v14.50 adds support for several C++23 features, bringing the compiler closer to full C++23 conformance.

### P0849R8: auto(x) - decay-copy in the language

[P0849R8](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p0849r8.html) introduces the `auto(x)` syntax for decay-copy operations directly in the language, providing a more concise way to express decay-copy semantics.

Prior to P0849R8, you needed to explicitly perform decay operations:

```cpp
// Prior to P0849R8:
void pop_front_alike(auto& x) {
    using T = std::decay_t<decltype(x.front())>;
    std::erase(x, T(x.front()));
}
```

After P0849R8, you can use the simpler `auto(x)` syntax:

```cpp
// After P0849R8:
void pop_front_alike(auto& x) {
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

The `#warning` directive allows you to emit diagnostic messages without stopping compilation, making it useful for deprecation notices and configuration warnings.

### CWG Issue 2586: Explicit object parameter for assignment and comparison

[CWG Issue 2586](https://cplusplus.github.io/CWG/issues/2586) allows explicit object parameters in assignment and comparison operators, enabling more flexible operator definitions.

```cpp
struct S {
  S& operator=(this S&, const S&) = default; // Valid after CWG2586.
  auto operator<=>(this const S&, const S&) = default; // Valid after CWG2586.
};
```

This change allows you to use the explicit object parameter syntax (deducing `this`) in assignment and comparison operators, providing more consistent syntax across different types of member functions.

### P2280R4: References to unknown values during constant evaluation

[P2280R4](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2280r4.html) allows references to unknown values during constant evaluation, relaxing restrictions on `constexpr` evaluation.

```cpp
template <typename T, size_t N>
constexpr size_t array_size(T (&)[N]) {
    return N;
}

void check(int const (&param)[3]) {
    constexpr auto s2 = array_size(param); // Previously ill-formed, now accepted as a constant expression after P2280R4.
}
```

This improvement allows more code to be evaluated at compile time, particularly when dealing with function parameters in template contexts.

## Smaller Conformance Updates

MSVC Build Tools v14.50 includes numerous smaller conformance improvements that enhance C++ standard compliance:

### Core Working Group Issues

- **CWG2635**: Constrained structured bindings support
- **CWG2465**: Coroutine parameters passed to promise constructor improvements
- **CWG2496**: Ref-qualifiers and virtual overriding corrections
- **CWG2506**: Structured bindings and array cv-qualifiers fixes
- **CWG2507**: Default arguments for `operator[]` support
- **CWG2585**: Behavior alignment with standard requirements
- **CWG2521**: Deprecation of 'operator string-literal identifier'
- **CWG2528**: Relaxed conversion rules for the spaceship operator

### Language Feature Enhancements

- **P2360R0**: Extended init-statement definition to allow alias-declarations
- **P2290R3**: C++23 hexadecimal/octal delimited escape sequence support in string literals
- **P2797R0**: Resolution for CWG2692 regarding static and explicit object member functions with the same parameter-type-lists
- **P2266R3**: Simpler implicit move semantics

### Compiler Diagnostics

- Implementation of a warning to notify of enum type changes caused by `/Zc:enumTypes`

## Compiler Improvements in v14.50

MSVC Build Tools v14.50 includes extensive compiler improvements across multiple areas, focusing on reliability, correctness, and conformance.

### C++/CLI Improvements

The C++/CLI compiler received several important fixes:

- **ICE fixes**: Resolved internal compiler errors on use of `auto` in member declarations in C++/CLI managed types
- **Static constexpr support**: Fixed crashes related to [static constexpr in C++/CLI](https://developercommunity.visualstudio.com/t/static-constexpr-causes-CCLI-compiler/1536217)
- **Friend declarations**: Corrected crashes when [friend functions are used with managed types](https://developercommunity.visualstudio.com/t/Compiler-crash-A-managed-type-cannot-ha/1536159)
- **Stack ref-types**: Fixed crashes in [C++/CLI code using ref-types on stack](https://developercommunity.visualstudio.com/t/clexe-terminates-with-error-code--52970/10777778)
- **MFC compatibility**: Resolved [multiple errors in managed C++ code in MFC applications](https://developercommunity.visualstudio.com/t/Visual-Studio-1712-introduced-multiple-/10792822)

### Diagnostics Improvements

Enhanced diagnostic accuracy and clarity:

- Fixed incorrect diagnostic about [implicit enum type conversions in C even with explicit casts](https://developercommunity.visualstudio.com/t/warning-C5287:-operands-are-different-e/10877942)

### `constexpr` Enhancements

Significant improvements to `constexpr` evaluation and support:

#### Virtual Function Support
- Fixed errors involving [virtual function calls at compile-time](https://developercommunity.visualstudio.com/t/MSVC-erroneously-claims-the-return-value/10184063)
- Resolved [C++20 constexpr virtual polymorphism issues](https://developercommunity.visualstudio.com/t/C20-constexpr-virtual-polymorphism-is-/10348572)
- Corrected [virtual constexpr function evaluation](https://developercommunity.visualstudio.com/t/Virtual-constexpr-function-did-not-evalu/10360010)

#### Expression Evaluation
- Improved rejection of [overflow from addition and left shifting of constants](https://developercommunity.visualstudio.com/content/problem/1202945/signed-overflow-in-constant-core-expression-should.html)
- Fixed scenarios where [constructors should be made implicitly constexpr](https://developercommunity.visualstudio.com/t/Multiple-constexpr-bugs-including-regre/10855054)
- Resolved issues with [constexpr static data members and CRTP](https://developercommunity.visualstudio.com/content/problem/1110270/crtp-in-msvc-1924-not-seeing-variable.html)

#### Advanced `constexpr` Features
- Fixed bugs related to [evaluating destructors of constant objects](https://developercommunity.visualstudio.com/t/MSVC-1437-40-forces-my-global-std::stri/10794576)
- Improved [constexpr lambda captures with guaranteed copy elision](https://developercommunity.visualstudio.com/t/Lambda-in-a-function-template-requests-c/10922885)
- Allowed [consteval constructor calls as direct-initialization arguments](https://developercommunity.visualstudio.com/t/MSVC-Fails-to-compile-list-and-direct-in/10915063)
- Fixed issues with [consteval functions in `if consteval` contexts](https://developercommunity.visualstudio.com/t/The-consteval-function-is-not-an-immedia/10900618)

### C++ Modules Improvements

Enhanced C++20 modules support with numerous bug fixes:

#### Import and Export Fixes
- Fixed bug with [importing friend declarations in nlohmann/json library](https://developercommunity.visualstudio.com/t/nlohmannjson-does-not-compile-as-C20-/10908164)
- Resolved [compiler crashes with using-declarations from specializations](https://developercommunity.visualstudio.com/t/Internal-compiler-error-when-using-usin/10934729)
- Fixed issues where [std::expected couldn't be specialized when imported](https://developercommunity.visualstudio.com/t/C1907-modules-constexpr-and-std::expect/10501314)

#### Function and Variable Handling
- Corrected problems with [functions using types from named modules](https://developercommunity.visualstudio.com/t/Compiler-uses-non-exported-class-definit/10863347)
- Fixed [importing constexpr functions with static local variables](https://developercommunity.visualstudio.com/t/ICE-when-calling-imported-function-that-/10913469)
- Improved [pragma warning directive handling in modules](https://developercommunity.visualstudio.com/t/pragma-warningdisable-not-working-in-/10937100)

#### Real-World Compatibility
- Fixed various issues preventing [Unreal Engine 5 from building with header units](https://developercommunity.visualstudio.com/t/Unreal-does-not-build-with-header-units-/10800119)
- Resolved [C++ modules + boost::asio compatibility issues](https://developercommunity.visualstudio.com/t/C20-modules--boost::asio-still-being-/10038468)
- Fixed problems with [specializations in the global module fragment](https://developercommunity.visualstudio.com/t/C20-modules:-specialzations-in-the-glo/10826499)

### Conformance Enhancements

Improved adherence to C++ standards:

#### Attribute Support
- Added support for [`[[maybe_unused]]` on labels](https://developercommunity.visualstudio.com/t/unreferenced-label-when-ref-hidden-by-if/102076)
- Fixed warning C4102 (unreferenced label) when the only reference was from a discarded `if constexpr` branch

#### Template and Specialization Fixes
- [Diagnosed ill-formed friend explicit specializations](https://developercommunity.visualstudio.com/t/Defining-explicit-function-template-spec/10933841) that were incorrectly accepted in C++20 or later
- Added `/Zc:enumEncoding` switch to [correctly encode enum non-type template parameters](https://developercommunity.visualstudio.com/t/Overload-resolution-fails-for-enum-non-t/10398088)
- Fixed issues with [missing 'template' keyword diagnostics](https://developercommunity.visualstudio.com/t/No-diagnostic-for-missing-template-in-d/10501221)

### Reliability Improvements

Extensive internal compiler error (ICE) fixes and stability improvements:

#### Template-Related Fixes
- Fixed [ICE on explicit class template instantiation with friend functions](https://developercommunity.visualstudio.com/t/Internal-compiler-error-ICE-on-explici/10903887)
- Resolved [ICE with explicit variable template instantiations and PCH files](https://developercommunity.visualstudio.com/t/C-explicit-variable-template-instantia/10933044)
- Corrected [compiler crashes with deep nesting of aggregates and initializer lists](https://developercommunity.visualstudio.com/t/Internal-Compiler-Error-Found-in-MSVC-14/10914206)

#### Lambda-Related Improvements
- Fixed issues with [nested generic lambdas](https://developercommunity.visualstudio.com/t/VS-1714-Preview-30:-ICE:-error-C1001:-/10891418)
- Resolved [ICE with lambda captures and template parameters](https://developercommunity.visualstudio.com/t/ICE-with-nested-std::visit--lambda-capt/10910959)
- Corrected [lambda initialization problems](https://developercommunity.visualstudio.com/t/Internal-compiler-error-with-designated-/10618932)

#### Memory and Performance
- Fixed [exponential memory growth during type deduction](https://developercommunity.visualstudio.com/t/VS-2022-C-compiler-uses-nearly-200x-as/10900008) with classes having many base classes
- Improved [IL generation for temporaries bound to non-static data member references](https://developercommunity.visualstudio.com/t/CLexe-crashes-with-Access-Violation-on-/10878252)

### Correctness Improvements

Enhanced code generation and semantic analysis:

#### Exception Handling and References
- Fixed [exception handling issues with unions](https://developercommunity.visualstudio.com/t/CLexe-exited-with-code--529706956-whe/10915135)
- Improved [rvalue reference handling in lambda contexts](https://developercommunity.visualstudio.com/t/When-using-a-lambda-as-a-template-argume/10916555)
- Corrected [explicit instantiation overload resolution with requires clauses](https://developercommunity.visualstudio.com/t/Overload-resolution-for-constrained-func/10107770)

#### Type System and Semantics
- Fixed [noexcept specifier semantic issues](https://developercommunity2.visualstudio.com/t/noexcept-for-some-reason-work-with-type/1321108)
- Improved [phase-1 name binding in non-static data member initializers](https://developercommunity.visualstudio.com/t/Wrong-context-for-class-field-initialize/10896684)
- Corrected [value category determination for indirection and array expressions](https://developercommunity.visualstudio.com/t/cl-Preview-fails-to-properly-determine-a/10907452)

#### Template and SFINAE
- Fixed [template-id parsing in alias declarations](https://developercommunity.visualstudio.com/t/Source-code-parsing-error-in-boostparse/10869546)
- Improved [partial ordering with template parameter objects](https://developercommunity.visualstudio.com/t/Template-Specialization-is-not-selected-/10902294)
- Resolved [constexpr variable re-declaration issues](https://developercommunity.visualstudio.com/t/A-C1001-error-occurs-in-VS1714/10909397)

#### Advanced Language Features
- Fixed [`__declspec(no_sanitize_address)` handling on lambdas](https://developercommunity.visualstudio.com/t/Address-Sanitizer-declspecsattributes-d/10850249)
- Improved [static inline data member instantiation points](https://developercommunity.visualstudio.com/t/static-inline-atomic-and-another-atomic-/10203656)
- Corrected [static operator() in abbreviated function templates](https://developercommunity.visualstudio.com/t/Call-to-static-operator-is-elided/10908158)

#### Standard Library Integration
- Fixed [`std::bit_cast` internal compiler errors](https://developercommunity.visualstudio.com/t/__builtin_bit_cast-Internal-compiler-err/10939926)
- Improved [modulo operator handling in variadic templates](https://developercommunity.visualstudio.com/t/Issue-in-specific-conditions-with-modulo/10940009)
- Resolved [class template argument deduction issues](https://developercommunity.visualstudio.com/t/Deduction-of-class-template-arguments-pi/10939918)

#### C++20 and C++23 Features
- Enhanced [multidimensional operator[] support](https://developercommunity.visualstudio.com/t/Multidimensional-operator-with-Wall-r/10876026)
- Fixed [`using enum` declaration handling](https://developercommunity.visualstudio.com/t/using-enum-c-20-doesnt-supported-as-we/10926317)
- Improved [concept and constraint evaluation](https://developercommunity.visualstudio.com/t/VS-1714-if-constexpr-requires--does/10905731)

### C Compiler Improvements

#### C23 Language Features
- Fixed `typeof` behavior with function types: In C23, functions no longer [decay to function pointers when used as arguments to `typeof`](https://developercommunity.visualstudio.com/t/__typeof__-not-working-with-function-typ/10891974)

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

MSVC Build Tools v14.50 represents a significant advancement in C++ compiler technology, bringing substantial improvements in C++23 conformance, reliability, and correctness. The extensive bug fixes and enhancements make this release particularly valuable for large-scale C++ development projects.

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