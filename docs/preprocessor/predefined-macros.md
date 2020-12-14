---
title: "Predefined macros"
description: "Lists and describes the Microsoft C++ compiler predefined preprocessor macros."
ms.custom: "update_every_version"
ms.date: 12/14/2020
f1_keywords: ["_ATL_VER", "__ATOM__", "__AVX__", "__AVX2__", "__AVX512BW__", "__AVX512CD__", "__AVX512DQ__", "__AVX512F__", "__AVX512VL__", "_CHAR_UNSIGNED", "__CLR_VER", "_CONTROL_FLOW_GUARD", "__COUNTER__", "__cplusplus", "__cplusplus_cli", "__cplusplus_winrt", "_CPPRTTI", "_CPPUNWIND", "__DATE__", "_DEBUG", "_DLL", "__FILE__", "__FUNCDNAME__", "__FUNCSIG__", "__FUNCTION__", "_INTEGRAL_MAX_BITS", "_ISO_VOLATILE", "_KERNEL_MODE", "__LINE__", "_M_AMD64", "_M_ARM", "_M_ARM_ARMV7VE", "_M_ARM_FP", "_M_ARM64", "_M_CEE", "_M_CEE_PURE", "_M_CEE_SAFE", "_M_FP_EXCEPT", "_M_FP_FAST", "_M_FP_PRECISE", "_M_FP_STRICT", "_M_IX86", "_M_IX86_FP", "_M_X64", "_MANAGED", "_MFC_VER", "_MSC_BUILD", "_MSC_EXTENSIONS", "_MSC_FULL_VER", "_MSC_VER", "_MSVC_LANG", "__MSVC_RUNTIME_CHECKS", "_MT", "_NATIVE_WCHAR_T_DEFINED", "_NO_SIZED_DEALLOCATION", "_OPENMP", "_PREFAST_", "_RESUMABLE_FUNCTIONS_SUPPORTED", "_RTC_CONVERSION_CHECKS_ENABLED", "__STDC__", "__STDC_HOSTED__", "__STDC_NO_ATOMICS__", "__STDC_NO_COMPLEX__", "__STDC_NO_THREADS__", "__STDC_NO_VLA__", "__STDC_VERSION__", "__STDCPP_THREADS__", "__TIME__", "__TIMESTAMP__", "__VA_ARGS__", "_VC_NODEFAULTLIB", "_WCHAR_T_DEFINED", "_WIN32", "_WIN64", "_WINRT_DLL"]
helpviewer_keywords: ["timestamps, preprocessor macro", "cl.exe compiler, version number", "version numbers, C/C++ compiler (cl.exe)", "macros, predefined C++", "preprocessor, macros", "predefined macros", "_ATL_VER macro", "__ATOM__ macro", "__AVX__ macro", "__AVX2__ macro", "__AVX512BW__ macro", "__AVX512CD__ macro", "__AVX512DQ__ macro", "__AVX512F__ macro", "__AVX512VL__ macro", "_CHAR_UNSIGNED macro", "__CLR_VER macro", "_CONTROL_FLOW_GUARD macro", "__COUNTER__ macro", "__cplusplus macro", "__cplusplus_cli macro", "__cplusplus_winrt macro", "_CPPRTTI macro", "_CPPUNWIND macro", "__DATE__ macro", "_DEBUG macro", "_DLL macro", "__FILE__ macro", "__FUNCDNAME__ macro", "__FUNCSIG__ macro", "__FUNCTION__ macro", "_INTEGRAL_MAX_BITS macro", "_ISO_VOLATILE macro", "_KERNEL_MODE macro", "__LINE__ macro", "_M_AMD64 macro", "_M_ARM macro", "_M_ARM_ARMV7VE macro", "_M_ARM_FP macro", "_M_ARM64 macro", "_M_CEE macro", "_M_CEE_PURE macro", "_M_CEE_SAFE macro", "_M_FP_EXCEPT macro", "_M_FP_FAST macro", "_M_FP_PRECISE macro", "_M_FP_STRICT macro", "_M_IX86 macro", "_M_IX86_FP macro", "_M_X64 macro", "_MANAGED macro", "_MFC_VER macro", "_MSC_BUILD macro", "_MSC_EXTENSIONS macro", "_MSC_FULL_VER macro", "_MSC_VER macro", "_MSVC_LANG macro", "__MSVC_RUNTIME_CHECKS macro", "_MT macro", "_NATIVE_WCHAR_T_DEFINED macro", "_NO_SIZED_DEALLOCATION macro", "_OPENMP macro", "_PREFAST_ macro", "_RESUMABLE_FUNCTIONS_SUPPORTED macro", "_RTC_CONVERSION_CHECKS_ENABLED macro", "__STDC__ macro", "__STDC_HOSTED__ macro", "__STDC_NO_ATOMICS__ macro", "__STDC_NO_COMPLEX__ macro", "__STDC_NO_THREADS__ macro", "__STDC_NO_VLA__ macro", "__STDC_VERSION__ macro", "__STDCPP_THREADS__ macro", "__TIME__ macro", "__TIMESTAMP__ macro", "__VA_ARGS__ macro", "_VC_NODEFAULTLIB macro", "_WCHAR_T_DEFINED macro", "_WIN32 macro", "_WIN64 macro", "_WINRT_DLL macro", "__func__ identifier"]
ms.assetid: 1cc5f70a-a225-469c-aed0-fe766238e23f
no-loc: [_ATL_VER, __ATOM__, __AVX__, __AVX2__, __AVX512BW__, __AVX512CD__, __AVX512DQ__, __AVX512F__, __AVX512VL__, _CHAR_UNSIGNED, __CLR_VER, _CONTROL_FLOW_GUARD, __COUNTER__, __cplusplus, __cplusplus_cli, __cplusplus_winrt, _CPPRTTI, _CPPUNWIND, __DATE__, _DEBUG, _DLL, __FILE__, __FUNCDNAME__, __FUNCSIG__, __FUNCTION__, _INTEGRAL_MAX_BITS, _ISO_VOLATILE, _KERNEL_MODE, __LINE__, _M_AMD64, _M_ARM, _M_ARM_ARMV7VE, _M_ARM_FP, _M_ARM64, _M_CEE, _M_CEE_PURE, _M_CEE_SAFE, _M_FP_EXCEPT, _M_FP_FAST, _M_FP_PRECISE, _M_FP_STRICT, _M_IX86, _M_IX86_FP, _M_X64, _MANAGED, _MFC_VER, _MSC_BUILD, _MSC_EXTENSIONS, _MSC_FULL_VER, _MSC_VER, _MSVC_LANG, __MSVC_RUNTIME_CHECKS, _MT, _NATIVE_WCHAR_T_DEFINED, _NO_SIZED_DEALLOCATION, _OPENMP, _PREFAST_, _RESUMABLE_FUNCTIONS_SUPPORTED, _RTC_CONVERSION_CHECKS_ENABLED, __STDC__, __STDC_HOSTED__, __STDC_NO_ATOMICS__, __STDC_NO_COMPLEX__, __STDC_NO_THREADS__, __STDC_NO_VLA__, __STDC_VERSION__, __STDCPP_THREADS__, __TIME__, __TIMESTAMP__, __VA_ARGS__, _VC_NODEFAULTLIB, _WCHAR_T_DEFINED, _WIN32, _WIN64, _WINRT_DLL, __func__]
---
# Predefined macros

The Microsoft C/C++ compiler (MSVC) predefines certain preprocessor macros, depending on the language (C or C++), the compilation target, and the chosen compiler options.

MSVC supports the predefined preprocessor macros required by the ANSI/ISO C99, C11, and C17 standards, and the ISO C++14 and C++17 standards. The implementation also supports several more Microsoft-specific preprocessor macros. Some macros are defined only for specific build environments or compiler options. Except where noted, the macros are defined throughout a translation unit as if they were specified as **`/D`** compiler option arguments. When defined, the macros are expanded to the specified values by the preprocessor before compilation. The predefined macros take no arguments and can't be redefined.

## Standard predefined identifier

The compiler supports this predefined identifier specified by ISO C99 and ISO C++11.

- `__func__` The unqualified and unadorned name of the enclosing function as a function-local **static const** array of **`char`**.

    ```cpp
    void example(){
        printf("%s\n", __func__);
    } // prints "example"
    ```

## Standard predefined macros

The compiler supports these predefined macros specified by the ISO C99, C11, C17, and ISO C++17 standards.

- `__cplusplus` Defined as an integer literal value when the translation unit is compiled as C++. Otherwise, undefined.

- `__DATE__` The compilation date of the current source file. The date is a constant length string literal of the form *Mmm dd yyyy*. The month name *Mmm* is the same as the abbreviated month name generated by the C Runtime Library (CRT) [asctime](../c-runtime-library/reference/asctime-wasctime.md) function. The first character of date *dd* is a space if the value is less than 10. This macro is always defined.

- `__FILE__` The name of the current source file. `__FILE__` expands to a character string literal. To ensure that the full path to the file is displayed, use [**`/FC`** (Full Path of Source Code File in Diagnostics)](../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md). This macro is always defined.

- `__LINE__` Defined as the integer line number in the current source file. The value of the `__LINE__` macro can be changed by using a `#line` directive. This macro is always defined.

- `__STDC__` Defined as 1 only when compiled as C and if the [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is specified. Otherwise, undefined.

- `__STDC_HOSTED__` Defined as 1 if the implementation is a *hosted implementation*, one that supports the entire required standard library. Otherwise, defined as 0.

- `__STDC_NO_ATOMICS__` Defined as 1 if the implementation doesn't support optional standard atomics. The MSVC implementation defines it as 1 when compiled as C and one of the [`/std`](../build/reference/std-specify-language-standard-version.md) C11 or C17 options is specified.

- `__STDC_NO_COMPLEX__` Defined as 1 if the implementation doesn't support optional standard complex numbers. The MSVC implementation defines it as 1 when compiled as C and one of the [`/std`](../build/reference/std-specify-language-standard-version.md) C11 or C17 options is specified.

- `__STDC_NO_THREADS__` Defined as 1 if the implementation doesn't support optional standard threads. The MSVC implementation defines it as 1 when compiled as C and one of the [`/std`](../build/reference/std-specify-language-standard-version.md) C11 or C17 options is specified.

- `__STDC_NO_VLA__` Defined as 1 if the implementation doesn't support standard variable length arrays. The MSVC implementation defines it as 1 when compiled as C and one of the [`/std`](../build/reference/std-specify-language-standard-version.md) C11 or C17 options is specified.

- `__STDC_VERSION__` Defined when compiled as C and one of the **`/std`** C11 or C17 options is specified. It expands to `201112L` for [`/std:c11`](../build/reference/std-specify-language-standard-version.md), and `201710L` for [`/std:c17`](../build/reference/std-specify-language-standard-version.md).

- `__STDCPP_THREADS__` Defined as 1 if and only if a program can have more than one thread of execution, and compiled as C++. Otherwise, undefined.

- `__TIME__` The time of translation of the preprocessed translation unit. The time is a character string literal of the form *hh:mm:ss*, the same as the time returned by the CRT [asctime](../c-runtime-library/reference/asctime-wasctime.md) function. This macro is always defined.

## Microsoft-specific predefined macros

MSVC supports these additional predefined macros.

- `__ATOM__` Defined as 1 when the [`/favor:ATOM`](../build/reference/favor-optimize-for-architecture-specifics.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX__` Defined as 1 when the [`/arch:AVX`](../build/reference/arch-x86.md), [`/arch:AVX2`](../build/reference/arch-x86.md), or [`/arch:AVX512`](../build/reference/arch-x86.md) compiler options are set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX2__` Defined as 1 when the [`/arch:AVX2`](../build/reference/arch-x86.md) or [`/arch:AVX512`](../build/reference/arch-x86.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX512BW__` Defined as 1 when the [`/arch:AVX512`](../build/reference/arch-x86.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX512CD__` Defined as 1 when the [`/arch:AVX512`](../build/reference/arch-x86.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX512DQ__` Defined as 1 when the [`/arch:AVX512`](../build/reference/arch-x86.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX512F__` Defined as 1 when the [`/arch:AVX512`](../build/reference/arch-x86.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `__AVX512VL__` Defined as 1 when the [`/arch:AVX512`](../build/reference/arch-x86.md) compiler option is set and the compiler target is x86 or x64. Otherwise, undefined.

- `_CHAR_UNSIGNED` Defined as 1 if the default **`char`** type is unsigned. This value is defined when the [**`/J`** (Default char type is unsigned)](../build/reference/j-default-char-type-is-unsigned.md) compiler option is set. Otherwise, undefined.

- `__CLR_VER` Defined as an integer literal that represents the version of the Common Language Runtime (CLR) used to compile the app. The value is encoded in the form `Mmmbbbbb`, where `M` is the major version of the runtime, `mm` is the minor version of the runtime, and `bbbbb` is the build number. `__CLR_VER` is defined if the [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) compiler option is set. Otherwise, undefined.

    ```cpp
    // clr_ver.cpp
    // compile with: /clr
    using namespace System;
    int main() {
       Console::WriteLine(__CLR_VER);
    }
    ```

- `_CONTROL_FLOW_GUARD` Defined as 1 when the [**`/guard:cf`** (Enable Control Flow Guard)](../build/reference/guard-enable-control-flow-guard.md) compiler option is set. Otherwise, undefined.

- `__COUNTER__` Expands to an integer literal that starts at 0. The value is incremented by 1 every time it's used in a source file, or in included headers of the source file. `__COUNTER__` remembers its state when you use precompiled headers. This macro is always defined.

  This example uses `__COUNTER__` to assign unique identifiers to three different objects of the same type. The `exampleClass` constructor takes an integer as a parameter. In `main`, the application declares three objects of type `exampleClass`, using `__COUNTER__` as the unique identifier parameter:

    ```cpp
    // macro__COUNTER__.cpp
    // Demonstration of __COUNTER__, assigns unique identifiers to
    // different objects of the same type.
    // Compile by using: cl /EHsc /W4 macro__COUNTER__.cpp
    #include <stdio.h>

    class exampleClass {
        int m_nID;
    public:
        // initialize object with a read-only unique ID
        exampleClass(int nID) : m_nID(nID) {}
        int GetID(void) { return m_nID; }
    };

    int main()
    {
        // __COUNTER__ is initially defined as 0
        exampleClass e1(__COUNTER__);

        // On the second reference, __COUNTER__ is now defined as 1
        exampleClass e2(__COUNTER__);

        // __COUNTER__ is now defined as 2
        exampleClass e3(__COUNTER__);

        printf("e1 ID: %i\n", e1.GetID());
        printf("e2 ID: %i\n", e2.GetID());
        printf("e3 ID: %i\n", e3.GetID());

        // Output
        // ------------------------------
        // e1 ID: 0
        // e2 ID: 1
        // e3 ID: 2

        return 0;
    }
    ```

- `__cplusplus_cli` Defined as the integer literal value 200406 when compiled as C++ and a [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) compiler option is set. Otherwise, undefined. When defined, `__cplusplus_cli` is in effect throughout the translation unit.

    ```cpp
    // cplusplus_cli.cpp
    // compile by using /clr
    #include "stdio.h"
    int main() {
       #ifdef __cplusplus_cli
          printf("%d\n", __cplusplus_cli);
       #else
          printf("not defined\n");
       #endif
    }
    ```

- `__cplusplus_winrt` Defined as the integer literal value 201009 when compiled as C++ and the [**`/ZW`** (Windows Runtime Compilation)](../build/reference/zw-windows-runtime-compilation.md) compiler option is set. Otherwise, undefined.

- `_CPPRTTI` Defined as 1 if the [**`/GR`** (Enable Run-Time Type Information)](../build/reference/gr-enable-run-time-type-information.md) compiler option is set. Otherwise, undefined.

- `_CPPUNWIND` Defined as 1 if one or more of the [**`/GX`** (Enable Exception Handling)](../build/reference/gx-enable-exception-handling.md), [**`/clr`** (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md), or [**`/EH`** (Exception Handling Model)](../build/reference/eh-exception-handling-model.md) compiler options are set. Otherwise, undefined.

- `_DEBUG` Defined as 1 when the [`/LDd`](../build/reference/md-mt-ld-use-run-time-library.md), [`/MDd`](../build/reference/md-mt-ld-use-run-time-library.md), or [`/MTd`](../build/reference/md-mt-ld-use-run-time-library.md) compiler option is set. Otherwise, undefined.

- `_DLL` Defined as 1 when the [`/MD`](../build/reference/md-mt-ld-use-run-time-library.md) or [`/MDd`](../build/reference/md-mt-ld-use-run-time-library.md) (Multithreaded DLL) compiler option is set. Otherwise, undefined.

- `__FUNCDNAME__` Defined as a string literal that contains the [decorated name](../build/reference/decorated-names.md) of the enclosing function. The macro is defined only within a function. The `__FUNCDNAME__` macro isn't expanded if you use the [`/EP`](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) or [`/P`](../build/reference/p-preprocess-to-a-file.md) compiler option.

   This example uses the `__FUNCDNAME__`, `__FUNCSIG__`, and `__FUNCTION__` macros to display function information.

   [!code-cpp[NVC_Predefined_Macros_Examples#1](../preprocessor/codesnippet/CPP/predefined-macros_1.cpp)]

- `__FUNCSIG__` Defined as a string literal that contains the signature of the enclosing function. The macro is defined only within a function. The `__FUNCSIG__` macro isn't expanded if you use the [`/EP`](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) or [`/P`](../build/reference/p-preprocess-to-a-file.md) compiler option. When compiled for a 64-bit target, the calling convention is **`__cdecl`** by default. For an example of usage, see the `__FUNCDNAME__` macro.

- `__FUNCTION__` Defined as a string literal that contains the undecorated name of the enclosing function. The macro is defined only within a function. The `__FUNCTION__` macro isn't expanded if you use the [`/EP`](../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md) or [`/P`](../build/reference/p-preprocess-to-a-file.md) compiler option. For an example of usage, see the `__FUNCDNAME__` macro.

- `_INTEGRAL_MAX_BITS` Defined as the integer literal value 64, the maximum size (in bits) for a non-vector integral type. This macro is always defined.

   ```cpp
   // integral_max_bits.cpp
   #include <stdio.h>
   int main() {
      printf("%d\n", _INTEGRAL_MAX_BITS);
   }
   ```

- `__INTELLISENSE__` Defined as 1 during an IntelliSense compiler pass in the Visual Studio IDE. Otherwise, undefined. You can use this macro to guard code the IntelliSense compiler doesn't understand, or use it to toggle between the build and IntelliSense compiler. For more information, see [Troubleshooting Tips for IntelliSense Slowness](https://devblogs.microsoft.com/cppblog/troubleshooting-tips-for-intellisense-slowness/).

- `_ISO_VOLATILE` Defined as 1 if the [`/volatile:iso`](../build/reference/volatile-volatile-keyword-interpretation.md) compiler option is set. Otherwise, undefined.

- `_KERNEL_MODE` Defined as 1 if the [**`/kernel`** (Create Kernel Mode Binary)](../build/reference/kernel-create-kernel-mode-binary.md) compiler option is set. Otherwise, undefined.

- `_M_AMD64` Defined as the integer literal value 100 for compilations that target x64 processors. Otherwise, undefined.

- `_M_ARM` Defined as the integer literal value 7 for compilations that target ARM processors. Otherwise, undefined.

- `_M_ARM_ARMV7VE` Defined as 1 when the [`/arch:ARMv7VE`](../build/reference/arch-arm.md) compiler option is set for compilations that target ARM processors. Otherwise, undefined.

- `_M_ARM_FP` Defined as an integer literal value that indicates which [`/arch`](../build/reference/arch-arm.md) compiler option was set for ARM processor targets. Otherwise, undefined.

  - A value in the range 30-39 if no **`/arch`** ARM option was specified, indicating the default architecture for ARM was set (`VFPv3`).

  - A value in the range 40-49 if **`/arch:VFPv4`** was set.

  - For more information, see [**`/arch`** (ARM)](../build/reference/arch-arm.md).

- `_M_ARM64` Defined as 1 for compilations that target 64-bit ARM processors. Otherwise, undefined.

- `_M_CEE` Defined as 001 if any [**`/clr`** (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) compiler option is set. Otherwise, undefined.

- `_M_CEE_PURE` Deprecated beginning in Visual Studio 2015. Defined as 001 if the [`/clr:pure`](../build/reference/clr-common-language-runtime-compilation.md) compiler option is set. Otherwise, undefined.

- `_M_CEE_SAFE` Deprecated beginning in Visual Studio 2015. Defined as 001 if the [`/clr:safe`](../build/reference/clr-common-language-runtime-compilation.md) compiler option is set. Otherwise, undefined.

- `_M_FP_EXCEPT` Defined as 1 if the [`/fp:except`](../build/reference/fp-specify-floating-point-behavior.md) or [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) compiler option is set. Otherwise, undefined.

- `_M_FP_FAST` Defined as 1 if the [`/fp:fast`](../build/reference/fp-specify-floating-point-behavior.md) compiler option is set. Otherwise, undefined.

- `_M_FP_PRECISE` Defined as 1 if the [`/fp:precise`](../build/reference/fp-specify-floating-point-behavior.md) compiler option is set. Otherwise, undefined.

- `_M_FP_STRICT` Defined as 1 if the [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) compiler option is set. Otherwise, undefined.

- `_M_IX86` Defined as the integer literal value 600 for compilations that target x86 processors. This macro isn't defined for x64 or ARM compilation targets.

- `_M_IX86_FP` Defined as an integer literal value that indicates the [`/arch`](../build/reference/arch-arm.md) compiler option that was set, or the default. This macro is always defined when the compilation target is an x86 processor. Otherwise, undefined. When defined, the value is:

  - 0 if the `/arch:IA32` compiler option was set.

  - 1 if the `/arch:SSE` compiler option was set.

  - 2 if the `/arch:SSE2`, `/arch:AVX`, `/arch:AVX2`, or `/arch:AVX512` compiler option was set. This value is the default if an `/arch` compiler option wasn't specified. When `/arch:AVX` is specified, the macro `__AVX__` is also defined. When `/arch:AVX2` is specified, both `__AVX__` and `__AVX2__` are also defined. When `/arch:AVX512` is specified, `__AVX__`, `__AVX2__`, `__AVX512BW__`, `__AVX512CD__`, `__AVX512DQ__`, `__AVX512F__`, and `__AVX512VL__` are also defined.

  - For more information, see [**`/arch`** (x86)](../build/reference/arch-x86.md).

- `_M_X64` Defined as the integer literal value 100 for compilations that target x64 processors. Otherwise, undefined.

- `_MANAGED` Defined as 1 when the [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) compiler option is set. Otherwise, undefined.

- `_MSC_BUILD` Defined as an integer literal that contains the revision number element of the compiler's version number. The revision number is the fourth element of the period-delimited version number. For example, if the version number of the Microsoft C/C++ compiler is 15.00.20706.01, the `_MSC_BUILD` macro evaluates to 1. This macro is always defined.

- `_MSC_EXTENSIONS` Defined as 1 if the on-by-default [**`/Ze`** (Enable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) compiler option is set. Otherwise, undefined.

- `_MSC_FULL_VER` Defined as an integer literal that encodes the major, minor, and build number elements of the compiler's version number. The major number is the first element of the period-delimited version number, the minor number is the second element, and the build number is the third element. For example, if the version number of the Microsoft C/C++ compiler is 15.00.20706.01, the `_MSC_FULL_VER` macro evaluates to 150020706. Enter `cl /?` at the command line to view the compiler's version number. This macro is always defined.

- `_MSC_VER` Defined as an integer literal that encodes the major and minor number elements of the compiler's version number. The major number is the first element of the period-delimited version number and the minor number is the second element. For example, if the version number of the Microsoft C/C++ compiler is 17.00.51106.1, the `_MSC_VER` macro evaluates to 1700. Enter `cl /?` at the command line to view the compiler's version number. This macro is always defined.

   | Visual Studio version | `_MSC_VER` |
   |--|--|
   | Visual Studio 6.0 | 1200 |
   | Visual Studio .NET 2002 (7.0) | 1300 |
   | Visual Studio .NET 2003 (7.1) | 1310 |
   | Visual Studio 2005 (8.0) | 1400 |
   | Visual Studio 2008 (9.0) | 1500 |
   | Visual Studio 2010 (10.0) | 1600 |
   | Visual Studio 2012 (11.0) | 1700 |
   | Visual Studio 2013 (12.0) | 1800 |
   | Visual Studio 2015 (14.0) | 1900 |
   | Visual Studio 2017 RTW (15.0) | 1910 |
   | Visual Studio 2017 version 15.3 | 1911 |
   | Visual Studio 2017 version 15.5 | 1912 |
   | Visual Studio 2017 version 15.6 | 1913 |
   | Visual Studio 2017 version 15.7 | 1914 |
   | Visual Studio 2017 version 15.8 | 1915 |
   | Visual Studio 2017 version 15.9 | 1916 |
   | Visual Studio 2019 RTW (16.0) | 1920 |
   | Visual Studio 2019 version 16.1 | 1921 |
   | Visual Studio 2019 version 16.2 | 1922 |
   | Visual Studio 2019 version 16.3 | 1923 |
   | Visual Studio 2019 version 16.4 | 1924 |
   | Visual Studio 2019 version 16.5 | 1925 |
   | Visual Studio 2019 version 16.6 | 1926 |
   | Visual Studio 2019 version 16.7 | 1927 |
   | Visual Studio 2019 version 16.8 | 1928 |

   To test for compiler releases or updates in a given version of Visual Studio or after, use the `>=` operator. You can use it in a conditional directive to compare `_MSC_VER` against that known version. If you have several mutually exclusive versions to compare, order your comparisons in descending order of version number. For example, this code checks for compilers released in Visual Studio 2017 and later. Next, it checks for compilers released in or after Visual Studio 2015. Then it checks for all compilers released before Visual Studio 2015:

   ```cpp
   #if _MSC_VER >= 1910
   // . . .
   #elif _MSC_VER >= 1900
   // . . .
   #else
   // . . .
   #endif
   ```

   For more information, see [Visual C++ Compiler Version](https://devblogs.microsoft.com/cppblog/visual-c-compiler-version/) in the Microsoft C++ Team Blog.

- `_MSVC_LANG` Defined as an integer literal that specifies the C++ language standard targeted by the compiler. It's set only in code compiled as C++. The macro is the integer literal value 201402L by default, or when the [`/std:c++14`](../build/reference/std-specify-language-standard-version.md) compiler option is specified. The macro is set to 201703L if the [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) compiler option is specified. It's set to a higher, unspecified value when the [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) option is specified. Otherwise, the macro is undefined. The `_MSVC_LANG` macro and [**`/std`** (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md) compiler options are available beginning in Visual Studio 2015 Update 3.

- `__MSVC_RUNTIME_CHECKS` Defined as 1 when one of the [`/RTC`](../build/reference/rtc-run-time-error-checks.md) compiler options is set. Otherwise, undefined.

- `_MSVC_TRADITIONAL`:
    - Available beginning with Visual Studio 2017 version 15.8: Defined as 0 when the preprocessor conformance mode [`/experimental:preprocessor`](../build/reference/experimental-preprocessor.md) compiler option is set. Defined as 1 by default, or when the [`/experimental:preprocessor-`](../build/reference/experimental-preprocessor.md) compiler option is set, to indicate the traditional preprocessor is in use.
    - Available beginning with Visual Studio 2019 version 16.5: Defined as 0 when the preprocessor conformance mode [`/Zc:preprocessor`](../build/reference/zc-preprocessor.md) compiler option is set. Defined as 1 by default, or when the `/Zc:preprocessor-` compiler option is set, to indicate the traditional preprocessor is in use (essentially, `/Zc:preprocessor` replaces the deprecated `/experimental:preprocessor`).

   ```cpp
   #if defined(_MSVC_TRADITIONAL) && _MSVC_TRADITIONAL
   // Logic using the traditional preprocessor
   #else
   // Logic using cross-platform compatible preprocessor
   #endif
   ```

- `_MT` Defined as 1 when [**`/MD`** or **`/MDd`** (Multithreaded DLL)](../build/reference/md-mt-ld-use-run-time-library.md) or [**`/MT`** or **`/MTd`** (Multithreaded)](../build/reference/md-mt-ld-use-run-time-library.md) is specified. Otherwise, undefined.

- `_NATIVE_WCHAR_T_DEFINED` Defined as 1 when the [`/Zc:wchar_t`](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) compiler option is set. Otherwise, undefined.

- `_OPENMP` Defined as integer literal 200203, if the [**`/openmp`** (Enable OpenMP 2.0 Support)](../build/reference/openmp-enable-openmp-2-0-support.md) compiler option is set. This value represents the date of the OpenMP specification implemented by MSVC. Otherwise, undefined.

   ```cpp
   // _OPENMP_dir.cpp
   // compile with: /openmp
   #include <stdio.h>
   int main() {
      printf("%d\n", _OPENMP);
   }
   ```

- `_PREFAST_` Defined as 1 when the [`/analyze`](../build/reference/analyze-code-analysis.md) compiler option is set. Otherwise, undefined.

- `__TIMESTAMP__` Defined as a string literal that contains the date and time of the last modification of the current source file, in the abbreviated, constant length form returned by the CRT [`asctime`](../c-runtime-library/reference/asctime-wasctime.md) function, for example, `Fri 19 Aug 13:32:58 2016`. This macro is always defined.

- `_VC_NODEFAULTLIB` Defined as 1 when the [**`/Zl`** (Omit Default Library Name)](../build/reference/zl-omit-default-library-name.md) compiler option is set. Otherwise, undefined.

- `_WCHAR_T_DEFINED` Defined as 1 when the default [`/Zc:wchar_t`](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) compiler option is set. The `_WCHAR_T_DEFINED` macro is defined but has no value if the **`/Zc:wchar_t-`** compiler option is set, and **`wchar_t`** is defined in a system header file included in your project. Otherwise, undefined.

- `_WIN32` Defined as 1 when the compilation target is 32-bit ARM, 64-bit ARM, x86, or x64. Otherwise, undefined.

- `_WIN64` Defined as 1 when the compilation target is 64-bit ARM or x64. Otherwise, undefined.

- `_WINRT_DLL` Defined as 1 when compiled as C++ and both [**`/ZW`** (Windows Runtime Compilation)](../build/reference/zw-windows-runtime-compilation.md) and [**`/LD`** or **`/LDd`**](../build/reference/md-mt-ld-use-run-time-library.md) compiler options are set. Otherwise, undefined.

No preprocessor macros that identify the ATL or MFC library version are predefined by the compiler. ATL and MFC library headers define these version macros internally. They're undefined in preprocessor directives made before the required header is included.

- `_ATL_VER` Defined in \<atldef.h> as an integer literal that encodes the ATL version number.

- `_MFC_VER` Defined in \<afxver_.h> as an integer literal that encodes the MFC version number.

## See also

[Macros (C/C++)](../preprocessor/macros-c-cpp.md)<br/>
[Preprocessor operators](../preprocessor/preprocessor-operators.md)<br/>
[Preprocessor directives](../preprocessor/preprocessor-directives.md)
