# Address Sanitizer Language, Build, and Debugging Reference

This section describes the language specification, compiler flags, linker flags, and options controlling Visual Studio debugger integration relating to the Address Sanitizer.

- [Language specification](#Language-specification)
- [Compiler](#Compiler)
- [Linker](#Linker)
- [Visual Studio integration](#Visual-Studio-integration)

For more information on the Address Sanitizer runtime, intercepted functions, and how to hook custom allocators, see the [runtime reference](./asan-runtime.md)

!!! link to Jim's upcoming cloud doc next for specifics on snapshot files.

## Language specification

### `__SANITIZE_ADDRESS__`

Useful for advanced users when conditionalizing source code to the presence of ASan, the `__SANITIZE_ADDRESS__` macro is defined to `1` when `-fsanitize=address` is set.

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

`__declspec(no_sanitize_address)` can be used to selectively disable the sanitizer on functions, local variables, or global variables. Note that this declspec disabled _compiler_ behavior, not _runtime_ behavior.

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

Enable compiler instrumentation of memory references to catch memory safety errors at runtime. Loads, stores, scopes, alloca, and CRT functions are hooked to detect hidden bugs like out-of-bounds, use-after-free, use-after-scope etc.. See [Error types](asan-top-level.md#Error-types) for a complete list of errors currently detected at runtime.

`-fsanitize=address` is compatible with all existing C++ or C optimization levels (e.g., `/Od`, `/O1`, `/O2`, `/O2 /GL` and `PGO`), works with static and dynamic CRTs (e.g. `/MD`, `/MDd`, `/MT`, `/MTd`) and can be used to create an .EXE or .DLL targeting x86 or x64. Debug information is required for optimal formatting of call stacks.

See our [examples](asan-top-level.md#Error-types) for sample usage.

!!! link to known issues here.

### `-fsanitize-address-use-after-return` (experimental)

The MSVC compiler (unlike Clang), will not default to generating code to allocating frames in the heap to catch use-after-return errors. To catch these errors with Address Sanitizer, you must:
1. Compile with `-fsanitize-address-use-aftet-return`
2. Before executing your program, set `set ASAN_OPTIONS=detect_stack_use_after_return=1`

The `-fsanitize-address-use-aftet-return` flag will cause the compiler to generate code to use a dual stack frame in the heap when locals are considered "address taken". This code is **much slower** than just using `-fsanitize=address` alone.

See the [Stack Use After Return example](examples-stack-use-after-return.md) for sample usage.

The dual stack frame in the heap will linger after the return from the function that created it. If an address of a local, allocated to a slot in the frame in the heap, then the code generation can later determine a stack-use-after-return error.

Stack frames are allocated in the heap and linger after function return. The runtime will garbage collect these frame objects after a certain time interval. By transferring the address of locals to frames that persist in the heap, we can then detect use of any locals after the function returns.

See the [algorithm for stack use after return](https://github.com/google/sanitizers/wiki/AddressSanitizerUseAfterReturn) as documented by Google.

## Linker

### `-INFERASANLIBS[:no]`

The `-fsanitize=address` switch links in libraries that begin with `clang_rt.asan*` into your final executable. The libraries chosen and automatically linked in are as follows.

| CRT Flag | DLL or EXE | DEBUG? | ASan Runtime Libraries                                                             |
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

The `-fsanitize=address` switch links in additional capabilities to yield an improved Visual Studio debugging experience when an Address Sanitizer exception is thrown. These libraries are called **VCAsan**, and they allow for Visual Studio to display AddressSanitizer-specific message pop-ups, as well as enabling the executable to generate crash dumps when an ASan report is created.

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

The `-fsanitize=address` switch produces a binary that will catch bugs at a runtime. When the binary is run on the command line and the runtime reports an error, it prints the error details and exits the process. The `ASAN_VCASAN_DEBUGGING` environment variable can be used to trigger the Visual Studio IDE to be launched instead, allowing you quick access to the debugger.

`set ASAN_VCASAN_DEBUGGING=1` prior to running your binary to achieve this behavior. You can also disable the enhanced debugging experience by setting `set ASAN_VCASAN_DEBUGGING=0`