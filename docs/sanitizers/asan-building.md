---
title: "AddressSanitizer language, build, and debugging reference"
description: "Technical description of building for the AddressSanitizer"
ms.date: 09/15/2021
f1_keywords: ["__SANITIZE_ADDRESS__", "ASAN_VCASAN_DEBUGGING"]
helpviewer_keywords: ["ASan reference", "AddressSanitizer reference", "Address Sanitizer reference"]
---
# AddressSanitizer language, build, and debugging reference

The sections in this article describe the AddressSanitizer language specification, compiler options, and linker options. They also describe the options that control Visual Studio debugger integration specific to the AddressSanitizer.

For more information on the AddressSanitizer runtime, see the [runtime reference](./asan-runtime.md). It includes information on intercepted functions and how to hook custom allocators. For more information on saving crash dumps from AddressSanitizer failures, see the [crash dump reference](./asan-offline-crash-dumps.md).

## Language specification

### `__SANITIZE_ADDRESS__`

The `__SANITIZE_ADDRESS__` preprocessor macro is defined as `1` when [`/fsanitize=address`](../build/reference/fsanitize.md) is set. This macro is useful for advanced users to conditionally specify source code for the presence of the AddressSanitizer runtime.

```cpp
#include <cstdio>

int main() {
    #ifdef __SANITIZE_ADDRESS__
        printf("Address sanitizer enabled");
    #else
        printf("Address sanitizer not enabled");
    #endif
    return 1;
}
```

### `__declspec(no_sanitize_address)`

The [`__declspec(no_sanitize_address)`](../cpp/no-sanitize-address.md) specifier can be used to selectively disable the sanitizer on functions, local variables, or global variables. This `__declspec` affects _compiler_ behavior, not _runtime_ behavior.

```cpp
__declspec(no_sanitize_address)
void test1() {
    int x[100];
    x[100] = 5; // ASan exception not caught
}

void test2() {
    __declspec(no_sanitize_address) int x[100];
    x[100] = 5; // ASan exception not caught
}

__declspec(no_sanitize_address) int g[100];
void test3() {
    g[100] = 5; // ASan exception not caught
}
```

## Compiler

### `/fsanitize=address` compiler option

The [**`/fsanitize=address`**](../build/reference/fsanitize.md) compiler option instruments memory references in your code to catch memory safety errors at runtime. The instrumentation hooks loads, stores, scopes, `alloca`, and CRT functions. It can detect hidden bugs such as out-of-bounds, use-after-free, use-after-scope, and so on. For a non-exhaustive list of errors detected at runtime, see [AddressSanitizer error examples](./asan-error-examples.md).

**`/fsanitize=address`** is compatible with all existing C++ or C optimization levels (for example, **`/Od`**, **`/O1`**, **`/O2`**, **`/O2 /GL`**, and profile guided optimization). The code produced with this option works with static and dynamic CRTs (for example, **`/MD`**, **`/MDd`**, **`/MT`**, and **`/MTd`**). This compiler option can be used to create an .EXE or .DLL targeting x86 or x64. Debug information is required for optimal formatting of call stacks.

For examples of code that demonstrates several kinds of error detection, see [AddressSanitizer error examples](asan-error-examples.md).

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

LibFuzzer libraries that omit the **`main`** function are also available. It's your responsibility to define **`main`** and to call **`LLVMFuzzerInitialize`** and **`LLVMFuzzerTestOneInput`** when you use these libraries. To use one of these libraries, specify [`/NODEFAULTLIB`](../build/reference/nodefaultlib-ignore-libraries.md) and explicitly link with the library below that corresponds to your runtime and architecture:

| Runtime option | LibFuzzer no_main library |
|--|--|
| **`/MT`** | *`clang_rt.fuzzer_no_main_MT-{arch}`* |
| **`/MD`** | *`clang_rt.fuzzer_no_main_MD-{arch}`* |
| **`/MTd`** | *`clang_rt.fuzzer_no_main_MTd-{arch}`* |
| **`/MDd`** | *`clang_rt.fuzzer_no_main_MDd-{arch}`* |

If you specify **`/NODEFAULTLIB`** and you don't specify one of these libraries, you'll get an unresolved external symbol link error.

### `/fsanitize-address-use-after-return` compiler option (experimental)

By default, the MSVC compiler (unlike Clang) doesn't generate code to allocate frames in the heap to catch use-after-return errors. To catch these errors using AddressSanitizer, you must:

1. Compile using the [`/fsanitize-address-use-after-return`](../build/reference/fsanitize.md) option.
2. Before executing your program, run `set ASAN_OPTIONS=detect_stack_use_after_return=1` to set the runtime check option.

The **`/fsanitize-address-use-after-return`** option causes the compiler to generate code to use a dual stack frame in the heap when locals are considered "address taken". This code is *much slower* than just using **`/fsanitize=address`** alone. For more information and an example, see [Error: `stack-use-after-return`](error-stack-use-after-return.md).

The dual stack frame in the heap remains after the return from the function that created it. Consider an example where the address of a local, allocated to a slot in the heap, is used after the return. The shadow bytes associated with the fake heap frame contain the value 0xF9. That 0xF9 means a stack-use-after-return error when the runtime reports the error.

Stack frames are allocated in the heap and remain after functions return. The runtime uses garbage collection to asynchronously free these fake call-frame objects, after a certain time interval. Addresses of locals get transferred to persistent frames in the heap. It's how the system can detect when any locals get used after the defining function returns. For more information, see the [algorithm for stack use after return](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) as documented by Google.

## <a name="linker"></a> Linker

### `/INFERASANLIBS[:NO]` linker option

The **`/fsanitize=address`** compiler option marks objects to specify the AddressSanitizer library to link into your executable. The libraries have names that begin with *`clang_rt.asan*`*. The [`/INFERASANLIBS`](../build/reference/inferasanlibs.md) linker option (on by default) links these libraries from their default locations automatically. Here are the libraries chosen and automatically linked in:

| Runtime option | DLL or EXE | AddressSanitizer runtime libraries |
|--|--|--|
| **`/MT`** | EXE | *`clang_rt.asan-{arch}`*, *`clang_rt.asan_cxx-{arch}`* |
| **`/MT`** | DLL | *`clang_rt.asan_dll_thunk-{arch}`* |
| **`/MD`** | EITHER | *`clang_rt.asan_dynamic-{arch}`*, *`clang_rt.asan_dynamic_runtime_thunk-{arch}`* |
| **`/MTd`**  | EXE | *`clang_rt.asan_dbg-{arch}`*, *`clang_rt.asan_dbg_cxx-{arch}`* |
| **`/MTd`**  | DLL | *`clang_rt.asan_dbg_dll_thunk-{arch}`* |
| **`/MDd`**  | EITHER | *`clang_rt.asan_dbg_dynamic-{arch}`*, *`clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}`* |

The linker option [`/INFERASANLIBS:NO`](../build/reference/inferasanlibs.md) prevents the linker from linking a *`clang_rt.asan*`* library file from the default location. Add the library path in your build scripts if you use this option. Otherwise, the linker reports an unresolved external symbol error.

## Visual Studio integration

### `/fno-sanitize-address-vcasan-lib` compiler option

The **`/fsanitize=address`** option links in extra libraries for an improved Visual Studio debugging experience when an AddressSanitizer exception is thrown. These libraries are called **VCAsan**. The libraries enable Visual Studio to display AddressSanitizer errors on your source code. They also enable the executable to generate crash dumps when an AddressSanitizer error report is created. For more information, see [Visual Studio AddressSanitizer extended functionality library](./asan-debugger-integration.md).

The library chosen depends on the compiler options, and is automatically linked in.

| Runtime option | VCAsan version |
|--------------|----------------|
| **`/MT`**        | *`libvcasan.lib`*  |
| **`/MD`**        | *`vcasan.lib`*     |
| **`/MTd`**       | *`libvcasand.lib`* |
| **`/MDd`**       | *`vcasand.lib`*    |

However, if you compile using **`/Zl`** (Omit default library name), you'll need to manually specify the library. If you don't, you'll get an unresolved external symbol link error. Here are some typical examples:

```Output
error LNK2001: unresolved external symbol __you_must_link_with_VCAsan_lib
error LNK2001: unresolved external symbol ___you_must_link_with_VCAsan_lib
```

The improved debugging can be disabled at compile time by using the [`/fno-sanitize-address-vcasan-lib`](../build/reference/fsanitize.md) option.

### `ASAN_VCASAN_DEBUGGING` environment variable

The **`/fsanitize=address`** compiler option produces a binary that exposes memory safety bugs at runtime. When the binary is started from the command line, and the runtime reports an error, it prints the error details. It then exits the process. The `ASAN_VCASAN_DEBUGGING` environment variable can be set to launch the Visual Studio IDE immediately when the runtime reports an error. This compiler option lets you view the error, superimposed over your source code, at the precise line and column that caused the error.

To enable this behavior, run the command `set ASAN_VCASAN_DEBUGGING=1` before you run your application. You can disable the enhanced debugging experience by running `set ASAN_VCASAN_DEBUGGING=0`.

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
