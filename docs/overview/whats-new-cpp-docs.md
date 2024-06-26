---
title: "What's new for the Microsoft C++ docs"
ms.date: 06/26/2024
description: "A list of new articles and doc updates for the Microsoft C/C++ compiler, ATL/MFC, C runtime, and standard library docs."
ms.custom: intro-whats-new
monikerRange: '>=msvc-160'
---

# Microsoft C++ docs: What's new for November 2023 to June 2024

This article lists major changes to the Microsoft C++ docs for November 2023 to June 2024.

- For what was new in the docs in previous months, see [What's new history](#whats-new-history).
- For what's new related to C++ in Visual Studio, see [What's new for C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).
- For the latest C and C++ conformance with ISO standards status, see [C++ conformance improvements in Visual Studio](cpp-conformance-improvements.md).

### C/C++ compiler intrinsics and assembly language

**Updated articles**

- [ARM64 intrinsics](../intrinsics/arm64-intrinsics.md) - Added entries to table for new arm64 intrinsics

### Active Template Library (ATL), Microsoft Foundation Classes (MFC)

**Updated articles**

- [Setting the Dialog Box's Background Color](../mfc/setting-the-dialog-boxs-background-color.md) - add code example for setting a dialog box's background color
- [Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md) - Clarified MBCS support in unicode-and-multibyte-character-set-mbcs-support.md

## C/C++ projects and build systems

**New articles**

- [/ARM64XFUNCTIONPADMINX64 (Minimum x64 function padding)](../build/reference/arm64-function-pad-min-x64.md)
- [/NOFUNCTIONPADSECTION (Disable function padding)](../build/reference/no-function-pad-section.md)
- [`/experimental:log` (Structured SARIF diagnostics)](../build/reference/experimental-log.md)
- [`/feature` (ARM64)](../build/reference/feature-arm64.md)
- [`/LINKREPROFULLPATHRSP` (Generate file containing absolute paths of linked files)](../build/reference/link-repro-full-path-rsp.md)
- [`/Qspectre-jmp`](../build/reference/qspectre-jmp.md)
- [`/volatileMetadata` (Generate metadata on volatile memory accesses)](../build/reference/volatile.md)
- [Structured SARIF Diagnostics](../build/reference/sarif-output.md)
- [Tutorial: Troubleshoot function inlining on build time](../build-insights/tutorials/build-insights-function-view.md)
- [Tutorial: Troubleshoot header file impact on build time](../build-insights/tutorials/build-insights-included-files-view.md)

**Updated articles**

- [/LARGEADDRESSAWARE (Handle Large Addresses)](../build/reference/largeaddressaware-handle-large-addresses.md) - largeaddressaware:no isn't recommended for 64-bit apps
- [/Qspectre](../build/reference/qspectre.md) - New /QSpectre flag
- [`/arch` (ARM64)](../build/reference/arch-arm64.md) - document __arm_arch macro
- [Advanced Property Page](../build/reference/advanced-property-page.md) - Add SARIF diagnostics documentation
- [Linker options](../build/reference/linker-options.md)
  - new flag: /LINKREPROFULLPATHRSP
  - new linker switches for 17.8
- [Linking](../build/reference/linking.md) - new linker switches for 17.8

### C language

**New articles**

- [`typeof_unqual`, `__typeof_unqual__` (C23)](../c-language/typeof-unqual-c.md)
- [`typeof`, `__typeof__` (C23)](../c-language/typeof-c.md)

**Updated articles**

- [C Keywords](../c-language/c-keywords.md) - Conformance updates
- [C Type Specifiers](../c-language/c-type-specifiers.md) - Conformance updates

### Code quality

**New articles**

- [Warning C26459](../code-quality/c26459.md)
- [Warning C26837](../code-quality/c26837.md)
- [Warning C26861](../code-quality/c26861.md)
- [Warning C26862](../code-quality/c26862.md)
- [Warning C26863](../code-quality/c26863.md)
- [Warning C26864](../code-quality/c26864.md)
- [Warning C6392](../code-quality/c6392.md)
- [Warning C6393](../code-quality/c6393.md)
- [Warning C6394](../code-quality/c6394.md)
- [Warning C6396](../code-quality/c6396.md)
- [Warning C6397](../code-quality/c6397.md)
- [Warning C6398](../code-quality/c6398.md)

**Updated articles**

- [Using Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md) - fix code example
- [Warning C6031](../code-quality/c6031.md) - fix some code examples
- [Warning C6059](../code-quality/c6059.md) - Add heuristics
- [Warning C6201](../code-quality/c6201.md) - Add heuristics

### C++ in Visual Studio

**Updated articles**

- [`break` statement (C++)](../cpp/break-statement-cpp.md) - Break statement documentation fix
- [Examples of Lambda Expressions](../cpp/examples-of-lambda-expressions.md) - fix code example
- [Inline functions (C++)](../cpp/inline-functions-cpp.md) - Address mistakes in inline functions cpp and remove content contrasting inline functions and macros

### Cross platform development

**Updated articles**

- [Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md) - updates regarding Xamarin

### C runtime library

**Updated articles**

- [Translation mode constants](../c-runtime-library/translation-mode-constants.md) - Clarify that `_O_TEXT` is ANSI

### C/C++ compiler and tools errors and warnings

**New articles**

- [Compiler Error C2323](../error-messages/compiler-errors-1/compiler-error-c2323.md)
- [Compiler Warning (level 1) C5072](../error-messages/compiler-warnings/compiler-warning-c5072.md)
- [Compiler Warning (level 4) C5266](../error-messages/compiler-warnings/compiler-warning-level-4-c5266.md)
- [Compiler warning (level 4) C5267](../error-messages/compiler-warnings/c5267.md)
- [Linker tools warning LNK4306](../error-messages/tool-errors/linker-tools-warning-lnk4306.md)
- [Linker tools warning LNK4307](../error-messages/tool-errors/linker-tools-warning-lnk4307.md)
- [Microsoft C/C++ compiler warnings C5000 through C5199](../error-messages/compiler-warnings/compiler-warnings-c5000-through-c5199.md)
- [Microsoft C/C++ compiler warnings C5200 through C5399](../error-messages/compiler-warnings/compiler-warnings-c5200-through-c5399.md)

**Updated articles**

- Updated several compiler error and warning topics to include or refine examples.

### C++ in Visual Studio tutorials

**Updated articles**

- [Create a console calculator in C++](../get-started/tutorial-console-cpp.md)

### Read and write code using C++ in Visual Studio

**New articles**

- [C++ Include Diagnostics in Visual Studio](../ide/include-diagnostics.md)
- [Visualize C/C++ macro expansion](../ide/visualize-macro-expansion.md)

**Updated articles**

- [Walkthrough: Deploying Your Program (C++)](../ide/walkthrough-deploying-your-program-cpp.md) - update steps

### Linux with C++ in Visual Studio

**Updated articles**

- [Connect to your target Linux system in Visual Studio](../linux/connect-to-your-remote-linux-computer.md)

### C/C++ in Visual Studio overview

**New articles**

- [Microsoft Visual C++ compiler versioning](../overview/compiler-versions.md)

**Updated articles**

- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md) - updates for 17.10, added `_alignof`
- [Microsoft C++ docs: What's new for August 2023 to November 2023](../overview/whats-new-cpp-docs.md)
- [What's new for C++ in Visual Studio 2022](../overview/what-s-new-for-visual-cpp-in-visual-studio.md) - updates for 17.10

### C++ porting and upgrade guide

**Updated articles**

- [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md) - clarify linking binaries built with different versions of the toolset

### C/C++ preprocessor reference

**Updated articles**

- [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md) - add new warning for VS 17.6 - C5266, add warning level info, new warning topic for C5267
- [Predefined macros](../preprocessor/predefined-macros.md) - documented `__arm_arch` macro

## Overview of Windows programming in C++

**Updated articles**

- [ClickOnce Deployment for Visual C++ Applications](../windows/clickonce-deployment-for-visual-cpp-applications.md) - fixed code example
- [Microsoft Visual C++ Redistributable latest supported downloads](../windows/latest-supported-vc-redist.md) - note 2013 no longer supported, and other updates

## What's new history

This section lists major changes to the Microsoft C++ docs for August 2023 to early November 2023.

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
- [`/permissive-` (Standards conformance)](../build/reference/permissive-standards-conformance.md) - Reflect new behavior as of 17.6
- [`/Zc:externConstexpr` (Enable extern constexpr variables)](../build/reference/zc-externconstexpr.md) - Reflect new behavior as of 17.6
- [Overview of ARM64EC ABI conventions](../build/arm64ec-windows-abi-conventions.md) - Updated register mapping for integer registers table
- [`/DEBUG` (Generate debug info)](../build/reference/debug-generate-debug-info.md) - Fix documentation for `/DEBUG:FASTLINK` and `/DEBUG`

### Code quality

**New articles**

- [Build reliable and secure C++ programs](../code-quality/build-reliable-secure-programs.md)
- [Warning C6395](../code-quality/c6395.md)
- [Warning C26479](../code-quality/c26479.md)

**Updated articles**

- [How to specify additional code information by using `_Analysis_assume_`](../code-quality/how-to-specify-additional-code-information-by-using-analysis-assume.md) - Updated remarks

Clarified behavior for the following warnings:

- [Warning C6053](../code-quality/c6053.md)
- [Warning C26478](../code-quality/c26478.md)
- [Warning C26817](../code-quality/c26817.md)
- [Warning C26820](../code-quality/c26820.md)

### C++ in Visual Studio

**New articles**

- [`alignas` (C++)](../cpp/alignas-specifier.md)

**Updated articles**

- [`alignas` (C++)](../cpp/alignas-specifier.md) - Updates to the remarks
- [if-else statement (C++)](../cpp/if-else-statement-cpp.md) - Improved code examples
- [__fastcall](../cpp/fastcall.md) - Added info about classes, structs, and unions
- [`decltype` (C++)](../cpp/decltype-cpp.md) - Fixed code example
- [noreturn](../cpp/noreturn.md) - Improved example

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