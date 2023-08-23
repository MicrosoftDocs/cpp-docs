---
title: "What's new for the C++ docs"
ms.date: "08/22/2023"
description: "The new docs and doc updates for the Microsoft C/C++ compiler, ATL/MFC, C runtime, and standard library docs."
ms.custom: intro-whats-new
monikerRange: '>=msvc-160'
---

# Microsoft C++ docs: What's new for May 2023 to August 2023

This article lists major changes to the Microsoft C++ docs May 2023 through August 2023. These changes correspond approximately to Visual Studio version 17.7.

- For what was new in the docs in previous months, see [What's new history](#whats-new-history).
- For what's new related to C++ in Visual Studio, see [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).
- For the latest C and C++ conformance with ISO standards status, see [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md).

## Active Template Library (ATL), Microsoft Foundation Classes (MFC)

**Updated articles**

- [Connection maps](../mfc/reference/connection-maps.md) - Corrected parameter description of `pRefCount` in `AfxConnection(Un)Advise`.
- [`CSimpleStringT` Class](../atl-mfc-shared/reference/csimplestringt-class.md) - Updated code example.
- [MFC class hierarchy chart](../mfc/hierarchy-chart.md) - Updated MFC hierarchy chart.

## C language

**New articles**

- [Generic selection (C11)](../c-language/generic-selection.md).

**Updated articles**

- [`register` storage-class specifier](../c-language/register-storage-class-specifier.md) - Added C5033 warning.
- [C Pragmas](../c-language/c-pragmas.md) - Added `system_header` pragma documentation.
- [C Bit Fields](../c-language/c-bit-fields.md) - Clarified example & documented that MSVC doesn't straddle bit-fields.

## C runtime library

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

## C/C++ compiler intrinsics and assembly language

**Updated articles**

- [`__umulh`](../intrinsics/umulh.md) - Updated the code example.

## C/C++ in Visual Studio overview

**Updated articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md) - Added 17.6 conformance info.

## C/C++ projects and build systems

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

## C++ in Visual Studio

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

## C++ porting and upgrade guide

**Updated articles**

- [Microsoft C/C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)- Noted changes to `_stat` family of functions behavior.

## C++ Standard Template Library (STL) reference

**Updated articles**

- [`basic_string` Class](../standard-library/basic-string-class.md) - Marked `_Copy_s` Microsoft-specific.

## Code quality

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

## Cross platform development

**Updated articles**

- [Build an OpenGL ES application on Android and iOS](../cross-platform/build-an-opengl-es-application-on-android-and-ios.md) - Updated documentation to reflect removal of OpenGL.

## Overview of Windows programming in C++

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

## What's new history

This section lists major changes to the Microsoft C++ docs February 2023 through May 2023. These changes correspond approximately to Visual Studio version 17.6.

For what's new related to C++ in Visual Studio, see [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).

### C runtime library

**Updated articles**

- [`fopen_s`, `_wfopen_s`](../c-runtime-library/reference/fopen-s-wfopen-s.md) - Clarified some mode modifier flag behaviors.
- [`fopen`, `_wfopen`](../c-runtime-library/reference/fopen-wfopen.md) - Clarified some mode modifier flag behaviors.
- [`_fsopen`, `_wfsopen`](../c-runtime-library/reference/fsopen-wfsopen.md) - Clarified some mode modifier flag behaviors.
- [`setlocale`, `_wsetlocale`](../c-runtime-library/reference/setlocale-wsetlocale.md) - Clarified behavior for invalid arguments.
- [`_getch`, `_getwch`](../c-runtime-library/reference/getch-getwch.md) - Removed statement that the function can't read Ctrl+C.
- [`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf`, `_swprintf_l`, `__swprintf_l`](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) - Documented `_swprintf` and how `_CRT_NON_CONFORMING_SWPRINTFS` maps calls to `swprintf` to `_swprintf`.
- [`strtok`, `_strtok_l`, `wcstok`, `_wcstok_l`, `_mbstok`, `_mbstok_l`](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) - Noted the nonstandard `wcstok()` and how to call it.
- [`wcstombs`, `_wcstombs_l`](../c-runtime-library/reference/wcstombs-wcstombs-l.md) - Added note about UTF-8 support.
- [`fma`, `fmaf`, `fmal`](../c-runtime-library/reference/fma-fmaf-fmal.md) - Corrected the documentation for `fmaf`.

### C/C++ compiler and tools errors and warnings

**New articles**

- [Compiler error C7688](../error-messages/compiler-errors-2/compiler-error-c7688.md).
- [Compiler warning (level 1, error, off) C5262](../error-messages/compiler-warnings/c5262.md).
- [Compiler warnings (level 1) C5301 and C5302](../error-messages/compiler-warnings/c5301-c5302.md).

**Updated articles**

- [Compiler Warnings by compiler version](../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md) - Updated with changes for VS 17.5.
- [Compiler warnings C4800 through C5999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md) - Updated with changes for VS 17.5.

### C/C++ compiler intrinsics and assembly language

### C/C++ in Visual Studio overview

**Updated articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md) - Updated for VS 17.5 changes.
- [Microsoft C/C++ language conformance by Visual Studio version](../overview/visual-cpp-language-conformance.md) - Update with changes for VS 17.5.
- [What's new for C++ in Visual Studio 2022](../overview/what-s-new-for-visual-cpp-in-visual-studio.md) - Update with changes for VS 17.5.

### C/C++ preprocessor reference

**Updated articles**

- [Predefined macros](../preprocessor/predefined-macros.md) - Update _MSC_VER values for 17.3, 17.4, and 17.5.
- [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md) - Update with changes for VS 17.5.

### C/C++ projects and build systems

**Updated articles**

- [Use the Microsoft C++ toolset from the command line](../build/building-on-the-command-line.md) - Improved command-line instructions.
- [Walkthrough: Compiling a C++/CLI Program on the Command Line](../build/walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md) - Improved command-line instructions.
- [Walkthrough: Compiling a C++/CX Program on the Command Line](../build/walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md) - Improved dev command line instructions.
- [`/Gs` (Control stack checking calls)](../build/reference/gs-control-stack-checking-calls.md) - Updated max value for /Gs.
- [Overview of ARM64 ABI conventions](../build/arm64-windows-abi-conventions.md) - Corrected HFA return values.
- [ARM64 exception handling](../build/arm64-exception-handling.md) - In the compressed format, PAC is identified by CR=2, not 3.
- [Reference: vcperf commands](../build-insights/reference/vcperf-commands.md) - Updated which commands require administrative privileges.

### C++ in Visual Studio

**Updated articles**

- [Transporting exceptions between threads](../cpp/transporting-exceptions-between-threads.md) - fix section about types of exception handling.
- [Tutorial: Import the C++ standard library using modules from the command line](../cpp/tutorial-import-stl-named-module.md) - Updated wording and fixed problems with the path and suggested directory location.

### C++ in Visual Studio tutorials

**Updated articles**

- [Create a console calculator in C++](../get-started/tutorial-console-cpp.md) - updated screenshots and updated the result and exception error format.

### C++ Standard Template Library (STL) reference

**Updated articles**

- [`directory_iterator` class](../standard-library/directory-iterator-class.md) - remove experimental.

### Code quality

**New articles**

- [Walkthrough: Use Address Sanitizer Continue On Error to find memory safety issues](../sanitizers/asan-continue-on-error.md)
- [Warning  C6030](../code-quality/c6030.md)
- [Warning C6065](../code-quality/c6065.md)

**Updated articles**

- [Warning C6001](../code-quality/c6001.md) - Added examples explaining initialization heuristics for C6001.
- [Best practices and examples (SAL)](../code-quality/best-practices-and-examples-sal.md) - fix SAL annotation.
- [Warning C26441](../code-quality/c26441.md) - Clarified example.
- [Warning C28213](../code-quality/c28213.md) - Clarified example.
- [Warning C6029](../code-quality/c6029.md) - Updated description.
- [Warning C6064](../code-quality/c6064.md) - Clarified example.
- [Warning C6101](../code-quality/c6101.md) - Clarified text.
- [Warning C6217](../code-quality/c6217.md) - Clarified text.

### Linux with C++ in Visual Studio

**Updated articles**

- [Connect to your target Linux system in Visual Studio](../linux/connect-to-your-remote-linux-computer.md) - Added note regarding `ssh-keygen`.

### Overview of Windows programming in C++

**Updated articles**

- [Microsoft Visual C++ Redistributable latest supported downloads](../windows/latest-supported-vc-redist.md) - explained why there aren't version numbers listed for VS 2015-2022.

### Read and write code using C++ in Visual Studio

**Updated articles**

- [Add a class from an ActiveX control](../ide/adding-a-class-from-an-activex-control-visual-cpp.md) - Clarified which project types the wizard applies to.
- [Walkthrough: Working with Projects and Solutions (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) - Updated for Visual Studio 17.5.

### STL/CLR library reference

**Updated articles**

- [`queue` (STL/CLR)](../dotnet/queue-stl-clr.md) - fixed compilation error in code examples.

### Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See our [contributor guide](/contribute) if you'd like to learn how to contribute.

- [fsb4000](https://github.com/fsb4000) - Igor Zhukov ![3 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-3-green)
- [fjh1997](https://github.com/fjh1997) - FunnyBiu ![2 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-2-green)
- [X0RW3LL](https://github.com/X0RW3LL) -  ![2 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-2-green)
- [EddieBreeveld](https://github.com/EddieBreeveld) - Edward Breeveld ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [fkelava](https://github.com/fkelava) - Fran 'peppy' Kelava ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [JustaSimpleUser](https://github.com/JustaSimpleUser) - Centurion Maximus ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [lkundrak](https://github.com/lkundrak) - Lubomir Rintel ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [LuShuchen](https://github.com/LuShuchen) -  ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [martinschonger](https://github.com/martinschonger) - Martin Schonger ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [matbech](https://github.com/matbech) - Mathias Berchtold ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [NADIRHUSSAIN11](https://github.com/NADIRHUSSAIN11) - Nadir Hussain ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [peanutsjamjam](https://github.com/peanutsjamjam) - Atsushi SUGAWARA ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [RAJU2529](https://github.com/RAJU2529) - VARADHARAJAN K ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [robert-andrzejuk](https://github.com/robert-andrzejuk) - Robert Andrzejuk ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [science-enthusiast](https://github.com/science-enthusiast) - Hari ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [terrymah](https://github.com/terrymah) - Terry Mahaffey ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [vtjnash](https://github.com/vtjnash) - Jameson Nash ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [XuhuaHuang](https://github.com/XuhuaHuang) - XuhuaHuang ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [YoniFeng](https://github.com/YoniFeng) - Yoni Feng ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)