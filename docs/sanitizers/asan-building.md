---
title: "Address Sanitizer Language, Build, and Debugging Reference"
description: "Technical description of building for the Address Sanitizer"
ms.date: 02/15/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer", "-fsanitize=address", "compile", "link", "Asan-integration"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","Address-Sanitizer", "compile", VS-integrations"]
---

# Address Sanitizer Language, Build, and Debugging Reference

This section describes the language specification, compiler flags, and linker flags. It also describes the options controlling Visual Studio debugger integration specific to the Address Sanitizer.

- [Language specification](#Language-specification)
- [Compiler](#Compiler)
- [Linker](#Linker)
- [Visual Studio integration](#Visual-Studio-integration)

For more information on the Address Sanitizer runtime, intercepted functions, and how to hook custom allocators, see the [runtime reference](./asan-runtime.md). For more information on saving crash dumps from Address Sanitizer failures, see the [crash dump reference](./asan-offline-crash-dumps.md).

## Language specification

### `__SANITIZE_ADDRESS__`

Useful for advanced users when conditionalizing source code for the presence of the Address Sanitizer runtime, the `__SANITIZE_ADDRESS__` macro is defined to `1` when `-fsanitize=address` is set.

```cpp
#include <cstdio>

int main() {
    #ifdef __SANITIZE_ADDRESS__
        printf("Address santizier enabled");
    #else
        printf("Address santizier not enabled");
    #endif
    return 1;
}
```

### `__declspec(no_sanitize_address)`

`__declspec(no_sanitize_address)` can be used to selectively disable the sanitizer on functions, local variables, or global variables. This `__declspec` disabled _compiler_ behavior, not _runtime_ behavior.

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

### `-fsanitize=address`

Enable compiler instrumentation of memory references to catch memory safety errors at runtime. Loads, stores, scopes, alloca, and CRT functions are hooked to detect hidden bugs like out-of-bounds, use-after-free, use-after-scope etc. See [Error types](asan-top-level.md#Error-types) for a complete list of errors currently detected at runtime.

`-fsanitize=address` is compatible with all existing C++ or C optimization levels (for example, `/Od`, `/O1`, `/O2`, `/O2 /GL`, and `PGO`).The code produced with this flag, works with static and dynamic CRTs (for example, `/MD`, `/MDd`, `/MT`, and `/MTd`). This compiler flag can be used to create an .EXE or .DLL targeting x86 or x64. Debug information is required for optimal formatting of call stacks.

See[the examples](asan-top-level.md#Error-types) for sample usage.

### `-fsanitize-address-use-after-return` (experimental)

The MSVC compiler (unlike Clang), will not default to generating code to allocating frames in the heap to catch use-after-return errors. To catch these errors with Address Sanitizer, you must:

1. Compile with `-fsanitize-address-use-after-return`
2. Before executing your program, set `set ASAN_OPTIONS=detect_stack_use_after_return=1`

The `-fsanitize-address-use-after-return` flag will cause the compiler to generate code to use a dual stack frame in the heap when locals are considered "address taken". This code is **much slower** than just using `-fsanitize=address` alone.

See the [Stack Use After Return example](examples-stack-use-after-return.md) for sample usage.

The dual stack frame in the heap will linger after the return from the function that created it. Consider an example where the address of a local, allocated to a slot in the heap is used after the return. The shadow bytes associated with the fake heap frame will contain the value 0xf9. That 0xF9 means a stack-use-after-return error when the runtime reports the error.

Stack frames are allocated in the heap and linger after function return. The runtime uses garbage collection to asynchronously free these fake call-frame objects, after a certain time interval. By transferring the address of locals to frames that persists in the heap, the system can detect the use of any locals, after the defining function returns.

See the [algorithm for stack use after return](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) as documented by Google.

## Linker

### `-INFERASANLIBS[:no]`

The `-fsanitize=address` switch links in libraries that begin with `clang_rt.asan*` into your final executable. The libraries chosen and automatically linked in are as follows.

| CRT Flag | DLL or EXE | DEBUG? | Address Sanitizer Runtime Libraries                                                             |
|----------|------------|--------|------------------------------------------------------------------------------------|
| MT       | EXE        | NO     | `clang_rt.asan-{arch}, clang_rt.asan_cxx-{arch}`                                   |
| MT       | DLL        | NO     | `clang_rt.asan_dll_thunk-{arch}`                                                   |
| MD       | EITHER     | NO     | `clang_rt.asan_dynamic-{arch}, clang_rt.asan_dynamic_runtime_thunk-{arch}`         |
| MT       | EXE        | YES    | `clang_rt.asan_dbg-{arch}, clang_rt.asan_dbg_cxx-{arch}`                           |
| MT       | DLL        | YES    | `clang_rt.asan_dbg_dll_thunk-{arch}`                                               |
| MD       | EITHER     | YES    | `clang_rt.asan_dbg_dynamic-{arch}, clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}` |

The linker switch `-INFERASANLIBS:NO` will prevent the linker from choosing the right `clang_rt.asan*` lib file. You will be required to add the lib path in your build scripts should you choose to use this switch.

## Visual Studio integration

### `-fno-sanitize-address-vcasan-lib`

The `-fsanitize=address` switch links in extra capabilities to yield an improved Visual Studio debugging experience when an Address Sanitizer exception is thrown. These libraries are called **VCAsan**. These libraries enable Visual Studio to display Address Sanitizer errors on your source code. These libraries also enable the executable to generate crash dumps when an Address Sanitizer error report is created.

The library chosen depends on the compilation flags, and is automatically linked in as follows.

| Runtime Flag | VCAsan Version |
|--------------|----------------|
| `/MT`        | libvcasan.lib  |
| `/MD`        | vcasan.lib     |
| `/MTd`       | libvcasand.lib |
| `/MDd`       | vcasand.lib    |

However, if you compile with "Omit Default Library Name" (Zl), you'll need to manually specify the lib. If you don't, you'll get a link failure, one of:

```
error LNK2001: unresolved external symbol __you_must_link_with_VCAsan_lib
error LNK2001: unresolved external symbol ___you_must_link_with_VCAsan_lib
```

The improved debugging can be disabled at compile time using the `-fno-sanitize-address-vcasan-lib` flag.

### `ASAN_VCASAN_DEBUGGING`

The `-fsanitize=address` compiler switch produces a binary that will expose memory safety bugs at a runtime. When the binary is started from the command line, and the runtime reports an error, it prints the error details. It then and exits the process. The `ASAN_VCASAN_DEBUGGING` environment variable can be set to trigger the Visual Studio IDE to be launched immediately when the runtime starts to report an error. This compiler flag enables viewing the error, super imposed over your source code, at the precise line and column where the error was caused.

`set ASAN_VCASAN_DEBUGGING=1` prior to running your binary to achieve this behavior. You can also disable the enhanced debugging experience by setting `set ASAN_VISAS_DEBUGGING=0`

## See also

- [Address Sanitizer Overview](./asan.md)
- [Address Sanitizer Known Issues](./asan-known-issues.md)
- [Address Sanitizer Build and Language Reference](./asan-building.md)
- [Address Sanitizer Runtime Reference](./asan-runtime.md)
- [Address Sanitizer Shadow Bytes](./asan-shadowbytes.md)
- [Address Sanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [Address Sanitizer Debugger Integration](./asan-debugger-integration.md)

> [!NOTE] Send us [feedback](https://aka.ms/feedback/suggest?space=62) on what you would like to see in future releases, and please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.