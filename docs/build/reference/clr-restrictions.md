---
description: "Learn more about: /clr Restrictions"
title: "/clr Restrictions"
ms.date: "11/04/2016"
helpviewer_keywords: ["/clr compiler option [C++], restrictions"]
ms.assetid: 385f6462-2c68-46d6-810e-469553ead447
---
# /clr Restrictions

Note the following restrictions on the use of **/clr**:

- In a structured exception handler, there are restrictions on using `_alloca` when compiling with **/clr**. For more information, see [_alloca](../../c-runtime-library/reference/alloca.md).

- The use of run-time error checks is not valid with **/clr**. For more information, see [How to: Use Native Run-Time Checks](/visualstudio/debugger/how-to-use-native-run-time-checks).

- When **/clr** is used to compile a program that only uses standard C++ syntax, the following guidelines apply to the use of inline assembly:

  - Inline assembly code that assumes knowledge of the native stack layout, calling conventions outside of the current function, or other low-level information about the computer may fail if that knowledge is applied to the stack frame for a managed function. Functions containing inline assembly code are generated as unmanaged functions, as if they were placed in a separate module that was compiled without **/clr**.

  - Inline assembly code in functions that pass copy-constructed function parameters is not supported.

- The [vprintf Functions](../../c-runtime-library/vprintf-functions.md) cannot be called from a program compiled with **/clr**.

- The [naked](../../cpp/naked-cpp.md) [__declspec](../../cpp/declspec.md) modifier is ignored under /clr.

- The translator function set by [_set_se_translator](../../c-runtime-library/reference/set-se-translator.md) will affect only catches in unmanaged code. See [Exception Handling](../../extensions/exception-handling-cpp-component-extensions.md) for more information.

- The comparison of function pointers is not permitted under **/clr**.

- The use of functions that are not fully prototyped is not permitted under **/clr**.

- The following compiler options are not supported with **/clr**:

  - **/EHsc** and **/EHs** (**/clr** implies **/EHa** (see [/EH (Exception Handling Model)](eh-exception-handling-model.md))

  - **/fp:strict** and **/fp:except** (see [/fp (Specify Floating-Point Behavior)](fp-specify-floating-point-behavior.md))

  - [/Zd](z7-zi-zi-debug-information-format.md)

  - [/Gm](gm-enable-minimal-rebuild.md)

  - [/MT](md-mt-ld-use-run-time-library.md)

  - [/RTC](rtc-run-time-error-checks.md)

  - [/ZI](z7-zi-zi-debug-information-format.md)

- The combination of the `_STATIC_CPPLIB` preprocessor definition (`/D_STATIC_CPPLIB`) and the **/clr** compiler option is not supported. This is so because the definition would cause your application to link with the static multithreaded C++ Standard Library, which is not supported. For more information, see the [/MD, /MT, /LD (Use Run-Time Library)](md-mt-ld-use-run-time-library.md) topic.

- When using **/Zi** with **/clr**, there are performance implications. For more information, see [/Zi](z7-zi-zi-debug-information-format.md).

- Passing a wide character to a .NET Framework output routine without also specifying [/Zc:wchar_t](zc-wchar-t-wchar-t-is-native-type.md) or without casting the character to **`__wchar_t`** will cause the output to appear as an `unsigned short int`. For example:

    ```cpp
    Console::WriteLine(L' ')              // Will output 32.
    Console::WriteLine((__wchar_t)L' ')   // Will output a space.
    ```

- [/GS](gs-buffer-security-check.md) is ignored when compiling with **/clr**, unless a function is under `#pragma` [unmanaged](../../preprocessor/managed-unmanaged.md) or if the function must be compiled to native, in which case the compiler will generate warning C4793, which is off by default.

- See [/ENTRY](entry-entry-point-symbol.md) for function signature requirements of a managed application.

- Applications compiled with **/openmp** and **/clr** can only be run in a single appdomain process.  See [/openmp (Enable OpenMP 2.0 Support)](openmp-enable-openmp-2-0-support.md) for more information.

- Functions that take a variable number of arguments (varargs) will be generated as native functions. Any managed data types in the variable argument position will be marshaled to native types. Note that <xref:System.String?displayProperty=fullName> types are actually wide-character strings, but they are marshaled to single-byte character strings. So if a printf specifier is %S (wchar_t*), it will marshal to a %s string instead.

- When using the va_arg macro, you may get unexpected results when compiling with **/clr:pure**. For more information, see [va_arg, va_copy, va_end, va_start](../../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md). The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017 and later. Code that must be "pure" or "safe" should be ported to C#.

- You should not call, from managed code, any functions that walk the stack to get parameter information (function arguments); the P/Invoke layer causes that information to be further down the stack.  For example, do not compile proxy/stub with **/clr**.

- Functions will be compiled to managed code whenever possible, but not all C++ constructs can be translated to managed code.  This determination is made on a function-by-function basis. If any part of a function cannot be converted to managed code, the entire function will be converted to native code instead. The following cases prevent the compiler from generating managed code.

  - Compiler-generated thunks or helper functions. Native thunks are generated for any function call through a function pointer, including virtual function calls.

  - Functions that call `setjmp` or `longjmp`.

  - Functions that use certain intrinsic routines to directly manipulate machine resources. For example, the use of `__enable` and `__disable`, `_ReturnAddress` and `_AddressOfReturnAddress`, or multimedia intrinsics will all result in native code.

  - Functions that follow the `#pragma unmanaged` directive. (Note that the inverse, `#pragma managed`, is also supported.)

  - A function that contains references to aligned types, that is, types declared using `__declspec(align(...))`.

## See also

- [/clr (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md)
