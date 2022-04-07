---
title: "What's new for the C++ docs"
ms.date: "11/5/2021"
description: "The new docs and doc updates for the Microsoft C/C++ compiler, ATL/MFC, C runtime, and standard library docs."
ms.custom: intro-whats-new
---

# Microsoft C++ docs: What's new for October 2021

This article lists major changes to the Microsoft C++ docs July 2021 through October 2021.

- For what was new in the docs in previous months, see [What's new history](#whats-new-history).
- For what's new related to C++ in Visual Studio, see [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).
- For the latest C and C++ conformance with ISO standards status, see [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md).

## Active Template Library (ATL), Microsoft Foundation Classes (MFC)

### Updated articles

- [`CSimpleStringT` Class](../atl-mfc-shared/reference/csimplestringt-class.md) - updated code examples and added code example output
- [MFC class hierarchy chart](../mfc/hierarchy-chart.md) - Update MFC hierarchy chart

## C language

### New articles

- [Generic selection (C11)](../c-language/generic-selection.md)

### Updated articles

- [`register` storage-class specifier](../c-language/register-storage-class-specifier.md) - Add C5033 warning
- [C Pragmas](../c-language/c-pragmas.md) - Add system_header pragma documentation
- [C Bit Fields](../c-language/c-bit-fields.md) - Clarify int main(void) example & document MSVC doesn't straddle bit-fields

## C runtime library

### Updated articles

- [CRT Initialization](../c-runtime-library/crt-initialization.md) - Add 16.11 Compiler warnings C5247 and C5248
- [`rand`](../c-runtime-library/reference/rand.md) - Update code example
- [`wcstombs_s`, `_wcstombs_s_l`](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md) - Update code example
- [_get_errno](../c-runtime-library/reference/get-errno.md) - Update code example

## C/C++ compiler and tools errors and warnings

### New articles

- [Command-line error D8049](../error-messages/tool-errors/command-line-error-d8049.md)
- [Compiler Warning C5243](../error-messages/compiler-warnings/c5243.md)
- [Compiler Warning C5247](../error-messages/compiler-warnings/c5247.md)
- [Compiler Warning C5248](../error-messages/compiler-warnings/c5248.md)
- [Compiler Warning (level 1) C5033](../error-messages/compiler-warnings/c5033.md)

### Updated articles

- [Command-line errors and warnings](../error-messages/tool-errors/command-line-errors-d8000-through-d9999.md) - new error messages
- [Compiler Warning (level 4) C4710](../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md) - Add C5033 warning
- [Compiler Warnings C4800 through C5999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md) - Add compiler warning C5033, C5243, C5249, C5250, C5247, and C5248.
- [Compiler Error C2666](../error-messages/compiler-errors-2/compiler-error-c2666.md) - Update 16.1 conformance
- [Compiler Warning (level 4) C4702](../error-messages/compiler-warnings/compiler-warning-level-4-c4702.md) - Update warning C4702
- [Compiler Error C2440](../error-messages/compiler-errors-1/compiler-error-c2440.md) - Add `/Zc:char8_t` compiler option
- [Compiler Error C2760](../error-messages/compiler-errors-2/compiler-error-c2760.md) - New `/Zc:lambda` info
- [Compiler Error C2259](../error-messages/compiler-errors-1/compiler-error-c2259.md) - Update code example

## C/C++ compiler intrinsics and assembly language

### New articles

- [MASM instruction format](../assembler/masm/instruction-format.md)
- [OPTION AVXENCODING](../assembler/masm/option-avxencoding-masm.md)
- [OPTION LANGUAGE](../assembler/masm/option-language-masm.md)

### Updated articles

- [MASM for x64 (ml64.exe)](../assembler/masm/masm-for-x64-ml64-exe.md) - Document MASM instruction format including prefixes and option avxencoding
- [Microsoft Macro Assembler reference](../assembler/masm/microsoft-macro-assembler-reference.md) - Document MASM instruction format including prefixes and option avxencoding
- [`OPTION`](../assembler/masm/option-masm.md) - Document MASM instruction format including prefixes and option avxencoding
- [_InterlockedCompareExchange intrinsic functions](../intrinsics/interlockedcompareexchange-intrinsic-functions.md) - Adding missing interlocked intrinsic and fixing another interlock intrinsic return type

## C/C++ in Visual Studio overview

### New articles

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2019](../overview/cpp-conformance-improvements-2019.md)
- [What's new for C++ in Visual Studio 2019](../overview/what-s-new-for-cpp-2019.md)

### Updated articles

- [Overview of C++ development in Visual Studio](../overview/overview-of-cpp-development.md) - Visual Studio 2022 related updates.
- [Install C11 and C17 support in Visual Studio](../overview/install-c17-support.md) - Visual Studio 2022 related updates, C17 updates
- [C++ Tools and Features in Visual Studio Editions](../overview/visual-cpp-tools-and-features-in-visual-studio-editions.md) - Visual Studio 2022 related updates, C17 updates
- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md) - Visual Studio 2022 and 16.1 conformance updates
- [Microsoft C/C++ language conformance by Visual Studio version](../overview/visual-cpp-language-conformance.md) - Visual Studio 2022 related updates
- [C and C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) - Add missing redist content

## C/C++ preprocessor reference

### New articles

- [`system_header` pragma](../preprocessor/system-header-pragma.md)

### Updated articles

- [`fenv_access` pragma](../preprocessor/fenv-access.md) - Add floating-point *contractions* info
- [`float_control` pragma](../preprocessor/float-control.md) - Add floating-point *contractions* info
- [`fp_contract` pragma](../preprocessor/fp-contract.md) - Add floating-point *contractions* info
- [Predefined macros](../preprocessor/predefined-macros.md) - Add `__SANITIZE_ADDRESS__` and `_M_FP_CONTRACT`
- [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md) - Add compiler warning C5243, C5249, C5250, C5247, and C5248

## C/C++ projects and build systems

### New articles

- [`/Zc:char8_t` (Enable C++20 char8_t type)](../build/reference/zc-char8-t.md)
- [`/Zc:lambda` (Enable updated lambda processor)](../build/reference/zc-lambda.md)
- [`/fsanitize-coverage` (Configure sanitizer coverage)](../build/reference/fsanitize-coverage.md)
- [`abspath` NMAKE function](../build/reference/nmake-function-abspath.md)
- [`basename` NMAKE function](../build/reference/nmake-function-basename.md)
- [`filter`, `filteri` NMAKE functions](../build/reference/nmake-function-filter.md)
- [`filterout`, `filterouti` NMAKE functions](../build/reference/nmake-function-filterout.md)
- [`findstring`, `findstringi` NMAKE functions](../build/reference/nmake-function-findstring.md)
- [`patsubst`, `patsubsti` NMAKE functions](../build/reference/nmake-function-patsubst.md)
- [`strip` NMAKE function](../build/reference/nmake-function-strip.md)
- [`subst`, `substi` NMAKE functions](../build/reference/nmake-function-subst.md)
- [Walkthrough: Build and debug C++ with WSL 2 and Visual Studio 2022](../build/walkthrough-build-debug-wsl2.md)

### Updated articles

- [Configure and build with CMake Presets in Visual Studio](../build/cmake-presets-vs.md) - Fix inconsistencies and add documentation about the "unspecified" architecture feature
- [Clang/LLVM support in Visual Studio CMake projects](../build/clang-support-cmake.md) - Clarified version-specific installation
- [CMake projects in Visual Studio](../build/cmake-projects-in-visual-studio.md) - Fix inconsistencies in CMake docs and add docs on using existing cache without cmake-server
- [/fp (Specify floating-point behavior)](../build/reference/fp-specify-floating-point-behavior.md) - Fix `/fp` sample code
- [`/Og` (Global Optimizations)](../build/reference/og-global-optimizations.md) - Clarify when the **`register`** keyword is ignored
- [`/PROFILE` (Performance Tools Profiler)](../build/reference/profile-performance-tools-profiler.md) - Address `/profile` issues
- [Use the Microsoft C++ toolset from the command line](../build/building-on-the-command-line.md) - Fix MSBuild recommendation & update C/C++ workload name
- [Use an NMAKE macro](../build/reference/using-an-nmake-macro.md) - Add documentation for the new NMAKE functions
- [Commands in a makefile](../build/reference/commands-in-a-makefile.md) - Combine and update NMAKE docs
- [NMAKE makefile contents and features](../build/reference/contents-of-a-makefile.md) - Combine and update NMAKE docs
- [Create a C++ makefile project](../build/reference/creating-a-makefile-project.md) - Combine and update NMAKE docs
- [Define an NMAKE macro](../build/reference/defining-an-nmake-macro.md) - Combine and update NMAKE docs
- [Dot directives](../build/reference/dot-directives.md) - Combine and update NMAKE docs
- [Inference rules](../build/reference/inference-rules.md) - Combine and update NMAKE docs
- [Inline files in a makefile](../build/reference/inline-files-in-a-makefile.md) - Combine and update NMAKE docs
- [Makefile Preprocessing](../build/reference/makefile-preprocessing.md) - Combine and update NMAKE docs
- [NMAKE Reference](../build/reference/nmake-reference.md) - Combine and update NMAKE docs
- [Running NMAKE](../build/reference/running-nmake.md) - Combine and update NMAKE docs
- [Sample Makefile](../build/reference/sample-makefile.md) - Combine and update NMAKE docs
- [Special NMAKE macros](../build/reference/special-nmake-macros.md) - Combine and update NMAKE docs
- [Configuring Programs for Windows XP](../build/configuring-programs-for-windows-xp.md) - Link updates for new redist article
- [`/Zc` (Conformance)](../build/reference/zc-conformance.md) - New `/Zc:lambda` information
- [`/Zc:__cplusplus` (Enable updated `__cplusplus` macro)](../build/reference/zc-cplusplus.md) - New `/Zc:lambda` information
- [CMake predefined build configurations](../build/cmake-predefined-configuration-reference.md) - Fix inconsistencies in CMake docs
- [`CMakePresets.json` and `CMakeUserPresets.json` Microsoft vendor maps](../build/cmake-presets-json-reference.md) - Fix inconsistencies in CMake docs
- [Tutorial: Debug a CMake project on a remote Windows machine](../build/cmake-remote-debugging.md) - Fix inconsistencies in CMake docs
- [`CMakeSettings.json` schema reference](../build/cmakesettings-reference.md) - Fix inconsistencies in CMake docs
- [`launch.vs.json` schema reference (C++)](../build/launch-vs-schema-reference-cpp.md) - add debugInfo macro definitions
- [`/external` (External headers diagnostics)](../build/reference/external-external-headers-diagnostics.md) - Add `system_header` pragma doc
- [DUMPBIN Reference](../build/reference/dumpbin-reference.md) - Setting `PATH` allows `DUMPBIN` to be executed from the command prompt
- [/Qspectre](../build/reference/qspectre.md) - Clarified `/Qspectre` Required Libraries section

## C++ in Visual Studio

### Updated articles

- [Storage classes](../cpp/storage-classes-cpp.md) - Add C5033 warning
- [void (C++)](../cpp/void-cpp.md) - Clarify overall article
- [Labeled statements](../cpp/labeled-statements.md) - Correct labeled statements
- [Brace initialization](../cpp/initializing-classes-and-structs-without-constructors-cpp.md) - Address sanitizer comment location
- [Member Access Control (C++)](../cpp/member-access-control-cpp.md) - Update static member access in example
- [String and character literals (C++)](../cpp/string-and-character-literals-cpp.md) - Updates for C++20 portable **`char8_t`**.
- [Declarations and definitions (C++)](../cpp/declarations-and-definitions-cpp.md) - fix code sample
- [Template Specialization (C++)](../cpp/template-specialization-cpp.md) - update code example

## C++ in Visual Studio tutorials

### Updated articles

- [Create a console calculator in C++](../get-started/tutorial-console-cpp.md) - add Git source control info to the tutorial

## C++ porting and upgrade guide

### Updated articles

- [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md) - Update version info

## C++ Standard Library (STL)

### New articles

- [`ambiguous_local_time` class](../standard-library/ambiguous-local-time.md)
- [`choose` enum](../standard-library/choose-enum.md)
- [`clock_time_conversion` struct](../standard-library/clock-time-conversion-struct.md)
- [`file_clock` class](../standard-library/file-clock-class.md)
- [`gps_clock` class](../standard-library/gps-clock-class.md)
- [`is_clock` structure](../standard-library/is-clock-struct.md)
- [`last_spec` struct](../standard-library/last-spec-struct.md)
- [`local_info` struct](../standard-library/local-info-struct.md)
- [`local_t` struct](../standard-library/local_t.md)
- [`nonexistent_local_time` class](../standard-library/nonexistent-local-time.md)
- [`sys_info` struct](../standard-library/sys-info-struct.md)
- [`tai_clock` class](../standard-library/tai-clock-class.md)
- [`time_zone_link` class](../standard-library/time-zone-link-class.md)
- [`tzdb_list` class](../standard-library/tzdb-list-class.md)
- [`tzdb` struct](../standard-library/tzdb-struct.md)
- [`utc_clock` class](../standard-library/utc-clock-class.md)
- [`zoned_time` class](../standard-library/zoned-time-class.md)
- [`zoned_traits` struct](../standard-library/zoned-traits-struct.md)

### Updated articles

- [`<chrono>` functions](../standard-library/chrono-functions.md) - added new `<chrono>` functions
- [`<chrono>`](../standard-library/chrono.md) - added new `<chrono>` types
- [`duration` class](../standard-library/duration-class.md) - overall article update and linking to related non-member functions
- [Using Insertion Operators and Controlling Format](../standard-library/using-insertion-operators-and-controlling-format.md) - fix `setw` code example
- [`<chrono>` operators](../standard-library/chrono-operators.md) - Added new C++20 chrono operators
- [`local_info` struct](../standard-library/local-info-struct.md) - updated descriptions for errors
- [`time_zone` class](../standard-library/time-zone-class.md) - article clarifications
- [`any` class](../standard-library/any-class.md) - Added requirements section
- [`<any>` functions](../standard-library/any-functions.md) - Added requirements section
- [`bad_any_cast` class](../standard-library/bad-any-cast-class.md) - Added requirements section
- [domain_error Class](../standard-library/domain-error-class.md) - Improve `<stdexcept>` documentation and examples
- [invalid_argument Class](../standard-library/invalid-argument-class.md) - Improve `<stdexcept>` documentation and examples
- [length_error Class](../standard-library/length-error-class.md) - Improve `<stdexcept>` documentation and examples
- [logic_error Class](../standard-library/logic-error-class.md) - Improve `<stdexcept>` documentation and examples
- [out_of_range Class](../standard-library/out-of-range-class.md) - Improve `<stdexcept>` documentation and examples
- [overflow_error Class](../standard-library/overflow-error-class.md) - Improve `<stdexcept>` documentation and examples
- [range_error Class](../standard-library/range-error-class.md) - Improve `<stdexcept>` documentation and examples
- [runtime_error Class](../standard-library/runtime-error-class.md) - Improve `<stdexcept>` documentation and examples
- [underflow_error Class](../standard-library/underflow-error-class.md) - Improve `<stdexcept>` documentation and examples
- [`filesystem`](../standard-library/filesystem.md) - `<filesystem>` no longer includes `<experimental/filesystem>`
- [Output File Stream Member Functions](../standard-library/output-file-stream-member-functions.md) - fixed code example
- [`<bit>` functions](../standard-library/bit-functions.md) - Fixed code example
- [`<execution>`](../standard-library/execution.md) - Mention limits of concurrency
- [`<future>` functions](../standard-library/future-functions.md) - Mention limits of concurrency
- [`thread` Class](../standard-library/thread-class.md) - Mention limits of concurrency

## Overview of Windows programming in C++

### New articles

- [Microsoft Visual C++ Redistributable Latest Supported Downloads](../windows/latest-supported-vc-redist.md)

### Updated articles

- [Walkthrough: Create a traditional Windows Desktop application (C++)](../windows/walkthrough-creating-windows-desktop-applications-cpp.md) - updated examples

## Read and write code using C++ in Visual Studio

### New articles

- [IntelliSense code linter for C++ overview](../ide/cpp-linter-overview.md)
- [`lnt-assignment-equality`](../ide/lnt-assignment-equality.md)
- [`lnt-integer-float-division`](../ide/lnt-integer-float-division.md)
- [`lnt-accidental-copy`](../ide/lnt-accidental-copy.md)
- [`lnt-arithmetic-overflow`](../ide/lnt-arithmetic-overflow.md)
- [`lnt-logical-bitwise-mismatch`](../ide/lnt-logical-bitwise-mismatch.md)
- [`lnt-uninitialized-local`](../ide/lnt-uninitialized-local.md)

### Updated articles

- [`lnt-integer-float-division`](../ide/lnt-integer-float-division.md) - Add Visual Studio 2022 specific config information

## STL/CLR library reference

### Updated articles

- [.NET programming with C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md) - updated instructions for Visual Studio version UI differences

## Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See [Microsoft Docs contributor guide overview](/contribute/) if you'd like to learn how to contribute.

- [mohammad-ghasemi-dev](https://github.com/mohammad-ghasemi-dev) (5)
- [Jaiganeshkumaran](https://github.com/Jaiganeshkumaran) - Jaiganesh Kumaran (2)
- [workingjubilee](https://github.com/workingjubilee) - Jubilee (2)
- [adr26](https://github.com/adr26) (1)
- [AlexGuteniev](https://github.com/AlexGuteniev) - Alex Guteniev (1)
- [AzAgarampur](https://github.com/AzAgarampur) - Arush Agarampur (1)
- [d-c-d](https://github.com/d-c-d) - David Dyck (1)
- [onihusube](https://github.com/onihusube) (1)
- [rayz-bee](https://github.com/rayz-bee) - rayz-bee (1)
- [redteamrover](https://github.com/redteamrover) (1)
- [RibShark](https://github.com/RibShark) (1)
- [sauparna](https://github.com/sauparna) - Sauparna Palchowdhury (1)
- [sudoerChris](https://github.com/sudoerChris) - Chris Ho (1)
- [thispsj](https://github.com/thispsj) - PSJ (1)
- [Veverke](https://github.com/Veverke) - Avraham (1)
- [weijiechai](https://github.com/weijiechai) - Chai Wei Jie (1)
- [wmcnamara](https://github.com/wmcnamara) - Weston McNamara (1)
- [ystamant](https://github.com/ystamant) (1)

## What's new history

The following section provides the previous update of what's new in the Visual Studio docs.

### June 2021

#### Build insights

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

#### C language

**Updated articles**

- [`_Static_assert` keyword and `static_assert` macro (C11)](../c-language/static-assert-c.md) - update the SDK to use
- [Alignment (C11)](../c-language/alignment-c.md) - update the SDK to use
- [Generic selection (C11)](../c-language/generic-selection.md) - update the SDK to use

#### C runtime library

**Updated articles**

Many articles were updated to prevent the machine translation of code elements.

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

#### C++ in Visual Studio

**Updated articles**

- [`_variant_t::operator=`](../cpp/variant-t-operator-equal.md) - add remarks for `operator=` and make the article easier to read.
- [Abstract classes (C++)](../cpp/abstract-classes-cpp.md) - add Microsoft-specific extension information for inline pure virtual destructor
- [Attributes in C++](../cpp/attributes.md) - add missing errors and warnings: C7000-C7999, C4834
- [char, wchar_t, char8_t, char16_t, char32_t](../cpp/char-wchar-t-char16-t-char32-t.md) - clarified whether char is signed or unsigned

#### C++ porting and upgrade guide

**Updated articles**

- [Introduction to Microsoft C++ for UNIX Users](../porting/introduction-to-visual-cpp-for-unix-users.md) - Visual Studio 16.10 updates to C17 conformance
- [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md) - note change to `pow(T,int)` starting in VS 2015 update 1

#### C/C++ compiler and tools errors and warnings

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

#### C/C++ compiler intrinsics and assembly language

**Updated articles**

- [Microsoft Macro Assembler BNF Grammar](../assembler/masm/masm-bnf-grammar.md) - cleanup formatting and machine translation issues

#### C/C++ in Visual Studio overview

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

#### C/C++ preprocessor reference

**Updated articles**

- [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md) - update Visual Studio 16.10 conformance improvements and new warnings; added some version 2017 diagnostics
- [Predefined macros](../preprocessor/predefined-macros.md) - add new Visual Studio 16.10 warnings, version info; update version strings for Visual Studio 16.8, 16.9, and 16.10

#### C/C++ projects and build systems

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

#### C++ Standard Library (STL) reference

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

#### Code quality

**New articles**

- [C6389: MARK_INTERNAL_OR_MISSING_COMMON_DECL](../code-quality/c6389.md)

**Updated articles**

- [C6031](../code-quality/c6031.md) - add note about ignoring a function's return value
- [C26432 DEFINE_OR_DELETE_SPECIAL_OPS](../code-quality/c26432.md) - update code examples
- [C26497 USE_CONSTEXPR_FOR_FUNCTION](../code-quality/c26497.md) - add note about when warning won't be issued

#### Linux with C++ in Visual Studio

**Updated articles**

- [Connect to your target Linux system in Visual Studio](../linux/connect-to-your-remote-linux-computer.md) - add section about host key verification
- [ConnectionManager reference](../linux/connectionmanager-reference.md) - add note about host key fingerprint flags added in Visual Studio 16.10.

#### Overview of Windows programming in C++

**Updated articles**

- [Determining Which DLLs to Redistribute](../windows/determining-which-dlls-to-redistribute.md) - updated for Visual Studio 2019

#### Parallel programming in C++ in Visual Studio

**Updated articles**

- [C++ AMP Overview](../parallel/amp/cpp-amp-overview.md) - add note about C++ AMP library deprecation
- [Walkthrough: Debugging a C++ AMP application](../parallel/amp/walkthrough-debugging-a-cpp-amp-application.md) - fixed code sample

#### Community contributors

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
