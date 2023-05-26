---
title: "Microsoft C/C++ change history 2003 - 2015"
description: "Find all the breaking changes in Microsoft C/C++ from Visual Studio 2003 through Visual Studio 2015 here."
ms.date: "5/25/2023"
helpviewer_keywords: ["breaking changes [C++]"]
---
# Microsoft C/C++ change history 2003 - 2015

This article describes all the breaking changes from Visual Studio 2015 going back to Visual Studio 2003, and in this article the terms "new behavior" or "now" refer to Visual Studio 2015 and later. The terms "old behavior" and "before" refer to Visual Studio 2013 and earlier releases.

For information about the latest version of Visual Studio, see [What's new for C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md) and [C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md).

> [!NOTE]
> There are no binary breaking changes between Visual Studio 2015 and Visual Studio 2017.

When you upgrade to a new version of Visual Studio, you might encounter compilation and/or runtime errors in code that previously compiled and ran correctly. Changes in the new version that cause such problems are known as *breaking changes*, and typically they're required by modifications in the C++ language standard, function signatures, or the layout of objects in memory.

To avoid run-time errors that are difficult to detect and diagnose, we recommend that you never statically link to binaries compiled by using a different version of the compiler. Also, when you upgrade an EXE or DLL project, make sure to upgrade the libraries that it links to. Don't pass CRT (C Runtime) or C++ Standard Library (C++ Standard Library) types between binaries, including DLLs, compiled by using different versions of the compiler. For more information, see [Potential Errors Passing CRT Objects Across DLL Boundaries](../c-runtime-library/potential-errors-passing-crt-objects-across-dll-boundaries.md).

You should never write code that depends on a particular layout for an object that isn't a COM interface or a POD object. If you do write such code, then you must ensure that it works after you upgrade. For more information, see [Portability At ABI Boundaries](../cpp/portability-at-abi-boundaries-modern-cpp.md).

Additionally, ongoing improvements to compiler conformance can sometimes change how the compiler understands your existing source code. For example, you might find new or different errors during your build, or even behavioral differences in code that previously built and seemed to run correctly. Although these improvements aren't breaking changes like the ones discussed in this document, you may need to make changes to your source code to resolve these issues:

- [C Runtime (CRT) Library Breaking Changes](#BK_CRT)

- [Standard C++ and C++ Standard Library Breaking Changes](#BK_STL)

- [MFC and ATL Breaking Changes](#BK_MFC)

- [Concurrency Runtime Breaking Changes](#BK_ConcRT)

## <a name="VC_2015"></a> Visual Studio 2015 Conformance Changes

### <a name="BK_CRT"></a> C Runtime Library (CRT)

#### General Changes

- **Refactored binaries**

   The CRT Library has been refactored into a two different binaries: a Universal CRT (ucrtbase), which contains most of the standard functionality, and a VC Runtime Library (vcruntime). The vcruntime library contains the compiler-related functionality such as exception handling, and intrinsics. If you are using the default project settings, then this change doesn't impact you since the linker uses the new default libraries automatically. If you've set the project's **Linker** property **Ignore All Default Libraries** to **Yes** or you are using the `/NODEFAULTLIB` linker option on the command line, then you must update your list of libraries (in the **Additional Dependencies** property) to include the new, refactored libraries. Replace the old CRT library (`libcmt.lib`, `libcmtd.lib`, `msvcrt.lib`, `msvcrtd.lib`) with the equivalent refactored libraries. For each of the two refactored libraries, there are static (.lib) and dynamic (.dll) versions, and release (with no suffix) and debug versions (with the "d" suffix). The dynamic versions have an import library that you link with. The two refactored libraries are Universal CRT, specifically ucrtbase.dll or ucrtbase.lib, ucrtbased.dll or ucrtbased.lib, and the VC runtime library, `libvcruntime.lib`, vcruntime*version*.dll, `libvcruntimed.lib`, and vcruntimed*version*.dll. The *version* in both Visual Studio 2015 and Visual Studio 2017 is 140. See [CRT Library Features](../c-runtime-library/crt-library-features.md).

#### `<locale.h>`

- **`localeconv`**

   The [`localeconv`](../c-runtime-library/reference/localeconv.md) function declared in locale.h now works correctly when [per-thread locale](../parallel/multithreading-and-locales.md) is enabled. In previous versions of the library, this function would return the `lconv` data for the global locale, not the thread's locale.

   If you use per-thread locales, you should check your use of `localeconv`. If your code assumes that the `lconv` data returned is for the global locale, you should correct it.

#### `<math.h>`

- **C++ overloads of math library functions**

   In previous versions, `<math.h>` defined some, but not all, of the C++ overloads for the math library functions. The rest of the overloads were in the `<cmath>` header. Code that only included `<math.h>` could have problems with function overload resolution. Now the C++ overloads have been removed from `<math.h>` and are only found in `<cmath>`.

   To resolve errors, include `<cmath>` to get the declarations of the functions that were removed from `<math.h>`. These functions were moved:

  - `double abs(double)` and `float abs(float)`
  - `double pow(double, int)`, `float pow(float, float)`, `float pow(float, int)`, `long double pow(long double, long double)`, `long double pow(long double, int)`
  - **`float`** and **`long double`** versions of floating point functions `acos`, `acosh`, `asin`, `asinh`, `atan`, `atanh`, `atan2`, `cbrt`, `ceil`, `copysign`, `cos`, `cosh`, `erf`, `erfc`, `exp`, `exp2`, `expm1`, `fabs`, `fdim`, `floor`, `fma`, `fmax`, `fmin`, `fmod`, `frexp`, `hypot`, `ilogb`, `ldexp`, `lgamma`, `llrint`, `llround`, `log`, `log10`, `log1p`, `log2`, `lrint`, `lround`, `modf`, `nearbyint`, `nextafter`, `nexttoward`, `remainder`, `remquo`, `rint`, `round`, `scalbln`, `scalbn`, `sin`, `sinh`, `sqrt`, `tan`, `tanh`, `tgamma`, and `trunc`

  If you have code that uses `abs` with a floating point type that only includes the `<math.h>` header, the floating point versions will no longer be available. The call now resolves to `abs(int)`, even with a floating point argument, which produces the error:

    ```Output
    warning C4244: 'argument' : conversion from 'float' to 'int', possible loss of data
    ```

  The fix for this warning is to replace the call to `abs` with a floating point version of `abs`, such as `fabs` for a double argument or `fabsf` for a float argument, or include the `<cmath>` header and continue to use `abs`.

- **Floating point conformance**

   Many changes to the math library have been made to improve conformance to the IEEE-754 and C11 Annex F specifications with respect to special case inputs such as NaNs and infinities. For example, quiet NaN inputs, which were often treated as errors in previous versions of the library, are no longer treated as errors. See [IEEE 754 Standard](https://standards.ieee.org/standard/754-2008.html) and Annex F of the [C11 Standard](https://www.iso.org/standard/57853.html).

   These changes won't cause compile-time errors, but might cause programs to behave differently and more correctly according to the standard.

- **FLT_ROUNDS**

   In Visual Studio 2013, the FLT_ROUNDS macro expanded to a constant expression, which was incorrect because the rounding mode is configurable at runtime, for example, by calling fesetround. The FLT_ROUNDS macro is now dynamic and correctly reflects the current rounding mode.

#### `<new>` and `<new.h>`

- **`new` and `delete`**

   In previous versions of the library, the implementation-defined operator new and delete functions were exported from the runtime library DLL (for example, msvcr120.dll). These operator functions are now always statically linked into your binaries, even when using the runtime library DLLs.

   This isn't a breaking change for native or mixed code (`/clr`), however for code compiled as [/clr:pure](../build/reference/clr-common-language-runtime-compilation.md), this change might cause your code to fail to compile. If you compile code as `/clr:pure`, you may need to add `#include <new>` or `#include <new.h>` to work around build errors due to this change. The`/clr:pure` option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017. Code that needs to be "pure" should be ported to C#.

#### `<process.h>`

- **`_beginthread` and `_beginthreadex`**

   The [`_beginthread`](../c-runtime-library/reference/beginthread-beginthreadex.md) and [`_beginthreadex`](../c-runtime-library/reference/beginthread-beginthreadex.md) functions now hold a reference to the module in which the thread procedure is defined for the duration of the thread. This helps to ensure that modules aren't unloaded until a thread has run to completion.

#### `<stdarg.h>`

- **`va_start` and reference types**

   When compiling C++ code, [`va_start`](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) now validates at compile-time that the argument passed to it isn't of reference type. Reference-type arguments are prohibited by the C++ Standard.

#### <a name="stdio_and_conio"></a> `<stdio.h>` and `<conio.h>`

- **The printf and scanf family of functions are now defined inline.**

   The definitions of all of the `printf` and `scanf` functions have been moved inline into `<stdio.h>`, `<conio.h>`, and other CRT headers. This breaking change leads to a linker error (LNK2019, unresolved external symbol) for any programs that declared these functions locally without including the appropriate CRT headers. If possible, you should update the code to include the CRT headers (that is, add `#include <stdio.h>`) and the inline functions, but if you do not want to modify your code to include these header files, an alternative solution is to add `legacy_stdio_definitions.lib` to your linker input.

   To add this library to your linker input in the IDE, open the context menu for the project node, choose **Properties**, then in the **Project Properties** dialog box, choose **Linker**, and edit the **Linker Input** to add `legacy_stdio_definitions.lib` to the semi-colon-separated list.

   If your project links with static libraries that were compiled with a release of Visual Studio earlier than 2015, the linker might report an unresolved external symbol. These errors might reference internal definitions for `_iob`, `_iob_func`, or related imports for certain `<stdio.h>` functions in the form of _imp_\*. Microsoft recommends that you recompile all static libraries with the latest version of the C++ compiler and libraries when you upgrade a project. If the library is a third-party library for which source isn't available, you should either request an updated binary from the third party or encapsulate your usage of that library into a separate DLL that you compile with the older version of the compiler and libraries.

    > [!WARNING]
    > If you are linking with Windows SDK 8.1 or earlier, you might encounter these unresolved external symbol errors. In that case, you should resolve the error by adding legacy_stdio_definitions.lib to the linker input as described previously.

   To troubleshoot unresolved symbol errors, you can try using [`dumpbin.exe`](../build/reference/dumpbin-reference.md) to examine the symbols defined in a binary. Try the following command line to view symbols defined in a library.

    ```cpp
    dumpbin.exe /LINKERMEMBER somelibrary.lib
    ```

- **gets and _getws**

   The [gets](../c-runtime-library/gets-getws.md) and [_getws](../c-runtime-library/gets-getws.md) functions have been removed. The gets function was removed from the C Standard Library in C11 because it can't be used securely. The _getws function was a Microsoft extension that was equivalent to gets but for wide strings. As alternatives to these functions, consider use of [fgets](../c-runtime-library/reference/fgets-fgetws.md), [fgetws](../c-runtime-library/reference/fgets-fgetws.md), [gets_s](../c-runtime-library/reference/gets-s-getws-s.md), and [_getws_s](../c-runtime-library/reference/gets-s-getws-s.md).

- **_cgets and _cgetws**

   The [_cgets](../c-runtime-library/cgets-cgetws.md) and [_cgetws](../c-runtime-library/cgets-cgetws.md) functions have been removed. As alternatives to these functions, consider use of [_cgets_s](../c-runtime-library/reference/cgets-s-cgetws-s.md) and [_cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).

- **Infinity and NaN Formatting**

   In previous versions, infinities and NaNs would be formatted using a set of MSVC-specific sentinel strings.

  - Infinity: 1.#INF

  - Quiet NaN: 1.#QNAN

  - Signaling NaN: 1.#SNAN

  - Indefinite NaN: 1.#IND

  Any of these formats may have been prefixed by a sign and may have been formatted slightly differently depending on field width and precision (sometimes with unusual effects, for example `printf("%.2f\n", INFINITY)` would print 1.#J because the #INF would be "rounded" to a 2-digit precision). C99 introduced new requirements on how infinities and NaNs are to be formatted. The MSVC implementation now conforms to these requirements. The new strings are as follows:

  - Infinity: inf

  - Quiet NaN: nan

  - Signaling NaN: nan(snan)

  - Indefinite NaN: nan(ind)

  Any of these may be prefixed by a sign. If a capitalized format specifier is used (%F instead of %f), then the strings are printed in capital letters (`INF` instead of `inf`), as is required.

  The [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) functions have been modified to parse these new strings, so these strings now round-trip through `printf` and `scanf`.

- **Floating point formatting and parsing**

   New floating point formatting and parsing algorithms have been introduced to improve correctness. This change affects the [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) and [scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md) families of functions, and functions like [strtod](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).

   The old formatting algorithms would generate only a limited number of digits, then would fill the remaining decimal places with zero. They could usually generate strings that would round-trip back to the original floating point value, but weren't great if you wanted the exact value (or the closest decimal representation thereof). The new formatting algorithms generate as many digits as are required to represent the value (or to fill the specified precision). As an example of the improvement; consider the results when printing a large power of two:

    ```cpp
    printf("%.0f\n", pow(2.0, 80))
    ```

   Old output:

    ```Output
    1208925819614629200000000
    ```

   New output:

    ```Output
    1208925819614629174706176
    ```

   The old parsing algorithms would consider only up to 17 significant digits from the input string and would discard the rest of the digits. This approach is sufficient to generate a close approximation of the value represented by the string, and the result is usually very close to the correctly rounded result. The new implementation considers all present digits and produces the correctly rounded result for all inputs (up to 768 digits in length). In addition, these functions now respect the rounding mode (controllable via fesetround).  This is potentially a breaking behavior change because these functions might output different results. The new results are always more correct than the old results.

- **Hexadecimal and infinity/NaN floating point parsing**

   The floating point parsing algorithms will now parse hexadecimal floating point strings (such as the ones generated by the %a and %A printf format specifiers) and all infinity and NaN strings that are generated by the `printf` functions, as described above.

- **%A and %a zero padding**

   The %a and %A format specifiers format a floating point number as a hexadecimal mantissa and binary exponent. In previous versions, the `printf` functions would incorrectly zero-pad strings. For example, `printf("%07.0a\n", 1.0)` would print 00x1p+0, where it should print 0x01p+0. This flaw has been fixed.

- **%A and %a precision**

   The default precision of the %A and %a format specifiers was 6 in previous versions of the library. The default precision is now 13 for conformance with the C Standard.

   This is a runtime behavior change in the output of any function that uses a format string with %A or %a. In the old behavior, the output using the %A specifier might be "1.1A2B3Cp+111". Now the output for the same value is "1.1A2B3C4D5E6F7p+111". To get the old behavior, you can specify the precision, for example, %.6A. See [Precision Specification](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md#precision).

- **%F specifier**

   The %F format/conversion specifier is now supported. It's functionally equivalent to the %f format specifier, except that infinities and NaNs are formatted using capital letters.

   In previous versions, the implementation used to parse F and N as length modifiers. This behavior dated back to the age of segmented address spaces: these length modifiers were used to indicate far and near pointers, respectively, as in %Fp or %Ns. This behavior has been removed. If %F is encountered, it's now treated as the %F format specifier; if %N is encountered, it's now treated as an invalid parameter.

- **Exponent formatting**

   The %e and %E format specifiers format a floating point number as a decimal mantissa and exponent. The %g and %G format specifiers also format numbers in this form in some cases. In previous versions, the CRT would always generate strings with three-digit exponents. For example, `printf("%e\n", 1.0)` would print 1.000000e+000, which was incorrect. C requires that if the exponent is representable using only one or two digits, then only two digits are to be printed.

   In Visual Studio 2005 a global conformance switch was added: [_set_output_format](../c-runtime-library/set-output-format.md). A program could call this function with the argument _TWO_DIGIT_EXPONENT, to enable conforming exponent printing. The default behavior has been changed to the standards-conforming exponent printing mode.

- **Format string validation**

   In previous versions, the `printf` and `scanf` functions would silently accept many invalid format strings, sometimes with unusual effects. For example, %hlhlhld would be treated as %d. All invalid format strings are now treated as invalid parameters.

- **fopen mode string validation**

   In previous versions, the `fopen` family of functions silently accepted some invalid mode strings, such as `r+b+`. Invalid mode strings are now detected and treated as invalid parameters.

- **_O_U8TEXT mode**

   The [_setmode](../c-runtime-library/reference/setmode.md) function now correctly reports the mode for streams opened in_O_U8TEXT mode. In previous versions of the library, it would report such streams as being opened in _O_WTEXT.

   This is a breaking change if your code interprets the _O_WTEXT mode for streams where the encoding is UTF-8. If your application doesn't support UTF_8, consider adding support for this increasingly common encoding.

- **snprintf and vsnprintf**

   The [snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) and [vsnprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) functions are now implemented. Older code often provided definitions macro versions of these functions because they were not implemented by the CRT library, but they're no longer needed in newer versions. If [snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) or [vsnprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) is defined as a macro before including `<stdio.h>`, compilation now fails with an error that indicates where the macro was defined.

   Normally, the fix to this problem is to delete any declarations of `snprintf` or `vsnprintf` in user code.

- **tmpnam Generates Usable File Names**

   In previous versions, the `tmpnam` and `tmpnam_s` functions generated file names in the root of the drive (such as \sd3c.). These functions now generate usable file name paths in a temporary directory.

- **FILE Encapsulation**

   In previous versions, the complete FILE type was defined publicly in `<stdio.h>`, so it was possible for user code to reach into a FILE and modify its internals. The library has been changed to hide implementation details. As part of this change, FILE as defined in `<stdio.h>` is now an opaque type and its members are inaccessible from outside of the CRT itself.

- **_outp and _inp**

   The functions [_outp](../c-runtime-library/outp-outpw-outpd.md), [_outpw](../c-runtime-library/outp-outpw-outpd.md), [_outpd](../c-runtime-library/outp-outpw-outpd.md), [_inp](../c-runtime-library/inp-inpw-inpd.md), [_inpw](../c-runtime-library/inp-inpw-inpd.md), and [_inpd](../c-runtime-library/inp-inpw-inpd.md) have been removed.

#### `<stdlib.h>`, `<malloc.h>`, and `<sys/stat.h>`

- **strtof and wcstof**

   The `strtof` and `wcstof` functions failed to set `errno` to ERANGE when the value wasn't representable as a float. This error was specific to these two functions; the `strtod`, `wcstod`, `strtold`, and `wcstold` functions were unaffected. This issue has been fixed, and is a runtime breaking change.

- **Aligned allocation functions**

   In previous versions, the aligned allocation functions (`_aligned_malloc`, `_aligned_offset_malloc`, etc.) would silently accept requests for a block with an alignment of 0. The requested alignment must be a power of two, which isn't true of zero. A requested alignment of 0 is now treated as an invalid parameter. This issue has been fixed, and is a runtime breaking change.

- **Heap functions**

   The `_heapadd`, `_heapset`, and `_heapused` functions have been removed. These functions have been nonfunctional since the CRT was updated to use the Windows heap.

- **smallheap**

   The `smallheap` link option has been removed. See [Link Options](../c-runtime-library/link-options.md).

- **_stat**

   The [`_stat`](../c-runtime-library/reference/stat-functions.md) family of functions use `CreateFile` in Visual Studio 2015, instead of `FindFirstFile` as in Visual Studio 2013 and earlier. This means that `_stat` on a path ending with a slash succeeds if the path refers to a directory, as opposed to before when the function would error with `errno` set to `ENOENT`.

#### `<string.h>`

- **`wcstok`**

   The signature of the `wcstok` function has been changed to match what is required by the C Standard. In previous versions of the library, the signature of this function was:

    ```cpp
    wchar_t* wcstok(wchar_t*, wchar_t const*)
    ```

   It used an internal, per-thread context to track state across calls, as is done for `strtok`. The function now has the signature `wchar_t* wcstok(wchar_t*, wchar_t const*, wchar_t**)`, and requires the caller to pass the context as a third argument to the function.

   A new `_wcstok` function has been added with the old signature to ease porting. When compiling C++ code, there is also an inline overload of `wcstok` that has the old signature. This overload is declared as deprecated. In C code, you may define_CRT_NON_CONFORMING_WCSTOK to cause `_wcstok` to be used in place of `wcstok`.

#### `<time.h>`

- **clock**

   In previous versions, the [`clock`](../c-runtime-library/reference/clock.md) function was implemented using the Windows API [`GetSystemTimeAsFileTime`](/windows/win32/api/sysinfoapi/nf-sysinfoapi-getsystemtimeasfiletime). With this implementation, the clock function was sensitive to the system time, and was thus not necessarily monotonic. The clock function has been reimplemented in terms of [`QueryPerformanceCounter`](/windows/win32/api/profileapi/nf-profileapi-queryperformancecounter) and is now monotonic.

- **fstat and _utime**

   In previous versions, the [`_stat`](../c-runtime-library/reference/stat-functions.md), [`fstat`](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md), and [`_utime`](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) functions handle daylight savings time incorrectly. Prior to Visual Studio 2013, all of these functions incorrectly adjusted standard time times as if they were in daylight time.

   In Visual Studio 2013, the problem was fixed in the **`_stat`** family of functions, but the similar problems in the **`fstat`** and **`_utime`** families of functions were not fixed. This partial fix led to problems due to the inconsistency between the functions. The **`fstat`** and **`_utime`** families of functions have now been fixed, so all of these functions now handle daylight savings time correctly and consistently.

- **asctime**

   In previous versions, the [`asctime`](../c-runtime-library/reference/asctime-wasctime.md) function would pad single-digit days with a leading zero, for example: `Fri Jun 06 08:00:00 2014`. The specification requires that such days be padded with a leading space, as in `Fri Jun  6 08:00:00 2014`. This issue has been fixed.

- **strftime and wcsftime**

   The `strftime` and `wcsftime` functions now support the %C, %D, %e, %F, %g, %G, %h, %n, %r, %R, %t, %T, %u, and %V format specifiers. Additionally, the E and O modifiers are parsed but ignored.

   The %c format specifier is specified as producing an "appropriate date and time representation" for the current locale. In the C locale, this representation is required to be the same as `%a %b %e %T %Y`, the same form as is produced by `asctime`. In previous versions, the %c format specifier incorrectly formatted times using a `MM/DD/YY HH:MM:SS` representation. This issue has been fixed.

- **timespec and TIME_UTC**

   The `<time.h>` header now defines the `timespec` type and the `timespec_get` function from the C11 Standard. In addition, the TIME_UTC macro, for use with the `timespec_get` function, is now defined. This update is a breaking change for code that has a conflicting definition for any of these identifiers.

- **CLOCKS_PER_SEC**

   The CLOCKS_PER_SEC macro now expands to an integer of type `clock_t`, as required by the C language.

#### <a name="BK_STL"></a> C++ Standard Library

To enable new optimizations and debugging checks, the Visual Studio implementation of the C++ Standard Library intentionally breaks binary compatibility from one version to the next. Therefore, when the C++ Standard Library is used, object files and static libraries that are compiled by using different versions can't be mixed in one binary (EXE or DLL), and C++ Standard Library objects can't be passed between binaries that are compiled by using different versions. Such mixing emits linker errors about _MSC_VER mismatches. (_MSC_VER is the macro that contains the compiler's major version—for example, 1800 for Visual Studio 2013.) This check can't detect DLL mixing, and can't detect mixing that involves Visual Studio 2008 or earlier.

- **C++ Standard Library include files**

   Some changes have been made to the include structure in the C++ Standard Library headers. C++ Standard Library headers are allowed to include each other in unspecified ways. In general, you should write your code so that it carefully includes all of the headers that it needs according to the C++ standard, and doesn't rely on which C++ Standard Library headers include which other C++ Standard Library headers. This makes code portable across versions and platforms. At least two header changes in Visual Studio 2015 affect user code. First, `<string>` no longer includes `<iterator>`. Second, `<tuple>` now declares `std::array` without including all of `<array>`, which can break code through the following combination of code constructs: your code has a variable named "array", and you have a using-directive "using namespace std;", and you include a C++ Standard Library header (such as `<functional>`) that includes `<tuple>`, which now declares `std::array`.

- **steady_clock**

   The `<chrono>` implementation of [`steady_clock`](../standard-library/steady-clock-struct.md) has changed to meet the C++ Standard requirements for steadiness and monotonicity. `steady_clock` is now based on [`QueryPerformanceCounter`](/windows/win32/api/profileapi/nf-profileapi-queryperformancecounter) and `high_resolution_clock` is now a typedef for `steady_clock`. As a result, in Visual Studio `steady_clock::time_point` is now a typedef for `chrono::time_point<steady_clock>`; however, this isn't necessarily the case for other implementations.

- **allocators and const**

   We now require allocator equality/inequality comparisons to accept const arguments on both sides. If your allocators define these operators like this,

    ```cpp
    bool operator==(const MyAlloc& other)
    ```

   then you should update them and declare them as const members:

    ```cpp
    bool operator==(const MyAlloc& other) const
    ```

- **const elements**

   The C++ standard has always forbidden containers of const elements (such as `vector<const T>` or `set<const T>`). Visual Studio 2013 and earlier accepted such containers. In the current version, such containers fail to compile.

- **std::allocator::deallocate**

   In Visual Studio 2013 and earlier, `std::allocator::deallocate(p, n)` ignored the argument passed in for *n*.  The C++ standard has always required that *n* must be equal to the value passed as the first argument to the invocation of `allocate`, which returned *p*. However, in the current version, the value of *n* is inspected. Code that passes arguments for *n* that differ from what the standard requires might crash at runtime.

- **hash_map and hash_set**

   The non-standard header files `<hash_map>` and `<hash_set>` are deprecated in Visual Studio 2015 and will be removed in a future release. Use `<unordered_map>` and `<unordered_set>` instead.

- **comparators and operator()**

   Associative containers (the `<map>` family) now require their comparators to have const-callable function call operators. The following code in a comparator class declaration now fails to compile:

    ```cpp
    bool operator()(const X& a, const X& b)
    ```

   To resolve this error, change the function declaration to:

    ```cpp
    bool operator()(const X& a, const X& b) const
    ```

- **type traits**

   The old names for type traits from an earlier version of the C++ draft standard have been removed. These were changed in C++11 and have been updated to the C++11 values in Visual Studio 2015. The following table shows the old and new names.

   |Old name|New name|
   |--------------|--------------|
   |add_reference|add_lvalue_reference|
   |has_default_constructor|is_default_constructible|
   |has_copy_constructor|is_copy_constructible|
   |has_move_constructor|is_move_constructible|
   |has_nothrow_constructor|is_nothrow_default_constructible|
   |has_nothrow_default_constructor|is_nothrow_default_constructible|
   |has_nothrow_copy|is_nothrow_copy_constructible|
   |has_nothrow_copy_constructor|is_nothrow_copy_constructible|
   |has_nothrow_move_constructor|is_nothrow_move_constructible|
   |has_nothrow_assign|is_nothrow_copy_assignable|
   |has_nothrow_copy_assign|is_nothrow_copy_assignable|
   |has_nothrow_move_assign|is_nothrow_move_assignable|
   |has_trivial_constructor|is_trivially_default_constructible|
   |has_trivial_default_constructor|is_trivially_default_constructible|
   |has_trivial_copy|is_trivially_copy_constructible|
   |has_trivial_move_constructor|is_trivially_move_constructible|
   |has_trivial_assign|is_trivially_copy_assignable|
   |has_trivial_move_assign|is_trivially_move_assignable|
   |has_trivial_destructor|is_trivially_destructible|

- **launch::any and launch::sync policies**

   The nonstandard `launch::any` and `launch::sync` policies were removed. Instead, for `launch::any`, use `launch:async | launch:deferred`. For `launch::sync`, use `launch::deferred`. See [launch Enumeration](../standard-library/future-enums.md#launch).

#### <a name="BK_MFC"></a> MFC and ATL

- **Microsoft Foundation Classes (MFC)**

   is no longer included in a "Typical" install of Visual Studio because of its large size. To install MFC, choose the **Custom** install option in Visual Studio 2015 setup. If you already have Visual Studio 2015 installed, you can install MFC by running **Visual Studio** setup again. Choose the **Custom** install option, and then choose **Microsoft Foundation Classes**. You can run **Visual Studio** setup from the **Control Panel** control **Programs and Features**, or from the installation media.

   The Visual C++ Redistributable Package still includes this library.

#### <a name="BK_ConcRT"></a> Concurrency Runtime

- **Yield macro from Windows.h conflicting with concurrency::Context::Yield**

   The Concurrency Runtime previously used `#undef` to undefine the Yield macro to avoid conflicts between the Yield macro defined in Windows.h h and the `concurrency::Context::Yield` function. This `#undef` has been removed and a new non-conflicting equivalent API call [concurrency::Context::YieldExecution](../parallel/concrt/reference/context-class.md#yieldexecution) has been added. To work around conflicts with Yield, you can either update your code to call the `YieldExecution` function instead, or surround the `Yield` function name with parentheses at call sites, as in the following example:

    ```cpp
    (concurrency::Context::Yield)();
    ```

## Compiler Conformance Improvements in Visual Studio 2015

When upgrading code from previous versions, you might also encounter compiler errors that are due to conformance improvements made in Visual Studio 2015. These improvements do not break binary compatibility from earlier versions of Visual Studio, but they can produce compiler errors where none were emitted before. For more information, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

In Visual Studio 2015, ongoing improvements to compiler conformance can sometimes change how the compiler understands your existing source code. As a result, you might encounter new or different errors during your build, or even behavioral differences in code that previously built and seemed to run correctly.

Fortunately, these differences have little or no impact on most of your source code. When source code or other changes are needed to address these differences,  the fixes tend to be small and straight-forward. We've included many examples of previously acceptable source code that might need to be changed *(before)* and the fixes to correct them *(after)*.

Although these differences can affect your source code or other build artifacts, they don't affect binary compatibility between updates to Visual Studio versions. A *breaking change* is more severe, and can affect binary compatibility, but these kinds of binary compatibility breaks only occur between major versions of Visual Studio, for example, between Visual Studio 2013 and Visual Studio 2015. For information on the breaking changes that occurred between Visual Studio 2013 and Visual Studio 2015, see [Visual Studio 2015 Conformance Changes](#VC_2015).

- [Conformance Improvements in Visual Studio 2015](#VS_RTM)

- [Conformance Improvements in Update 1](#VS_Update1)

- [Conformance Improvements in Update 2](#VS_Update2)

- [Conformance Improvements in Update 3](#VS_Update3)

### <a name="VS_RTM"></a> Conformance Improvements in Visual Studio 2015

- /Zc:forScope- option

   The compiler option `/Zc:forScope-` is deprecated and will be removed in a future release.

    ```cpp
    Command line warning  D9035: option 'Zc:forScope-' has been deprecated and will be removed in a future release
    ```

   Usually, this option was used in order to allow nonstandard code that uses loop variables after the point where, according to the standard, they should have gone out of scope. It was only necessary when you compiled with the `/Za` option, since without `/Za`, use of a for loop variable after the end of the loop is always allowed. If you don't care about standards conformance (for example, if your code isn't meant to portable to other compilers), you could turn off the `/Za` option (or set the **Disable Language Extensions** property to **No**). If you do care about writing portable, standards-conformant code, you should rewrite your code so that it conforms to the standard by moving the declaration of such variables to a point outside the loop.

    ```cpp
    // C2065 expected
    int main() {
        // Uncomment the following line to resolve.
        // int i;
        for (int i = 0; i < 1; i++);
        i = 20;   // i has already gone out of scope under /Za
    }
    ```

- `/Zg` compiler option

   The `/Zg` compiler option (Generate Function Prototypes) is no longer available. This compiler option was previously deprecated.

- You can no longer run unit tests with C++/CLI from the command line with mstest.exe. Instead, use vstest.console.exe. See [VSTest.Console.exe command-line options](/visualstudio/test/vstest-console-options).

- **mutable keyword**

   The **`mutable`** storage class specifier is no longer allowed in places where previously it compiled without error. Now, the compiler gives error C2071 (illegal storage class). According to the standard, the **`mutable`** specifier can be applied only to names of class data members, and can't be applied to names declared const or static, and can't be applied to reference members.

   For example, consider the following code:

    ```cpp
    struct S
    {
        mutable int &r;
    };
    ```

   Previous versions of the compiler accepted this, but now the compiler gives the following error:

    ```Output
    error C2071: 'S::r': illegal storage class
    ```

   To fix the error, remove the redundant **`mutable`** keyword.

- **char_16_t and char32_t**

   You can no longer use **`char16_t`** or **`char32_t`** as aliases in a **`typedef`**, because these types are now treated as built-in. It was common for users and library authors to define **`char16_t`** and **`char32_t`** as aliases of `uint16_t` and `uint32_t`, respectively.

    ```cpp
    #include <cstdint>

    typedef uint16_t char16_t; //C2628
    typedef uint32_t char32_t; //C2628

    int main(int argc, char* argv[])
    {
        uint16_t x = 1; uint32_t y = 2;
        char16_t a = x;
        char32_t b = y;
        return 0;
    }
    ```

   To update your code, remove the **`typedef`** declarations and rename any other identifiers that collide with these names.

- **Non-type template parameters**

   Certain code that involves non-type template parameters is now correctly checked for type compatibility when you provide explicit template arguments. For example, the following code compiled without error in previous versions of Visual Studio.

    ```cpp
    struct S1
    {
        void f(int);
        void f(int, int);
    };

    struct S2
    {
        template <class C, void (C::*Function)(int) const> void f() {}
    };

    void f()
    {
        S2 s2;
        s2.f<S1, &S1::f>();
    }
    ```

   The current compiler correctly gives an error, because the template parameter type doesn't match the template argument (the parameter is a pointer to a const member, but the function f is non-const):

    ```Output
    error C2893: Failed to specialize function template 'void S2::f(void)'note: With the following template arguments:note: 'C=S1'note: 'Function=S1::f'
    ```

   To address this error in your code, make sure that the type of the template argument you use matches the declared type of the template parameter.

- **`__declspec(align)`**

   The compiler no longer accepts `__declspec(align)` on functions. This construct was always ignored, but now it produces a compiler error.

    ```cpp
    error C3323: 'alignas' and '__declspec(align)' are not allowed on function declarations
    ```

   To fix this problem, remove `__declspec(align)` from the function declaration. Since it had no effect, removing it doesn't change anything.

- **Exception handling**

   There are a couple of changes to exception handling. First, exception objects have to be either copyable or movable. The following code compiled in Visual Studio 2013, but doesn't compile in Visual Studio 2015:

    ```cpp
    struct S
    {
    public:
        S();
    private:
        S(const S &);
    };

    int main()
    {
        throw S(); // error
    }
    ```

   The problem is that the copy constructor is private, so the object can't be copied as happens in the normal course of handling an exception. The same applies when the copy constructor is declared **`explicit`**.

    ```cpp
    struct S
    {
        S();
        explicit S(const S &);
    };

    int main()
    {
        throw S(); // error
    }
    ```

   To update your code, make sure that the copy constructor for your exception object is **`public`** and not marked **`explicit`**.

   Catching an exception by value also requires the exception object to be copyable. The following code compiled in Visual Studio 2013, but doesn't compile in Visual Studio 2015:

    ```cpp
    struct B
    {
    public:
        B();
    private:
        B(const B &);
    };

    struct D : public B {};

    int main()
    {
        try
        {
        }
        catch (D d) // error
        {
        }
    }
    ```

   You can fix this issue by changing the parameter type for the **`catch`** to a reference.

    ```cpp
    catch (D& d)
    {
    }
    ```

- **String literals followed by macros**

   The compiler now supports user-defined literals. As a consequence, string literals followed by macros without any intervening whitespace are interpreted as user-defined literals, which might produce errors or unexpected results. For example, in previous compilers the following code compiled successfully:

    ```cpp
    #define _x "there"
    char* func() {
        return "hello"_x;
    }
    int main()
    {
        char * p = func();
        return 0;
    }
    ```

   The compiler interpreted this code as a string literal "hello" followed by a macro, which is expanded into "there", and then the two string literals were concatenated into one. In Visual Studio 2015, the compiler interprets this sequence as a user-defined literal, but since there is no matching user-defined literal `_x` defined, it gives an error.

    ```Output
    error C3688: invalid literal suffix '_x'; literal operator or literal operator template 'operator ""_x' not found
    note: Did you forget a space between the string literal and the prefix of the following string literal?
    ```

   To fix this problem, add a space between the string literal and the macro.

- **Adjacent string literals**

   Similarly to the previous, due to related changes in string parsing, adjacent string literals (either wide or narrow character string literals) without any whitespace were interpreted as a single concatenated string in previous releases of Visaul C++. In Visual Studio 2015, you must now add whitespace between the two strings. For example, the following code must be changed:

    ```cpp
    char * str = "abc""def";
    ```

   To fix this issue, add a space in between the two strings:

    ```cpp
    char * str = "abc" "def";
    ```

- **Placement new and delete**

   A change has been made to the **`delete`** operator in order to bring it into conformance with C++14 standard. Details of the standards change can be found at [C++ Sized Deallocation](https://isocpp.org/files/papers/n3778.html). The changes add a form of the global **`delete`** operator that takes a size parameter. The breaking change is that if you were previously using an operator **`delete`** with the same signature (to correspond with a **placement new** operator), you will receive a compiler error (C2956, which occurs at the point where the placement new is used, since that's the position in code where the compiler tries to identify an appropriate matching **`delete`** operator).

   The function `void operator delete(void *, size_t)` was a **placement delete** operator corresponding to the **placement new** function `void * operator new(size_t, size_t)` in C++11. With C++14 sized deallocation, this delete function is now a *usual deallocation function* (global **`delete`** operator). The standard requires that if the use of a placement new looks up a corresponding delete function and finds a usual deallocation function, the program is ill-formed.

   For example, suppose your code defines both a **placement new** and a **placement delete**:

    ```cpp
    void * operator new(std::size_t, std::size_t);
    void operator delete(void*, std::size_t) noexcept;
    ```

   The problem occurs because of the match in function signatures between a **placement delete** operator you've defined, and the new global sized **`delete`** operator. Consider whether you can use a different type other than `size_t` for any **placement new** and **`delete`** operators. The type of the `size_t` **`typedef`** is compiler-dependent; it's a **`typedef`** for **`unsigned int`** in MSVC. A good solution is to use an enumerated type such as this one:

    ```cpp
    enum class my_type : size_t {};
    ```

   Then, change your definition of **placement new** and **`delete`** to use this type as the second argument instead of `size_t`. You'll also need to update the calls to placement new to pass the new type (for example, by using `static_cast<my_type>` to convert from the integer value) and update the definition of **`new`** and **`delete`** to cast back to the integer type. You don't need to use an **`enum`** for this; a class type with a `size_t` member would also work.

   An alternative solution is that you might be able to eliminate the **placement new** altogether. If your code uses **placement new** to implement a memory pool where the placement argument is the size of the object being allocated or deleted, then sized deallocation feature might be suitable to replace your own custom memory pool code, and you can get rid of the placement functions and just use your own two-argument **`delete`** operator instead of the placement functions.

   If you don't want to update your code immediately, you can revert to the old behavior by using the compiler option `/Zc:sizedDealloc-`. If you use this option, the two-argument delete functions don't exist and won't cause a conflict with your **placement delete** operator.

- **Union data members**

   Data members of unions can no longer have reference types. The following code compiled successfully in Visual Studio 2013, but produces an error in Visual Studio 2015.

    ```cpp
    union U1
    {
        const int i;
    };
    union U2
    {
        int & i;
    };
    union U3
    {
        struct { int & i; };
    };
    ```

   The preceding code produces the following errors:

    ```Output
    test.cpp(67): error C2625: 'U2::i': illegal union member; type 'int &' is reference type
    test.cpp(70): error C2625: 'U3::i': illegal union member; type 'int &' is reference type
    ```

   To address this issue, change reference types either to a pointer or a value. Changing the type to a pointer requires changes in the code that uses the union field. Changing the code to a value would change the data stored in the union, which affects other fields since fields in union types share the same memory. Depending on the size of the value, it might also change the size of the union.

- Anonymous unions are now more conformant to the standard. Previous versions of the compiler generated an explicit constructor and destructor for anonymous unions. These compiler-generated functions are deleted in Visual Studio 2015.

    ```cpp
    struct S
    {
        S();
    };

    union
    {
        struct
        {
            S s;
        };
    } u; // C2280
    ```

   The preceding code generates the following error in Visual Studio 2015:

    ```cpp
    error C2280: '<unnamed-type-u>::<unnamed-type-u>(void)': attempting to reference a deleted function
    note: compiler has generated '<unnamed-type-u>::<unnamed-type-u>' here
    ```

   To resolve this issue, provide your own definitions of the constructor and/or destructor.

    ```cpp
    struct S
    {
        // Provide a default constructor by adding an empty function body.
        S() {}
    };

    union
    {
        struct
        {
            S s;
        };
    } u;
    ```

- **Unions with anonymous structs**

   In order to conform with the standard, the runtime behavior has changed for members of anonymous structures in unions. The constructor for anonymous structure members in a union is no longer implicitly called when such a union is created. Also, the destructor for anonymous structure members in a union is no longer implicitly called when the union goes out of scope. Consider the following code, in which a union U contains an anonymous structure that contains a named member structure S that has a destructor.

    ```cpp
    #include <stdio.h>
    struct S
    {
        S() { printf("Creating S\n"); }
        ~S() { printf("Destroying S\n"); }
    };
    union U
    {
        struct {
            S s;
        };
        U() {}
        ~U() {}
    };

    void f()
    {
        U u;
        // Destructor implicitly called here.
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
    ```

   In Visual Studio 2013, the constructor for S is called when the union is created, and the destructor for S is called when the stack for function f is cleaned up. But in Visual Studio 2015, the constructor and destructor aren't called. The compiler gives a warning about this behavior change.

    ```Output
    warning C4587: 'U::s': behavior change: constructor is no longer implicitly calledwarning C4588: 'U::s': behavior change: destructor is no longer implicitly called
    ```

   To restore the original behavior, give the anonymous structure a name. The runtime behavior of non-anonymous structures is the same, regardless of the compiler version.

    ```cpp
    #include <stdio.h>

    struct S
    {
        S() { printf("Creating S.\n"); }
        ~S() { printf("Destroying S\n"); }
    };
    union U
    {
        struct
        {
            S s;
        } namedStruct;
        U() {}
        ~U() {}
    };

    void f()
    {
        U u;
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
    ```

   Alternatively, try moving the constructor and destructor code into new functions, and add calls to these functions from the constructor and destructor for the union.

    ```cpp
    #include <stdio.h>

    struct S
    {
        void Create() { printf("Creating S.\n"); }
        void Destroy() { printf("Destroying S\n"); }
    };
    union U
    {
        struct
        {
            S s;
        };
        U() { s.Create(); }
        ~U() { s.Destroy(); }
    };

    void f()
    {
        U u;
    }

    int main()
    {
        f();

        char s[1024];
        printf("Press any key.\n");
        gets_s(s);
        return 0;
    }
    ```

- **Template resolution**

   Changes have been made to name resolution for templates. In C++, when considering candidates for the resolution of a name, it can be the case that one or more names under consideration as potential matches produces an invalid template instantiation. These invalid instantiations do not normally cause compiler errors, a principle known as SFINAE (Substitution Failure Is Not An Error).

   Now, if SFINAE requires the compiler to instantiate the specialization of a class template, then any errors that occur during this process are compiler errors. In previous versions, the compiler would ignore such errors. For example, consider the following code:

    ```cpp
    #include <type_traits>

    template< typename T>
    struct S
    {
        S() = default;
        S(const S&);
        S(S& &);

        template< typename U, typename = typename std::enable_if< std::is_base_of< T, U> ::value> ::type>
        S(S< U> & &);
    };

    struct D;

    void f1()
    {
        S< D> s1;
        S< D> s2(s1);
    }

    struct B
    {
    };

    struct D : public B
    {
    };

    void f2()
    {
        S< D> s1;
        S< D> s2(s1);
    }
    ```

   If you compile with the current compiler, you get the following error:

    ```Output
    type_traits(1110): error C2139: 'D': an undefined class is not allowed as an argument to compiler intrinsic type trait '__is_base_of'
    ..\t331.cpp(14): note: see declaration of 'D'
    ..\t331.cpp(10): note: see reference to class template instantiation 'std::is_base_of<T,U>' being compiled
    with
    [
        T=D,
        U=D
    ]
    ```

   This is because at the point of the first invocation of the is_base_of the class `D` hasn't been defined yet.

   In this case, the fix is to not use such type traits until the class has been defined. If you move the definitions of `B` and `D` to the beginning of the code file, the error is resolved. If the definitions are in header files, check the order of the include statements for the header files to make sure that any class definitions are compiled before the problematic templates are used.

- **Copy constructors**

   In both Visual Studio 2013 and Visual Studio 2015, the compiler generates a copy constructor for a class if that class has a user-defined move constructor but no user-defined copy constructor. In Dev14, this implicitly generated copy constructor is also marked "= delete".

<!--From here to VS_Update1 added 04/21/2017-->

- **main declared as extern "C" now requires a return type.**

   The following code now produces C4430.

    ```cpp
    extern "C" __cdecl main(){} // C4430
    ```

   To fix the error, add the return type:

    ```cpp
    extern "C" int __cdecl main(){} // OK
    ```

- **typename isn't allowed in a member initializer**

   The following code now produces C2059:

    ```cpp
    template<typename T>
    struct S1 : public T::type
    {
        S1() : typename T::type() // C2059
        {
        }
    };

    struct S2 {
        typedef S2 type;
    };

    S1<S2> s;
    ```

   To fix the error, remove **`typename`** from the initializer:

    ```cpp
    S1() : T::type() // OK
    ...
    ```

- **The storage class on explicit specializations is ignored.**

   In the following code, the static storage class specifier is ignored

    ```cpp
    template <typename T>
    void myfunc(T h)
    {
    }

    template<>
    static void myfunc(double h) // static is ignored
    {
    }
    ```

- **A constant used in a static_assert inside a class template will always fail.**

   The following code causes the **`static_assert`** to always fail:

    ```cpp
    template <size_t some_value>
    struct S1
    {
        static_assert(false, "default not valid"); // always invoked

    };

    //other partial specializations here
    ```

   To work around this issue, wrap the value in a **`struct`**:

    ```cpp
    template <size_t some_value>
    struct constant_false {
        static const bool value = false;
    };

    template <size_t some_value>
    struct S1
    {
        static_assert(constant_false<some_value>::value, "default not valid");
    };

    //other partial specializations here
    ```

- **Rules enforced for forward declarations. (Applies only to C.)**

   The following code now produces C2065:

    ```cpp
    struct token_s;
    typedef int BOOL;
    typedef int INT;

    typedef int(*PFNTERM)(PTOKEN, BOOL, INT); // C2065: 'PTOKEN' : undeclared identifier
    ```

   To fix this problem, add the proper forward declarations:

    ```cpp
    struct token_s;
    typedef int BOOL;
    typedef int INT;

    // forward declarations:
    typedef struct token_s TOKEN;
    typedef TOKEN *PTOKEN;

    typedef int(*PFNTERM)(PTOKEN, BOOL, INT);
    ```

- **More consistent enforcement of function pointer types**

   The following code now produces C2197:

    ```cpp
    typedef int(*F1)(int);
    typedef int(*F2)(int, int);

    void func(F1 f, int v1, int v2)
    {
        f(v1, v2); // C2197
    }
    ```

- **Ambiguous calls to overloaded functions**

   The following code now produces C266: 'N::bind': ambiguous call to overloaded function

    ```cpp
    template<typename R, typename T, typename T1, typename A1>
    void bind(R(T::*)(T1), A1&&);

    namespace N
    {
        template <typename T, typename R, typename ... Tx>
        void bind(R(T::*)(Tx...), T* ptr);
    }

    using namespace N;

    class Manager
    {
    public:
        void func(bool initializing);

        void mf()
        {
            bind(&Manager::func, this); //C2668
        }
    };
    ```

   To fix the error, you can fully qualify the call to `bind: N::bind(...)`. However, if this change is manifest through an undeclared identifier (C2065), then it may be appropriate to fix this with a **`using`** declaration instead.

   This pattern happens frequently with ComPtr and other types in the `Microsoft::WRL` namespace.

- **Fix incorrect address of**

   The following code now produces C2440:  '=': cannot convert from 'type *' to 'type'. To fix the error, change &(type) to (type) and (&f()) to (f()).

    ```cpp
    // C
    typedef void (*type)(void);

    void f(int i, type p);
    void g(int);
    void h(void)
    {
        f(0, &(type)g);
    }

    // C++
    typedef void(*type)(void);

    type f();

    void g(type);

    void h()
    {
        g(&f());
    }
    ```

- **String literal is a constant array**

   The following code now produces C2664: 'void f(void *)': cannot convert argument 1 from 'const char (*)[2]' to 'void *'

    ```cpp
    void f(void *);

    void h(void)
    {
        f(&__FUNCTION__);
        void *p = &"";
    }
    ```

   To fix the error, change the function parameter type to `const void*`, or else change the body of `h` to look like this example:

    ```cpp
    void h(void)
    {
        char name[] = __FUNCTION__;
        f( name);
        void *p = &"";
    }
    ```

- **C++11 UDL strings**

   The following code now produces error C3688: invalid literal suffix 'L'; literal operator or literal operator template 'operator ""L' not found

    ```cpp
    #define MACRO

    #define STRCAT(x, y) x\#\#y

    int main(){

        auto *val1 = L"string"MACRO;
        auto *val2 = L"hello "L"world";

        std::cout << STRCAT(L"hi ", L"there");
    }
    ```

   To fix the error, change the code to add a space:

    ```cpp
    #define MACRO

    // Remove ##. Strings are automatically
    // concatenated so they aren't needed
    #define STRCAT(x, y) x y

    int main(){
        //Add space after closing quote
        auto *val1 = L"string" MACRO;
        auto *val2 = L"hello " L"world";

        std::cout << STRCAT(L"hi ", L"there");
    }
    ```

   In the example above, `MACRO` is no longer parsed as two tokens (a string followed by a macro). Now it's parsed as a single token UDL. The same applies to L""L"", which was parsed previously as L"" and L"", and is now parsed as L""L and "".

   String concatenation rules were also brought into conformance with the standard, which means L"a" "b" is equivalent to L"ab". Previous editions of Visual Studio did not accept concatenation of strings with different character width.

- **C++11 empty character removed**

   The following code now produces error C2137: empty character constant

    ```cpp
    bool check(wchar_t c){
        return c == L''; //implicit null character
    }
    ```

   To fix the error, change the code to make the null explicit:

    ```cpp
    bool check(wchar_t c){
        return c == L'\0';
    }
    ```

- **MFC exceptions can't be caught by value because they aren't copyable**

   The following code in an MFC application now causes error C2316: 'D': cannot be caught as the destructor and/or copy constructor are inaccessible or deleted

    ```cpp
    struct B {
    public:
        B();
    private:
        B(const B &);
    };

    struct D : public B {
    };

    int main()
    {
        try
        {
        }
        catch (D) // C2316
        {
        }
    }
    ```

   To fix the code, you can change the catch block to `catch (const D &)` but the better solution is usually to use the MFC TRY/CATCH macros.

- **`alignof` is now a keyword**

   The following code now produces error C2332: 'class': missing tag name. To fix the code you must rename the class or, if the class is performing the same work as **`alignof`**, just replace the class with the new keyword.

    ```cpp
    class alignof{}
    ```

- **`constexpr` is now a keyword**

   The following code now produces error C2059: syntax error: ')'. To fix the code, you must rename any function or variable names that are called **`constexpr`**.

    ```cpp
    int constexpr() {return 1;}
    ```

- **Movable types can't be const**

   When a function returns a type that's intended to be moved, its return type should not be **`const`**.

- **Deleted copy constructors**

   The following code now produces C2280 'S::S(S &&)': attempting to reference a deleted function:

    ```cpp
    struct S{
        S(int, int);
        S(const S&) = delete;
        S(S&&) = delete;
    };

    S s2 = S(2, 3); //C2280
    ```

   To fix the error, use direct initialization for `S2`:

    ```cpp
    struct S{
        S(int, int);
        S(const S&) = delete;
        S(S&&) = delete;
    };

    S s2 = {2,3}; //OK
    ```

- **Conversion to function pointer only generated when no lambda capture**

   The following code produces C2664 in Visual Studio 2015.

    ```cpp
    void func(int(*)(int)) {}

    int main() {

        func([=](int val) { return val; });
    }
    ```

   To fix the error, remove the `=` from the capture list.

- **Ambiguous calls involving conversion operators**

   The following code now produces error C2440: 'type cast': cannot convert from 'S2' to 'S1':

    ```cpp
    struct S1 {
        S1(int);
    };

    struct S2 {
        operator S1();
        operator int();
    };

    void f(S2 s2)
    {
        (S1)s2;
    }
    ```

   To fix the error, explicitly call the conversion operator:

    ```cpp
    void f(S2 s2)
    {
        //Explicitly call the conversion operator
        s2.operator S1();
        // Or
        S1((int)s2);
    }
    ```

   The following code now produces error C2593: 'operator =' is ambiguous:

    ```cpp
    struct S1 {};

    struct S2 {
        operator S1&();
        operator S1() const;
    };

    void f(S1 *p, S2 s)
    {
        *p = s;
    }
    ```

   To fix the error, explicitly call the conversion operator:

    ```cpp
    void f(S1 *p, S2 s)
    {
        *p = s.operator S1&();
    }
    ```

- **Fix invalid copy initialization in non-static data member initialization (NSDMI)**

   The following code now produces error C2664: 'S1::S1(S1 &&)': cannot convert argument 1 from 'bool' to 'const S1 &':

    ```cpp
    struct S1 {
        explicit S1(bool);
    };

    struct S2 {
        S1 s2 = true; // error
    };
    ```

   To fix the error, use direct initialization:

    ```cpp
    struct S2 {
    S1 s1{true}; // OK
    };
    ```

- **Accessing constructors inside decltype statements**

   The following code now produces C2248: 'S::S': cannot access private member declared in class 'S':

    ```cpp
    class S {
        S();
    public:
        int i;
    };

    class S2 {
        auto f() -> decltype(S().i);
    };
    ```

   To fix the error, add a friend declaration for `S2` in `S`:

    ```cpp
    class S {
        S();
        friend class S2; // Make S2 a friend
    public:
        int i;
    };
    ```

- **Default ctor of lambda is implicitly deleted**

   The following code now produces error C3497: you cannot construct an instance of a lambda:

    ```cpp
    void func(){
        auto lambda = [](){};

        decltype(lambda) other;
    }
    ```

   To fix the error, remove the need for the default constructor to be called. If the lambda doesn't capture anything, then it can be cast to a function pointer.

- **Lambdas with a deleted assignment operator**

   The following code now produces error C2280:

    ```cpp
    #include <memory>
    #include <type_traits>

    template <typename T, typename D>
    std::unique_ptr<T, typename std::remove_reference<D &&>::type> wrap_unique(T *p, D &&d);

    void f(int i)
    {
        auto encodedMsg = wrap_unique<unsigned char>(nullptr, [i](unsigned char *p) {
        });
        encodedMsg = std::move(encodedMsg);
    }
    ```

   To fix the error, replace the lambda with a functor class or remove the need to use the assignment operator.

- **Attempting to move an object with deleted copy constructor**

   The following code now produces  error C2280: 'moveable::moveable(const moveable &)': attempting to reference a deleted function

    ```cpp
    struct moveable {

        moveable() = default;
        moveable(moveable&&) = default;
        moveable(const moveable&) = delete;
    };

    struct S {
        S(moveable && m) :
            m_m(m)//copy constructor deleted
        {}
        moveable m_m;
    };
    ```

   To fix the error, use `std::move` instead:

    ```cpp
    S(moveable && m) :
        m_m(std::move(m))
    ```

- **Local class can't reference other local class defined later in the same function**

   The following code now produces error C2079: 's' uses undefined struct 'main::S2'

    ```cpp
    int main()
    {
        struct S2;
        struct S1 {
            void f() {
                S2 s;
            }
        };
        struct S2 {};
    }
    ```

   To fix the error, move up the definition of `S2`:

    ```cpp
    int main()
    {
        struct S2 { //moved up
        };

    struct S1 {
        void f() {
            S2 s;
            }
        };
    }
    ```

- **Cannot call a protected base ctor in the body of derived ctor.**

   The following code now produces error C2248: 'S1::S1': cannot access protected member declared in class 'S1'

    ```cpp
    struct S1 {
    protected:
        S1();
    };

    struct S2 : public S1 {
        S2() {
            S1();
        }
    };
    ```

   To fix the error, in `S2` remove the call to `S1()` from the constructor and if necessary put it in another function.

- **{} prevents conversion to pointer**

   The following code now produces C2439 'S::p': member could not be initialized

    ```cpp
    struct S {
        S() : p({ 0 }) {}
        void *p;
    };
    ```

   To fix the error, remove the braces from around the `0` or else use **`nullptr`** instead, as shown in this example:

    ```cpp
    struct S {
        S() : p(nullptr) {}
        void *p;
    };
    ```

- **Incorrect macro definition and usage with parentheses**

   The following example now produces error C2008: ';': unexpected in macro definition

    ```cpp
    #define A; //cause of error

    struct S {
        A(); // error
    };
    ```

   To fix the problem, change the top line to `#define A();`

   The following code produces error C2059: syntax error: ')'

    ```cpp
    //notice the space after 'A'
    #define A () ;

    struct S {
        A();
    };
    ```

   To fix the code, remove the space between A and ().

   The following code produces error C2091: function returns function:

    ```cpp
    #define DECLARE void f()

    struct S {
        DECLARE();
    };
    ```

   To fix the error, remove the parentheses after DECLARE in S: `DECLARE;`.

   The following code produces error C2062: type 'int' unexpected

    ```cpp
    #define A (int)

    struct S {
        A a;
    };
    ```

   To fix the problem, define `A` like this:

    ```cpp
    #define A int
    ```

- **Extra parens in declarations**

   The following code produces error C2062: type 'int' unexpected

    ```cpp
    struct S {
        int i;
        (int)j;
    };
    ```

   To fix the error, remove the parentheses around `j`. If the parentheses are needed for clarity, then use a **`typedef`**.

- **Compiler-generated constructors and __declspec(novtable)**

   In Visual Studio 2015, there is an increased likelihood that compiler-generated inline constructors of abstract classes with virtual base classes may expose improper usage of `__declspec(novtable)` when used in combination with `__declspec(dllimport)`.

- **auto requires single expression in direct-list-initialization**

   The following code now produces error C3518: 'testPositions': in a direct-list-initialization context the type for 'auto' can only be deduced from a single initializer expression

    ```cpp
    auto testPositions{
        std::tuple<int, int>{13, 33},
        std::tuple<int, int>{-23, -48},
        std::tuple<int, int>{38, -12},
        std::tuple<int, int>{-21, 17}
    };
    ```

   To fix the error, one possibility is to initialize `testPositions` as follows:

    ```cpp
    std::tuple<int, int> testPositions[]{
        std::tuple<int, int>{13, 33},
        std::tuple<int, int>{-23, -48},
        std::tuple<int, int>{38, -12},
        std::tuple<int, int>{-21, 17}
    };
    ```

- **Checking types vs. pointers to types for is_convertible**

   The following code now causes the static assertion to fail.

    ```cpp
    struct B1 {
    private:
        B1(const B1 &);
    };
    struct B2 : public B1 {};
    struct D : public B2 {};

    static_assert(std::is_convertible<D, B2>::value, "fail");
    ```

   To fix the error, change the **`static_assert`** so that it compares pointers to `D` and `B2`:

    ```cpp
    static_assert(std::is_convertible<D*, B2*>::value, "fail");
    ```

- **__declspec(novtable) declarations must be consistent**

   **`__declspec`** declarations must be consistent across all libraries. The following code will now produce a one-definition rule (ODR) violation:

    ```cpp
    //a.cpp
    class __declspec(dllexport)
        A {
    public:
        A();
        A(const A&);
        virtual ~A();
    private:
        int i;
    };

    A::A() {}
    A::~A() {}
    A::A(const A&) {}

    //b.cpp
    // compile with cl.exe /nologo /LD /EHsc /Osx b.cpp
    #pragma comment(lib, "A")
    class __declspec(dllimport) A
    {
    public: A();
            A(const A&);
            virtual ~A();
    private:
        int i;
    };

    struct __declspec(novtable) __declspec(dllexport) B
        : virtual public A {
        virtual void f() = 0;
    };

    //c.cpp
    #pragma comment(lib, "A")
    #pragma comment(lib, "B")
    class __declspec(dllimport) A
    {
    public:
        A();
        A(const A&);
        virtual ~A();
    private:
        int i;
    };
    struct  /* __declspec(novtable) */ __declspec(dllimport) B // Error. B needs to be novtable here also.
        : virtual public A
    {
        virtual void f() = 0;
    };

    struct C : virtual B
    {
        virtual void f();
    };

    void C::f() {}
    C c;
    ```

### <a name="VS_Update1"></a> Conformance Improvements in Update 1

- **Private virtual base classes and indirect inheritance**

   Previous versions of the compiler allowed a derived class to call member functions of its indirectly derived `private virtual` base classes. This old behavior was incorrect and doesn't conform to the C++ standard. The compiler no longer accepts code written in this way, and issues compiler error C2280 as a result.

    ```Output
    error C2280: 'void *S3::__delDtor(unsigned int)': attempting to reference a deleted function
    ```

   Example (before)

    ```cpp
    class base
    {
    protected:
        base();
        ~base();
    };

    class middle : private virtual base {}; class top : public virtual middle {};

    void destroy(top *p)
    {
        delete p;  //
    }
    ```

   Example (after)

    ```cpp
    class base;  // as above

    class middle : protected virtual base {};
    class top : public virtual middle {};

    void destroy(top *p)
    {
        delete p;
    }
    ```

   \- or -

    ```cpp
    class base;  // as above

    class middle : private virtual base {};
    class top : public virtual middle, private virtual bottom {};

    void destroy(top *p)
    {
        delete p;
    }
    ```

- **Overloaded operator new and operator delete**

   Previous versions of the compiler allowed non-member **operator new** and non-member **operator delete** to be declared static, and to be declared in namespaces other than the global namespace.  This old behavior created a risk that the program would not call the **`new`** or **`delete`** operator implementation that the programmer intended, resulting in silent bad runtime behavior. The compiler no longer accepts code written in this way and issues compiler error C2323 instead.

    ```Output
    error C2323: 'operator new': non-member operator new or delete functions may not be declared static or in a namespace other than the global namespace.
    ```

   Example (before)

    ```cpp
    static inline void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // error C2323
    ```

   Example (after)

    ```cpp
    void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // removed 'static inline'
    ```

   Additionally, although the compiler doesn't give a specific diagnostic, inline operator **`new`** is considered ill-formed.

- **Calling 'operator *type*()' (user-defined conversion) on non-class types**

   Previous versions of the compiler allowed 'operator *type*()' to be called on non-class types while silently ignoring it. This old behavior created a risk of silent bad code generation, resulting in unpredictable runtime behavior. The compiler no longer accepts code written in this way and issues compiler error C2228 instead.

    ```Output
    error C2228: left of '.operator type' must have class/struct/union
    ```

   Example (before)

    ```cpp
    typedef int index_t;
    void bounds_check(index_t index);
    void login(int column)
    {
        bounds_check(column.operator index_t());  // error C2228
    }
    ```

   Example (after)

    ```cpp
    typedef int index_t;
    void bounds_check(index_t index);
    void login(int column)
    {
        bounds_check(column);  // removed cast to 'index_t', 'index_t' is an alias of 'int'
    }
    ```

- **Redundant typename in elaborated type specifiers**

   Previous versions of the compiler allowed **`typename`** in an elaborated type specifier, but code written in this way is semantically incorrect. The compiler no longer accepts code written in this way and issues compiler error C3406 instead.

    ```Output
    error C3406: 'typename' cannot be used in an elaborated type specifier
    ```

   Example (before)

    ```cpp
    template <typename class T>
    class container;
    ```

   Example (after)

    ```cpp
    template <class T>  // alternatively, could be 'template <typename T>'; 'typename' is not elaborating a type specifier in this case
    class container;
    ```

- **Type deduction of arrays from an initializer list**

   Previous versions of the compiler did not support type deduction of arrays from an initializer list. The compiler now supports this form of type deduction and, as a result, calls to function templates using initializer lists might now be ambiguous or a different overload might be chosen than in previous versions of the compiler. To resolve these issues, the program must now explicitly specify the overload that the programmer intended.

   When this new behavior causes overload resolution to consider an additional candidate that's equally as good as the historic candidate, the call becomes ambiguous and the compiler issues compiler error C2668 as a result.

    ```Output
    error C2668: 'function' : ambiguous call to overloaded function.
    ```

   Example 1: Ambiguous call to overloaded function (before)

    ```cpp
    // In previous versions of the compiler, code written in this way would unambiguously call f(int, Args...)
    template < typename... Args>
    void f(int, Args...);  //

    template < int N, typename... Args>
    void f(const int(&)[N], Args...);

    int main()
    {
        // The compiler now considers this call ambiguous, and issues a compiler error
         f({ 3 });   error C2668 : 'f' ambiguous call to overloaded function
    }
    ```

   Example 1: ambiguous call to overloaded function (after)

    ```cpp
    template < typename... Args>
    void f(int, Args...);  //

    template < int N, typename... Args>
    void f(const int(&)[N], Args...);

    int main()
    {
        // To call f(int, Args...) when there is just one expression in the initializer list, remove the braces from it.
        f(3);
    }
    ```

   When this new behavior causes overload resolution to consider an additional candidate that's a better match than the historic candidate, the call resolves unambiguously to the new candidate, causing a change in program behavior that's probably different than the programmer intended.

   Example 2: change in overload resolution (before)

    ```cpp
    // In previous versions of the compiler, code written in this way would unambiguously call f(S, Args...)
    struct S
    {
        int i;
        int j;
    };

    template < typename... Args>
    void f(S, Args...);

    template < int N, typename... Args>
    void f(const int *&)[N], Args...);

    int main()
    {
        // The compiler now resolves this call to f(const int (&)[N], Args...) instead
         f({ 1, 2 });
    }
    ```

   Example 2: change in overload resolution (after)

    ```cpp
    struct S;  // as before

    template < typename... Args>
    void f(S, Args...);

    template < int N, typename... Args>
    void f(const int *&)[N], Args...);

    int main()
    {
        // To call f(S, Args...), perform an explicit cast to S on the initializer list.
        f(S{ 1, 2 });
    }
    ```

- **Restoration of switch statement warnings**

   A previous version of the compiler removed some warnings related to **`switch`** statements; these warnings have now been restored. The compiler now issues the restored warnings, and warnings related to specific cases (including the default case) are now issued on the line containing the offending case, rather than on the last line of the switch statement. As a result of now issuing those warnings on different lines than in the past, warnings previously suppressed by using `#pragma warning(disable:####)` may no longer be suppressed as intended. To suppress these warnings as intended, it might be necessary to move the `#pragma warning(disable:####)` directive to a line above the first offending case. The following are the restored warnings:

    ```Output
    warning C4060: switch statement contains no 'case' or 'default' labels
    ```

    ```Output
    warning C4061: enumerator 'bit1' in switch of enum 'flags' is not explicitly handled by a case label
    ```

    ```Output
    warning C4062: enumerator 'bit1' in switch of enum 'flags' is not handled
    ```

    ```Output
    warning C4063: case 'bit32' is not a valid value for switch of enum 'flags'
    ```

    ```Output
    warning C4064: switch of incomplete enum 'flags'
    ```

    ```Output
    warning C4065: switch statement contains 'default' but no 'case' labels
    ```

    ```Output
    warning C4808: case 'value' is not a valid value for switch condition of type 'bool'
    ```

    ```Output
    Warning C4809: switch statement has redundant 'default' label; all possible 'case' labels are given
    ```

   Example of C4063 (before)

    ```cpp
    class settings
    {
    public:
        enum flags
        {
            bit0 = 0x1,
            bit1 = 0x2,
            ...
        };
        ...
    };

    int main()
    {
        auto val = settings::bit1;

        switch (val)
        {
        case settings::bit0:
            break;

        case settings::bit1:
            break;

             case settings::bit0 | settings::bit1:  // warning C4063
                break;
        }
    };
    ```

   Example of C4063 (after)

    ```cpp
    class settings { ... };  // as above
    int main()
    {
        // since C++11, use std::underlying_type to determine the underlying type of an enum
        typedef std::underlying_type< settings::flags> ::type flags_t;

            auto val = settings::bit1;

        switch (static_cast< flags_t> (val))
        {
        case settings::bit0:
            break;

        case settings::bit1:
            break;

        case settings::bit0 | settings::bit1:  // ok
            break;
        }
    };
    ```

   Examples of the other restored warnings are provided in their documentation.

- **#include: use of parent-directory specifier '..' in pathname** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect the use of the parent-directory specifier '..' in the pathname of `#include` directives. Code written in this way is usually intended to include headers that exist outside of the project by incorrectly using project-relative paths. This old behavior created a risk that the program could be compiled by including a different source file than the programmer intended, or that these relative paths would not be portable to other build environments. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C4464, if enabled.

    ```Output
    warning C4464: relative include path contains '..'
    ```

   Example (before)

    ```cpp
    #include "..\headers\C4426.h"  // emits warning C4464
    ```

   Example (after)

    ```cpp
    #include "C4426.h"  // add absolute path to 'headers\' to your project's include directories
    ```

   Additionally, although the compiler doesn't give a specific diagnostic, we also recommend that the parent-directory specifier ".." shouldn't be used to specify your project's include directories.

- **#pragma optimize() extends past end of header file** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect changes to  optimization flag settings that escape a header file included within a translation unit. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C4426 at the location of the offending `#include`, if enabled. This warning is only issued if the changes conflict with the optimization flags set by command-line arguments to the compiler.

    ```Output
    warning C4426: optimization flags changed after including header, may be due to #pragma optimize()
    ```

   Example (before)

    ```cpp
    // C4426.h
    #pragma optimize("g", off)
    ...
    // C4426.h ends

    // C4426.cpp
    #include "C4426.h"  // warning C4426
    ```

   Example (after)

    ```cpp
    // C4426.h
    #pragma optimize("g", off)
                ...
    #pragma optimize("", on)  // restores optimization flags set via command-line arguments
    // C4426.h ends

    // C4426.cpp
    #include "C4426.h"
    ```

- **Mismatched #pragma warning(push)** and **#pragma warning(pop)** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect `#pragma warning(push)` state changes being paired with `#pragma warning(pop)` state changes in a different source file, which is rarely intended. This old behavior created a risk that the program would be compiled with a different set of warnings enabled than the programmer intended, possibly resulting in silent bad runtime behavior. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C5031 at the location of the matching `#pragma warning(pop)`, if enabled. This warning includes a note referencing the location of the corresponding #pragma warning(push).

    ```Output
    warning C5031: #pragma warning(pop): likely mismatch, popping warning state pushed in different file
    ```

   Example (before)

    ```cpp
    // C5031_part1.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    // C5031_part1.h ends without #pragma warning(pop)

    // C5031_part2.h
    ...
    #pragma warning(pop)  // pops a warning state not pushed in this source file
    ...
    // C5031_part1.h ends

    // C5031.cpp
    #include "C5031_part1.h" // leaves #pragma warning(push) 'dangling'
    ...
    #include "C5031_part2.h" // matches 'dangling' #pragma warning(push), resulting in warning C5031
    ...
    ```

   Example (after)

    ```cpp
    // C5031_part1.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    #pragma warning(pop)  // pops the warning state pushed in this source file
    // C5031_part1.h ends without #pragma warning(pop)

    // C5031_part2.h
    #pragma warning(push)  // pushes the warning state pushed in this source file
    #pragma warning(disable:####)
    ...
    #pragma warning(pop)
    // C5031_part1.h ends

    // C5031.cpp
    #include "C5031_part1.h" // #pragma warning state changes are self-contained and independent of other source files or their #include order.
    ...
    #include "C5031_part2.h"
    ...
    ```

   Though uncommon, code written in this way is sometimes intentional. Code written in this way is sensitive to changes in `#include` order; when possible, we recommend that source code files manage warning state in a self-contained way.

- **Unmatched #pragma warning(push)** (only affects `/Wall` `/WX`)

   Previous versions of the compiler did not detect unmatched `#pragma warning(push)` state changes at the end of a translation unit. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C5032 at the location of the unmatched `#pragma warning(push)`, if enabled. This warning is only issued if there are no compilation errors in the translation unit.

    ```Output
    warning C5032: detected #pragma warning(push) with no corresponding #pragma warning(pop)
    ```

   Example (before)

    ```cpp
    // C5032.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    // C5032.h ends without #pragma warning(pop)

    // C5032.cpp
    #include "C5032.h"
    ...
    // C5032.cpp ends -- the translation unit is completed without #pragma warning(pop), resulting in warning C5032 on line 1 of C5032.h
    ```

   Example (after)

    ```cpp
    // C5032.h
    #pragma warning(push)
    #pragma warning(disable:####)
    ...
    #pragma warning(pop) // matches #pragma warning (push) on line 1
    // C5032.h ends

    // C5032.cpp
    #include "C5032.h"
    ...
    // C5032.cpp ends -- the translation unit is completed without unmatched #pragma warning(push)
    ```

- **Additional warnings might be issued as a result of improved #pragma warning state tracking**

   Previous versions of the compiler tracked #pragma warning state changes insufficiently well to issue all intended warnings. This behavior created a risk that certain warnings would be effectively suppressed in circumstances different than the programmer intended. The compiler now tracks `#pragma warning` state more robustly -- especially related to `#pragma warning` state changes inside of templates -- and optionally issues new warnings C5031 and C5032, which are intended to help the programmer locate unintended uses of `#pragma warning(push)` and `#pragma warning(pop)`.

   As a result of improved `#pragma warning` state change tracking, warnings formerly incorrectly suppressed or warnings related to issues formerly misdiagnosed might now be issued.

- **Improved identification of unreachable code**

   C++ Standard Library changes and improved ability to inline function calls over previous versions of the compiler might allow the compiler to prove that certain code is now unreachable. This new behavior can result in new and more-frequently issued instances of warning C4720.

    ```Output
    warning C4720: unreachable code
    ```

   In many cases, this warning might only be issued when compiling with optimizations enabled, since optimizations may inline more function calls, eliminate redundant code, or otherwise make it possible to determine that certain code is unreachable. We have observed that new instances of warning C4720 have frequently occurred in **try/catch** blocks, especially in relation to use of [std::find](../standard-library/algorithm-functions.md#find).

   Example (before)

    ```cpp
    try
    {
        auto iter = std::find(v.begin(), v.end(), 5);
    }
    catch (...)
    {
        do_something();   // ok
    }
    ```

   Example (after)

    ```cpp
    try
    {
        auto iter = std::find(v.begin(), v.end(), 5);
    }
    catch (...)
    {
        do_something();   // warning C4702: unreachable code
    }
    ```

### <a name="VS_Update2"></a> Conformance Improvements in Update 2

- **Additional warnings and errors might be issued as a result of partial support for expression SFINAE**

   Previous versions of the compiler did not parse certain kinds of expressions inside **`decltype`** specifiers due to lack of  support for expression SFINAE. This old behavior was incorrect and doesn't conform to the C++ standard. The compiler now parses these expressions and has partial support for expression SFINAE due to  ongoing conformance improvements. As a result, the compiler now issues warnings and errors found in  expressions that previous versions of the compiler did not parse.

   When this new behavior parses a **`decltype`** expression that includes a type that hasn't been declared yet, the compiler issues compiler error C2039 as a result.

    ```Output
    error C2039: 'type': is not a member of 'global namespace'
    ```

   Example 1:  use of an undeclared type (before)

    ```cpp
    struct s1
    {
        template < typename T>
        auto f() - > decltype(s2< T> ::type::f());  // error C2039

        template< typename>
        struct s2 {};
    }
    ```

   Example 1 (after)

    ```cpp
    struct s1
    {
        template < typename>  // forward declare s2struct s2;

            template < typename T>
        auto f() - > decltype(s2< T> ::type::f());

        template< typename>
        struct s2 {};
    }
    ```

   When this new behavior parses a **`decltype`** expression that's missing a necessary use of the **`typename`** keyword to specify that a dependent name is a type, the compiler issues compiler warning C4346 together with compiler error C2923.

    ```Output
    warning C4346: 'S2<T>::Type': dependent name is not a type
    ```

    ```Output
    error C2923: 's1': 'S2<T>::Type' is not a valid template type argument for parameter 'T'
    ```

   Example 2: dependent name isn't a type (before)

    ```cpp
    template < typename T>
    struct s1
    {
        typedef T type;
    };

    template < typename T>
    struct s2
    {
        typedef T type;
    };

    template < typename T>
    T declval();

    struct s
    {
        template < typename T>
        auto f(T t) - > decltype(t(declval< S1< S2< T> ::type> ::type> ()));  // warning C4346, error C2923
    };
    ```

   Example 2 (after)

    ```cpp
    template < typename T> struct s1 { ... };  // as above
    template < typename T> struct s2 { ... };  // as above

    template < typename T>
    T declval();

    struct s
    {
        template < typename T>
        auto f(T t) - > decltype(t(declval< S1< typename S2< T> ::type> ::type> ()));
    };
    ```

- **`volatile`** **member variables prevent implicitly defined constructors and assignment operators**

   Previous versions of the compiler allowed a class that has **`volatile`** member variables to have default copy/move constructors and default copy/move assignment operators automatically generated. This old behavior was incorrect and doesn't conform to the C++ standard. The compiler now considers a class that has **`volatile`** member variables to have non-trivial construction and assignment operators, which prevents default implementations of these operators from being automatically generated. When such a class is a member of a union (or an anonymous union inside of a class), the copy/move constructors and copy/move assignment operators of the union (or the class containing the anonymous union) will be implicitly defined as deleted. Attempting to construct or copy the union (or class containing the anonymous union) without explicitly defining them is an error and the compiler  issues compiler error C2280 as a result.

    ```Output
    error C2280: 'B::B(const B &)': attempting to reference a deleted function
    ```

   Example (before)

    ```cpp
    struct A
    {
        volatile int i;
        volatile int j;
    };

    extern A* pa;

    struct B
    {
        union
        {
            A a;
            int i;
        };
    };

    B b1{ *pa };
    B b2(b1);  // error C2280
    ```

   Example (after)

    ```cpp
    struct A
    {
        int i; int j;
    };

    extern volatile A* pa;

    A getA()  // returns an A instance copied from contents of pa
    {
        A a;
        a.i = pa - > i;
        a.j = pa - > j;
        return a;
    }

    struct B;  // as above

    B b1{ GetA() };
    B b2(b1);  // error C2280
    ```

- **Static member functions do not support cv-qualifiers.**

   Previous versions of Visual Studio 2015 allowed static member functions to have cv-qualifiers. This behavior is due to a regression in Visual Studio 2015 and Visual Studio 2015 Update 1; Visual Studio 2013 and previous versions of the compiler reject code written in this way. The behavior of Visual Studio 2015 and Visual Studio 2015 Update 1 is incorrect and doesn't conform to the C++ standard.  Visual Studio 2015 Update 2 rejects code written in this way and issues compiler error C2511 instead.

    ```Output
    error C2511: 'void A::func(void) const': overloaded member function not found in 'A'
    ```

   Example (before)

    ```cpp
    struct A
    {
        static void func();
    };

    void A::func() const {}  // C2511
    ```

   Example(after)

    ```cpp
    struct A
    {
        static void func();
    };

    void A::func() {}  // removed const
    ```

- **Forward declaration of enum is not allowed in WinRT code** (only affects `/ZW`)

   Code compiled for the Windows Runtime (WinRT) doesn't allow **`enum`** types to be forward declared, similarly to when managed C++ code is compiled for the .Net Framework using the `/clr` compiler switch. This behavior ensures that the size of an enumeration is always known and can be correctly projected to the WinRT type system. The compiler rejects code written in this way and  issues compiler error C2599 together with compiler error C3197.

    ```Output
    error C2599: 'CustomEnum': the forward declaration of a WinRT enum is not allowed
    ```

    ```Output
    error C3197: 'public': can only be used in definitions
    ```

   Example (before)

    ```cpp
    namespace A {
        public enum class CustomEnum : int32;  // forward declaration; error C2599, error C3197
    }

    namespace A {
        public enum class CustomEnum : int32
        {
            Value1
        };
    }

    public ref class Component sealed
    {
    public:
        CustomEnum f()
        {
            return CustomEnum::Value1;
        }
    };
    ```

   Example (after)

    ```cpp
              // forward declaration of CustomEnum removed
    namespace A {
        public enum class CustomEnum : int32
        {
            Value1
        };
    }

    public ref class Component sealed
    {
    public:
        CustomEnum f()
        {
            return CustomEnum::Value1;
        }
    };
    ```

- **Overloaded non-member operator new and operator delete may not be declared inline** (Level 1 (`/W1`) on-by-default)

   Previous versions of the compiler do not issue a warning when non-member operator new and operator delete functions are declared inline. Code written in this way is ill-formed (no diagnostic required) and can cause memory issues  resulting from mismatched new and delete operators (especially when used together with sized deallocation) that can be difficult to diagnose. The compiler now issues compiler warning C4595 to help identify code written in this way.

    ```Output
    warning C4595: 'operator new': non-member operator new or delete functions may not be declared inline
    ```

   Example (before)

    ```cpp
    inline void* operator new(size_t sz)  // warning C4595
    {
        ...
    }
    ```

   Example (after)

    ```cpp
    void* operator new(size_t sz)  // removed inline
    {
        ...
    }
    ```

   Fixing code that's written in this way might require that the operator definitions be moved out of a header file and into a corresponding source file.

### <a name="VS_Update3"></a> Conformance Improvements in Update 3

- **std::is_convertable now detects self-assignment**  (standard library)

   Previous versions of the `std::is_convertable` type-trait did not correctly detect self-assignment of a class type when its copy constructor is deleted or private. Now, `std::is_convertable<>::value` is correctly set to **`false`** when applied to a class type with a deleted or private copy constructor.

   There is no compiler diagnostic associated with this change.

   Example

    ```cpp
    #include <type_traits>

    class X1
    {
                public:
                X1(const X1&) = delete;
                };

    class X2
    {
                private:
                X2(const X2&);
                };

    static_assert(std::is_convertible<X1&, X1>::value, "BOOM");static_assert(std::is_convertible<X2&, X2>::value, "BOOM");
    ```

   In previous versions of the compiler, the static assertions at the bottom of this example pass because `std::is_convertable<>::value` was incorrectly set to **`true`**. Now, `std::is_convertable<>::value` is correctly set to **`false`**, causing the static assertions to fail.

- **Defaulted or deleted trivial copy and move constructors respect access specifiers**

   Previous versions of the compiler did not check the access specifier of defaulted or deleted trivial copy and move constructors before allowing them to be called. This old behavior was incorrect and doesn't conform to the C++ standard. In some cases, this old  behavior created a risk of silent bad code generation, resulting in unpredictable runtime behavior. The compiler now checks the access specifier  of defaulted or deleted trivial copy and move constructors to determine whether it can be called, and if not, issues compiler warning C2248 as a result.

    ```Output
    error C2248: 'S::S' cannot access private member declared in class 'S'
    ```

   Example (before)

    ```cpp
    class S {
    public:
        S() = default;
    private:
        S(const S&) = default;
    };

    void f(S);  // pass S by value

    int main()
    {
        S s;
        f(s);  // error C2248, can't invoke private copy constructor
    }
    ```

   Example (after)

    ```cpp
    class S {
    public:
        S() = default;
    private:
        S(const S&) = default;
    };

    void f(const S&);  // pass S by reference

    int main()
    {
        S s;
        f(s);
    }
    ```

- **Deprecation of attributed ATL code support** (Level 1 (`/W1`) on-by-default)

   Previous versions of the compiler supported attributed ATL code. As the next phase of removing support for attributed ATL code that [began in Visual Studio 2008](../porting/visual-cpp-what-s-new-2003-through-2015.md#whats-new-for-c-in-visual-studio-2008), attributed ATL code has been deprecated. The compiler now issues compiler warning C4467 to help identify this kind of deprecated code.

    ```Output
    warning C4467: Usage of ATL attributes is deprecated
    ```

   If you want to continue using attributed ATL code until support is removed from the compiler, you can disable this warning by passing the `/Wv:18` or `/wd:4467` command-line arguments to the compiler, or by adding `#pragma warning(disable:4467)` in your source code.

   Example 1 (before)

    ```cpp
              [uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]
    class A {};
    ```

   Example 1 (after)

    ```cpp
    __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) A {};
    ```

   Sometimes you might need or want to create an IDL file to avoid the use deprecated ATL attributes, as in the example code below

   Example 2 (before)

    ```cpp
    [emitidl];
    [module(name = "Foo")];

    [object, local, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
    __interface ICustom {
        HRESULT Custom([in] long l, [out, retval] long *pLong);
        [local] HRESULT CustomLocal([in] long l, [out, retval] long *pLong);
    };

    [coclass, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
    class CFoo : public ICustom
    {
        // ...
    };
    ```

   First, create the *.idl file; the vc140.idl generated file can be used to obtain an \*.idl file containing the interfaces and annotations.

   Next, add a MIDL step to your build to make sure that the C++ interface definitions are generated.

   Example 2 IDL (after)

    ```cpp
    import "docobj.idl";

    [
        object, local, uuid(9e66a290 - 4365 - 11d2 - a997 - 00c04fa37ddb)
    ]

    interface ICustom : IUnknown {
        HRESULT  Custom([in] long l, [out, retval] long *pLong);
        [local] HRESULT  CustomLocal([in] long l, [out, retval] long *pLong);
    };

    [version(1.0), uuid(29079a2c - 5f3f - 3325 - 99a1 - 3ec9c40988bb)]
    library Foo
    {
        importlib("stdole2.tlb");
    importlib("olepro32.dll");
    [
        version(1.0),
        appobject,uuid(9e66a294 - 4365 - 11d2 - a997 - 00c04fa37ddb)
    ]

    coclass CFoo {
        interface ICustom;
    };
    }
    ```

   Then, use ATL directly in the implementation file, as in the example code below.

   Example 2  Implementation (after)

    ```cpp
    #include <idl.header.h>
    #include <atlbase.h>

    class ATL_NO_VTABLE CFooImpl :
        public ICustom,
        public ATL::CComObjectRootEx< CComMultiThreadModel>
    {
    public:
        BEGIN_COM_MAP(CFooImpl)
            COM_INTERFACE_ENTRY(ICustom)
        END_COM_MAP()
    };
    ```

- **Precompiled header (PCH) files and mismatched #include directives** (only affects `/Wall` `/WX`)

   Previous versions of the compiler accepted mismatched `#include` directives in source files between `-Yc` and `-Yu` compilations when using precompiled header (PCH)  files. Code written in this way is no longer accepted by the compiler.   The compiler now issues compiler warning CC4598 to help identify mismatched `#include` directives when using PCH files.

    ```Output
    warning C4598: 'b.h': included header file specified for Ycc.h at position 2 does not match Yuc.h at that position
    ```

   Example (before):

   X.cpp (-Ycc.h)

    ```cpp
    #include "a.h"
    #include "b.h"
    #include "c.h"
    ```

   Z.cpp (-Yuc.h)

    ```cpp
    #include "b.h"
    #include "a.h"  // mismatched order relative to X.cpp
    #include "c.h"
    ```

   Example (after)

   X.cpp (-Ycc.h)

    ```cpp
    #include "a.h"
    #include "b.h"
    #include "c.h"
    ```

   Z.cpp (-Yuc.h)

    ```cpp
    #include "a.h"
    #include "b.h" // matched order relative to X.cpp
    #include "c.h"
    ```

- **Precompiled header (PCH) files and mismatched include directories** (only affects `/Wall` `/WX`)

   Previous versions of the compiler accepted mismatched include directory (`-I`) command-line arguments to the compiler between `-Yc` and `-Yu` compilations when using precompiled header (PCH) files. Code written in this way is no longer accepted by the compiler. The compiler now issues compiler warning CC4599 to help identify mismatched include directory (`-I`) command line arguments when using PCH files.

    ```Output
    warning C4599: '-I..' : specified for Ycc.h at position 1 does not match Yuc.h at that position
    ```

   Example (before)

    ```ms-dos
    cl /c /Wall /Ycc.h -I.. X.cpp
    cl /c /Wall /Yuc.h Z.cpp
    ```

   Example (after)

    ```ms-dos
    cl /c /Wall /Ycc.h -I.. X.cpp
    cl /c /Wall /Yuc.h -I.. Z.cpp
    ```

## Visual Studio 2013 Conformance Changes

### Compiler

- The **final** keyword now generates an unresolved symbol error where it would have compiled previously:

    ```cpp
    struct S1 {
        virtual void f() = 0;
    };

    struct S2 final : public S1 {
        virtual void f();
    };

    int main(S2 *p)
    {
        p->f();
    }
    ```

   In earlier versions, an error wasn't issued because the call was a **`virtual`** call; nevertheless, the program would crash at runtime. Now, a linker error is issued because the class is known to be final. In this example, to fix the error, you would link against the obj that contains the definition of `S2::f`.

- When you use friend functions in namespaces, you must redeclare the friend function before you refer to it or you will get an error because the compiler now conforms to the ISO C++ Standard. For example, this example no longer compiles:

    ```cpp
    namespace NS {
        class C {
            void func(int);
            friend void func(C* const) {}
        };

        void C::func(int) {
            NS::func(this);  // error
        }
    }
    ```

   To correct this code, declare the **`friend`** function:

    ```cpp
    namespace NS {
        class C {
            void func(int);
            friend void func(C* const) {}
        };

        void func(C* const);  // conforming fix

        void C::func(int) {
            NS::func(this);
        }
    ```

- The C++ Standard doesn't allow explicit specialization in a class. Although the Microsoft C++ compiler allows it in some cases, in cases such as the following example, an error is now generated because the compiler doesn't consider the second function to be a specialization of the first one.

    ```cpp
    template < int N>
    class S {
    public:
        template  void f(T& val);
        template < > void f(char val);
    };

    template class S< 1>;
    ```

   To correct this code, modify the second function:

    ```cpp
    template <> void f(char& val);
    ```

- The compiler no longer tries to disambiguate the two functions in the following example, and now emits an error:

    ```cpp
    template< typename T> void Func(T* t = nullptr);
    template< typename T> void Func(...);

    int main() {
        Func< int>(); // error
    }
    ```

   To correct this code, clarify the call:

    ```cpp
    template< typename T> void Func(T* t = nullptr);
    template< typename T> void Func(...);

    int main() {
        Func< int>(nullptr); // ok
    }
    ```

- Before the compiler conformed to ISO C++11, the following code would have compiled and caused `x` to resolve to type **`int`**:

    ```cpp
    auto x = {0};
    int y = x;
    ```

   This code now resolves `x` to a type of `std::initializer_list<int>` and causes an error on the next line that tries to assign `x` to type **`int`**. (There is no conversion by default.) To correct this code, use **`int`** to replace **`auto`**:

    ```cpp
    int x = {0};
    int y = x;
    ```

- Aggregate initialization is no longer allowed when the type of the right-hand value doesn't match the type of the left-hand value that's being initialized, and an error is issued because the ISO C++11 Standard requires uniform initialization to work without narrowing conversions. Previously, if a narrowing conversion was available, a [Compiler Warning (level 4) C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) warning would have been issued instead of an error.

    ```cpp
    int i = 0;
    char c = {i}; // error
    ```

   To correct this code, add an explicit narrowing conversion:

    ```cpp
    int i = 0;
    char c = {static_cast<char>(i)};
    ```

- The following initialization is no longer allowed:

    ```cpp
    void *p = {{0}};
    ```

   To correct this code, use either of these forms:

    ```cpp
    void *p = 0;
    // or
    void *p = {0};
    ```

- Name lookup has changed. The following code is resolved differently in the C++ compiler in Visual Studio 2012 and Visual Studio 2013:

    ```cpp
    enum class E1 { a };
    enum class E2 { b };

    int main()
    {
        typedef E2 E1;
        E1::b;
    }
    ```

   In Visual Studio 2012, the `E1` in expression `E1::b` resolved to `::E1` in the global scope. In Visual Studio 2013, `E1` in expression `E1::b` resolves to the `typedef E2` definition in `main()` and has type `::E2`.

- Object layout has changed. On x64, the object layout of a class may change from previous releases. If it has a **`virtual`** function but it doesn't have a base class that has a **`virtual`** function, the object model of the compiler inserts a pointer to a **`virtual`** function table after the data member layout. This means the layout may not be optimal in all cases. In previous releases, an optimization for x64 would try to improve the layout for you, but because it failed to work correctly in complex code situations, it was removed in Visual Studio 2013. For example, consider this code:

    ```cpp
    __declspec(align(16)) struct S1 {
    };

    struct S2 {
        virtual ~S2();
        void *p;
        S1 s;
    };
    ```

- In Visual Studio 2013, the result of `sizeof(S2)` on x64 is 48, but in previous releases, it evaluates to 32. To make this evaluate to 32 in the Visual Studio 2013 C++ compiler for x64, add a dummy base class that has a **`virtual`** function:

    ```cpp
    __declspec(align(16)) struct S1 {
    };

    struct dummy {
        virtual ~dummy() {}
    };
    struct S2 : public dummy {
        virtual ~S2();
        void *p;
        S1 s;
    };
    ```

   To find places in your code that an earlier release would have tried to optimize, use a compiler from that release together with the `/W3` compiler option and turn on warning C4370. For example:

    ```cpp
    #pragma warning(default:4370)

    __declspec(align(16)) struct S1 {
    };

    struct S2 {
        virtual ~S2();
        void *p;
        S1 s;
    };
    ```

   Before Visual Studio 2013, this code outputs this message: "warning C4370: 'S2' : layout of class has changed from a previous version of the compiler due to better packing".

   The x86 compiler has the same suboptimal layout issue in all versions of the compiler. For example, if this code is compiled for x86:

    ```cpp
    struct S {
        virtual ~S();
        int i;
        double d;
    };
    ```

   The result of `sizeof(S)` is 24. However, it can be reduced to 16 if you use the workaround mentioned for x64:

    ```cpp
    struct dummy {
        virtual ~dummy() {}
    };

    struct S : public dummy {
        virtual ~S();
        int i;
        double d;
    };
    ```

### Standard Library

The C++ compiler in Visual Studio 2013 detects mismatches in _ITERATOR_DEBUG_LEVEL, which was implemented in Visual Studio 2010, and RuntimeLibrary mismatches. These mismatches occur when compiler options `/MT` (static release), `/MTd` (static debug), `/MD` (dynamic release), and `/MDd` (dynamic debug) are mixed.

- If your code acknowledges the previous release's simulated alias templates, you have to change it. For example, instead of `allocator_traits<A>::rebind_alloc<U>::other`, now you have to say `allocator_traits<A>::rebind_alloc<U>`. Although `ratio_add<R1, R2>::type` is no longer necessary and we now recommend that you say `ratio_add<R1, R2>`, the former will still compile because `ratio<N, D>` is required to have a "type" typedef for a reduced ratio, which will be the same type if it's already reduced.

- You must use `#include <algorithm>` when you call `std::min()` or `std::max()`.

- If your existing code uses the previous release's simulated scoped enums—traditional unscoped enums wrapped in namespaces—you have to change it. For example, if you referred to the type `std::future_status::future_status`, now you have to say `std::future_status`. However, most code is unaffected—for example, `std::future_status::ready` still compiles.

- `explicit operator bool()` is stricter than operator unspecified-bool-type(). `explicit operator bool()` permits explicit conversions to bool—for example, given `shared_ptr<X> sp`, both `static_cast<bool>(sp)` and `bool b(sp)` are valid—and Boolean-testable "contextual conversions" to bool—for example, `if (sp)`, `!sp`, `sp &&` whatever. However, `explicit operator bool()` forbids implicit conversions to bool, so you can't say `bool b = sp;` and given a bool return type, you can't say `return sp`.

- Now that real variadic templates are implemented, _VARIADIC_MAX and related macros have no effect. If you're still defining _VARIADIC_MAX, it's ignored. If you acknowledged our macro machinery intended to support simulated variadic templates in any other way, you have to change your code.

- In addition to ordinary keywords, C++ Standard Library headers now forbid the macro replacement of the context-sensitive keywords **override** and **final**.

- `reference_wrapper`, `ref()`, and `cref()` now forbid binding to temporary objects.

- `<random>` now strictly enforces its compile-time preconditions.

- Various C++ Standard Library type traits have the precondition "T shall be a complete type". Although the compiler now enforces this precondition more strictly, it may not enforce it in all situations. (Because C++ Standard Library precondition violations trigger undefined behavior, the Standard doesn't guarantee enforcement.)

- The C++ Standard Library doesn't support `/clr:oldSyntax`.

- The C++11 specification for `common_type<>` had unexpected and undesired consequences; in particular, it makes `common_type<int, int>::type` return `int&&`. Therefore, the compiler implements the Proposed Resolution for Library Working Group issue 2141, which makes `common_type<int, int="">::type` return `int`.

   As a side-effect of this change, the identity case no longer works (`common_type<T>` doesn't always result in type `T`). This behavior conforms to the Proposed Resolution, but it breaks any code that relied on the previous behavior.

   If you require an identity type trait, don't use the non-standard `std::identity` that's defined in `<type_traits>` because it won't work for `<void>`. Instead, implement your own identity type trait to suit your needs. Here's an example:

    ```cpp
    template < typename T> struct Identity {
        typedef T type;
    };
    ```

### MFC and ATL

- **Visual Studio 2013 only**: MFC MBCS Library isn't included in Visual Studio because Unicode is so popular and use of MBCS has declined significantly. This change also keeps MFC more closely aligned with the Windows SDK itself, because many of the new controls and messages are Unicode-only. However, if you must continue to use the MFC MBCS library, you can download it from the Microsoft Download Center at [Multibyte MFC Library for Visual Studio 2013](https://www.microsoft.com/download/details.aspx?id=40770). The Visual C++ Redistributable Package still includes this library.  (Note: The MBCS DLL is included in the C++ setup components in Visual Studio 2015 and later).

- Accessibility for the MFC ribbon is changed.  Instead of a one-level architecture, there is now a hierarchical architecture. You can still use the old behavior by calling `CRibbonBar::EnableSingleLevelAccessibilityMode()`.

- `CDatabase::GetConnect` method is removed. To improve security, the connection string is now stored encrypted and is decrypted only as needed; it can't be returned as plain text.  The string can be obtained by using the `CDatabase::Dump` method.

- Signature of `CWnd::OnPowerBroadcast` is changed. The signature of this message handler is changed to take an LPARAM as the second parameter.

- Signatures are changed to accommodate message handlers. The parameter lists of the following functions have been changed to use newly added ON_WM_* message handlers:

  - `CWnd::OnDisplayChange` changed to (UINT, int, int) instead of (WPARAM, LPARAM) so that the new ON_WM_DISPLAYCHANGE macro can be used in the message map.

  - `CFrameWnd::OnDDEInitiate` changed to (CWnd*, UINT, UNIT) instead of (WPARAM, LPARAM) so that the new ON_WM_DDE_INITIATE macro can be used in the message map.

  - `CFrameWnd::OnDDEExecute` changed to (CWnd*, HANDLE) instead of (WPARAM, LPARAM) so that the new ON_WM_DDE_EXECUTE macro can be used in the message map.

  - `CFrameWnd::OnDDETerminate` changed to (CWnd*) as the parameter instead of (WPARAM, LPARAM) so that the new ON_WM_DDE_TERMINATE macro can be used in the message map.

  - `CMFCMaskedEdit::OnCut` changed to no parameters instead of (WPARAM, LPARAM) so that the new ON_WM_CUT macro can be used in the message map.

  - `CMFCMaskedEdit::OnClear` changed to no parameters instead of (WPARAM, LPARAM) so that the new ON_WM_CLEAR macro can be used in the message map.

  - `CMFCMaskedEdit::OnPaste` changed to no parameters instead of (WPARAM, LPARAM) so that the new ON_WM_PASTE macro can be used in the message map.

- `#ifdef` directives in the MFC header files are removed. Numerous `#ifdef` directives in the MFC header files related to unsupported versions of Windows (`WINVER < 0x0501`) are removed.

- ATL DLL (atl120.dll) is removed. ATL is now provided as headers and a static library (atls.lib).

- Atlsd.lib, atlsn.lib, and atlsnd.lib are removed. Atls.lib no longer has character-set dependencies or code that's specific for debug/release. Because it works the same for Unicode/ANSI and debug/release, only one version of the library is required.

- ATL/MFC Trace tool is removed together with the ATL DLL, and the tracing mechanism is simplified. The `CTraceCategory` constructor now takes one parameter (the category name), and the TRACE macros call the CRT debug reporting functions.

## Visual Studio 2012 Breaking Changes

### Compiler

- The `/Yl` compiler option has changed. By default, the compiler uses this option, which can lead to LNK2011 errors under certain conditions. For more information, see [/Yl (Inject PCH Reference for Debug Library)](../build/reference/yl-inject-pch-reference-for-debug-library.md).

- In code that's compiled by using `/clr`, the **`enum`** class keyword defines a C++11 enum, not a common language runtime (CLR) enum. To define a CLR enum, you must be explicit about its accessibility.

- Use the template keyword to explicitly disambiguate a dependent name (C++ Language Standard conformance). In the following example, the highlighted template keyword is mandatory to resolve the ambiguity. For more information, see [Name Resolution for Dependent Types](../cpp/name-resolution-for-dependent-types.md).

    ```cpp
    template < typename X = "", typename = "" AY = "">
    struct Container { typedef typename AY::template Rebind< X> ::Other AX; };
    ```

- Constant expression of type float is no longer allowed as a template argument, as shown in the following example.

    ```cpp
    template<float n=3.14>
    struct B {};  // error C2993: 'float': illegal type for non-type template parameter 'n'
    ```

- Code that's compiled by using the `/GS` command-line option and that has an off-by-one vulnerability may lead to process termination at                 runtime, as shown in the following pseudocode example.

    ```cpp
    char buf[MAX]; int cch; ManipulateString(buf, &cch); // ... buf[cch] = '\0'; // if cch >= MAX, process will terminate
    ```

- The default architecture for x86 builds is changed to SSE2; therefore, the compiler may emit SSE instructions, and will use the XMM                 registers to perform floating-point calculations. If you want to revert to previous behavior, then use the `/arch:IA32` compiler flag to specify the architecture as IA32.

- The compiler may issue warnings [Compiler Warning (level 4) C4703](../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md) and C4701 where previously it did not. The compiler applies stronger checks for use of uninitialized local variables of pointer type.

- When the new linker flag `/HIGHENTROPYVA` is specified, Windows 8 typically causes memory allocations to return a 64-bit address. (Prior to Windows 8, such allocations more often returned addresses that were less than 2 GB.) This change may expose pointer truncation bugs in existing code. By default, this switch is on. To disable this behavior, specify `/HIGHENTROPYVA:NO`.

- The managed compiler (Visual Basic/C#) also supports `/HIGHENTROPYVA` for managed builds.  However, in this case, the `/HIGHENTROPYVAswitch` is off by default.

### IDE

- Although we recommend that you do not create Windows Forms applications in C++/CLI, maintenance of existing C++/CLI UI applications is supported. If you have to create a Windows Forms application, or any other .NET UI application, use C# or Visual Basic. Use C++/CLI for interoperability purposes only.

### Parallel Patterns Library and Concurrency Runtime Library

The `SchedulerType` enumeration of `UmsThreadDefault` is deprecated. Specification of `UmsThreadDefault` produces a deprecated warning, and internally maps back to the `ThreadScheduler`.

### Standard Library

- Following a breaking change between the C++98/03 and C++11 standards, using explicit template arguments to call `make_pair()` — as in `make_pair<int, int>(x, y)` — typically doesn't compile in Visual C++ in Visual Studio 2012. The solution is to always call `make_pair()` without explicit template arguments — as in `make_pair(x, y)`. Providing explicit template arguments defeats the purpose of the function. If you require precise control over the resulting type, use `pair` instead of `make_pair` — as in `pair<short, short>(int1, int2)`.

- Another breaking change between the C++98/03 and C++11 standards: When A is implicitly convertible to B and B is implicitly convertible to C, but A isn't implicitly convertible to C, C++98/03 and Visual Studio 2010 permitted `pair<A, X>` to be converted (implicitly or explicitly) to `pair<C, X>`. (The other type, X, isn't of interest here, and isn't specific to the first type in the pair.) The C++ compiler in Visual Studio 2012 detects that A isn't implicitly convertible to C, and removes the pair conversion from overload resolution. This change is a positive for many scenarios. For example, overloading `func(const pair<int, int>&)` and `func(const pair<string, string>&)`, and calling `func()` with `pair<const char *, const char *>` will compile with this change. However, this change breaks code that relied on aggressive pair conversions. Such code can typically be fixed by performing one part of the conversion explicitly—for example, by passing `make_pair(static_cast<B>(a), x)` to a function that expects `pair<C, X>`.

- Visual Studio 2010 simulated variadic templates—for example, `make_shared<T>(arg1, arg2, argN)`—up to a limit of 10 arguments, by stamping out overloads and specializations with preprocessor machinery. In Visual Studio 2012, this limit is reduced to five arguments to improve compile times and compiler memory consumption for the majority of users. However, you can set the previous limit by explicitly defining _VARIADIC_MAX as 10, project-wide.

- C++11 17.6.4.3.1 [macro.names]/2 forbids macro replacement of keywords when C++ Standard Library headers are included. The headers now emit compiler errors if they detect macro-replaced keywords. (Defining _ALLOW_KEYWORD_MACROS allows such code to compile, but we strongly discourage that usage.) As an exception, the macro form of `new` is permitted by default, because the headers comprehensively defend themselves by using `#pragma push_macro("new")`/`#undef new`/`#pragma pop_macro("new")`. Defining _ENFORCE_BAN_OF_MACRO_NEW does exactly what its name implies.

- To implement various optimizations and debugging checks, the C++ Standard Library implementation intentionally breaks binary compatibility among versions of Visual Studio (2005, 2008, 2010, 2012). When the C++ Standard Library is used, it forbids the mixing of object files and static libraries that are compiled by using different versions into one binary (EXE or DLL), and forbids the passing of C++ Standard Library objects between binaries that are compiled by using different versions. The mixing of object files and static libraries (using the C++ Standard Library that were compiled by using Visual Studio 2010 with ones that were compiled by using The C++ compiler in Visual Studio 2012 emits linker errors about _MSC_VER mismatch, where _MSC_VER is the macro that contains the compiler's major version (1700 for Visual C++ in Visual Studio 2012). This check can't detect DLL mixing, and can't detect mixing that involves Visual Studio 2008 or earlier.

- In addition to detecting _ITERATOR_DEBUG_LEVEL mismatches, which was implemented in Visual Studio 2010, The C++ compiler in Visual Studio 2012 detects Runtime Library mismatches. These mismatches occur when the compiler options `/MT` (static release), `/MTd` (static debug), `/MD` (dynamic release), and `/MDd` (dynamic debug) are mixed.

- `operator<()`, `operator>()`, `operator<=()`, and `operator>=()` were previously available for the `std::unordered_map` and `stdext::hash_map` families of containers, although their implementations were not useful. These non-standard operators have been removed in Visual C++ in Visual Studio 2012. Additionally, the implementation of `operator==()` and `operator!=()` for the `std::unordered_map` family has been extended to cover the `stdext::hash_map` family. (We recommend that you avoid the use of the `stdext::hash_map` family in new code.)

- C++11 22.4.1.4 [locale.codecvt] specifies that `codecvt::length()` and `codecvt::do_length()` should take modifiable `stateT&` parameters, but Visual Studio 2010 took `const stateT&`. The C++ compiler in Visual Studio 2012 takes `stateT&` as mandated by the standard. This difference is significant for anyone who is attempting to override the virtual function `do_length()`.

### CRT

- The C Runtime (CRT) heap, which is used for new and malloc(), is no longer private. The CRT now uses the process heap. This means that the heap isn't destroyed when a DLL is unloaded, so DLLs that link statically to the CRT must ensure memory that's allocated by the DLL code is cleaned up before it's unloaded.

- The `iscsymf()` function asserts with negative values.

- The `threadlocaleinfostruct` struct has changed to accommodate the changes to locale functions.

- CRT functions that have corresponding intrinsics such as `memxxx()`, `strxxx()` are removed from intrin.h. If you included intrin.h only for these functions, you must now include the corresponding CRT headers.

### MFC and ATL

- Removed Fusion support (afxcomctl32.h); therefore, all methods that are defined in `<afxcomctl32.h>` have been removed. Header files `<afxcomctl32.h>` and `<afxcomctl32.inl>` have been deleted.

- Changed the name of `CDockablePane::RemoveFromDefaultPaneDividier` to `CDockablePane::RemoveFromDefaultPaneDivider`.

- Changed the signature of `CFileDialog::SetDefExt` to use LPCTSTR; therefore, Unicode builds are affected.

- Removed obsolete ATL tracing categories.

- Changed the signature of `CBasePane::MoveWindow` to take a `const CRect`.

- Changed the signature of `CMFCEditBrowseCtrl::EnableBrowseButton`.

- Removed `m_fntTabs` and `m_fntTabsBold` from `CMFCBaseTabCtrl`.

- Added a parameter to the `CMFCRibbonStatusBarPane` constructors. (It is a default parameter, and so it's not source-breaking.)

- Added a parameter to the `CMFCRibbonCommandsListBox` constructor. (It is a default parameter, and so it's not source-breaking.)

- Removed the `AFXTrackMouse` API (and related timer proc). Use the Win32 `TrackMouseEvent` API instead.

- Added a parameter to the `CFolderPickerDialog` constructor. (It is a default parameter, and so it's not source-breaking.)

- `CFileStatus` structure size changed: The `m_attribute` member changed from BYTE to DWORD (to match the value that's returned from `GetFileAttributes`).

- `CRichEditCtrl` and `CRichEditView` use MSFTEDIT_CLASS (RichEdit 4.1 control) instead of RICHEDIT_CLASS (RichEdit 3.0 control) in Unicode builds.

- Removed `AFX_GLOBAL_DATA::IsWindowsThemingDrawParentBackground` because it's always TRUE on Windows Vista, Windows 7, and Windows 8.

- Removed `AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable` because it's always TRUE on Windows Vista, Windows 7, and Windows 8.

- Removed `AFX_GLOBAL_DATA::DwmExtendFrameIntoClientArea`. Call Windows API directly on Windows Vista, Windows 7, and Windows 8.

- Removed `AFX_GLOBAL_DATA::DwmDefWindowProc`. Call Windows API directly on Windows Vista, Windows 7, and Windows 8.

- Renamed `AFX_GLOBAL_DATA::DwmIsCompositionEnabled` to `IsDwmCompositionEnabled` to eliminate name collision.

- Changed identifiers for a number of MFC internal timers and moved the definitions to afxres.h (AFX_TIMER_ID_*).

- Changed the signature of `OnExitSizeMove` method to agree with the ON_WM_EXITSIZEMOVE macro:

  - `CFrameWndEx`

  - `CMDIFrameWndEx`

  - `CPaneFrameWnd`

- Changed the name and signature of `OnDWMCompositionChanged` to agree with the ON_WM_DWMCOMPOSITIONCHANGED macro:

  - `CFrameWndEx`

  - `CMDIFrameWndEx`

  - `CPaneFrameWnd`

- Changed the signature of `OnMouseLeave` method to agree with the ON_WM_MOUSELEAVE macro:

  - `CMFCCaptionBar`

  - `CMFCColorBar`

  - `CMFCHeaderCtrl`

  - `CMFCProperySheetListBox`

  - `CMFCRibbonBar`

  - `CMFCRibbonPanelMenuBar`

  - `CMFCRibbonRichEditCtrl`

  - `CMFCSpinButtonCtrl`

  - `CMFCToolBar` ReplaceThisText

  - `CMFCToolBarComboBoxEdit`

  - `CMFCToolBarEditCtrl`

  - `CMFCAutoHideBar`

- Changed the signature of `OnPowerBroadcast` to agree with the ON_WM_POWERBROADCAST macro:

  - `CFrameWndEx`

  - `CMDIFrameWndEx`

- Changed the signature of `OnStyleChanged` to agree with the ON_WM_STYLECHANGED macro:

  - `CMFCListCtrl`

  - `CMFCStatusBar`

- Renamed the internal method `FontFamalyProcFonts` to `FontFamilyProcFonts`.

- Removed numerous global static `CString` objects to eliminate memory leaks in some situations (replaced with #defines), and the following class member variables:

  - `CKeyBoardManager::m_strDelimiter`

  - `CMFCPropertyGridProperty::m_strFormatChar`

  - `CMFCPropertyGridProperty::m_strFormatShort`

  - `CMFCPropertyGridProperty::m_strFormatLong`

  - `CMFCPropertyGridProperty::m_strFormatUShort`

  - `CMFCPropertyGridProperty::m_strFormatULong`

  - `CMFCPropertyGridProperty::m_strFormatFloat`

  - `CMFCPropertyGridProperty::m_strFormatDouble`

  - `CMFCToolBarImages::m_strPngResType`

  - `CMFCPropertyGridProperty::m_strFormat`

- Changed the signature of `CKeyboardManager::ShowAllAccelerators` and removed the accelerator delimiter parameter.

- Added `CPropertyPage::GetParentSheet`, and in the `CPropertyPage` class, call it instead of `GetParent` to get the correct parent sheet window, which may be the parent or a grandparent window to `CPropertyPage`. You might have to change your code to call `GetParentSheet` instead of `GetParent`.

- Fixed unbalanced #pragma warning(push) in ATLBASE.H, which caused warnings to be disabled incorrectly. Those warnings are now enabled correctly after ATLBASE.H has been parsed.

- Moved D2D-related methods from AFX_GLOBAL_DATA to _AFX_D2D_STATE:

  - `GetDirectD2dFactory`

  - `GetWriteFactory`

  - `GetWICFactory`

  - `InitD2D`

  - `ReleaseD2DRefs`

  - `IsD2DInitialized`

  - `D2D1MakeRotateMatrix`

  - Instead of calling, for example, `afxGlobalData.IsD2DInitialized`, call `AfxGetD2DState->IsD2DInitialized`.

- Removed obsolete ATL*.CPP files from the \atlmfc\include\ folder.

- Moved `afxGlobalData` initialization to on-demand instead of at CRT initialization time, to satisfy `DLLMain` requirements.

- Added the `RemoveButtonByIndex` method to the `CMFCOutlookBarPane` class.

- Corrected `CMFCCmdUsageCount::IsFreqeuntlyUsedCmd` to `IsFrequentlyUsedCmd`.

- Corrected several instances of `RestoreOriginalstate` to `RestoreOriginalState (CMFCToolBar, CMFCMenuBar, CMFCOutlookBarPane)`.

- Removed unused methods from `CDockablePane`: `SetCaptionStyle`, `IsDrawCaption`, `IsHideDisabledButtons`, `GetRecentSiblingPaneInfo`, and `CanAdjustLayout`.

- Removed `CDockablePane` static member variables `m_bCaptionText` and `m_bHideDisabledButtons`.

- Added an override `DeleteString` method to `CMFCFontComboBox`.

- Removed unused methods from `CPane`: `GetMinLength` and `IsLastPaneOnLastRow`.

- Renamed `CPane::GetDockSiteRow(CDockingPanesRow *)` to `CPane::SetDockSiteRow`.

## Visual Studio 2010 Breaking Changes

### Compiler

- The **`auto`** keyword has a new default meaning. Because use of the old meaning is rare, most applications will not be affected by this change.

- The new **`static_assert`** keyword is introduced, which will cause a name conflict if there is already an identifier by that name in your code.

- Support for the new lambda notation excludes support for coding an unquoted GUID in an IDL uuid attribute.

- The .NET Framework 4 introduces the concept of corrupted state exceptions, which are exceptions that leave a process in an unrecoverable                 corrupted state. By default, you can't catch a corrupted state exception, even with the /EHa compiler option that catches all other exceptions.                 To explicitly catch a corrupted state exception, use __try-\__except statements. Or, apply the [HandledProcessCorruptedStateExceptions]attribute                 to enable a function to catch corrupted state exceptions.  This change affects primarily system programmers who might have to catch a corrupted                 state exception. The eight exceptions are STATUS_ACCESS_VIOLATION, STATUS_STACK_OVERFLOW, EXCEPTION_ILLEGAL_INSTRUCTION,                 EXCEPTION_IN_PAGE_ERROR, EXCEPTION_INVALID_DISPOSITION, EXCEPTION_NONCONTINUABLE_EXCEPTION, EXCEPTION_PRIV_INSTRUCTION, STATUS_UNWIND_CONSOLIDATE.                 For more information about these exceptions, see the [GetExceptionCode](/windows/win32/Debug/getexceptioncode) macro.

- The revised `/GS` compiler option guards against buffer overruns more comprehensively than in earlier versions. This version might insert additional security checks in the stack that might decrease performance. Use the new `__declspec(safebuffers)` keyword to instruct the compiler to not insert security checks for a particular function.

- If you compile with both the `/GL` (Whole Program Optimization) and `/clr` (Common Language Runtime Compilation) compiler options, the `/GL` option is ignored. This change was made because the combination of compiler options provided little benefit. As a result of this change, the performance of the build is improved.

- By default, support for trigraphs is disabled in Visual Studio 2010. Use the `/Zc:trigraphs` compiler option to enable trigraphs support. A trigraph consists of two consecutive question marks ("??") followed by a unique third character. The compiler replaces a trigraph with a corresponding punctuation character. For example, the compiler replaces the `??=` trigraph with the '#' character. Use trigraphs in C source files that use a character set that doesn't contain convenient graphic representations for some punctuation characters.

- The linker no longer supports optimizing for Windows 98. The `/OPT` (Optimizations) option produces a compile time error if you specify `/OPT:WIN98` or `/OPT:NOWIN98`.

- The default compiler options that are specified by the RuntimeLibrary and DebugInformationFormat build system properties have been changed. By default, these build properties are specified in projects that are created by Visual C++ releases 7.0 through 10.0. If you migrate a project that was created by Visual C++ 6.0, consider whether to specify a value for these properties.

- In Visual Studio 2010, RuntimeLibrary = MultiThreaded (`/MD`) and DebugInformationFormat = ProgramDatabase (`/Zi`). In Visual C++ 9.0, RuntimeLibrary = MultiThreaded (`/MT`) and DebugInformationFormat = Disabled.

### CLR

- The Microsoft C# and Visual Basic compilers can now produce a no primary interop assembly (no-PIA). A no-PIA assembly can use COM types without the deployment of the relevant primary interop assembly (PIA). When consuming no-PIA assemblies produced by Visual C# or Visual Basic, you must reference the PIA assembly on the compile command before you reference any no-PIA assembly that uses the library.

### Visual Studio C++ projects and MSBuild

- Visual Studio C++ projects are now based on the MSBuild tool. Consequently, project files use a new XML file format and a .vcxproj file suffix. Visual Studio 2010 automatically converts project files from earlier versions of Visual Studio to the new file format. An existing project is affected if it depends on the previous build tool, VCBUILD.exe, or project file suffix, .vcproj.

- In earlier releases, Visual C++ supported the late evaluation of property sheets. For example, a parent property sheet could import a child property sheet, and the parent could use a variable defined in the child to define other variables. Late evaluation enabled the parent to use the child variable even before the child property sheet was imported. In Visual Studio 2010, a project sheet variable can't be used before it's defined because MSBuild supports only early evaluation.

### IDE

- The application termination dialog box no longer ends an application. In previous releases, when the `abort()` or `terminate()` function closed the retail build of an application, the C Run-Time Library displayed an application termination message in a console window or dialog box. The message said in part, "This application has requested the Runtime to terminate it in an unusual way. Please contact the application's support team for more information." The application termination message was redundant because Windows subsequently displayed the current termination handler, which was usually the Windows Error Reporting (Dr. Watson) dialog box or the Visual Studio debugger. Starting in Visual Studio 2010, the C Run-Time Library doesn't display the message. Furthermore, the runtime prevents the application from ending before a debugger starts. This is a breaking change only if you depend on the previous behavior of the application termination message.

- Specifically for Visual Studio 2010, IntelliSense doesn't work for C++/CLI code or attributes, **Find All References** doesn't work for local variables, and Code Model doesn't retrieve type names from imported assemblies or resolve types to their fully qualified names.

### Libraries

- The SafeInt class is included in Visual C++ and is no longer in a separate download. This is a breaking change only if you've developed a class that's also named "SafeInt".

- The libraries deployment model no longer uses manifests to find a particular version of a dynamic link library. Instead, the name of each dynamic link library contains its version number, and you use that name to locate the library.

- In previous versions of Visual Studio, you could rebuild the run time libraries. Visual Studio 2010 no longer supports building your own copies of the C run time library files.

### Standard Library

- The `<iterator>` header is no longer included automatically by many other header files. Instead, include that header explicitly if you require support for the standalone iterators defined in the header. An existing project is affected if it depends on the previous build tool, VCBUILD.exe, or project file suffix, .vcproj.iterator.

- In the `<algorithm>` header, the `checked_*` and `unchecked_*` functions are removed. And in the `<iterator>`> header, the `checked_iterator` class is removed, and the `unchecked_array_iterator` class has been added.

- The `CComPtr::CComPtr(int)` constructor is removed. That constructor allowed a `CComPtr` object to be constructed from the NULL macro, but was unnecessary and allowed nonsensical constructions from non-zero integers.

   A `CComPtr` can still be constructed from NULL, which is defined as 0, but will fail if constructed from an integer other than literal 0. Use **`nullptr`** instead.

- The following `ctype` member functions were removed: `ctype::_Do_narrow_s`, `ctype::_Do_widen_s`, `ctype::_narrow_s`, `ctype::_widen_s`. If an application uses one of these member functions, you must replace it with the corresponding non-secure version: `ctype::do_narrow`, `ctype::do_widen`, `ctype::narrow`, `ctype::widen`.

### CRT, MFC, and ATL Libraries

- Support has been removed for users to build the CRT, MFC, and ATL libraries. For example, no appropriate NMAKE file is provided. However, users still have access to the source code for these libraries. And a document that describes the MSBuild options that Microsoft uses to build these libraries will probably be posted in a Visual C++ Team Blog.

- MFC support for IA64 has been removed. However, support for the CRT and ATL on IA64 is still provided.

- Ordinals are no longer reused in MFC module-definition (.def) files. This change means ordinals will not be different between minor versions, and binary compatibility for service packs and quick fix engineering releases will be improved.

- A new virtual function was added to the `CDocTemplate` class. This new virtual function is [CDocTemplate Class](../mfc/reference/cdoctemplate-class.md). The previous version of `OpenDocumentFile` had two parameters. The new version has three parameters. To support the restart manager, any class derived from `CDocTemplate` must implement the version that has three parameters. The new parameter is `bAddToMRU`.

### Macros and Environment Variables

- The environment variable __MSVCRT_HEAP_SELECT is no longer supported. This environment variable is removed and there is no replacement.

### Microsoft Macro Assembler Reference

- Several directives were removed from the Microsoft Macro Assembler Reference compiler. The removed directives are `.186`, `.286`, `.286P`, `.287`, `.8086`, `.8087`, and `.NO87`.

## Visual Studio 2008 Breaking Changes

### Compiler

- The Windows 95, Windows 98, Windows ME, and Windows NT platforms are no longer supported. These operating systems have been removed from the list of targeted platforms.

- The compiler no longer supports multiple attributes that were directly associated with ATL Server. The following attributes are no longer supported:

  - perf_counter

  - perf_object

  - perfmon

  - request_handler

  - soap_handler

  - soap_header

  - soap_method

  - tag_name

### Visual Studio C++ projects

- When upgrading projects from previous versions of Visual Studio, you might have to modify the WINVER and _WIN32_WINNT macros so that they are greater than or equal to 0x0500.

- Beginning with Visual Studio 2008, the new project wizard doesn't have an option to create a C++ SQL Server project. SQL Server projects created by using an earlier version of Visual Studio will still compile and work correctly.

- The Windows API header file Winable.h has been removed. Include Winuser.h instead.

- The Windows API library Rpcndr.lib has been removed. Link with rpcrt4.lib instead.

### CRT

- Support for Windows 95, Windows 98, Windows Millennium Edition, and Windows NT 4.0 has been removed.

- The following global variables have been removed:

  - _osplatform

  - _osver

  - _winmajor

  - _winminor

  - _winver

- The following functions have been removed. Use the Windows API functions `GetVersion` or `GetVersionEx` instead:

  - _get_osplatform

  - _get_osver

  - _get_winmajor

  - _get_winminor

  - _get_winver

- The syntax for SAL Annotations has changed. For more information, see [SAL Annotations](../c-runtime-library/sal-annotations.md).

- The IEEE filter now supports the SSE 4.1 instruction set. For more information, see [_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md)_fpieee_flt.

- The C Run-Time Libraries that ship with Visual Studio are no longer dependent on the system DLL msvcrt.dll.

### Standard Library

- Support for Windows 95, Windows 98, Windows Millennium Edition, and Windows NT 4.0 has been removed.

- When compiling in debug mode with _HAS_ITERATOR_DEBUGGING defined (superseded by [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) after Visual Studio 2010), an application will now assert when an iterator attempts to increment or decrement past the bounds of the underlying container.

- The member variable c of the stack Class is now declared protected. Previously, this member variable was declared public.

- The behavior of `money_get::do_get` has changed. Previously, when parsing a monetary amount with more fraction digits than are called for by `frac_digits`, `do_get` used to consume them all. Now, `do_get` stops parsing after consuming at most `frac_digits` characters.

### ATL

- ATL can't be built without a dependency on CRT. In earlier versions of Visual Studio, you could use #define ATL_MIN_CRT to make an ATL project minimally dependent on CRT. In Visual Studio 2008, all ATL projects are minimally dependent on CRT regardless of whether ATL_MIN_CRT is defined.

- The ATL Server codebase has been released as a shared source project on CodePlex and isn't installed as part of Visual Studio. Data encoding and decoding classes from atlenc.h and utility functions and classes from atlutil.h and atlpath.h have been kept and are now part of the ATL library. Several files associated with ATL Server are no longer part of Visual Studio.

- Some functions are no longer included in the DLL. They are still located in the import library. This will not affect code that uses the functions statically. It will affect only the code that uses these functions dynamically.

- The macros PROP_ENTRY and PROP_ENTRY_EX have been deprecated and replaced with the macros PROP_ENTRY_TYPE and PROP_ENTRY_TYPE_EX for security reasons.

### ATL/MFC Shared Classes

- ATL can't be built without a dependency on CRT. In earlier versions of Visual Studio, you could use `#define ATL_MIN_CRT` to make an ATL project minimally dependent on CRT. In Visual Studio 2008, all ATL projects are minimally dependent on CRT regardless of whether ATL_MIN_CRT is defined.

- The ATL Server codebase has been released as a shared source project on CodePlex and isn't installed as part of Visual Studio. Data encoding and decoding classes from atlenc.h and utility functions and classes from atlutil.h and atlpath.h have been kept and are now part of the ATL library. Several files associated with ATL Server are no longer part of Visual Studio.

- Some functions are no longer included in the DLL. They are still located in the import library. This will not affect code that uses the functions statically. It will affect only the code that uses these functions dynamically.

### MFC

- `CTime` Class: The `CTime` class now accepts dates starting from 1/1/1900 C.E. instead of 1/1/1970 C.E.

- Tab order of controls in MFC dialogs: The correct tab order of multiple controls in an MFC dialog is disturbed if an MFC ActiveX control is inserted in the tab order. This change corrects that problem.

   For example, create an MFC dialog application that has an ActiveX control and several edit controls. Position the ActiveX control in the middle of the tab order of the edit controls. Start the application, click an edit control whose tab order is after the ActiveX control, then tab. Prior to this change, the focus went to the edit control following the ActiveX control instead of the next edit control in the tab order.

- `CFileDialog` Class: Custom templates for the `CFileDialog` class can't be automatically ported to Windows Vista. They are still usable, but will not have the additional functionality or looks of Windows Vista style dialogs.

- `CWnd` Class and `CFrameWnd` Class: The `CWnd::GetMenuBarInfo` method was removed.

   The `CFrameWnd::GetMenuBarInfo` method is now a non-virtual method. For more information, see **GetMenuBarInfo Function** in the Windows SDK.

- MFC ISAPI support: MFC no longer supports building applications with the Internet Server Application Programming Interface (ISAPI). If you want to build an ISAPI application, call the ISAPI extensions directly.

- Deprecated ANSI APIs: The ANSI versions of several MFC methods are deprecated. Use the Unicode versions of those methods in your future applications. For more information, see **Build Requirements for Windows Vista Common Controls**.

## Visual Studio 2005 Breaking Changes

### CRT

- Many functions have been deprecated. See **Deprecated CRT Functions**.

- Many functions now validate their parameters, halting execution if given invalid parameters. This validation may break code that passes invalid parameters and relies on the function ignoring them or just returning an error code. See **Parameter Validation**.

- The file descriptor value -2 is now used to indicate that `stdout` and `stderr` aren't available for output, for example, in a Windows application that has no console window. The previous value used was -1. For more information, see [_fileno](../c-runtime-library/reference/fileno.md).

- The single-threaded CRT libraries (libc.lib and libcd.lib) have been removed. Use the multi-threaded CRT libraries. The `/ML` compiler flag is no longer supported. Non-locking versions of some functions have been added in cases where the performance difference between the multithreaded code and the single-threaded code is potentially significant.

- The overload of pow, double pow(int, int), was removed to better conform with the standard.

- The %n format specifier is no longer supported by default in any of the printf family of functions because it's inherently insecure. If %n is encountered, the default behavior is to invoke the invalid parameter handler. To enable %n support, use `_set_printf_count_output` (also see `_get_printf_count_output`).

- `sprintf` now prints the negative sign of a signed zero.

- `swprintf` has been changed to conform with the Standard; it now requires a size parameter. The form of `swprintf` without a size parameter has been deprecated.

- `_set_security_error_handler` has been removed. Remove any calls to that function; the default handler is a much safer way of dealing with security errors.

- `time_t` is now a 64-bit value (unless _USE_32BIT_TIME_T is defined).

- The `_spawn`, `_wspawn` Functions now leave `errno` untouched on success, as specified by the C Standard.

- RTC now uses wide characters by default.

- Floating-point control word support functions have been deprecated for applications compiled with `/CLR` or `/CLR:PURE`. The affected functions are `_clear87`, `_clearfp`, `_control87`, `_controlfp`, `_fpreset`, `_status87`, `_statusfp`. You can disable the deprecation warning by defining _CRT_MANAGED_FP_NO_DEPRECATE, but the use of these functions in managed code is unpredictable and unsupported.

- Some functions now return const pointers. The old, non-const behavior can be reinstated by defining _CONST_RETURN. The affected functions are

  - memchr, wmemchr

  - strchr, wcschr, _mbschr, _mbschr_l

  - strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l

  - strrchr, wcsrchr, _mbsrchr, _mbsrchr_l

  - strstr, wcsstr, _mbsstr, _mbsstr_l

- When linking with Setargv.obj or Wsetargv.obj, it's no longer possible to suppress the expansion of a wildcard character on the command line by enclosing it in double quotes. For more information, see [Expanding Wildcard Arguments](../c-language/expanding-wildcard-arguments.md).

### Standard Library (2005)

- The exception class (located in the `<exception>` header) has been moved to the `std` namespace. In previous versions, this class was in the global namespace. To resolve any errors indicating that the exception class can't be found, add the following using statement to your code: `using namespace std;`

- When calling `valarray::resize()`, the contents of the `valarray` will be lost and will be replaced by default values. The `resize()` method is intended to reinitialize the `valarray` rather than grow it dynamically like a vector.

- Debug Iterators: Applications built with a debug version of the C-Runtime Library and which use iterators incorrectly might begin to see asserts at runtime. To disable these asserts, you must define _HAS_ITERATOR_DEBUGGING (superseded by [`_ITERATOR_DEBUG_LEVEL`](../standard-library/iterator-debug-level.md) after Visual Studio 2010) to 0. For more information, see [Debug Iterator Support](../standard-library/debug-iterator-support.md)

## Visual C++ .NET 2003 Breaking Changes

### Compiler

- Closing parentheses now required for the defined preprocessor directive (C2004).

- Explicit specializations no longer find template parameters from primary template ([Compiler Error C2146](../error-messages/compiler-errors-1/compiler-error-c2146.md)).

- A protected member (n) can only be accessed through a member function of a class (B) that inherits from the class (A) of which it (n) is a member ([Compiler Error C2247](../error-messages/compiler-errors-1/compiler-error-c2247.md)).

- Improved accessibility checks in compiler now detect inaccessible base classes ([Compiler Error C2248](../error-messages/compiler-errors-1/compiler-error-c2248.md)).

- An exception can't be caught if the destructor and/or copy constructor is inaccessible (C2316).

- Default arguments on pointers to functions no longer allowed ([Compiler Error C2383](../error-messages/compiler-errors-1/compiler-error-c2383.md)).

- A static data member can't be initialized via derived class ([Compiler Error C2477](../error-messages/compiler-errors-1/compiler-error-c2477.md)).

- The initialization of a **`typedef`** isn't allowed by the standard and now generates a compiler error ([Compiler Error C2513](../error-messages/compiler-errors-2/compiler-error-c2513.md)).

- **`bool`** is now a proper type ([Compiler Error C2632](../error-messages/compiler-errors-2/compiler-error-c2632.md)).

- A UDC can now create ambiguity with overloaded operators ([C2666](../error-messages/compiler-errors-2/compiler-error-c2666.md)).

- More expressions are now considered valid null pointer constants ([Compiler Error C2668](../error-messages/compiler-errors-2/compiler-error-c2668.md)).

- template<> is now required in places where the compiler would previously imply it ([Compiler Error C2768](../error-messages/compiler-errors-2/compiler-error-c2768.md)).

- The explicit specialization of a member function outside the class isn't valid if the function has already been explicitly specialized via a template class specialization ([Compiler Error C2910](../error-messages/compiler-errors-2/compiler-error-c2910.md)).

- Floating point non-type template parameters are no longer allowed ([Compiler Error C2993](../error-messages/compiler-errors-2/compiler-error-c2993.md)).

- Class templates aren't allowed as template type arguments (C3206).

- Friend function names are no longer introduced into containing namespace ([Compiler Error C3767](../error-messages/compiler-errors-2/compiler-error-c3767.md)).

- The compiler will no longer accept extra commas in a macro (C4002).

- An object of POD type constructed with an initializer of the form () will be default-initialized (C4345).

- typename is now required if a dependent name is to be treated as a type ([Compiler Warning (level 1) C4346](../error-messages/compiler-warnings/compiler-warning-level-1-c4346.md)).

- Functions that were incorrectly considered template specializations are no longer considered so (C4347).

- Static data members can't be initialized via derived class (C4356).

- A class template specialization needs to be defined before it is used in a return type ([Compiler Warning (level 3) C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md)).

- The compiler now reports unreachable code (C4702).

## See also

[What's New for Visual C++ in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)
