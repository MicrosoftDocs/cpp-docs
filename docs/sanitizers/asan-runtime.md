---
title: "AddressSanitizer Runtime"
description: "Technical description of the AddressSanitizer runtime for Microsoft Visual C++."
ms.date: 01/05/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer","Address Sanitizer", "AddressSanitizer Runtime"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","Address Sanitizer","clang_rt.asan","Clang runtime","ASan runtime"]
---

# AddressSanitizer Runtime

The AddressSanitizer runtime library intercepts common memory allocation functions and operations to enable inspection of memory accesses. There are a number of different runtime libraries that facilitate this for the various types of executables the compiler may generate. The compiler and linker will link the appropriate runtime libraries so long as the /fsanitize=address flag is passed at compile time. This default functionality can be overrided with the flag `/nodefaultlib` at link time. See the section on [linking](./asan-building.md#Linker) for further detail.

Below is an inventory of runtime libraries for linking to the Address Sanatizer runtime, where `arch` is either `i386` or `x86_64`.

> [!NOTE]
> These libraries keep the Clang conventions for architecture names. The Microsoft Visual C++  convention would be x86 and x64 rather than i386 and x86_64. They refer to the same architectures.

| CRT Flag | DLL or EXE | DEBUG? | AddressSanitizer Runtime Binaries Libraries                                       |
|----------|------------|--------|------------------------------------------------------------------------------------|
| MT       | EXE        | NO     | `clang_rt.asan-{arch}, clang_rt.asan_cxx-{arch}`                                   |
| MT       | DLL        | NO     | `clang_rt.asan_dll_thunk-{arch}`                                                   |
| MD       | EITHER     | NO     | `clang_rt.asan_dynamic-{arch}, clang_rt.asan_dynamic_runtime_thunk-{arch}`         |
| MT       | EXE        | YES    | `clang_rt.asan_dbg-{arch}, clang_rt.asan_dbg_cxx-{arch}`                           |
| MT       | DLL        | YES    | `clang_rt.asan_dbg_dll_thunk-{arch}`                                               |
| MD       | EITHER     | YES    | `clang_rt.asan_dbg_dynamic-{arch}, clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}` |

When compiling with `cl -fsanitize=address`, the compiler generates instructions to manage and check the [shadow-bytes](./asan-shadowbytes.md). Your program will use this instrumentation to check memory accesses on the stack, in the heap, or in the global scope. The compiler also produces metadata describing stack and global variables. This metadata enables the runtime to generate precise error diagnostics: function names, lines, and columns in your source code. Combined, the compiler checks and runtime libraries can precisely diagnose many types of [memory safety bugs](./asan-top-level.md#Error-types) if they are encountered at run-time.

## Function interception

Interception is achieved through many hot-patching techniques, [these techniques are best documented within the source code itself.](https://github.com/llvm/llvm-project/blob/1a2eaebc09c6a200f93b8beb37130c8b8aab3934/compiler-rt/lib/interception/interception_win.cpp#L11)

The runtime libraries intercept many common memory management and memory manipulation functions. [A complete list of intercepted functions is available below.](#AddressSanitizer-list-of-intercepted-functions-(Windows)) The allocation interceptors manage metadata and shadow bytes related to each allocation call. Every time a CRT function like malloc() or delete() are called, the interceptors set specific values in the AddressSanitizer shadow-memory region to indicate whether those heap locations are currently accessible and what are the bounds of the allocation are. These shadow bytes allow the compiler-generated checks of the [shadow-bytes](./asan-shadowbytes.md) to determine whether a load or store is valid.

Interception is not guaranteed to succeed; if a function prologue is too short for a jmp to be written interception can fail. If this occurs the program will throw a debugbreak() and halt. Attaching a debugger will make the cause of the interception issue more clear. If you encounter this problem please file a feedback report with the [Visual Studio developer community](https://developercommunity.visualstudio.com/). 

> [!NOTE]
> Users can optionally attempt to continue past a failed interception by setting the environment variable `ASAN_WIN_CONTINUE_ON_INTERCEPTION_FAILURE` to any value. Continuing past an interception failure can result in missed bug reports for that function.

## Custom allocators and the AddressSanitizer runtime

The AddressSanitizer runtime provides interceptors for common allocator interfaces, malloc/free, new/delete, HeapAlloc/HeapFree (via RtlAllocateHeap/RtlFreeHeap). Many programs make use of custom allocators for one reason or another, an example would be any program using dlmalloc or a solution using the std::allocator interface and VirtualAlloc(). The compiler is not able to automatically add shadow-memory management calls to a custom allocator. It's the user's responsibility to use the [provided manual poisoning interface](#Manual-Address-Sanitizer-poisoning-interface). This API enables these allocators to function properly with the existing AddressSanitizer runtime and [shadow byte](./asan-shadowbytes.md) conventions.

## Manual AddressSanitizer poisoning interface

The interface for enlightening is simple but it imposes alignment restrictions on the user. Users may import these prototypes by importing [`sanitizer/asan_interface.h`](https://github.com/llvm/llvm-project/blob/main/compiler-rt/include/sanitizer/asan_interface.h) The interface function prototypes are as follows:

```cpp
void __asan_poison_memory_region(void const volatile *addr, size_t size);
void __asan_unpoison_memory_region(void const volatile *addr, size_t size);
```

For convenience the [AddressSanitizer interface header file](https://github.com/llvm/llvm-project/blob/main/compiler-rt/include/sanitizer/asan_interface.h) provides wrapper macros that check whether the AddressSanitizer functionality is enabled during compilation. This allows your source code to omit the poisoning function calls when they are not needed. These macros should be preferred over calling the above functions directly:

```cpp
#define ASAN_POISON_MEMORY_REGION(addr, size)
#define ASAN_UNPOISON_MEMORY_REGION(addr, size)
```

## Alignment requirements for AddressSanitizer poisoning

Any manual poisoning of shadow bytes must consider this alignment requirement: The user must add padding such that the padding ends on a byte boundary in the shadow memory. Each bit in the AddressSanitizer's shadow memory, encodes the state of 1 byte in the application's memory. This encoding means **the total size of each allocation, including any padding, must align to an 8-byte boundary.** If the alignment requirement is not satisfied, it can lead to incorrect bug reporting. The incorrect reporting could materialize as missing reports (false negative) or reports on non-errors (false-positive).

[See the provided example programs for an illustration of the requirement and potential issues.](https://github.com/mcgov/asan_alignment_example) One is a small program to show what can go wrong with manual shadow memory poisoning. The second is an example implementation of manual poising using the `std::allocator` interface.

## Run-time Flags

Microsoft Visual C++ uses a runtime based on the [Clang AddressSanitizer runtime from the llvm-project repository.](https://github.com/llvm/llvm-project) Because of this, most runtime flags are shared between the two versions. [A complete list of the public Clang runtime flags is available here.](https://github.com/google/sanitizers/wiki/SanitizerCommonFlags) There are some differences detailed here, if you discover options that don't function as expected file a feedback ticket in the [Visual Studio developer community.](https://developercommunity.visualstudio.com)

### Unsupported AddressSanitizer Options

- detect_container_overflow
- unmap_shadow_on_exit

> [!NOTE]
> The AddressSanitizer runtime option `halt_on_error` does not function the way you might expect. In both the Clang and the Microsoft Visual C++ run-time libraries, many error types have been designated as **non-continuable**, including most memory corruption errors.

For more information, see the [Differences with Clang 12.0] section(./asan-top-level.md#Differences-with-Clang-12.0).

### Microsoft Visual C++ specific AddressSanitizer runtime flags:

- `windows_hook_legacy_allocators`
  - Boolean, set to `true` to enable interception of [GlobalAlloc](https://docs.microsoft.com/windows/win32/api/winbase/nf-winbase-globalalloc) and [LocalAlloc](https://docs.microsoft.com/windows/win32/api/winbase/nf-winbase-localalloc) allocators.

> [!NOTE]
> The option `windows_hook_legacy_allocators` is NOT currently available in the public llvm-project runtime as of this date. The option may eventually be contributed back to the public project; however, this is dependent on code review and community acceptance.

> [!NOTE]
> The option `windows_hook_rtl_allocators`, previously an opt-in feature while AddressSanitizer was experimental, is now enabled by default.

## AddressSanitizer list of intercepted functions (Windows)

The AddressSanitizer runtime hot-patches many functions to enable memory safety checks at runtime. The following set of functions is a non-exhaustive list of the functions that the AddressSanitizer runtime monitors.

### Default interceptors

- [__C_specific_handler (x64 only)](https://docs.microsoft.com/en-us/windows/win32/devnotes/--c-specific-handler2)
- [_aligned_free](../c-runtime-library/reference/aligned-free.md)
- [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md)
- [_aligned_msize](../c-runtime-library/reference/aligned-msize.md)
- [_aligned_realloc](../c-runtime-library/reference/aligned-realloc.md)
- [_calloc_base](../c-runtime-library/reference/calloc.md)
- [_calloc_crt](../c-runtime-library/reference/calloc.md)
- [_calloc_dbg (debug runtime only)](../c-runtime-library/reference/calloc-dbg.md)
- [_except_handler3 (x86 only)](../c-runtime-library/except-handler3.md)
- _except_handler4 (x86 only)(undocumented)
- [_expand](../c-runtime-library/reference/expand.md)
- _expand_base (undocumented)
- [_expand_dbg (debug runtime only)](../c-runtime-library/reference/expand-dbg.md)
- _free_base (undocumented)
- [_free_dbg (debug runtime only)](../c-runtime-library/reference/free-dbg.md)
- _malloc_base (undocumented)
- _malloc_crt (undocumented)
- [_malloc_dbg (debug runtime only)](../c-runtime-library/reference/malloc-dbg.md)
- [_msize](../c-runtime-library/reference/msize.md)
- _msize_base (undocumented)
- [_msize_dbg (debug runtime only)](../c-runtime-library/reference/msize-dbg.md)
- _realloc_base (undocumented)
- _realloc_crt (undocumented)
- [_realloc_dbg (debug runtime only)](../c-runtime-library/reference/realloc-dbg.md)
- [_recalloc](../c-runtime-library/reference/recalloc.md)
- _recalloc_base (undocumented)
- _recalloc_crt (undocumented)
- [_recalloc_dbg (debug runtime only)](../c-runtime-library/reference/recalloc-dbg.md)
- [_strdup](../c-runtime-library/reference/strdup-wcsdup-mbsdup.md)
- [atoi](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)
- [atol](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)
- [calloc](../c-runtime-library/reference/calloc.md)
- [CreateThread](https://docs.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread)
- [free](../c-runtime-library/reference/free.md)
- [frexp](../c-runtime-library/reference/frexp.md)
- [longjmp](../c-runtime-library/reference/longjmp.md)
- [malloc](../c-runtime-library/reference/malloc.md)
- [memchr](../c-runtime-library/reference/memchr-wmemchr.md)
- [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)
- [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md)
- [memmove](../c-runtime-library/reference/memmove-wmemmove.md)
- [memset](../c-runtime-library/reference/memset-wmemset.md)
- [RaiseException](https://docs.microsoft.com/en-us/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception)
- [realloc](../c-runtime-library/reference/realloc.md)
- [RtlAllocateHeap](https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlallocateheap)
- [RtlCreateHeap](https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlcreateheap)
- [RtlDestroyHeap](https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlcreateheap)
- [RtlFreeHeap](https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlfreeheap)
- [RtlRaiseException](https://docs.microsoft.com/en-us/windows/win32/api/rtlsupportapi/nf-rtlsupportapi-rtlraiseexception)
- RtlReAllocateHeap (undocumented)
- RtlSizeHeap (undocumented)
- [SetUnhandledExceptionFilter](https://docs.microsoft.com/en-us/windows/win32/api/errhandlingapi/nf-errhandlingapi-setunhandledexceptionfilter)
- [strcat](../c-runtime-library/reference/strcat-wcscat-mbscat.md)
- [strchr](../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)
- [strcmp](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)
- [strcpy](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)
- [strcspn](../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)
- [strdup](../c-runtime-library/reference/strdup-wcsdup.md)
- [strlen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
- [strncat](../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)
- [strncmp](../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)
- [strncpy](../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)
- [strnlen](../c-runtime-library/reference/strnlen-strnlen-s.md)
- [strpbrk](../c-runtime-library/reference/strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)
- [strspn](../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)
- [strstr](../c-runtime-library/reference/strstr-wcsstr-mbsstr-mbsstr-l.md)
- [strtok](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md)
- [strtol](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)
- [wcslen](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
- [wcsnlen](../c-runtime-library/reference/strnlen-strnlen.md)

### Optional interceptors

The following interceptors are only installed when an AddressSanitizer runtime option is enabled, set `windows_hook_legacy_allocators` to `true` to enable legacy allocator interception.
`set ASAN_OPTIONS=windows_hook_legacy_allocators=true`

- [GlobalAlloc](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-globalalloc)
- [GlobalFree](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-GlobalFree)
- [GlobalHandle](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-GlobalHandle)
- [GlobalLock](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-GlobalLock)
- [GlobalReAlloc](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-GlobalReAlloc)
- [GlobalSize](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-GlobalSize)
- [GlobalUnlock](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-GlobalUnlock)
- [LocalAlloc](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalAlloc)
- [LocalFree](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalFree)
- [LocalHandle](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalHandle)
- [LocalLock](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalLock)
- [LocalReAlloc](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalReAlloc)
- [LocalSize](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalSize)
- [LocalUnlock](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-LocalUnlock)

## See also

- [AddressSanitizer Overview](./asan.md)
- [AddressSanitizer Known Issues](./asan-known-issues.md)
- [AddressSanitizer Build and Language Reference](./asan-building.md)
- [AddressSanitizer Runtime Reference](./asan-runtime.md)
- [AddressSanitizer Shadow Bytes](./asan-shadowbytes.md)
- [AddressSanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [AddressSanitizer Debugger Integration](./asan-debugger-integration.md)

> [!NOTE] Send us [feedback](https://aka.ms/feedback/suggest?space=62) on what you would like to see in future releases, and please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.