---
title: "What's new for the Microsoft C++ docs"
ms.date: 11/10/2023
description: "A list of new articles and doc updates for the Microsoft C/C++ compiler, ATL/MFC, C runtime, and standard library docs."
ms.custom: intro-whats-new
monikerRange: '>=msvc-160'
---

# Microsoft C++ docs: What's new for August 2023 to November 2023

This article lists major changes to the Microsoft C++ docs for May 2023 through early November 2023.

- For what was new in the docs in previous months, see [What's new history](#whats-new-history).
- For what's new related to C++ in Visual Studio, see [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).
- For the latest C and C++ conformance with ISO standards status, see [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md).

### Active Template Library (ATL), Microsoft Foundation Classes (MFC)

**Updated articles**

- [CComDynamicUnkArray Class](../atl/reference/ccomdynamicunkarray-class.md) - Updated remarks.

### C/C++ projects and build systems

**New articles**

- [`/ifcMap`](../build/reference/ifc-map.md)
- [`/Zc:checkGwOdr` (Enforce Standard C++ ODR violations under `/Gw`)](../build/reference/zc-check-gwodr.md)
- [/KERNEL (Create kernel mode binary)](../build/reference/link-code-for-kernel-mode.md)

**Updated articles**

- [Configure CMake debugging sessions](../build/configure-cmake-debugging-sessions.md) - Updated screenshots.
- [`/permissive-` (Standards conformance)](../build/reference/permissive-standards-conformance.md) - Reflect new behavior as of 17.6.
- [`/Zc:externConstexpr` (Enable extern constexpr variables)](../build/reference/zc-externconstexpr.md) - Reflect new behavior as of 17.6.
- [Overview of ARM64EC ABI conventions](../build/arm64ec-windows-abi-conventions.md) - Updated register mapping for integer registers table.
- [`/DEBUG` (Generate debug info)](../build/reference/debug-generate-debug-info.md) - Fix documentation for `/DEBUG:FASTLINK` and `/DEBUG`.

### Code quality

**New articles**

- [Build reliable and secure C++ programs](../code-quality/build-reliable-secure-programs.md)
- [Warning C6395](../code-quality/c6395.md)
- [Warning C26479](../code-quality/c26479.md)

**Updated articles**

- [How to specify additional code information by using `_Analysis_assume_`](../code-quality/how-to-specify-additional-code-information-by-using-analysis-assume.md) - Updated remarks.

Clarified behavior for the following warnings:

- [Warning C6053](../code-quality/c6053.md)
- [Warning C26478](../code-quality/c26478.md)
- [Warning C26817](../code-quality/c26817.md)
- [Warning C26820](../code-quality/c26820.md)

### C++ in Visual Studio

**New articles**

- [`alignas` (C++)](../cpp/alignas-specifier.md)

**Updated articles**

- [`alignas` (C++)](../cpp/alignas-specifier.md) - Several updates to the remarks.
- [if-else statement (C++)](../cpp/if-else-statement-cpp.md) - Improved code examples.
- [__fastcall](../cpp/fastcall.md) - Added info about classes, structs, and unions.
- [`decltype` (C++)](../cpp/decltype-cpp.md) - Fixed code example.
- [noreturn](../cpp/noreturn.md) - Improved example.

### C runtime library

**Updated articles**

- [`fegetround`, `fesetround`](../c-runtime-library/reference/fegetround-fesetround2.md) - Noted change of the values for `FE_UPWARD` and `FE_DOWNWARD`.

### C/C++ compiler and tools errors and warnings

**Updated articles**

Clarified behavior for the following warnings:

- [Compiler Error C2018](../error-messages/compiler-errors-1/compiler-error-c2018.md), [Compiler Error C2023](../error-messages/compiler-errors-1/compiler-error-c2023.md)
- [Compiler Error C2024](../error-messages/compiler-errors-1/compiler-error-c2024.md), [Compiler Error C2049](../error-messages/compiler-errors-1/compiler-error-c2049.md)
- [Compiler Error C2058](../error-messages/compiler-errors-1/compiler-error-c2058.md), [Compiler Error C2061](../error-messages/compiler-errors-1/compiler-error-c2061.md)
- [Compiler Error C2082](../error-messages/compiler-errors-1/compiler-error-c2082.md), [Compiler Error C2129](../error-messages/compiler-errors-1/compiler-error-c2129.md)
- [Compiler Error C2345](../error-messages/compiler-errors-1/compiler-error-c2345.md), [Compiler Error C2397](../error-messages/compiler-errors-1/compiler-error-c2397.md)
- [Compiler Error C2510](../error-messages/compiler-errors-2/compiler-error-c2510.md), [Compiler Error C2534](../error-messages/compiler-errors-2/compiler-error-c2534.md)
- [Compiler Error C2993](../error-messages/compiler-errors-2/compiler-error-c2993.md), [Compiler Error C3550](../error-messages/compiler-errors-2/compiler-error-c3550.md)
- [Compiler Error C3551](../error-messages/compiler-errors-2/compiler-error-c3551.md)
### Read and write code using C++ in Visual Studio

**New articles**

- [Clean up C/C++ includes in Visual Studio](../ide/include-cleanup-overview.md)
- [Configure C/C++ Include Cleanup in Visual Studio](../ide/include-cleanup-config.md)
- [Include Cleanup messages](../ide/include-cleanup-messages.md)
- [`lnt-make-member-function-const`](../ide/lnt-make-member-function-const.md)
- [`lnt-naming-convention`](../ide/lnt-naming-convention.md)

### C/C++ in Visual Studio overview

**Updated articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md) - Added conformance updates for 17.7 and 17.8.
- [What's new for C++ in Visual Studio 2022](../overview/what-s-new-for-visual-cpp-in-visual-studio.md) - Updated what's new in C++.

### C++ Standard Template Library (STL) reference

**Updated articles**

- [auto_ptr class](../standard-library/auto-ptr-class.md) - Added deprecation info

### Active Template Library (ATL), Microsoft Foundation Classes (MFC)

**Updated articles**

- [Connection maps](../mfc/reference/connection-maps.md) - Corrected parameter description of `pRefCount` in `AfxConnection(Un)Advise`.
- [`CSimpleStringT` Class](../atl-mfc-shared/reference/csimplestringt-class.md) - Updated code example.
- [MFC class hierarchy chart](../mfc/hierarchy-chart.md) - Updated MFC hierarchy chart.

## Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See our [contributor guide](/contribute) if you'd like to learn how to contribute.

- [Rageking8](https://github.com/Rageking8) ![26 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-26-green)
- [0xbadfca11](https://github.com/0xbadfca11) ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [edmund-leibert](https://github.com/edmund-leibert) - Edmund Leibert III ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [glenn-slayden](https://github.com/glenn-slayden) - Glenn Slayden ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [lb90](https://github.com/lb90) ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [tsuyo](https://github.com/tsuyo) - Tsuyoshi Miyake ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)

## What's new history

This section lists major changes to the Microsoft C++ docs for May 2023 to August 2023.

For what's new related to C++ in Visual Studio, see [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).

### Active Template Library (ATL), Microsoft Foundation Classes (MFC)

**Updated articles**

- [Connection maps](../mfc/reference/connection-maps.md) - Corrected parameter description of `pRefCount` in `AfxConnection(Un)Advise`.
- [`CSimpleStringT` Class](../atl-mfc-shared/reference/csimplestringt-class.md) - Updated code example.
- [MFC class hierarchy chart](../mfc/hierarchy-chart.md) - Updated MFC hierarchy chart.

### C language

**New articles**

- [Generic selection (C11)](../c-language/generic-selection.md).

**Updated articles**

- [`register` storage-class specifier](../c-language/register-storage-class-specifier.md) - Added C5033 warning.
- [C Pragmas](../c-language/c-pragmas.md) - Added `system_header` pragma documentation.
- [C Bit Fields](../c-language/c-bit-fields.md) - Clarified example & documented that MSVC doesn't straddle bit-fields.

### C runtime library

**Updated articles**

- [`_iob`](../c-runtime-library/iob.md) - Clarified value of `_IOB_ENTRIES` across VS versions.
- [`_snprintf_s`, `_snprintf_s_l`, `_snwprintf_s`, `_snwprintf_s_l`](../c-runtime-library/reference/snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md) - Summarized behavior for argument value combinations.
- [`snprintf`, `_snprintf`, `_snprintf_l`, `_snwprintf`, `_snwprintf_l`](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) - Summarized behavior for argument value combinations.
- [`vsnprintf_s`, `_vsnprintf_s`, `_vsnprintf_s_l`, `_vsnwprintf_s`, `_vsnwprintf_s_l`](../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md) - Summarized behavior for argument value combinations.
- [`vsnprintf`, `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf`, `_vsnwprintf_l`](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) - Summarized behavior for argument value combinations.
- [`to` functions](../c-runtime-library/to-functions.md) - Fixed code example.
- [`strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`](../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) - Clarified behavior.
- [`strerror`, `_strerror`, `_wcserror`, `__wcserror`](../c-runtime-library/reference/strerror-strerror-wcserror-wcserror.md) - Clarified behavior.
- [`_stat`, `_stat32`, `_stat64`, `_stati64`, `_stat32i64`, `_stat64i32`, `_wstat`, `_wstat32`, `_wstat64`, `_wstati64`, `_wstat32i64`, `_wstat64i32`](../c-runtime-library/reference/stat-functions.md) - Called out changes to `_stat` family of functions across versions of Visual Studio.

### C/C++ compiler intrinsics and assembly language

**Updated articles**

- [`__umulh`](../intrinsics/umulh.md) - Updated the code example.

### C/C++ in Visual Studio overview

**Updated articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md) - Added 17.6 conformance info.

### C/C++ projects and build systems

**New articles**

- [/jumptablerdata (put switch case jump tables in `.rdata`)](../build/reference/jump-table-rdata.md).

**Updated articles**

- [Advanced Property Page](../build/reference/advanced-property-page.md) - Updates regarding managed projects that target .NET Framework versus .NET.
- [`/openmp` (Enable OpenMP Support)](../build/reference/openmp-enable-openmp-2-0-support.md) - Added supported versions.
- [Create a C++ console app project](../build/vscpp-step-1-create.md) - Updated for current version of Visual Studio.
- [Build and run a C++ console app project](../build/vscpp-step-2-build.md) - Updated steps to accommodate Visual Studio version differences regarding the location of the debug folder.
- [`/ZW` (Windows Runtime Compilation)](../build/reference/zw-windows-runtime-compilation.md) - Added a note about an incompatibility.
- [Configure and build with CMake Presets in Visual Studio](../build/cmake-presets-vs.md) - Updated supported CMake and  *`CMakePresets.json`* versions.
- [`/Zc:lambda` (Enable updated lambda processor)](../build/reference/zc-lambda.md) - Added note that `/permissive-` implies `/Zc:lambda`.
- [C/C++ Property Pages](../build/reference/c-cpp-prop-page.md) - Added description for C language and building ISO standard library modules properties.
- [Overview of ARM64 ABI conventions](../build/arm64-windows-abi-conventions.md) - Clarified terminology regarding register volatility.

### C++ in Visual Studio

**New articles**

- [Visual Studio Tools for Unreal Engine overview](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-overview)
- [Install Visual Studio Tools for Unreal Engine](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-install)
- [Quickstart: Visual Studio Tools for Unreal Engine](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-quickstart)

**Updated articles**

- [Overview of modules in C++](../cpp/modules-cpp.md) - Add description for building ISO standard library modules.
- [Compiler Limits](../cpp/compiler-limits.md) - Updated Parameters in macro definition limits.
- [How to: Create and Use shared_ptr instances](../cpp/how-to-create-and-use-shared-ptr-instances.md) - Added a code example.
- [Tutorial: Import the C++ standard library using modules from the command line](../cpp/tutorial-import-stl-named-module.md) - Added a description for building ISO standard library modules.
- [type_info Class](../cpp/type-info-class.md) - Marked `raw_name` Microsoft-specific.

### C++ porting and upgrade guide

**Updated articles**

- [Microsoft C/C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)- Noted changes to `_stat` family of functions behavior.

### C++ Standard Template Library (STL) reference

**Updated articles**

- [`basic_string` Class](../standard-library/basic-string-class.md) - Marked `_Copy_s` Microsoft-specific.

### Code quality

**New articles**

- [Warning `C26831`](../code-quality/c26831.md)
- [Warning `C26832`](../code-quality/c26832.md)
- [Warning `C26833`](../code-quality/c26833.md)
- [Warning `C26835`](../code-quality/c26835.md)

**Updated articles**

- [Use the C++ Core Guidelines checkers](../code-quality/using-the-cpp-core-guidelines-checkers.md) - No longer suggest turning off annotation processing for CppCoreChecks.

Clarified behavior for the following warnings:
- [Warning C6011](../code-quality/c6011.md), [Warning C6200](../code-quality/c6200.md)
- [Warning C26437](../code-quality/c26437.md), [Warning C26439](../code-quality/c26439.md)
- [Warning C26441](../code-quality/c26441.md), [Warning C26444](../code-quality/c26444.md)
- [Warning C26449](../code-quality/c26449.md), [Warning C26450](../code-quality/c26450.md)
- [Warning C26451](../code-quality/c26451.md), [Warning C26452](../code-quality/c26452.md)
- [Warning C26453](../code-quality/c26453.md), [Warning C26454](../code-quality/c26454.md)
- [Warning C26455](../code-quality/c26455.md), [Warning C26494](../code-quality/c26494.md)
- [Warning C26495](../code-quality/c26495.md), [Warning C26498](../code-quality/c26498.md)
- [Warning C26800](../code-quality/c26800.md), [Warning C26810](../code-quality/c26810.md)
- [Warning C26811](../code-quality/c26811.md), [Warning C26813](../code-quality/c26813.md)
- [Warning C26815](../code-quality/c26815.md), [Warning C26816](../code-quality/c26816.md)
- [Warning C26819](../code-quality/c26819.md), [Warning C26827](../code-quality/c26827.md)
- [Warning C26828](../code-quality/c26828.md), [Warning C28196](../code-quality/c28196.md)
- [Warning C28306](../code-quality/c28306.md), [Warning C28307](../code-quality/c28307.md)
- [Warning C33010](../code-quality/c33010.md)

### Cross platform development

**Updated articles**

- [Build an OpenGL ES application on Android and iOS](../cross-platform/build-an-opengl-es-application-on-android-and-ios.md) - Updated documentation to reflect removal of OpenGL.

### Overview of Windows programming in C++

**Updated articles**

- [Microsoft Visual C++ Redistributable latest supported downloads](../windows/latest-supported-vc-redist.md) - Noted that VS 2012 reached end of extended support and clarified that the Visual C++ Redistributable for Visual Studio 2015-2022 doesn't have separate packages for different languages.

### Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See our [contributor guide](/contribute) if you'd like to learn how to contribute.

- [moonlit-melody](https://github.com/moonlit-melody) - melody ![4 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-4-green)
- [AlexGuteniev](https://github.com/AlexGuteniev) - Alex Guteniev ![2 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-2-green)
- [MAP233224](https://github.com/MAP233224) - MAP ![2 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-2-green)
- [Alice2O3](https://github.com/Alice2O3) -  ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [bearerer](https://github.com/bearerer) -  ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [bryangalindo](https://github.com/bryangalindo) - Bryan Galindo ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [enricosebastian](https://github.com/enricosebastian) - Enrico Sebastian ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [fsb4000](https://github.com/fsb4000) - Igor Zhukov ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [Passw](https://github.com/Passw) -  ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [stephen9357](https://github.com/stephen9357) -  ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
