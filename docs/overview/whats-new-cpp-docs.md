---
title: "What's new for the C++ docs"
description: "The new docs and doc updates for the Microsoft C/C++ compiler, ATL/MFC, C runtime, and standard template library docs."
ms.date: "02/05/2021"
---
# Microsoft C++ docs: What's new for Visual Studio 16.8

This article lists some of the major changes to docs for the current release.

## C language

### New articles

- [`_Noreturn` keyword and `noreturn` macro (C11)](../c-language/noreturn.md)
- [_Static_assert keyword and static_assert macro (C11)](../c-language/static-assert-c.md)

### Updated articles

- [Parsing C Command-Line Arguments](../c-language/parsing-c-command-line-arguments.md) - Document exceptions to the rules for parsing C arguments
- [Type Qualifiers](../c-language/type-qualifiers.md) - added `restrict`
- [C Assignment Operators](../c-language/c-assignment-operators.md) - Lexical grammar update for C17
- [C Keywords](../c-language/c-keywords.md) - Lexical grammar update for C17
- [C Lexical grammar](../c-language/lexical-grammar.md) - Lexical grammar update for C17
- [Summary of Declarations](../c-language/summary-of-declarations.md) - Lexical grammar update for C17
- [Summary of Expressions](../c-language/summary-of-expressions.md) - Lexical grammar update for C17
- [C enumeration declarations](../c-language/c-enumeration-declarations.md) - Fixed lexical grammar
- [Summary of C statements](../c-language/summary-of-statements.md) - Update for `__leave`, `__try` keywords

## C runtime library

### New articles

- [Type-generic math](../c-runtime-library/tgmath.md)

### Updated articles

- [`qsort`](../c-runtime-library/reference/qsort.md) - Added note about stability
- [`_cwait`](../c-runtime-library/reference/cwait.md) - Fixed code example
- [Function family overview](../c-runtime-library/function-family-overviews.md) - Added operator `new` and `delete`
- [`round, roundf, roundl`](../c-runtime-library/reference/round-roundf-roundl.md) - Clarified rounding code example
- [Compatibility](../c-runtime-library/compatibility.md) - Added C99 conformance notes
- [`realloc`](../c-runtime-library/reference/realloc.md) - Added C99 conformance notes
- [CRT Library Features](../c-runtime-library/crt-library-features.md) - Added C99 conformance notes
- [`assert Macro, _assert, _wassert`](../c-runtime-library/reference/assert-macro-assert-wassert.md) - Clarified assert behavior
- [`vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l`](../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md) - Clarified return values
- [`setlocale, _wsetlocale`](../c-runtime-library/reference/setlocale-wsetlocale.md) - Added C Runtime UTF-8 support info

## C/C++ preprocessor reference

### Updated articles

- [Predefined macros](../preprocessor/predefined-macros.md) - Update to 16.8 release notes, C11/C17 `/std` support and SDK install docs
- [MSVC new preprocessor overview](../preprocessor/preprocessor-experimental-overview.md) - Update preprocessor content

## Code quality

### New articles

- [C33001](../code-quality/c33001.md) - VC Code Analysis - add for new rules in 16.8
- [C33004](../code-quality/c33004.md) - VC Code Analysis - add for new rules in 16.8
- [C33005](../code-quality/c33005.md) - VC Code Analysis - add for new rules in 16.8
- [C33010](../code-quality/c33010.md) - VC Code Analysis - add for new rules in 16.8
- [C33011](../code-quality/c33011.md) - VC Code Analysis - add for new rules in 16.8
- [C33020](../code-quality/c33020.md) - VC Code Analysis - add for new rules in 16.8
- [C33022](../code-quality/c33022.md) - VC Code Analysis - add for new rules in 16.8

### Updated articles

- [`C6262`](../code-quality/c6262.md) - Address cpp-docs.zh-tw issue 20
- [`C26497 USE_CONSTEXPR_FOR_FUNCTION`](../code-quality/c26497.md) - Add example to C26497
- [`C26496 USE_CONST_FOR_VARIABLE`](../code-quality/c26496.md) - Add example to C26496
- [`C26495 MEMBER_UNINIT`](../code-quality/c26495.md) - Update examples and links in C26495
- [`C26483 STATIC_INDEX_OUT_OF_RANGE`](../code-quality/c26483.md) - Add example to C26483
- [`C26462 USE_CONST_POINTER_FOR_VARIABLE`](../code-quality/c26462.md) - Add description and example to C26462
- [`C26461 USE_CONST_POINTER_ARGUMENTS:`](../code-quality/c26461.md) - Add description and example to C26461
- [`C26460 USE_CONST_REFERENCE_ARGUMENTS`](../code-quality/c26460.md) - Add description and example to C26460
- [`C26440 DECLARE_NOEXCEPT`](../code-quality/c26440.md) - Add example and link to Core Guidelines for C26440
- [`C26439 SPECIAL_NOEXCEPT`](../code-quality/c26439.md) - Add example and link to Core Guidelines for C26439
- [`C26436 NEED_VIRTUAL_DTOR`](../code-quality/c26436.md) - Add example and Core Guidelines link to C26436
- [`C26408 NO_MALLOC_FREE`](../code-quality/c26408.md) - Add example and Core Guidelines link to C26408
- [`C26401 DONT_DELETE_NON_OWNER`](../code-quality/c26401.md) - Add example and Core Guidelines link to C26401
- [`C26494 VAR_USE_BEFORE_INIT`](../code-quality/c26494.md) - Add example to C26494
- [`C26493 NO_CSTYLE_CAST`](../code-quality/c26493.md) - Add example to C26493
- [`C26492 NO_CONST_CAST`](../code-quality/c26492.md) - Add example to C26492
- [`C26490 NO_REINTERPRET_CAST`](../code-quality/c26490.md) - Add example to C26490
- [`C26482 NO_DYNAMIC_ARRAY_INDEXING`](../code-quality/c26482.md) - Add example to C26482
- [`C26471 NO_REINTERPRET_CAST_FROM_VOID_PTR`](../code-quality/c26471.md) - Add Example to C26471
- [`C26466 NO_STATIC_DOWNCAST_POLYMORPHIC`](../code-quality/c26466.md) - Add Example to C26466
- [`C26465 NO_CONST_CAST_UNNECESSARY`](../code-quality/c26465.md) - Add example to C26465
- [`C26447 DONT_THROW_IN_NOEXCEPT`](../code-quality/c26447.md) - Adding example to C26447
- [`C26446 USE_GSL_AT`](../code-quality/c26446.md) - Add an example for C26446
- [`C26434 DONT_HIDE_METHODS`](../code-quality/c26434.md) - Add example for C26434
- [`C26432 DEFINE_OR_DELETE_SPECIAL_OPS`](../code-quality/c26432.md) - Add example for C26432
- [`C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT`](../code-quality/c26402.md) - Add example for C26402
- [`C26409 NO_NEW_DELETE`](../code-quality/c26409.md) - Add example for C26409
- [`C26498 USE_CONSTEXPR_FOR_FUNCTIONCALL`](../code-quality/c26498.md) - C26498 - Description & Examples
- [`C26474 NO_IMPLICIT_CAST`](../code-quality/c26474.md) - Update C26474 to clarify base/derived cases
## Linux with Microsoft C++ in Visual Studio

### New articles

- [Configure a Linux CMake project in Visual Studio](../linux/cmake-linux-configure.md)

### Updated articles

- [Create a Linux MSBuild C++ project in Visual Studio](../linux/create-a-new-linux-project.md) - Update instructions to create a Linux project
- [ConnectionManager reference](../linux/connectionmanager-reference.md) - Add commands for modify, clean
- [Configure a Linux CMake project in Visual Studio](../linux/cmake-linux-configure.md) - Update to reflect latest UI
- [Deploy, run, and debug your Linux MSBuild project](../linux/deploy-run-and-debug-your-linux-project.md) - Add `GDB Path`

## Microsoft C/C++ compiler and tools errors and warnings

### New articles

- [Compiler Warning (level 4) C4388](../error-messages/compiler-warnings/c4388.md) - Add warning C4388, update 16.7 warnings

### Updated articles

- [Compiler Warning (level 3) C4018](../error-messages/compiler-warnings/compiler-warning-level-3-c4018.md) - Update 16.7 warnings
- [Compiler Warning (level 4) C4389](../error-messages/compiler-warnings/compiler-warning-level-4-c4389.md) - Update 16.7 warnings
- [Compiler Warnings by compiler version](../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md) - Update 16.7 warnings
- [Compiler warnings C4800 through C5999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md) - Update 16.7 warnings
- [Compiler Error C3381](../error-messages/compiler-errors-2/compiler-error-c3381.md) - Address cpp-docs 2493; update remarks and example

## Microsoft C/C++ compiler intrinsics and assembly language

### Updated articles

- [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md) - Update to 16.8 release notes
- [Microsoft C/C++ help and community](../overview/visual-cpp-help-and-community.md) - Update DevCom and Microsoft Docs Q&A links
- [C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) - Update DevCom and Microsoft Docs Q&A links
- [Microsoft C++ language conformance table](../overview/visual-cpp-language-conformance.md) - Update C++20 library conformance table, update language feature table for 16.7

## Microsoft C++ in Visual Studio

### Updated articles

- [`__restrict`](../cpp/extension-restrict.md)
- [Address-of Operator: &amp;](../cpp/address-of-operator-amp.md) - Fix issues identified in PR 3173
- [if-else statement (C++)](../cpp/if-else-statement-cpp.md) - Fix issues identified in PR 3173
- [Primary Expressions](../cpp/primary-expressions.md) - Fix issues identified in PR 3173
- [`union`](../cpp/unions.md) - Fixed code snippet

## Microsoft C++ in Visual Studio projects and build systems

### New articles

- [`.vcxproj` files and wildcards](../build/reference/vcxproj-files-and-wildcards.md)
- [`/headerUnit` (Use header unit IFC)](../build/reference/headerunit.md)
- [`/module:exportHeader` (Create header units)](../build/reference/module-exportheader.md)
- [`/module:reference` (Use named module IFC)](../build/reference/module-reference.md)
- [`/translateInclude` (Translate include directives into import directives)](../build/reference/translateinclude.md)
- [`/Zc:preprocessor` (Enable preprocessor conformance mode)](../build/reference/zc-preprocessor.md)

### Updated articles

- [`/permissive-` (Standards conformance)](../build/reference/permissive-standards-conformance.md) - Update to 16.8 release notes
- [`/clr` (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) - add description for `/clr`
- [pgosweep](../build/pgosweep.md) - Add more pgosweep options
- [C/C++ projects and build systems in Visual Studio](../build/projects-and-build-systems-cpp.md)
- [`/sdl` (Enable Additional Security Checks)](../build/reference/sdl-enable-additional-security-checks.md) - Fix issues identified in PR 3173
- [Importing data using `__declspec(dllimport)`](../build/importing-data-using-declspec-dllimport.md) - Updated example
## Microsoft C++ porting and upgrade guide

### Updated articles

- [How to: Use existing C++ code in a Universal Windows Platform app](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md) - Reworked for clarity and updated examples

## Microsoft C++ Standard Template Library (STL) reference

### New articles

- [`<bit>`](../standard-library/bit.md)
- [`<bit>` functions](../standard-library/bit-functions.md)
- [`endian` enum](../standard-library/bit-enum.md)

### Updated articles

- [`<ios>` typedefs](../standard-library/ios-typedefs.md) - update example per GitHub #2514
- [`basic_string` Class](../standard-library/basic-string-class.md) - added `startswith()`, `endswith()`
- [`ios_base Class`](../standard-library/ios-base-class.md)
- [`map` class](../standard-library/map-class.md)
- [`multimap` Class](../standard-library/multimap-class.md) - add `contains()`
- [`multiset` Class](../standard-library/multiset-class.md)  - add `contains()`
- [`set` Class](../standard-library/set-class.md) - add `contains()`
- [`unordered_map` Class](../standard-library/unordered-map-class.md)  - add `contains()`
- [`unordered_multimap` Class](../standard-library/unordered-multimap-class.md)  - add `contains()`
- [`unordered_multiset` Class](../standard-library/unordered-multiset-class.md)  - add `contains()`
- [`unordered_set` Class](../standard-library/unordered-set-class.md)  - add `contains()`
- [`basic_string_view` Class](../standard-library/basic-string-view-class.md) - added `startswith()`, `endswith()`
- [`<bit>` functions](../standard-library/bit-functions.md) - update `nodiscard` syntax

## Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! Learn how to contribute by following the links under "Get involved" in the [what's new landing page](..\index.yml).

- [yecril71pl](https://github.com/yecril71pl) - Christopher Yeleighton (4)
- [definedrisk](https://github.com/definedrisk) - Ben (3)
- [BeardedFish](https://github.com/BeardedFish) - Darian B. (1)
- [codevenkat](https://github.com/codevenkat) (1)
- [eltociear](https://github.com/eltociear) - Ikko Ashimine (1)
- [fsb4000](https://github.com/fsb4000) - Igor Zhukov (1)
- [Jaiganeshkumaran](https://github.com/Jaiganeshkumaran) - Jaiganesh Kumaran (1)
- [jogo-](https://github.com/jogo-) (1)
- [justanotheranonymoususer](https://github.com/justanotheranonymoususer) (1)
- [matrohin](https://github.com/matrohin) - Dmitry Matrokhin (1)
- [mhemmit](https://github.com/mhemmit) (1)
- [MSDN-WhiteKnight](https://github.com/MSDN-WhiteKnight) - MSDN.WhiteKnight (1)
- [OdinTemple](https://github.com/OdinTemple) - Odin Temple (1)
- [r00tdr4g0n](https://github.com/r00tdr4g0n) - r00tdr4g0n (1)
- [sebkraemer](https://github.com/sebkraemer) - Sebastian Krämer (1)
- [vtjnash](https://github.com/vtjnash) - Jameson Nash (1)
- [Youssef1313](https://github.com/Youssef1313) - Youssef Victor (1)
- [zecozephyr](https://github.com/zecozephyr) - Jonathan Bailey (1)