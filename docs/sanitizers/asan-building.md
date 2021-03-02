---
title: "AddressSanitizer language, build, and debugging reference"
description: "Technical description of building for the AddressSanitizer"
ms.date: 02/15/2021
f1_keywords: ["__SANITIZE_ADDRESS__", "ASAN_VCASAN_DEBUGGING"]
helpviewer_keywords: ["ASan reference", "AddressSanitizer reference", "Address Sanitizer reference"]
---
# AddressSanitizer language, build, and debugging reference

The sections in this article describe the AddressSanitizer language specification, compiler options, and linker options. They also describe the options that control Visual Studio debugger integration specific to the AddressSanitizer.

- [Language specification](#Language-specification)
- [Compiler](#Compiler)
- [Linker](#Linker)
- [Visual Studio integration](#Visual-Studio-integration)

For more information on the AddressSanitizer runtime, intercepted functions, and how to hook custom allocators, see the [runtime reference](./asan-runtime.md). For more information on saving crash dumps from AddressSanitizer failures, see the [crash dump reference](./asan-offline-crash-dumps.md).

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

The [`__declspec(no_sanitize_address)`](../cpp/no_sanitize_address.md) specifier can be used to selectively disable the sanitizer on functions, local variables, or global variables. This `__declspec` disables _compiler_ behavior, not _runtime_ behavior.

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

### `/fsanitize=address`

The [`/fsanitize=address`](../build/reference/fsanitize.md) compiler option instruments memory references in your code to catch memory safety errors at runtime. The instrumentation hooks loads, stores, scopes, alloca, and CRT functions. It can detect hidden bugs such as out-of-bounds, use-after-free, use-after-scope, and so on. For a list of errors detected at runtime, see [Error types](./asan.md#error-types).

**`/fsanitize=address`** is compatible with all existing C++ or C optimization levels (for example, `/Od`, `/O1`, `/O2`, `/O2 /GL`, and `PGO`). The code produced with this option works with static and dynamic CRTs (for example, `/MD`, `/MDd`, `/MT`, and `/MTd`). This compiler option can be used to create an .EXE or .DLL targeting x86 or x64. Debug information is required for optimal formatting of call stacks.

See [the examples](asan.md#error-types) for sample usage.

### `/fsanitize-address-use-after-return` (experimental)

By default, the MSVC compiler (unlike Clang) doesn't generate code to allocate frames in the heap to catch use-after-return errors. To catch these errors using AddressSanitizer, you must:

1. Compile using the [`/fsanitize-address-use-after-return`](../build/reference/fsanitize.md) option.
2. Before executing your program, run `set ASAN_OPTIONS=detect_stack_use_after_return=1` to set the runtime check option.

The **`/fsanitize-address-use-after-return`** option causes the compiler to generate code to use a dual stack frame in the heap when locals are considered "address taken". This code is **much slower** than just using **`/fsanitize=address`** alone.

See the [Stack Use After Return example](examples-stack-use-after-return.md) for sample usage.

The dual stack frame in the heap remains after the return from the function that created it. Consider an example where the address of a local, allocated to a slot in the heap, is used after the return. The shadow bytes associated with the fake heap frame contain the value 0xf9. That 0xF9 means a stack-use-after-return error when the runtime reports the error.

Stack frames are allocated in the heap and remain after functions return. The runtime uses garbage collection to asynchronously free these fake call-frame objects, after a certain time interval. By transferring addresses of locals to persistent frames in the heap, the system can detect when any locals get used after the defining function returns.

See the [algorithm for stack use after return](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) as documented by Google.

## Linker

### `-INFERASANLIBS[:no]`

The **`/fsanitize=address`** option links in libraries that begin with `clang_rt.asan*` into your final executable. The libraries chosen and automatically linked in are as follows.

| CRT option | DLL or EXE | DEBUG? | AddressSanitizer runtime libraries                                               |
|----------|------------|--------|------------------------------------------------------------------------------------|
| MT       | EXE        | NO     | `clang_rt.asan-{arch}, clang_rt.asan_cxx-{arch}`                                   |
| MT       | DLL        | NO     | `clang_rt.asan_dll_thunk-{arch}`                                                   |
| MD       | EITHER     | NO     | `clang_rt.asan_dynamic-{arch}, clang_rt.asan_dynamic_runtime_thunk-{arch}`         |
| MT       | EXE        | YES    | `clang_rt.asan_dbg-{arch}, clang_rt.asan_dbg_cxx-{arch}`                           |
| MT       | DLL        | YES    | `clang_rt.asan_dbg_dll_thunk-{arch}`                                               |
| MD       | EITHER     | YES    | `clang_rt.asan_dbg_dynamic-{arch}, clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}` |

The linker option `/INFERASANLIBS:NO` prevents the linker from linking the `clang_rt.asan*` library file from the default location. Add the library path in your build scripts if you use this option.

## Visual Studio integration

### `/fno-sanitize-address-vcasan-lib`

The **`/fsanitize=address`** option links in extra capabilities to yield an improved Visual Studio debugging experience when an AddressSanitizer exception is thrown. These libraries are called **VCAsan**. These libraries enable Visual Studio to display AddressSanitizer errors on your source code. These libraries also enable the executable to generate crash dumps when an AddressSanitizer error report is created.

The library chosen depends on the compilation options, and is automatically linked in as follows.

| Runtime option | VCAsan Version |
|--------------|----------------|
| **`/MT`**        | *`libvcasan.lib`*  |
| **`/MD`**        | *`vcasan.lib`*     |
| **`/MTd`**       | *`libvcasand.lib`* |
| **`/MDd`**       | *`vcasand.lib`*    |

However, if you compile using **`/Zl`** (Omit default library name), you'll need to manually specify the library. If you don't, you'll get a link failure; here are some typical examples:

```Output
error LNK2001: unresolved external symbol __you_must_link_with_VCAsan_lib
error LNK2001: unresolved external symbol ___you_must_link_with_VCAsan_lib
error LNK2019: unresolved external symbol __asan_report_load4 referenced in function main
error LNK2019: unresolved external symbol __asan_report_load8 referenced in function main
```

The improved debugging can be disabled at compile time using the **`/fno-sanitize-address-vcasan-lib`** option.

### `ASAN_VCASAN_DEBUGGING`

The **`/fsanitize=address`** compiler option produces a binary that exposes memory safety bugs at runtime. When the binary is started from the command line, and the runtime reports an error, it prints the error details. It then and exits the process. The `ASAN_VCASAN_DEBUGGING` environment variable can be set to launch the Visual Studio IDE immediately when the runtime reports an error. This compiler option lets you view the error, superimposed over your source code, at the precise line and column that caused the error.

To enable this behavior, run the command `set ASAN_VCASAN_DEBUGGING=1` before you run your application. You can disable the enhanced debugging experience by running `set ASAN_VCASAN_DEBUGGING=0`.

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadowbytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-examples.md)
