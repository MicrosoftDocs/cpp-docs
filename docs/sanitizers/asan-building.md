---
title: "MSVC AddressSanitizer language, build, and debugging reference"
description: "Technical description of building for the MSVC AddressSanitizer"
ms.date: 02/05/2024
ms.topic: overview
f1_keywords: ["__SANITIZE_ADDRESS__", "ASAN_VCASAN_DEBUGGING"]
helpviewer_keywords: ["ASan reference", "MSVC AddressSanitizer reference", "MSVC Address Sanitizer reference"]
---
# MSVC AddressSanitizer language, build, and debugging reference

This article describes the MSVC AddressSanitizer language specification, compiler options, linker options, and the options that control Visual Studio debugger integration specific to the MSVC AddressSanitizer.

For more information on the MSVC AddressSanitizer runtime, see the [runtime reference](asan-runtime.md). It includes information on intercepted functions and how to hook custom allocators. For more information on saving crash dumps from MSVC AddressSanitizer failures, see the [crash dump reference](asan-offline-crash-dumps.md).

## Language specification

### `__SANITIZE_ADDRESS__`

The `__SANITIZE_ADDRESS__` preprocessor macro is defined as `1` when [`/fsanitize=address`](../build/reference/fsanitize.md) is set. This macro is useful to conditionally specify source code for the presence of the MSVC AddressSanitizer runtime.

```cpp
#include <cstdio>

int main()
{
    #ifdef __SANITIZE_ADDRESS__
        printf("MSVC AddressSanitizer enabled");
    #else
        printf("MSVC AddressSanitizer not enabled");
    #endif
    return 1;
}
```

### `__declspec(no_sanitize_address)`

The [`__declspec(no_sanitize_address)`](../cpp/no-sanitize-address.md) specifier can be used to selectively disable the sanitizer on functions, local variables, or global variables. This `__declspec` affects _compiler_ behavior, not _runtime_ behavior.

```cpp
#ifdef __SANITIZE_ADDRESS__
// no_sanitize_address is only defined when compiling with MSVC AddressSanitizer.
// Guard against this by checking if `__SANITIZE_ADDRESS__` is defined.
#define NO_SANITIZE_ADDRESS __declspec(no_sanitize_address)
#else
#define NO_SANITIZE_ADDRESS
#endif

NO_SANITIZE_ADDRESS
void test1()
{
    int x[100];
    x[100] = 5; // ASan exception not caught
}

void test2()
{
    NO_SANITIZE_ADDRESS int x[100];
    x[100] = 5; // ASan exception not caught
}

NO_SANITIZE_ADDRESS int g[100];
void test3()
{
    g[100] = 5; // ASan exception not caught
}
```

## Compiler

### `/fsanitize=address` compiler option

The [**`/fsanitize=address`**](../build/reference/fsanitize.md) compiler option instruments memory references in your code to catch memory safety errors at runtime. The instrumentation hooks loads, stores, scopes, `alloca`, and CRT functions. It can detect hidden bugs such as out-of-bounds, use-after-free, use-after-scope, and so on. For a nonexhaustive list of errors detected at runtime, see [MSVC AddressSanitizer error examples](asan-error-examples.md).

**`/fsanitize=address`** is compatible with all existing C++ or C optimization levels (for example, **`/Od`**, **`/O1`**, **`/O2`**, and **`/O2 /GL`**). The code produced with this option works with static and dynamic CRTs (for example, **`/MD`**, **`/MDd`**, **`/MT`**, and **`/MTd`**). This compiler option can be used to create an .EXE or .DLL targeting x86 or x64. Debug information is required for optimal formatting of call stacks. This compiler option isn't supported with profile guided optimization.

For examples of code that demonstrates several kinds of error detection, see [MSVC AddressSanitizer error examples](asan-error-examples.md).

### `/fsanitize=fuzzer` compiler option (experimental)

The [`/fsanitize=fuzzer`](../build/reference/fsanitize.md) compiler option adds [LibFuzzer](https://releases.llvm.org/3.8.0/docs/LibFuzzer.html) to the default library list. It also sets the following sanitizer coverage options:

- [Edge instrumentation points (**`/fsanitize-coverage=edge`**)](../build/reference/fsanitize-coverage.md),
- [inline 8-bit counters (**`/fsanitize-coverage=inline-8bit-counters`**)](../build/reference/fsanitize-coverage.md),
- [comparisons (**`/fsanitize-coverage=trace-cmp`**)](../build/reference/fsanitize-coverage.md), and
- [integer divisions (**`/fsanitize-coverage=trace-div`**)](../build/reference/fsanitize-coverage.md).

We recommend you use **`/fsanitize=address`** with **`/fsanitize=fuzzer`**.

These libraries are added to the default library list when you specify **`/fsanitize=fuzzer`**:

| Runtime option | LibFuzzer library |
|--|--|
| **`/MT`** | *`clang_rt.fuzzer_MT-{arch}`* |
| **`/MD`** | *`clang_rt.fuzzer_MD-{arch}`* |
| **`/MTd`** | *`clang_rt.fuzzer_MTd-{arch}`* |
| **`/MDd`** | *`clang_rt.fuzzer_MDd-{arch}`* |

LibFuzzer libraries that omit the **`main`** function are also available. It's your responsibility to define **`main`** and to call **`LLVMFuzzerInitialize`** and **`LLVMFuzzerTestOneInput`** when you use these libraries. To use one of these libraries, specify [`/NODEFAULTLIB`](../build/reference/nodefaultlib-ignore-libraries.md) and explicitly link with the following library that corresponds to your runtime and architecture:

| Runtime option | LibFuzzer no_main library |
|--|--|
| **`/MT`** | *`clang_rt.fuzzer_no_main_MT-{arch}`* |
| **`/MD`** | *`clang_rt.fuzzer_no_main_MD-{arch}`* |
| **`/MTd`** | *`clang_rt.fuzzer_no_main_MTd-{arch}`* |
| **`/MDd`** | *`clang_rt.fuzzer_no_main_MDd-{arch}`* |

If you specify **`/NODEFAULTLIB`** and you don't specify one of these libraries, you'll get an unresolved external symbol link error.

### `/fsanitize-address-use-after-return` compiler option (experimental)

By default, the MSVC compiler (unlike Clang) doesn't generate code to allocate frames in the heap to catch use-after-return errors. To catch these errors using MSVC AddressSanitizer, you must:

1. Compile using the [`/fsanitize-address-use-after-return`](../build/reference/fsanitize.md) option.
2. Before executing your program, run `set ASAN_OPTIONS=detect_stack_use_after_return=1` to set the runtime check option.

The **`/fsanitize-address-use-after-return`** option causes the compiler to generate code to use a dual stack frame in the heap when locals are considered "address taken." This code is *much slower* than just using **`/fsanitize=address`** alone. For more information and an example, see [Error: `stack-use-after-return`](error-stack-use-after-return.md).

The dual stack frame in the heap remains after the return from the function that created it. Consider an example where the address of a local, allocated to a slot in the heap, is used after the return. The shadow bytes associated with the fake heap frame contain the value 0xF9. That 0xF9 means a stack-use-after-return error when the runtime reports the error.

Stack frames are allocated in the heap and remain after functions return. The runtime uses garbage collection to asynchronously free these fake call-frame objects, after a certain time interval. Addresses of locals get transferred to persistent frames in the heap. It's how the system can detect when any locals get used after the defining function returns. For more information, see the [algorithm for stack use after return](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) as documented by Google.

### ASan intrinsic compatibility library

When building with ASan, the compiler replaces intrinsic functions (like `memset`) with function calls provided by the ASan runtime library (like `__asan_memset`) that complete the same operation but also provide memory safety checks. For user-mode ASan, the compiler and runtime are updated together because Visual Studio provides both. [Kernel-mode ASan (KASan)](/windows-hardware/drivers/devtest/kasan) is part of the Windows OS, so it updates on a different cadence than the compiler. To avoid issues with a new compiler using new intrinsics that the installed version of KASan doesn't support, link the compatibility library (`asan_compat.lib`) to avoid link-time issues. When using `asan_compat.lib`, the program behaves as though the unsupported ASan intrinsics aren't used. Linking with a newer runtime library that supports the new ASan intrinsics supersedes the versions provided by `asan_compat.lib`. This decision is made at link time, so it's imperative to link with the KASan library provided by the Windows SDK that matches the OS version you're targeting.

The following options are supported in Visual Studio 2022 17.14 Preview 2 and later:
- To include this compatibility library as a default library, use the **`/fsanitize-address-asan-compat-lib`** compiler option. This option is automatically enabled when using **`/fsanitize=kernel-address`**.
- To opt-out of this compatibility library, use the **`/fno-sanitize-address-asan-compat-lib`** compiler option.

Using **`/fsanitize-address-asan-compat-lib`** to link a newer compiler with an older user-mode ASan runtime isn't currently supported.

## <a name="linker"></a> Linker

### `/INFERASANLIBS[:NO]` linker option

The **`/fsanitize=address`** compiler option marks objects to specify which MSVC AddressSanitizer library to link into your executable. The libraries have names that begin with *`clang_rt.asan*`*. The [`/INFERASANLIBS`](../build/reference/inferasanlibs.md) linker option (on by default) links these libraries from their default locations automatically. Here are the libraries chosen and automatically linked in.

> [!NOTE]
> In the following table, *`{arch}`* is either *`i386`* or *`x86_64`*.
> These libraries use Clang conventions for architecture names. MSVC conventions are normally `x86` and `x64` rather than `i386` and `x86_64`. They refer to the same architectures.

| CRT option | MSVC AddressSanitizer runtime library (.lib) | Address runtime binary (.dll)
|--|--|--|
| `/MT` or `/MTd` | *`clang_rt.asan_dynamic-{arch}.lib`*, *`/wholearchive:clang_rt.asan_static_runtime_thunk-{arch}.lib`* | *`clang_rt.asan_dynamic-{arch}.dll`*
| `/MD` or `/MDd` | *`clang_rt.asan_dynamic-{arch}.lib`*, *`/wholearchive:clang_rt.asan_dynamic_runtime_thunk-{arch}.lib`* | *`clang_rt.asan_dynamic-{arch}.dll`*

The linker option [`/INFERASANLIBS:NO`](../build/reference/inferasanlibs.md) prevents the linker from linking a *`clang_rt.asan*`* library file from the default location. Add the library path in your build scripts if you use this option. Otherwise, the linker reports an unresolved external symbol error. The runtime thunk libraries **must** be linked with the `/wholearchive` option applied.

**Previous Versions**

Prior to Visual Studio 17.7 Preview 3, statically linked (**`/MT`** or **`/MTd`**) builds didn't use a DLL dependency. Instead, the MSVC AddressSanitizer runtime was statically linked into the user's EXE. DLL projects would then load exports from the user's EXE to access ASan functionality. Also, dynamically linked projects (**`/MD`** or **`/MTd`**) used different libraries and DLLs depending on whether the project was configured for debug or release. For more information about these changes and their motivations, see [MSVC AddressSanitizer – One DLL for all Runtime Configurations](https://devblogs.microsoft.com/cppblog/msvc-address-sanitizer-one-dll-for-all-runtime-configurations/).

| CRT runtime option | DLL or EXE | MSVC AddressSanitizer runtime libraries |
|--|--|--|
| **`/MT`** | EXE | *`/wholearchive:clang_rt.asan-{arch}.lib`*, *`clang_rt.asan_cxx-{arch}.lib`* |
| **`/MT`** | DLL | *`/wholearchive:clang_rt.asan_dll_thunk-{arch}.lib`* |
| **`/MD`** | Either | *`clang_rt.asan_dynamic-{arch}.lib`*, *`/wholearchive:clang_rt.asan_dynamic_runtime_thunk-{arch}.lib`* |
| **`/MTd`**  | EXE | *`/wholearchive:clang_rt.asan_dbg-{arch}.lib`*, *`clang_rt.asan_cxx_dbg-{arch}.lib`* |
| **`/MTd`**  | DLL | *`/wholearchive:clang_rt.asan_dbg_dll_thunk-{arch}.lib`* |
| **`/MDd`**  | Either | *`/wholearchive:clang_rt.asan_dbg_dynamic-{arch}.lib`*, *`clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}.lib`* |

## Visual Studio integration

### `/fno-sanitize-address-vcasan-lib` compiler option

The **`/fsanitize=address`** option links in extra libraries for an improved Visual Studio debugging experience when an MSVC AddressSanitizer exception is thrown. These libraries are called **VCAsan**. The libraries enable Visual Studio to display MSVC AddressSanitizer errors on your source code. They also enable the executable to generate crash dumps when an MSVC AddressSanitizer error report is created. For more information, see [Visual Studio MSVC AddressSanitizer extended functionality library](asan-debugger-integration.md).

The library chosen depends on the compiler options, and is automatically linked in.

| Runtime option | VCAsan version |
|--------------|----------------|
| **`/MT`**        | *`libvcasan.lib`*  |
| **`/MD`**        | *`vcasan.lib`*     |
| **`/MTd`**       | *`libvcasand.lib`* |
| **`/MDd`**       | *`vcasand.lib`*    |

However, if you compile using **`/Zl`** (Omit default library name), you must manually specify the library. If you don't, you get an unresolved external symbol link error. Here are some typical examples:

```Output
error LNK2001: unresolved external symbol __you_must_link_with_VCAsan_lib
error LNK2001: unresolved external symbol ___you_must_link_with_VCAsan_lib
```

The improved debugging can be disabled at compile time by using the [`/fno-sanitize-address-vcasan-lib`](../build/reference/fsanitize.md) option.

### `ASAN_VCASAN_DEBUGGING` environment variable

The **`/fsanitize=address`** compiler option produces a binary that exposes memory safety bugs at runtime. When the binary is started from the command line, and the runtime reports an error, it prints the error details. It then exits the process. The `ASAN_VCASAN_DEBUGGING` environment variable can be set to launch the Visual Studio IDE immediately when the runtime reports an error. This compiler option lets you view the error, superimposed over your source code, at the precise line and column that caused the error.

To enable this behavior, run the command `set ASAN_VCASAN_DEBUGGING=1` before you run your application. You can disable the enhanced debugging experience by running `set ASAN_VCASAN_DEBUGGING=0`.

## See also

[MSVC AddressSanitizer overview](asan.md)\
[MSVC AddressSanitizer known issues](asan-known-issues.md)\
[MSVC AddressSanitizer runtime reference](asan-runtime.md)\
[MSVC AddressSanitizer shadow bytes](asan-shadow-bytes.md)\
[MSVC AddressSanitizer cloud or distributed testing](asan-offline-crash-dumps.md)\
[MSVC AddressSanitizer debugger integration](asan-debugger-integration.md)\
[MSVC AddressSanitizer error examples](asan-error-examples.md)
