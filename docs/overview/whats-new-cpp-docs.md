---
title: "What's new for the C++ docs"
ms.date: 7/9/2021
description: "The new docs and doc updates for the Microsoft C/C++ compiler, ATL/MFC, C runtime, and standard library docs."
---

# Microsoft C++ docs: What's new for June 2021

This article lists major changes to the Microsoft C++ docs through June 2021.

- See [what's new history](#whats-new-history) for info about what was new in previous months.
- See [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md) for info about what's new in Visual Studio.
- See [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md) for the latest C and C++ conformance status.

## Build insights

**New articles**

- [HeaderUnit class](../build-insights/reference/sdk/cpp-event-data-types/header-unit.md)
- [Module class](../build-insights/reference/sdk/cpp-event-data-types/module.md)
- [PrecompiledHeader class](../build-insights/reference/sdk/cpp-event-data-types/precompiled-header.md)
- [TRANSLATION_UNIT_TYPE enum](../build-insights/reference/sdk/c-event-data-types/translation-unit-type.md)
- [TRANSLATION_UNIT_TYPE_DATA enum](../build-insights/reference/sdk/c-event-data-types/translation-unit-type-data.md)
- [TranslationUnitType class](../build-insights/reference/sdk/cpp-event-data-types/translation-unit-type.md)

**Updated articles**

- [C++ Build Insights SDK: event table](../build-insights/reference/sdk/event-table.md) - add new C++ Build Insights events
- [Get started with C++ Build Insights](../build-insights/get-started-with-cpp-build-insights.md) - add new C++ Build Insights events

## C language

**Updated articles**

- [`_Static_assert` keyword and `static_assert` macro (C11)](../c-language/static-assert-c.md) - update the SDK to use
- [Alignment (C11)](../c-language/alignment-c.md) - update the SDK to use
- [Generic selection (C11)](../c-language/generic-selection.md) - update the SDK to use

## C runtime library

**Updated articles**

In addition to the changes below, many articles were updated to prevent the machine translation of code elements.

- [`_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l`](../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md) - `printf()` rounding behavior change
- [`_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l`](../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md) - `printf()` rounding behavior change
- [`_cprintf, _cprintf_l, _cwprintf, _cwprintf_l`](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md) - `printf()` rounding behavior change
- [`_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l`](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md) - `printf()` rounding behavior change
- [`_get_printf_count_output`](../c-runtime-library/reference/get-printf-count-output.md) - `printf()` rounding behavior change
- [`_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l`](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md) - `printf()` rounding behavior change
- [`_scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l`](../c-runtime-library/reference/scprintf-p-scprintf-p-l-scwprintf-p-scwprintf-p-l.md) - `printf()` rounding behavior change
- [`_scprintf, _scprintf_l, _scwprintf, _scwprintf_l`](../c-runtime-library/reference/scprintf-scprintf-l-scwprintf-scwprintf-l.md) - `printf()` rounding behavior change
- [`_vcprintf_p, _vcprintf_p_l, _vcwprintf_p, _vcwprintf_p_l`](../c-runtime-library/reference/vcprintf-p-vcprintf-p-l-vcwprintf-p-vcwprintf-p-l.md) - `printf()` rounding behavior change
- [`_vcprintf_s, _vcprintf_s_l, _vcwprintf_s, _vcwprintf_s_l`](../c-runtime-library/reference/vcprintf-s-vcprintf-s-l-vcwprintf-s-vcwprintf-s-l.md) - `printf()` rounding behavior change
- [`_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l`](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md) - `printf()` rounding behavior change
- [`_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l`](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md) - `printf()` rounding behavior change
- [`_snprintf_s`, `_snprintf_s_l`, `_snwprintf_s`, `_snwprintf_s_l`](../c-runtime-library/reference/snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md) - `printf()` rounding behavior change
- [`errno` constants](../c-runtime-library/errno-constants.md) - improve readability
- [`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md) - `printf()` rounding behavior change
- [`freopen_s`, `_wfreopen_s`](../c-runtime-library/reference/freopen-s-wfreopen-s.md) - new C11 flags
- [`freopen`, `_wfreopen`](../c-runtime-library/reference/freopen-wfreopen.md) - added C11 flags
- [`pow`, `powf`, `powl`](../c-runtime-library/reference/pow-powf-powl.md) - note change to `pow(T,int)` starting in VS 2015 update 1
- [`printf_s`, `_printf_s_l`, `wprintf_s`, `_wprintf_s_l`](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) - `printf()` rounding behavior change
- [`setlocale`, `_wsetlocale`](../c-runtime-library/reference/setlocale-wsetlocale.md) - clarified UTF-8 string mode
- [`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) - `printf()` rounding behavior change
- [`cprintf`](../c-runtime-library/reference/cprintf.md) - `printf()` rounding behavior change
- [`fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l`](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md) - `printf()` rounding behavior change
- [`sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l`](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) - `printf()` rounding behavior change
- [`strcpy_s, wcscpy_s, _mbscpy_s, _mbscpy_s_l`](../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) - fixed code examples
- [`strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l`](../c-runtime-library/reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) - `printf()` rounding behavior change
- [Type-generic math](../c-runtime-library/tgmath.md) - updated the SDK version to use
- [`vprintf, _vprintf_l, vwprintf, _vwprintf_l`](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md) - `printf()` rounding behavior change
- [`vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l`](../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md) - `printf()` rounding behavior change

## C++ in Visual Studio

**Updated articles**

- [`_variant_t::operator=`](../cpp/variant-t-operator-equal.md) - add remarks for `operator=` and make the article easier to read.
- [Abstract classes (C++)](../cpp/abstract-classes-cpp.md) - add Microsoft-specific extension information for inline pure virtual destructor
- [Attributes in C++](../cpp/attributes.md) - add missing errors and warnings: C7000-C7999, C4834
- [char, wchar_t, char8_t, char16_t, char32_t](../cpp/char-wchar-t-char16-t-char32-t.md) - clarified whether char is signed or unsigned

## C++ porting and upgrade guide

**Updated articles**

- [Introduction to Microsoft C++ for UNIX Users](../porting/introduction-to-visual-cpp-for-unix-users.md) - Visual Studio 16.10 updates to C17 conformance
- [Visual C++ What&#39;s New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md) - note change to `pow(T,int)` starting in VS 2015 update 1

## C/C++ compiler and tools errors and warnings

**New articles**

- [Command-line error D8048](../error-messages/tool-errors/command-line-error-d8048.md)
- [Compiler Error C7510](../error-messages/compiler-errors-2/compiler-error-c7510.md)
- [Compiler Error C7536](../error-messages/compiler-errors-2/compiler-error-c7536.md)
- [Compiler errors C7000 through C7499](../error-messages/compiler-errors-2/compiler-errors-c7000-through-c7499.md)
- [Compiler errors C7500 through C7999](../error-messages/compiler-errors-2/compiler-errors-c7500-through-c7999.md)
- [Compiler Warning (error) C4597](../error-messages/compiler-warnings/c4597.md)
- [Compiler warning (level 1) C4834](../error-messages/compiler-warnings/c4834.md)
- [Compiler Warning (level 1) C5050](../error-messages/compiler-warnings/c5050.md)
- [Compiler warning (level 3) C4698](../error-messages/compiler-warnings/c4698.md)
- [Compiler Warning (level 3) C4768](../error-messages/compiler-warnings/c4768.md)
- [Compiler Warning (level 4) C4841](../error-messages/compiler-warnings/c4841.md)
- [Compiler Warning (level 4) C4843](../error-messages/compiler-warnings/c4843.md)
- [Compiler warning C5037](../error-messages/compiler-warnings/c5037.md)
- [Fatal Error C1090](../error-messages/compiler-errors-1/fatal-error-c1090.md)

**Updated articles**

- [Compiler Error C2139](../error-messages/compiler-errors-1/compiler-error-c2139.md) - added some version 2017 diagnostics
- [Compiler Error C2201](../error-messages/compiler-errors-1/compiler-error-c2201.md) - added some version 2017 diagnostics
- [Compiler Error C2276](../error-messages/compiler-errors-1/compiler-error-c2276.md) - update C2276
- [Compiler Error C2668](../error-messages/compiler-errors-2/compiler-error-c2668.md) - added some version 2017 diagnostics
- [Compiler Error C2855](../error-messages/compiler-errors-2/compiler-error-c2855.md) - add remarks about how to resolve this error
- [Compiler errors C2000 - C3999, C7000 - C7999](../error-messages/compiler-errors-1/compiler-errors-c2000-c3999.md) - add missing errors and warnings: C7000-C7999, C4834
- [Compiler errors C7500 through C7999](../error-messages/compiler-errors-2/compiler-errors-c7500-through-c7999.md) - added some version 2017 diagnostics; add error C7510; add missing errors and warnings: C7000-C7999, C4834
- [Compiler Warning (level 1) C4179](../error-messages/compiler-warnings/compiler-warning-level-1-c4179.md) - added some version 2017 diagnostics
- [Compiler Warning (level 1) C5208 and Error C7626](../error-messages/compiler-warnings/c5208.md) - add missing errors and warnings: C7000-C7999, C4834
- [Compiler Warning (level 4) C4189](../error-messages/compiler-warnings/compiler-warning-level-4-c4189.md) - added some version 2017 diagnostics
- [Compiler Warning C5038](../error-messages/compiler-warnings/c5038.md) - added some version 2017 diagnostics
- [Compiler warnings by compiler version](../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md) - update Visual Studio 16.10 conformance improvements and new warnings; Add new 16.10 warnings, version info; update version strings for Visual Studio 16.8, 16.9, and 16.10
- [Compiler warnings C4400 Through C4599](../error-messages/compiler-warnings/compiler-warnings-c4400-through-c4599.md) - added some Visual Studio version 2017 diagnostics
- [Compiler warnings C4800 through C5999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md) - update Visual Studio 16.10 conformance improvements and new warnings; add new 16.10 warnings, version info; added some version 2017 diagnostics; add missing errors and warnings: C7000 - C7999, C4834
- [Vectorizer and parallelizer messages](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md) - add vectorizer failure reason 505; add 1204 reason code
 
## C/C++ compiler intrinsics and assembly language

**Updated articles**

- [Microsoft Macro Assembler BNF Grammar](../assembler/masm/masm-bnf-grammar.md) - cleanup formatting and machine translation issues

## C/C++ in Visual Studio overview

**New articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2017](../overview/cpp-conformance-improvements-2017.md)
- [Microsoft C++ docs: What's new for Visual Studio 16.8](../overview/whats-new-cpp-docs.md)
- [What's new for C++ in Visual Studio 2017](../overview/what-s-new-for-cpp-2017.md)

**Updated articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2017](../overview/cpp-conformance-improvements-2017.md) - added version 2017 diagnostics
- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2019](../overview/cpp-conformance-improvements.md) - Visual Studio 16.10 updates to C17 conformance; update 16.10 conformance improvements and new warnings; add error C7510; add missing errors and warnings: C7000 - C7999, C4834; update conformance docs for 16.9
- [C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) - Visual Studio 16.10 updates to C17 conformance
- [Install C11 and C17 support in Visual Studio](../overview/install-c17-support.md) - Visual Studio 16.10 updates to C17 conformance
- [Microsoft C/C++ language conformance by Visual Studio version](../overview/visual-cpp-language-conformance.md) - Visual Studio 16.10 updates to C17 conformance; update conformance table for Visual Studio 16.10 and Visual Studio 16.9
- [Microsoft C++ docs: What's new for Visual Studio 16.8](../overview/whats-new-cpp-docs.md) - Visual Studio 16.10 updates to C17 conformance
- [What's new for C++ in Visual Studio 2017](../overview/what-s-new-for-cpp-2017.md) - Visual Studio 16.10 updates to C17 conformance; update Visual Studio 16.9 release conformance docs

## C/C++ preprocessor reference

**Updated articles**

- [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md) - update Visual Studio 16.10 conformance improvements and new warnings; added some version 2017 diagnostics
- [Predefined macros](../preprocessor/predefined-macros.md) - add new Visual Studio 16.10 warnings, version info; update version strings for Visual Studio 16.8, 16.9, and 16.10

## C/C++ projects and build systems

**New articles**

- [`/external` (External headers diagnostics)](../build/reference/external-external-headers-diagnostics.md)
- [`/headerName` (Build a header unit from the specified header)](../build/reference/headername.md)
- [`/sourceDependencies:directives` (List module and header unit dependencies)](../build/reference/sourcedependencies-directives.md)
- [`CMakePresets.json` and `CMakeUserPresets.json` Microsoft vendor maps](../build/cmake-presets-json-reference.md)
- [Configure and build with CMake Presets in Visual Studio](../build/cmake-presets-vs.md)
- [HeaderUnit class](../build-insights/reference/sdk/cpp-event-data-types/header-unit.md)
- [Module class](../build-insights/reference/sdk/cpp-event-data-types/module.md)
- [PrecompiledHeader class](../build-insights/reference/sdk/cpp-event-data-types/precompiled-header.md)
- [TRANSLATION_UNIT_TYPE enum](../build-insights/reference/sdk/c-event-data-types/translation-unit-type.md)
- [TRANSLATION_UNIT_TYPE_DATA enum](../build-insights/reference/sdk/c-event-data-types/translation-unit-type-data.md)
- [TranslationUnitType class](../build-insights/reference/sdk/cpp-event-data-types/translation-unit-type.md)
- [Walkthrough: Build and import header units in Microsoft Visual C++](../build/walkthrough-header-units.md)
- [Walkthrough: Import STL libraries as header units](../build/walkthrough-import-stl-header-units.md)

**Updated articles**

- [/experimental:module (Enable module support)](../build/reference/experimental-module.md) - new content for header-units
- [/Qspectre](../build/reference/qspectre.md) - update for VS 2019
- [/Y (precompiled headers)](../build/reference/y-precompiled-headers.md) - new content for header-units
- [`/analyze` (Code analysis)](../build/reference/analyze-code-analysis.md) - update with up-to-date options list, add more information, and restructure for better organization of related options
- [`/await` (Enable coroutine support)](../build/reference/await-enable-coroutine-support.md) - add `/await:strict` for Visual Studio 16.10
- [`/clr` (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) - include version for support of `/clr:netcore` option
- [`/exportHeader` (Create header units)](../build/reference/module-exportheader.md) - add new content related to header-units
- [`/external` (External headers diagnostics)](../build/reference/external-external-headers-diagnostics.md) - `/external` not experimental in Visual Studio 16.10
- [`/F` (Set Stack Size)](../build/reference/f-set-stack-size.md) - update for VS 2019
- [`/FC` (Full path of source code file in diagnostics)](../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md) - Classify behavior by version.
- [`/GL` (Whole program optimization)](../build/reference/gl-whole-program-optimization.md) - fix loc issue in /GL docs
- [`/headerUnit` (Use header unit IFC)](../build/reference/headerunit.md) - new content for header-units
- [`/INTEGRITYCHECK` (Require signature check)](../build/reference/integritycheck-require-signature-check.md) - updated signing guidance for `integritycheck` binaries
- [`/openmp` (Enable OpenMP Support)](../build/reference/openmp-enable-openmp-2-0-support.md) - add /openmp:llvm compiler switch docs
- [`/reference` (Use named module IFC)](../build/reference/module-reference.md) - new content for header-units
- [`/sourceDependencies` (List all source-level dependencies)](../build/reference/sourcedependencies.md) - new content for header-units
- [`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md) - Visual Studio 16.10 updates to C17 conformance
- [`/translateInclude` (Translate include directives into import directives)](../build/reference/translateinclude.md) - new content for header-units
- [Advanced Property Page](../build/reference/advanced-property-page.md) - add Windows Desktop Compatible property for Visual Studio 16.10; Add LLVM toolset version option for Visual Studio 16.9
- [ARM Exception Handling](../build/arm-exception-handling.md) - fix `ComputeXdataSize` samples for ARM/ARM64
- [ARM64 exception handling](../build/arm64-exception-handling.md) - fix `ComputeXdataSize` samples for ARM/ARM64
- [C++ Build Insights SDK: event table](../build-insights/reference/sdk/event-table.md) - add New C++ Build Insights Events to documentation
- [Clang/LLVM support in Visual Studio projects](../build/clang-support-msbuild.md) - add LLVM toolset version option for Visual Studio 16.9; update clang-support-msbuild.md
- [CMake projects in Visual Studio](../build/cmake-projects-in-visual-studio.md) - add advanced details about using CMake file-api
- [Compiler options listed alphabetically](../build/reference/compiler-options-listed-alphabetically.md) - new content for header-units
- [Compiler options listed by category](../build/reference/compiler-options-listed-by-category.md) - new content for header-units
- [Configure and build with CMake Presets in Visual Studio](../build/cmake-presets-vs.md) - improve readability
- [General Property Page (Project)](../build/reference/general-property-page-project.md) - add Windows Desktop Compatible property for Visual Studio 16.10
- [Get started with C++ Build Insights](../build-insights/get-started-with-cpp-build-insights.md) - add New C++ Build Insights Events to documentation
- [How to: Modify the Target Framework and Platform Toolset](../build/how-to-modify-the-target-framework-and-platform-toolset.md) - improve readability
- [Open Folder support for C++ build systems in Visual Studio](../build/open-folder-projects-cpp.md) - fix CppProperties.json MinGW-w64 contents
- [Unicode support in the compiler and linker](../build/reference/unicode-support-in-the-compiler-and-linker.md) - add info about how to save using a different encoding
- [Use the Microsoft C++ toolset from the command line](../build/building-on-the-command-line.md) - updated for VS 2019
- [Walkthrough: Compile a C program on the command line](../build/walkthrough-compile-a-c-program-on-the-command-line.md) - Visual Studio 16.10 updates to C17 conformance
- [Walkthrough: Compiling a Native C++ Program on the Command Line](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md) - clarified notepad behavior when opening source file 

## C++ Standard Library (STL) reference

**New articles**

- [`<ranges>`](../standard-library/ranges.md)
- [`day` class](../standard-library/day-class.md)
- [`month_day_last` class](../standard-library/month-day-last-class.md)
- [`month_day` class](../standard-library/month-day-class.md)
- [`month_weekday_last` class](../standard-library/month-weekday-last-class.md)
- [`month_weekday` class](../standard-library/month-weekday-class.md)
- [`year_month` class](../standard-library/year-month-class.md)

**Updated articles**

- [`bitset` class](../standard-library/bitset-class.md) - improve readability
- [`vector` class](../standard-library/vector-class.md) - fix typo in code sample

## Code quality

**New articles**

- [C6389: MARK_INTERNAL_OR_MISSING_COMMON_DECL](../code-quality/c6389.md)

**Updated articles**

- [C6031](../code-quality/c6031.md) - add note about ignoring a function's return value 
- [C26432 DEFINE_OR_DELETE_SPECIAL_OPS](../code-quality/c26432.md) - update code examples
- [C26497 USE_CONSTEXPR_FOR_FUNCTION](../code-quality/c26497.md) - add note about when warning won't be issued

## Linux with C++ in Visual Studio

**Updated articles**

- [Connect to your target Linux system in Visual Studio](../linux/connect-to-your-remote-linux-computer.md) - add section about host key verification
- [ConnectionManager reference](../linux/connectionmanager-reference.md) - add note about host key fingerprint flags added in Visual Studio 16.10.

## Overview of Windows programming in C++

**Updated articles**

- [Determining Which DLLs to Redistribute](../windows/determining-which-dlls-to-redistribute.md) - updated for Visual Studio 2019

## Parallel programming in C++ in Visual Studio

**Updated articles**

- [C++ AMP Overview](../parallel/amp/cpp-amp-overview.md) - add note about C++ AMP library deprecation
- [Walkthrough: Debugging a C++ AMP application](../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md) - fixed code sample

## Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See [Microsoft Docs contributor guide overview](/contribute/) if you'd like to learn how to contribute.

- [0xbadfca11](https://github.com/0xbadfca11) (1)
- [bclehmann](https://github.com/bclehmann) - Benjamin Lehmann (1)
- [Brian-Taylor8](https://github.com/Brian-Taylor8) (1)
- [cartwrightluke](https://github.com/cartwrightluke) (2)
- [ccawley2011](https://github.com/ccawley2011) - Cameron Cawley (1)
- [EddieBreeveld](https://github.com/EddieBreeveld) - Edward Breeveld (1)
- [FrankAtHexagon](https://github.com/FrankAtHexagon) - Frank Edwards (1)
- [fsb4000](https://github.com/fsb4000) - Igor Zhukov (1)
- [Jaiganeshkumaran](https://github.com/Jaiganeshkumaran) - Jaiganesh Kumaran (2)
- [jayvient](https://github.com/jayvient) - Jayvien (1)
- [KishkinJ10](https://github.com/KishkinJ10) (1)
- [kokosxD](https://github.com/kokosxD) - kokos (1)
- [langemol](https://github.com/langemol) - Jacco Mol (1)
- [MUzairS15](https://github.com/MUzairS15) (1)
- [nadavsu](https://github.com/nadavsu) - Nadav (1)
- [NegiAkash890](https://github.com/NegiAkash890) - Akash Negi (1)
- [pjessesco](https://github.com/pjessesco) - Jino Park (1)
- [pramodkirchki](https://github.com/pramodkirchki) (1)
- [Radfordhound](https://github.com/Radfordhound) - Graham Scott (1)
- [sapant-msft](https://github.com/sapant-msft) (1)
- [sebgod](https://github.com/sebgod) - Sebastian Godelet (1)
- [seedkar1](https://github.com/seedkar1) (1)
- [ShamanCoder](https://github.com/ShamanCoder) (1)
- [sheila-stewart](https://github.com/sheila-stewart) (1)
- [softmac](https://github.com/softmac) (1)
- [Thieum](https://github.com/Thieum) - Matthieu Penant (2)
- [tjs137](https://github.com/tjs137) (1)
- [urmyfaith](https://github.com/urmyfaith) - zx (1)
- [ValZapod](https://github.com/ValZapod) - Valerii Zapodovnikov (1)
- [westinn](https://github.com/westinn) - Nicolas Westin (1)

## What's new history

The following section provides the previous months of what's new in the Visual Studio docs.

### February 2021

#### C language

**New articles**

- [`_Noreturn` keyword and `noreturn` macro (C11)](../c-language/noreturn.md)
- [`_Static_assert` keyword and `static_assert` macro (C11)](../c-language/static-assert-c.md)

**Updated articles**

- [C Assignment Operators](../c-language/c-assignment-operators.md) - lexical grammar update for C17
- [C enumeration declarations](../c-language/c-enumeration-declarations.md) - fixed lexical grammar
- [C Keywords](../c-language/c-keywords.md) - lexical grammar update for C17
- [C Lexical grammar](../c-language/lexical-grammar.md) - lexical grammar update for C17
- [Parsing C Command-Line Arguments](../c-language/parsing-c-command-line-arguments.md) - Document exceptions to the rules for parsing C arguments
- [Summary of C statements](../c-language/summary-of-statements.md) - updated for `__leave`, `__try` keywords
- [Summary of Declarations](../c-language/summary-of-declarations.md) - lexical grammar update for C17
- [Summary of Expressions](../c-language/summary-of-expressions.md) - lexical grammar update for C17
- [Type Qualifiers](../c-language/type-qualifiers.md) - added `restrict`

#### C runtime library

**New articles**

- [Type-generic math](../c-runtime-library/tgmath.md)

**Updated articles**

- [`_cwait`](../c-runtime-library/reference/cwait.md) - fixed code example
- [`assert Macro, _assert, _wassert`](../c-runtime-library/reference/assert-macro-assert-wassert.md) - Clarified assert behavior
- [`qsort`](../c-runtime-library/reference/qsort.md) - added note about stability
- [`realloc`](../c-runtime-library/reference/realloc.md) - added C99 conformance notes
- [`round, roundf, roundl`](../c-runtime-library/reference/round-roundf-roundl.md) - Clarified rounding code example
- [`setlocale, _wsetlocale`](../c-runtime-library/reference/setlocale-wsetlocale.md) - added C Runtime UTF-8 support info
- [`vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l`](../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md) - Clarified return values
- [Compatibility](../c-runtime-library/compatibility.md) - added C99 conformance notes
- [CRT Library Features](../c-runtime-library/crt-library-features.md) - added C99 conformance notes
- [Function family overview](../c-runtime-library/function-family-overviews.md) - added operator `new` and `delete`

#### C/C++ preprocessor reference

**Updated articles**

- [MSVC new preprocessor overview](../preprocessor/preprocessor-experimental-overview.md) - updated preprocessor content
- [Predefined macros](../preprocessor/predefined-macros.md) - updated to Visual Studio 16.8 release notes, C11/C17 `/std` support and SDK install docs

#### Code quality

**New articles**

- [C33001](../code-quality/c33001.md) - VC Code Analysis - add for new rules in Visual Studio 16.8
- [C33004](../code-quality/c33004.md) - VC Code Analysis - add for new rules in Visual Studio 16.8
- [C33005](../code-quality/c33005.md) - VC Code Analysis - add for new rules in Visual Studio 16.8
- [C33010](../code-quality/c33010.md) - VC Code Analysis - add for new rules in Visual Studio 16.8
- [C33011](../code-quality/c33011.md) - VC Code Analysis - add for new rules in Visual Studio 16.8
- [C33020](../code-quality/c33020.md) - VC Code Analysis - add for new rules in Visual Studio 16.8
- [C33022](../code-quality/c33022.md) - VC Code Analysis - add for new rules in Visual Studio 16.8

**Updated articles**

- [`C6262`](../code-quality/c6262.md) - address cpp-docs.zh-tw issue 20
- [`C26401 DONT_DELETE_NON_OWNER`](../code-quality/c26401.md) - added example and Core Guidelines link to C26401
- [`C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT`](../code-quality/c26402.md) - added example for C26402
- [`C26408 NO_MALLOC_FREE`](../code-quality/c26408.md) - added example and Core Guidelines link to C26408
- [`C26409 NO_NEW_DELETE`](../code-quality/c26409.md) - added example for C26409
- [`C26432 DEFINE_OR_DELETE_SPECIAL_OPS`](../code-quality/c26432.md) - added example for C26432
- [`C26434 DONT_HIDE_METHODS`](../code-quality/c26434.md) - added example for C26434
- [`C26436 NEED_VIRTUAL_DTOR`](../code-quality/c26436.md) - added example and Core Guidelines link to C26436
- [`C26439 SPECIAL_NOEXCEPT`](../code-quality/c26439.md) - added example and link to Core Guidelines for C26439
- [`C26440 DECLARE_NOEXCEPT`](../code-quality/c26440.md) - added example and link to Core Guidelines for C26440
- [`C26446 USE_GSL_AT`](../code-quality/c26446.md) - added an example for C26446
- [`C26447 DONT_THROW_IN_NOEXCEPT`](../code-quality/c26447.md) - adding example to C26447
- [`C26460 USE_CONST_REFERENCE_ARGUMENTS`](../code-quality/c26460.md) - added description and example to C26460
- [`C26461 USE_CONST_POINTER_ARGUMENTS:`](../code-quality/c26461.md) - added description and example to C26461
- [`C26462 USE_CONST_POINTER_FOR_VARIABLE`](../code-quality/c26462.md) - added description and example to C26462
- [`C26465 NO_CONST_CAST_UNNECESSARY`](../code-quality/c26465.md) - added example to C26465
- [`C26466 NO_STATIC_DOWNCAST_POLYMORPHIC`](../code-quality/c26466.md) - added Example to C26466
- [`C26471 NO_REINTERPRET_CAST_FROM_VOID_PTR`](../code-quality/c26471.md) - added Example to C26471
- [`C26474 NO_IMPLICIT_CAST`](../code-quality/c26474.md) - updated to clarify base/derived cases
- [`C26482 NO_DYNAMIC_ARRAY_INDEXING`](../code-quality/c26482.md) - added example to C26482
- [`C26483 STATIC_INDEX_OUT_OF_RANGE`](../code-quality/c26483.md) - added example to C26483
- [`C26490 NO_REINTERPRET_CAST`](../code-quality/c26490.md) - added example to C26490
- [`C26492 NO_CONST_CAST`](../code-quality/c26492.md) - added example to C26492
- [`C26493 NO_CSTYLE_CAST`](../code-quality/c26493.md) - added example to C26493
- [`C26494 VAR_USE_BEFORE_INIT`](../code-quality/c26494.md) - added example to C26494
- [`C26495 MEMBER_UNINIT`](../code-quality/c26495.md) - updated examples and links in C26495
- [`C26496 USE_CONST_FOR_VARIABLE`](../code-quality/c26496.md) - added example to C26496
- [`C26497 USE_CONSTEXPR_FOR_FUNCTION`](../code-quality/c26497.md) - added example to C26497

#### Linux with Microsoft C++ in Visual Studio

**New articles**

- [Configure a Linux CMake project in Visual Studio](../linux/cmake-linux-configure.md)

**Updated articles**

- [Configure a Linux CMake project in Visual Studio](../linux/cmake-linux-configure.md) - updated to reflect latest UI
- [ConnectionManager reference](../linux/connectionmanager-reference.md) - added commands for modify, clean
- [Create a Linux MSBuild C++ project in Visual Studio](../linux/create-a-new-linux-project.md) - updated instructions to create a Linux project
- [Deploy, run, and debug your Linux MSBuild project](../linux/deploy-run-and-debug-your-linux-project.md) - added `GDB Path`

#### C/C++ compiler and tools errors and warnings

**New articles**

- [Compiler Warning (level 4) C4388](../error-messages/compiler-warnings/c4388.md) - added warning C4388, updated Visual Studio 16.7 warnings

**Updated articles**

- [Compiler Error C3381](../error-messages/compiler-errors-2/compiler-error-c3381.md) - address cpp-docs 2493; update remarks and example
- [Compiler Warning (level 3) C4018](../error-messages/compiler-warnings/compiler-warning-level-3-c4018.md) - updated Visual Studio 16.7 warnings
- [Compiler Warning (level 4) C4389](../error-messages/compiler-warnings/compiler-warning-level-4-c4389.md) - updated Visual Studio 16.7 warnings
- [Compiler Warnings by compiler version](../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md) - updated Visual Studio 16.7 warnings
- [Compiler warnings C4800 through C5999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md) - updated Visual Studio 16.7 warnings

#### C/C++ compiler intrinsics and assembly language

**Updated articles**

- [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md) - updated to Visual Studio 16.8 release notes
- [C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) - updated DevCom and Microsoft Docs Q&A links
- [Microsoft C/C++ help and community](../overview/visual-cpp-help-and-community.md) - updated DevCom and Microsoft Docs Q&A links
- [Microsoft C/C++ language conformance](../overview/visual-cpp-language-conformance.md) - updated C++20 library conformance table, update language feature table for Visual Studio 16.7

#### C++ in Visual Studio

**Updated articles**

- [`__restrict`](../cpp/extension-restrict.md)
- [`union`](../cpp/unions.md) - fixed code snippet
- [if-else statement (C++)](../cpp/if-else-statement-cpp.md) - added description for `if/else` grammar

#### C/C++ projects and build systems

**New articles**

- [`.vcxproj` files and wildcards](../build/reference/vcxproj-files-and-wildcards.md)
- [`/headerUnit` (Use header unit IFC)](../build/reference/headerunit.md)
- [`/module:exportHeader` (Create header units)](../build/reference/module-exportheader.md)
- [`/module:reference` (Use named module IFC)](../build/reference/module-reference.md)
- [`/translateInclude` (Translate include directives into import directives)](../build/reference/translateinclude.md)
- [`/Zc:preprocessor` (Enable preprocessor conformance mode)](../build/reference/zc-preprocessor.md)

**Updated articles**

- [`/clr` (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) - added description for `/clr`
- [`/permissive-` (Standards conformance)](../build/reference/permissive-standards-conformance.md) - updated to Visual Studio 16.8 release notes
- [Importing data using `__declspec(dllimport)`](../build/importing-data-using-declspec-dllimport.md) - updated example
- [pgosweep](../build/pgosweep.md) - added more pgosweep options

#### C++ porting and upgrade guide

**Updated articles**

- [How to: Use existing C++ code in a Universal Windows Platform app](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md) - reworked for clarity and updated examples

#### C++ Standard Library (STL) reference

**New articles**

- [`<bit>`](../standard-library/bit.md)
- [`<bit>` functions](../standard-library/bit-functions.md)
- [`endian` enum](../standard-library/bit-enum.md)

**Updated articles**

- [`<bit>` functions](../standard-library/bit-functions.md) - updated `nodiscard` syntax
- [`<ios>` typedefs](../standard-library/ios-typedefs.md) - updated example
- [`basic_string_view` Class](../standard-library/basic-string-view-class.md) - added `starts_with()`, `ends_with()`
- [`basic_string` Class](../standard-library/basic-string-class.md) - added `_starts_with()`, `ends_with()`
- [`ios_base Class`](../standard-library/ios-base-class.md)
- [`map` class](../standard-library/map-class.md)
- [`multimap` Class](../standard-library/multimap-class.md) - added `contains()`
- [`multiset` Class](../standard-library/multiset-class.md)  - added `contains()`
- [`set` Class](../standard-library/set-class.md) - added `contains()`
- [`unordered_map` Class](../standard-library/unordered-map-class.md)  - added `contains()`
- [`unordered_multimap` Class](../standard-library/unordered-multimap-class.md)  - added `contains()`
- [`unordered_multiset` Class](../standard-library/unordered-multiset-class.md)  - added `contains()`
- [`unordered_set` Class](../standard-library/unordered-set-class.md)  - added `contains()`

#### Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See [Microsoft Docs contributor guide overview](/contribute/) if you'd like to learn how to contribute.

- [BeardedFish](https://github.com/BeardedFish) - Darian B. (1)
- [codevenkat](https://github.com/codevenkat) (1)
- [definedrisk](https://github.com/definedrisk) - Ben (3)
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
- [yecril71pl](https://github.com/yecril71pl) - Christopher Yeleighton (4)
- [Youssef1313](https://github.com/Youssef1313) - Youssef Victor (1)
- [zecozephyr](https://github.com/zecozephyr) - Jonathan Bailey (1)