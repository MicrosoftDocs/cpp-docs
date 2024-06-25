---
title: "What's new for the Microsoft C++ docs"
ms.date: 06/25/2024
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

## May 2024

### C/C++ compiler intrinsics and assembly language

**Updated articles**

- [__rdtscp](../intrinsics/rdtscp.md) - Nits for rdtsc and rdtscp
- [ARM intrinsics](../intrinsics/arm-intrinsics.md)
  - Add entries to table for regular ARM intrinsics to arm-intrinsics.md
  - Repo sync for protected branch
- [ARM64 intrinsics](../intrinsics/arm64-intrinsics.md)
  - Add entries to table for new arm64 intrinsics to arm64-intrinsics.md
  - Update arm64-intrinsics.md to include intrin.h mention
  - Repo sync for protected branch

### Active Template Library (ATL), Microsoft Foundation Classes (MFC)

**Updated articles**

- [`CD2DBrush` Class](../mfc/reference/cd2dbrush-class.md)
  - Fix references to brush
  - Repo sync for protected branch
- [`CInternetSession` Class](../mfc/reference/cinternetsession-class.md) - Address incorrect placement of period
- [`CObArray` Class](../mfc/reference/cobarray-class.md)
  - fix #4824
  - Repo sync for protected branch
- [`CRecordset` class](../mfc/reference/crecordset-class.md) - Fix a few typos
- [`CSimpleStringT` Class](../atl-mfc-shared/reference/csimplestringt-class.md)
  - Fix MFC example
  - Remove excess comma
  - Repo sync for protected branch
- [`CStringArray` Class](../mfc/reference/cstringarray-class.md)
  - fix #4824
  - Repo sync for protected branch
- [`CWinAppEx` class](../mfc/reference/cwinappex-class.md) - Remove excess comma
- [CMFCBaseTabCtrl Class](../mfc/reference/cmfcbasetabctrl-class.md) - Fix return typo
- [COleControlSite Class](../mfc/reference/colecontrolsite-class.md) - Fix a few typos
- [CPaneContainer Class](../mfc/reference/cpanecontainer-class.md) - Address incorrect placement of period
- [MFC Classes](../mfc/reference/mfc-classes.md) - Fix a few typos
- [Setting the Dialog Box's Background Color](../mfc/setting-the-dialog-boxs-background-color.md)
  - add code example for setting a dialog box's background color
  - Repo sync for protected branch
- [Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)
  - Clarified MBCS support in unicode-and-multibyte-character-set-mbcs-support.md
  - Repo sync for protected branch

### C/C++ projects and build systems

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

- [/LARGEADDRESSAWARE (Handle Large Addresses)](../build/reference/largeaddressaware-handle-large-addresses.md) - largeaddressaware:no is not recommended for 64-bit apps
- [/Qspectre](../build/reference/qspectre.md)
  - New /QSpectre flag
  - Repo sync for protected branch
- [/Qspectre-load](../build/reference/qspectre-load.md)
  - New /QSpectre flag
  - Repo sync for protected branch
- [/Qspectre-load-cf](../build/reference/qspectre-load-cf.md)
  - New /QSpectre flag
  - Repo sync for protected branch
- [`/arch` (ARM64)](../build/reference/arch-arm64.md)
  - document __arm_arch macro
  - Add compiler option /feature and update the /arch (ARM64) option
  - Repo sync for protected branch
  - Repo sync for protected branch
- [`/Fo` (Object File Name)](../build/reference/fo-object-file-name.md)
  - call out colon form for /fo
  - Repo sync for protected branch
- [`/headerUnit` (Use header unit IFC)](../build/reference/headerunit.md)
  - tech review
  - Repo sync for protected branch
- [`/PDBPATH`](../build/reference/pdbpath.md)
  - fix feedback item ADO:229433
  - Repo sync for protected branch
- [`/sourceDependencies` (List all source-level dependencies)](../build/reference/sourcedependencies.md) - Correct JSON output of sourcedependencies.md
- [`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)
  - clarify how macro value is set
  - Whatsnew
  - Repo sync for protected branch
  - Enhance /std documentation with reference to /Zc:__cplusplus
  - Repo sync for protected branch
- [`/Zc:zeroSizeArrayNew` (Call member new/delete on arrays)](../build/reference/zc-zerosizearraynew.md) - Remove stray trailing escapes
- [Advanced Property Page](../build/reference/advanced-property-page.md)
  - Add SARIF diagnostics documentation
  - Repo sync for protected branch
- [Build and run a C++ console app project](../build/vscpp-step-2-build.md)
  - draft
  - Repo sync for protected branch
- [C++ Build Insights](../build-insights/index.yml)
  - draft
  - Repo sync for protected branch
- [Clang/LLVM support in Visual Studio projects](../build/clang-support-msbuild.md)
  - draft
  - Repo sync for protected branch
- [CMake projects in Visual Studio](../build/cmake-projects-in-visual-studio.md)
  - draft
  - Add links for "Just My Code" and "Edit and Continue".
  - Repo sync for protected branch
- [Commands in a makefile](../build/reference/commands-in-a-makefile.md) - Fix unclosed links
- [Common macros for MSBuild commands and properties](../build/reference/common-macros-for-build-commands-and-properties.md)
  - fixes github #4890 - backslashes
  - Repo sync for protected branch
- [Compiler options listed alphabetically](../build/reference/compiler-options-listed-alphabetically.md)
  - Add compiler option /feature and update the /arch (ARM64) option
  - Whatsnew
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Compiler options listed by category](../build/reference/compiler-options-listed-by-category.md)
  - Add compiler option /feature and update the /arch (ARM64) option
  - Whatsnew
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Creating an .Sbr File](../build/reference/creating-an-dot-sbr-file.md) - Address incorrect placement of period
- [Define an NMAKE macro](../build/reference/defining-an-nmake-macro.md) - Fix unclosed links
- [Inference rules](../build/reference/inference-rules.md) - Fix unclosed links
- [Inline files in a makefile](../build/reference/inline-files-in-a-makefile.md) - Fix unclosed links
- [Linker options](../build/reference/linker-options.md)
  - fixes for customer feedback
  - new flag: /LINKREPROFULLPATHRSP
  - new linker switches for 17.8
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Linking](../build/reference/linking.md)
  - new linker switches for 17.8
  - Repo sync for protected branch
- [Makefile preprocessing](../build/reference/makefile-preprocessing.md) - Fix unclosed links
- [NMAKE makefile contents and features](../build/reference/contents-of-a-makefile.md) - Fix unclosed links
- [Overview of x64 ABI conventions](../build/x64-software-conventions.md) - Update x64-software-conventions.md
- [Set compiler and build properties](../build/working-with-project-properties.md)
  - draft
  - Repo sync for protected branch
- [Special NMAKE macros](../build/reference/special-nmake-macros.md) - Fix unclosed links
- [Use an NMAKE macro](../build/reference/using-an-nmake-macro.md) - Fix unclosed links
- [Walkthrough: Build and debug C++ with WSL 2 and Visual Studio 2022](../build/walkthrough-build-debug-wsl2.md)
  - draft
  - Repo sync for protected branch
- [x64 calling convention](../build/x64-calling-convention.md) - Update x64-calling-convention.md

### C language

**New articles**

- [`typeof_unqual`, `__typeof_unqual__` (C23)](../c-language/typeof-unqual-c.md)
- [`typeof`, `__typeof__` (C23)](../c-language/typeof-c.md)

**Updated articles**

- [C Keywords](../c-language/c-keywords.md)
  - Conformance
  - Repo sync for protected branch
- [C Type Specifiers](../c-language/c-type-specifiers.md)
  - Conformance
  - Repo sync for protected branch

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

- [Using Clang-Tidy in Visual Studio](../code-quality/clang-tidy.md)
  - fix github issue - code example wrong
  - Update clang-tidy.md
  - Repo sync for protected branch
  - Update clang-tidy.md
- [Warning C6031](../code-quality/c6031.md)
  - fix language tagging and some of the code samples
  - Repo sync for protected branch
- [Warning C6059](../code-quality/c6059.md)
  - C6059: Add heuristics
  - Repo sync for protected branch
- [Warning C6201](../code-quality/c6201.md)
  - Add heuristics for C6201
  - Repo sync for protected branch
- [Warning C6328](../code-quality/c6328.md)
  - Improvements to some format specifier related warnings.
  - Repo sync for protected branch
- [Warning C6340](../code-quality/c6340.md)
  - Improvements to some format specifier related warnings.
  - Repo sync for protected branch

### C++ in Visual Studio

**Updated articles**

- [`break` statement (C++)](../cpp/break-statement-cpp.md) - Break statement documentation fix
- [`Platform::Collections::VectorIterator` class](../cppcx/platform-collections-vectoriterator-class.md) - Remove excess comma
- [`sizeof` Operator](../cpp/sizeof-operator.md) - Make built-in operators title consistent
- [`typeid` Operator](../cpp/typeid-operator.md) - Make built-in operators title consistent
- [Additive Operators: `+` and `-`](../cpp/additive-operators-plus-and.md) - Make built-in operators title consistent
- [Assignment operators](../cpp/assignment-operators.md)
  - Make built-in operators title consistent
  - Update assignment-operators.md
- [Attributes in C++](../cpp/attributes.md)
  - Update attributes.md
  - Repo sync for protected branch
- [C++ docs - get started, tutorials, reference.](../cpp/index.yml)
  - address perf
  - Repo sync for protected branch
- [Casting](../cpp/casting.md)
  - fixes for customer feedback
  - Repo sync for protected branch
- [char, wchar_t, char8_t, char16_t, char32_t](../cpp/char-wchar-t-char16-t-char32-t.md)
  - address user feedback 252709
  - Repo sync for protected branch
- [Collections (C++/CX)](../cppcx/collections-c-cx.md) - Fix various typos
- [Comma Operator: `,`](../cpp/comma-operator.md) - Make built-in operators title consistent
- [Data Type Ranges](../cpp/data-type-ranges.md)
  - fixes for customer feedback
  - Repo sync for protected branch
- [Destructors (C++)](../cpp/destructors-cpp.md)
  - Update destructors-cpp.md
  - Small nits for destructors cpp
- [Equality operators: `==` and `!=`](../cpp/equality-operators-equal-equal-and-exclpt-equal.md) - Make built-in operators title consistent
- [Examples of Lambda Expressions](../cpp/examples-of-lambda-expressions.md)
  - fix github issue - code example wrong
  - Repo sync for protected branch
- [Explicit Type Conversion Operator: `()`](../cpp/explicit-type-conversion-operator-parens.md) - Make built-in operators title consistent
- [Explicitly Defaulted and Deleted Functions](../cpp/explicitly-defaulted-and-deleted-functions.md)
  - New warning topic for C5267
  - Repo sync for protected branch
- [Function Call Operator: `()`](../cpp/function-call-operator-parens.md) - Make built-in operators title consistent
- [How to: Create and Use shared_ptr instances](../cpp/how-to-create-and-use-shared-ptr-instances.md)
  - draft
  - Repo sync for protected branch
- [Indirection Operator: `*`](../cpp/indirection-operator-star.md) - Make built-in operators title consistent
- [Inline functions (C++)](../cpp/inline-functions-cpp.md)
  - Address mistakes in inline functions cpp
  - Remove the content of the contrast between inline functions and macros
- [Left shift and right shift operators: `<<` and `>>`](../cpp/left-shift-and-right-shift-operators-input-and-output.md) - Fix built-in operators toc yml
- [Logical negation operator: `!`](../cpp/logical-negation-operator-exclpt.md) - Make built-in operators title consistent
- [Modern C++ best practices for exceptions and error handling](../cpp/errors-and-exception-handling-modern-cpp.md)
  - fix UUF issues
  - Repo sync for protected branch
- [Module Class](../cppcx/wrl/module-class.md) - Fix various typos
- [Multiplicative Operators and the Modulus Operator](../cpp/multiplicative-operators-and-the-modulus-operator.md) - Make built-in operators title consistent
- [Mutable Data Members (C++)](../cpp/mutable-data-members-cpp.md) - Tighten wording in mutable data members
- [Named modules tutorial (C++)](../cpp/tutorial-named-modules-cpp.md)
  - line edits
  - Repo sync for protected branch
- [Namespaces (C++)](../cpp/namespaces-cpp.md) - Add file hint in namespaces-cpp.md
- [Nonstandard Behavior](../cpp/nonstandard-behavior.md) - Standardize C++ version naming
- [One's complement operator: `~`](../cpp/one-s-complement-operator-tilde.md) - Make built-in operators title consistent
- [Overview of modules in C++](../cpp/modules-cpp.md)
  - line edits
  - some line edits
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Platform::Collections::UnorderedMap Class](../cppcx/platform-collections-unorderedmap-class.md) - Fix various typos
- [Postfix Increment and Decrement Operators: `++` and `--`](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md) - Make built-in operators title consistent
- [Prefix Increment and Decrement Operators: `++` and `--`](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md) - Make built-in operators title consistent
- [Primary Expressions](../cpp/primary-expressions.md)
  - updates per #4816
  - Repo sync for protected branch
- [protected (C++)](../cpp/protected-cpp.md) - protected-cpp.md - grammar and consistency
- [References (C++)](../cpp/references-cpp.md)
  - fix UUF issues
  - Repo sync for protected branch
- [Relational Operators: `<`, `>`, `<=`, and `>=`](../cpp/relational-operators-equal-and-equal.md) - Make built-in operators title consistent
- [Subscript Operator: `[]`](../cpp/subscript-operator.md)
  - Make built-in operators title consistent
  - Fix built-in operators toc yml
- [The `this` pointer](../cpp/this-pointer.md)
  - updates per #4816
  - Repo sync for protected branch
- [Tutorial: Import the C++ standard library using modules from the command line](../cpp/tutorial-import-stl-named-module.md)
  - call out colon form for /fo
  - update /fo flag info
  - explain switch options
  - some line edits
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Unary Plus and Negation Operators: `+` and `-`](../cpp/unary-plus-and-negation-operators-plus-and.md) - Make built-in operators title consistent

### Cross platform development

**Updated articles**

- [Cross-platform mobile development examples](../cross-platform/cross-platform-mobile-development-examples.md)
  - Fix #5438 and product team issue
  - Repo sync for protected branch
- [Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)
  - updates regarding Xamarin
  - Repo sync for protected branch

### C runtime library

**Updated articles**

- [`__RTDynamicCast`](../c-runtime-library/rtdynamiccast.md)
  - Fixes #3195 - update required header file
  - Repo sync for protected branch
- [`_CrtMemDumpStatistics`](../c-runtime-library/reference/crtmemdumpstatistics.md) - Remove stray trailing escapes
- [`_CrtSetBreakAlloc`](../c-runtime-library/reference/crtsetbreakalloc.md) - Remove stray trailing escapes
- [`_CrtSetReportFile`](../c-runtime-library/reference/crtsetreportfile.md) - Remove stray trailing escapes
- [`_fclose_nolock`](../c-runtime-library/reference/fclose-nolock.md) - Tweak nolock function descriptions
- [`_fflush_nolock`](../c-runtime-library/reference/fflush-nolock.md) - Tweak nolock function descriptions
- [`_fgetc_nolock`, `_fgetwc_nolock`](../c-runtime-library/reference/fgetc-nolock-fgetwc-nolock.md) - Tweak nolock function descriptions
- [`_fputc_nolock`, `_fputwc_nolock`](../c-runtime-library/reference/fputc-nolock-fputwc-nolock.md) - Tweak nolock function descriptions
- [`_fread_nolock_s`](../c-runtime-library/reference/fread-nolock-s2.md) - Tweak nolock function descriptions
- [`_fread_nolock`](../c-runtime-library/reference/fread-nolock.md) - Tweak nolock function descriptions
- [`_fseek_nolock`, `_fseeki64_nolock`](../c-runtime-library/reference/fseek-nolock-fseeki64-nolock.md) - Tweak nolock function descriptions
- [`_fstat`, `_fstat32`, `_fstat64`, `_fstati64`, `_fstat32i64`, `_fstat64i32`](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)
  - Fixes #3706
  - Repo sync for protected branch
- [`_ftell_nolock`, `_ftelli64_nolock`](../c-runtime-library/reference/ftell-nolock-ftelli64-nolock.md) - Tweak nolock function descriptions
- [`_fwrite_nolock`](../c-runtime-library/reference/fwrite-nolock.md) - Tweak nolock function descriptions
- [`_getc_nolock`, `_getwc_nolock`](../c-runtime-library/reference/getc-nolock-getwc-nolock.md) - Tweak nolock function descriptions
- [`_getch_nolock`, `_getwch_nolock`](../c-runtime-library/reference/getch-nolock-getwch-nolock.md) - Tweak nolock function descriptions
- [`_getchar_nolock`, `_getwchar_nolock`](../c-runtime-library/reference/getchar-nolock-getwchar-nolock.md) - Tweak nolock function descriptions
- [`_getche_nolock`, `_getwche_nolock`](../c-runtime-library/reference/getche-nolock-getwche-nolock.md) - Tweak nolock function descriptions
- [`_nolock` functions](../c-runtime-library/nolock-functions.md) - Tabulate nolock functions
- [`_putc_nolock`, `_putwc_nolock`](../c-runtime-library/reference/putc-nolock-putwc-nolock.md) - Tweak nolock function descriptions
- [`_putch_nolock`, `_putwch_nolock`](../c-runtime-library/reference/putch-nolock-putwch-nolock.md) - Tweak nolock function descriptions
- [`_putchar_nolock`, `_putwchar_nolock`](../c-runtime-library/reference/putchar-nolock-putwchar-nolock.md) - Tweak nolock function descriptions
- [`_read`](../c-runtime-library/reference/read.md) - Remove stray trailing escapes
- [`_set_se_translator`](../c-runtime-library/reference/set-se-translator.md) - Remove stray trailing escapes
- [`_splitpath`, `_wsplitpath`](../c-runtime-library/reference/splitpath-wsplitpath.md)
  - fix github 4833
  - Repo sync for protected branch
- [`_ungetc_nolock`, `_ungetwc_nolock`](../c-runtime-library/reference/ungetc-nolock-ungetwc-nolock.md) - Tweak nolock function descriptions
- [`_vscprintf_p`, `_vscprintf_p_l`, `_vscwprintf_p`, `_vscwprintf_p_l`](../c-runtime-library/reference/vscprintf-p-vscprintf-p-l-vscwprintf-p-vscwprintf-p-l.md) - Remove stray trailing escapes
- [`freopen`, `_wfreopen`](../c-runtime-library/reference/freopen-wfreopen.md) - Remove stray trailing escapes
- [`memcpy`, `wmemcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md)
  - Fixes #3706
  - Remove stray trailing escapes
  - Repo sync for protected branch
- [`memmove`, `wmemmove`](../c-runtime-library/reference/memmove-wmemmove.md)
  - Fixes #3706
  - Remove stray trailing escapes
  - Repo sync for protected branch
- [`set_unexpected` (CRT)](../c-runtime-library/reference/set-unexpected-crt.md) - Remove stray trailing escapes
- [`setlocale`, `_wsetlocale`](../c-runtime-library/reference/setlocale-wsetlocale.md)
  - fix github 4879
  - Repo sync for protected branch
- [`strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`](../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md) - Remove stray trailing escapes
- [`toupper`, `_toupper`, `towupper`, `_toupper_l`, `_towupper_l`](../c-runtime-library/reference/toupper-toupper-towupper-toupper-l-towupper-l.md)
  - Fixes #3706
  - Repo sync for protected branch
- [Translation mode constants](../c-runtime-library/translation-mode-constants.md) - Clarify that _O_TEXT is ANSI.

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

- [Compiler error C2055](../error-messages/compiler-errors-1/compiler-error-c2055.md)
  - fixes for customer feedback
  - Repo sync for protected branch
- [Compiler Error C2101](../error-messages/compiler-errors-1/compiler-error-c2101.md) - Update C2101
- [Compiler Error C2102](../error-messages/compiler-errors-1/compiler-error-c2102.md) - Add example for C2102
- [Compiler Error C2103](../error-messages/compiler-errors-1/compiler-error-c2103.md) - Add example for C2103
- [Compiler Error C2385](../error-messages/compiler-errors-1/compiler-error-c2385.md) - Revamp C2385
- [Compiler Error C2487](../error-messages/compiler-errors-1/compiler-error-c2487.md) - Add example for C2487
- [Compiler Error C2526](../error-messages/compiler-errors-2/compiler-error-c2526.md) - Add example for C2526
- [Compiler Error C2537](../error-messages/compiler-errors-2/compiler-error-c2537.md) - Update C2537
- [Compiler error C2548](../error-messages/compiler-errors-2/compiler-error-c2548.md) - Improve C2548
- [Compiler Error C2751](../error-messages/compiler-errors-2/compiler-error-c2751.md) - Improve C2751
- [Compiler Error C2860](../error-messages/compiler-errors-2/compiler-error-c2860.md) - Update C2860
- [Compiler Error C3859](../error-messages/compiler-errors-2/compiler-error-c3859.md)
  - Update compiler-error-c3859.md
  - Repo sync for protected branch
- [Compiler errors C2001 - C3999, C7000 - C7999](../error-messages/compiler-errors-1/compiler-errors-c2000-c3999.md)
  - Error 2000 was never emitted.
  - Repo sync for protected branch
- [Compiler errors C2001 through C2099](../error-messages/compiler-errors-1/compiler-errors-c2001-through-c2099.md)
  - Error 2000 was never emitted.
  - Repo sync for protected branch
- [Compiler errors C2300 Through C2399](../error-messages/compiler-errors-1/compiler-errors-c2300-through-c2399.md) - Document C2323
- [Compiler errors C3300 Through C3399](../error-messages/compiler-errors-2/compiler-errors-c3300-through-c3399.md)
  - Update compiler-errors-c3300-through-c3399.md
  - Repo sync for protected branch
- [Compiler errors C3500 through C3999](../error-messages/compiler-errors-2/compiler-errors-c3500-through-c3999.md)
  - Update compiler-error-c3859.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 2) C4091](../error-messages/compiler-warnings/compiler-warning-level-1-c4091.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 3) C4133](../error-messages/compiler-warnings/compiler-warning-level-3-c4133.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 3) C4359](../error-messages/compiler-warnings/compiler-warning-level-3-c4359.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 4, off) C4355](../error-messages/compiler-warnings/compiler-warning-c4355.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 4) C4052](../error-messages/compiler-warnings/compiler-warning-level-1-c4052.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 4) C4112](../error-messages/compiler-warnings/compiler-warning-levels-1-and-4-c4112.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1 and level 4) C4223](../error-messages/compiler-warnings/compiler-warning-levels-1-and-4-c4223.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4002](../error-messages/compiler-warnings/compiler-warning-level-1-c4002.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4003](../error-messages/compiler-warnings/compiler-warning-level-1-c4003.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4141](../error-messages/compiler-warnings/compiler-warning-level-1-c4141.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4229](../error-messages/compiler-warnings/compiler-warning-level-1-c4229.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4233](../error-messages/compiler-warnings/compiler-warning-level-4-c4233.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4235](../error-messages/compiler-warnings/compiler-warning-level-4-c4235.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4368](../error-messages/compiler-warnings/compiler-warning-c4368.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4392](../error-messages/compiler-warnings/compiler-warning-level-1-c4392.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4394](../error-messages/compiler-warnings/compiler-warning-c4394.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1, Error) C4399](../error-messages/compiler-warnings/compiler-warning-level-1-c4399.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1) C4178](../error-messages/compiler-warnings/compiler-warning-level-1-c4178.md) - Rectify example in C4178
- [Compiler Warning (level 1) C4305](../error-messages/compiler-warnings/compiler-warning-level-1-c4305.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1) C4329](../error-messages/compiler-warnings/compiler-warning-level-1-c4329.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1) C4335](../error-messages/compiler-warnings/compiler-warning-c4335.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 1) C4384](../error-messages/compiler-warnings/compiler-warning-level-1-c4384.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler warning (level 1) C4834](../error-messages/compiler-warnings/c4834.md)
  - add new warning for VS 17.6 - C5266
  - Repo sync for protected branch
  - Standardize C++ version naming
- [Compiler Warning (level 1) C5072](../error-messages/compiler-warnings/compiler-warning-c5072.md)
  - add warning c5072
  - Capitalize error code
  - Repo sync for protected branch
- [Compiler Warning (level 2 and level 4) C4200](../error-messages/compiler-warnings/compiler-warning-levels-2-and-4-c4200.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 2) C4150](../error-messages/compiler-warnings/compiler-warning-level-2-c4150.md)
  - Update compiler-warning-level-2-c4150.md
  - Repo sync for protected branch
- [Compiler Warning (level 2) C4251](../error-messages/compiler-warnings/compiler-warning-level-1-c4251.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - improve C4251
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Compiler Warning (level 3 and level 4) C4101](../error-messages/compiler-warnings/compiler-warning-level-3-c4101.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 3 and level 4) C4189](../error-messages/compiler-warnings/compiler-warning-level-4-c4189.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 3 and level 4) C4278](../error-messages/compiler-warnings/compiler-warning-level-3-c4278.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 3, off) C4165](../error-messages/compiler-warnings/compiler-warning-level-1-c4165.md)
  - Update warning levels in compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 3, off) C4191](../error-messages/compiler-warnings/compiler-warning-level-3-c4191.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 3, off) C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 3, off) C4265](../error-messages/compiler-warnings/compiler-warning-level-3-c4265.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 3, off) C4287](../error-messages/compiler-warnings/compiler-warning-level-3-c4287.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 3) C4007](../error-messages/compiler-warnings/compiler-warning-level-2-c4007.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 3) C4066](../error-messages/compiler-warnings/compiler-warning-level-3-c4066.md) - Add example for C4066
- [Compiler Warning (level 3) C4334](../error-messages/compiler-warnings/compiler-warning-level-3-c4334.md)
  - Update compiler-warning-level-3-c4334.md
  - Repo sync for protected branch
- [Compiler Warning (level 3) C4371](../error-messages/compiler-warnings/c4371.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, no longer emitted) C4001](../error-messages/compiler-warnings/compiler-warning-level-4-c4001.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4061](../error-messages/compiler-warnings/compiler-warning-level-4-c4061.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4062](../error-messages/compiler-warnings/compiler-warning-level-4-c4062.md)
  - Update compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4255](../error-messages/compiler-warnings/compiler-warning-level-4-c4255.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4263](../error-messages/compiler-warnings/compiler-warning-level-4-c4263.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4264](../error-messages/compiler-warnings/compiler-warning-level-1-c4264.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4266](../error-messages/compiler-warnings/compiler-warning-level-4-c4266.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4289](../error-messages/compiler-warnings/compiler-warning-level-4-c4289.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4296](../error-messages/compiler-warnings/compiler-warning-level-4-c4296.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4339](../error-messages/compiler-warnings/compiler-warning-level-4-c4339.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4365](../error-messages/compiler-warnings/compiler-warning-level-4-c4365.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4, off) C4388](../error-messages/compiler-warnings/c4388.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4019](../error-messages/compiler-warnings/compiler-warning-level-4-c4019.md)
  - clarify that only applies to C
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4218](../error-messages/compiler-warnings/compiler-warning-level-1-c4218.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4254](../error-messages/compiler-warnings/compiler-warning-level-4-c4254.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4306](../error-messages/compiler-warnings/compiler-warning-level-3-c4306.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4310](../error-messages/compiler-warnings/compiler-warning-level-3-c4310.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4324](../error-messages/compiler-warnings/compiler-warning-level-4-c4324.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4373](../error-messages/compiler-warnings/compiler-warning-level-3-c4373.md)
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
- [Compiler Warning (level 4) C4389](../error-messages/compiler-warnings/compiler-warning-level-4-c4389.md) - Capitalize error code
- [Compiler warning (level 4) C5267](../error-messages/compiler-warnings/c5267.md)
  - add warning level info
  - New warning topic for C5267
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Compiler Warning (levels 3 and 4) C4244](../error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244.md)
  - New warning topic for C5267
  - Repo sync for protected branch
- [Compiler Warning C5243](../error-messages/compiler-warnings/c5243.md)
  - Update c5243.md
  - Repo sync for protected branch
- [Compiler Warnings by compiler version](../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md)
  - Update compiler-warnings-by-compiler-version.md
  - add new warning for VS 17.6 - C5266
  - New warning topic for C5267
  - Repo sync for protected branch
  - Add links to compiler warnings by compiler version
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Linker tools errors and warnings (LNKxxxx)](../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
  - new linker warnings: 4306 & 4307
  - Repo sync for protected branch
- [Microsoft C/C++ compiler warnings C4000 through C4199](../error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199.md)
  - Split warnings - pull in work RageKing8 did
  - Update compiler-warnings-c4000-through-c4199.md
  - Update warning levels in compiler-warnings-c4000-through-c4199.md
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Microsoft C/C++ compiler warnings C4000 through C5399](../error-messages/compiler-warnings/compiler-warnings-c4000-c5999.md)
  - Split warnings - pull in work RageKing8 did
  - Repo sync for protected branch
- [Microsoft C/C++ compiler warnings C4200 through C4399](../error-messages/compiler-warnings/compiler-warnings-c4200-through-c4399.md)
  - Split warnings - pull in work RageKing8 did
  - Update compiler-warnings-c4200-through-c4399.md
  - Update compiler-warnings-c4200-through-c4399.md
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Microsoft C/C++ compiler warnings C4400 through C4599](../error-messages/compiler-warnings/compiler-warnings-c4400-through-c4599.md)
  - Split warnings - pull in work RageKing8 did
  - Add missing warnings to compiler-warnings-c4400-through-c4599
  - Repo sync for protected branch
  - Add some warning entries
  - Repo sync for protected branch
- [Microsoft C/C++ compiler warnings C4600 through C4799](../error-messages/compiler-warnings/compiler-warnings-c4600-through-c4799.md)
  - Split warnings - pull in work RageKing8 did
  - Update compiler-warnings-c4600-through-c4799.md
  - Repo sync for protected branch
  - Add some warning entries
  - Repo sync for protected branch
- [Microsoft C/C++ compiler warnings C4800 through C4999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md)
  - Split warnings - pull in work RageKing8 did
  - Update missing warning messages in compiler-warnings-c4800-through-c4999.md
  - add warning c5072
  - add new warning for VS 17.6 - C5266
  - New warning topic for C5267
  - Repo sync for protected branch
  - Add some warning entries
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch

### C++ in Visual Studio tutorials

**Updated articles**

- [Create a console calculator in C++](../get-started/tutorial-console-cpp.md)
  - update
  - draft
  - Repo sync for protected branch
  - Repo sync for protected branch

### Read and write code using C++ in Visual Studio

**New articles**

- [C++ Include Diagnostics in Visual Studio](../ide/include-diagnostics.md)
- [Visualize C/C++ macro expansion](../ide/visualize-macro-expansion.md)

**Updated articles**

- [Visualize C/C++ macro expansion](../ide/visualize-macro-expansion.md)
  - add keyboard accelerators
  - new topic for C++ macro tools
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Walkthrough: Deploying Your Program (C++)](../ide/walkthrough-deploying-your-program-cpp.md)
  - update steps
  - Repo sync for protected branch

### Linux with C++ in Visual Studio

**Updated articles**

- [Connect to your target Linux system in Visual Studio](../linux/connect-to-your-remote-linux-computer.md)
  - Update connect-to-your-remote-linux-computer.md
  - draft
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Update connect-to-your-remote-linux-computer.md

### C/C++ in Visual Studio overview

**New articles**

- [Microsoft Visual C++ compiler versioning](../overview/compiler-versions.md)

**Updated articles**

- [C and C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2017](../overview/cpp-conformance-improvements-2017.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2019](../overview/cpp-conformance-improvements-2019.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](../overview/cpp-conformance-improvements.md)
  - updates for 17.10
  - Conformance for 17.10
  - add _alignof
  - Conformance
  - fix f1 lookup
  - add link that wasn't ready until release
  - Whatsnew
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
- [How to report a problem with the Microsoft C++ toolset or documentation](../overview/how-to-report-a-problem-with-the-visual-cpp-toolset.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [Microsoft C/C++ help and community](../overview/visual-cpp-help-and-community.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [Microsoft C/C++ language conformance by Visual Studio version](../overview/visual-cpp-language-conformance.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [Overview of C++ development in Visual Studio](../overview/overview-of-cpp-development.md)
  - address perf
  - Repo sync for protected branch
- [Supported platforms (Visual C++)](../overview/supported-platforms-visual-cpp.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [Visual Studio C++ Samples](../overview/visual-cpp-samples.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [What's new for C++ in Visual Studio 2017](../overview/what-s-new-for-cpp-2017.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [What's new for C++ in Visual Studio 2019](../overview/what-s-new-for-cpp-2019.md)
  - fix f1 lookup
  - Repo sync for protected branch
- [What's new for C++ in Visual Studio 2022](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)
  - updates for 17.10
  - fix #4553 - adds release note links
  - add link to backend improvments
  - add links
  - Conformance
  - fix f1 lookup
  - remove duplicated section
  - add link that wasn't ready until release
  - Whatsnew
  - Repo sync for protected branch
  - Resolve syncing conflicts from FromPrivateLiveToMaster to main
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch

### Parallel programming in C++ in Visual Studio

**Updated articles**

- [tile_barrier Class](../parallel/amp/reference/tile-barrier-class.md) - Fix unclosed links

### C++ porting and upgrade guide

**Updated articles**

- [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md)
  - fixes #5290 - clarify linking binaries built with different versions of the toolset
  - Repo sync for protected branch

### C/C++ preprocessor reference

**Updated articles**

- [Compiler warnings that are off by default](../preprocessor/compiler-warnings-that-are-off-by-default.md)
  - add new warning for VS 17.6 - C5266
  - add warning level info
  - New warning topic for C5267
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Repo sync for protected branch
- [Predefined macros](../preprocessor/predefined-macros.md)
  - document __arm_arch macro
  - add compiler versions article
  - Repo sync for protected branch
  - Repo sync for protected branch

### C++ Standard Template Library (STL) reference

**Updated articles**

- [`<bitset>` operators](../standard-library/bitset-operators.md) - Fix stream typos
- [`<chrono>` operators](../standard-library/chrono-operators.md)
  - Remove stray trailing escapes
  - Standardize C++ version naming
- [`<iterator>` functions](../standard-library/iterator-functions.md) - Address incorrect placement of period
- [`<iterator>` operators](../standard-library/iterator-operators.md) - Address incorrect placement of period
- [`<ranges>` functions](../standard-library/range-functions.md) - Address incorrect placement of period
- [`<valarray>` operators](../standard-library/valarray-operators.md) - Fix various typos
- [`bitset` class](../standard-library/bitset-class.md) - Fix various typos
- [`deque` Class](../standard-library/deque-class.md) - Address incorrect placement of period
- [`elements_view` class (C++ Standard Library)](../standard-library/elements-view-class.md) - Standardize C++ version naming
- [`file_clock` class](../standard-library/file-clock-class.md)
  - fix user feedback 227131
  - Repo sync for protected branch
- [`is_clock` structure](../standard-library/is-clock-struct.md) - Standardize C++ version naming
- [`keys_view` class (C++ Standard Library)](../standard-library/keys-view-class.md) - Standardize C++ version naming
- [`month_day_last` class](../standard-library/month-day-last-class.md) - Standardize C++ version naming
- [`month_weekday_last` class](../standard-library/month-weekday-last-class.md) - Standardize C++ version naming
- [`month_weekday` class](../standard-library/month-weekday-class.md) - Standardize C++ version naming
- [`mutex` class (C++ Standard Library)](../standard-library/mutex-class-stl.md)
  - fixes for customer feedback
  - Repo sync for protected branch
- [`sys_info` struct](../standard-library/sys-info-struct.md) - Address incorrect placement of period
- [`valarray` class](../standard-library/valarray-class.md) - Fix various typos
- [`values_view` class (C++ Standard Library)](../standard-library/values-view-class.md) - Standardize C++ version naming
- [`weekday` class](../standard-library/weekday-class.md) - Standardize C++ version naming
- [`year_month_day` class](../standard-library/year-month-day-class.md) - Standardize C++ version naming
- [`year_month_weekday_last` class](../standard-library/year-month-weekday-last-class.md) - Standardize C++ version naming
- [`year_month_weekday` class](../standard-library/year-month-weekday-class.md) - Standardize C++ version naming
- [forward_list Class](../standard-library/forward-list-class.md) - Address incorrect placement of period
- [iterator_traits Struct](../standard-library/iterator-traits-struct.md) - Address incorrect placement of period
- [move_iterator Class](../standard-library/move-iterator-class.md) - Address incorrect placement of period
- [not_equal_to Struct](../standard-library/not-equal-to-struct.md) - Fix various typos
- [Range adaptors](../standard-library/range-adaptors.md) - Standardize C++ version naming
- [scoped_allocator_adaptor Class](../standard-library/scoped-allocator-adaptor-class.md) - Fix unclosed links
- [type_index Class](../standard-library/type-index-class.md) - Address incorrect placement of period

### Overview of Windows programming in C++

**Updated articles**

- [ClickOnce Deployment for Visual C++ Applications](../windows/clickonce-deployment-for-visual-cpp-applications.md)
  - fix github issue - code example wrong
  - Repo sync for protected branch
- [Microsoft Visual C++ Redistributable latest supported downloads](../windows/latest-supported-vc-redist.md)
  - note 2013 no longer supported
  - Fix #5438 and product team issue
  - fix #4553 - adds release note links
  - Update latest-supported-vc-redist.md
  - Repo sync for protected branch
  - Repo sync for protected branch
  - Resolve syncing conflicts from FromPrivateLiveToMaster to main
  - Repo sync for protected branch
- [Walkthrough: Create a Standard C++ Program (C++)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)
  - address perf
  - Repo sync for protected branch
- [Windows C++ desktop application types](../windows/overview-of-windows-programming-in-cpp.md)
  - address perf
  - Repo sync for protected branch
- [Working with Resource Files](../windows/working-with-resource-files.md)
  - address perf
  - Repo sync for protected branch


## Community contributors

The following people contributed to the C++, C, and Assembler docs during this period. Thank you! See our [contributor guide](/contribute) if you'd like to learn how to contribute.

- [Rageking8](https://github.com/Rageking8) ![26 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-26-green)
- [0xbadfca11](https://github.com/0xbadfca11) ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [edmund-leibert](https://github.com/edmund-leibert) - Edmund Leibert III ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [glenn-slayden](https://github.com/glenn-slayden) - Glenn Slayden ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [lb90](https://github.com/lb90) ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)
- [tsuyo](https://github.com/tsuyo) - Tsuyoshi Miyake ![1 pull requests.](https://img.shields.io/badge/Merged%20Pull%20Requests-1-green)

