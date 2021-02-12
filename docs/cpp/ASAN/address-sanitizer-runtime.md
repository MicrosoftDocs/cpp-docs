---
title: "AddressSanitizer Runtime"
description: "Technical descrption of the AddressSanitizer runtime for Microsoft Visual C++."
ms.date: 01/05/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","clang_rt.asan","Clang runtime","runtime"]
---

# AddressSanitizer (ASan) Runtimes

ASan requires the installation of interceptors for common memory functions, for both allocators and memory manipulation functions. There are a variety of runtime libraries for targeting different executable types and CRT libraries. Unless the user is in an advanced situation and using the /nodefaultlib flag at link time, the compiler will link the appropriate library so long as the /fsanitize=address flag is passed at compile time.

Below is an inventory of runtime libraries related to ASan, where `arch` is either `i386` or `x86_64`.

> [!NOTE]
> These libraries keep the Clang conventions for architecture names. The Microsoft Visual C++  convention would be x86 and x64 rather than i386 and x86_64. They refer to the same architectures.

| CRT Flag | DLL or EXE | DEBUG? | ASan Runtime Libraries                                                             |
|----------|------------|--------|------------------------------------------------------------------------------------|
| MT       | EXE        | NO     | `clang_rt.asan-{arch}, clang_rt.asan_cxx-{arch}`                                   |
| MT       | DLL        | NO     | `clang_rt.asan_dll_thunk-{arch}`                                                     |
| MD       | EITHER     | NO     | `clang_rt.asan_dynamic-{arch}, clang_rt.asan_dynamic_runtime_thunk-{arch}`         |
| MT       | EXE        | YES    | `clang_rt.asan_dbg-{arch}, clang_rt.asan_dbg_cxx-{arch}`                           |
| MT       | DLL        | YES    | `clang_rt.asan_dbg_dll_thunk-{arch}`                                                 |
| MD       | EITHER     | YES    | `clang_rt.asan_dbg_dynamic-{arch}, clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}` |

 During the ASan compiler pass, the compiler generates metadata needed for stack and global variables and inserts checks for memory accesses throughout the program. The ASan runtime libraries install function interceptors during program initialization; these interceptors generate the necessary metadata and insert checks in common string and memory functions. Combined, this extra data is used to generate ASan reports when a memory corruption situation is detected.

## Function interception

Interception is achieved through a number of hot-patching techniques, [these are best documented within the source code itself.](https://github.com/llvm/llvm-project/blob/1a2eaebc09c6a200f93b8beb37130c8b8aab3934/compiler-rt/lib/interception/interception_win.cpp#L11)

The runtime libraries intercept many common memory management and manipulation functions. [A complete list of intercepted functions is available here.](.\address-sanitizer-intercepted-functions.md) The allocation interceptors manage metadata related to each allocation which is created. Each time an allocation is created or destroyed the allocator interceptors set specific values in the ASan shadow memory to indicate the current state of the allocation. When the compiler generates a memory access, it inserts a check that reads this metadata and determines whether the access is valid.

## Custom allocators and ASan

ASan provides interceptors for common allocator interfaces, malloc/free, new/delete, HeapAlloc/HeapFree (via RtlAllocateHeap/RtlFreeHeap). Many programs make use of custom allocators for one reason or another. An example would be any program using dlmalloc or a solution using the std::allocator interface and VirtualAlloc. ASan instrumentation does not automatically enlighten custom allocators; it is the responsibility of the user to use the provided manual poisoning interface to enable their allocators to function with ASan.

## Manual ASan poisoning interface

The interface for enlightening is simple but it imposes alignment restrictions on the user. The interface function prototypes are as follows:

```
void __asan_poison_memory_region(void const volatile *addr, size_t size);
void __asan_unpoison_memory_region(void const volatile *addr, size_t size);
```

These functions are not needed when ASan is disabled, for convenience the asan interface header provides wrapper macros that check whether ASan is enabled during compilation and omit the poisoning function calls when ASan instrumentation is disabled. These macros should be preferred over calling the above functions directly:

```
#define ASAN_POISON_MEMORY_REGION(addr, size)
#define ASAN_UNPOISON_MEMORY_REGION(addr, size)
```

## Alignment requirements for ASan poisoning

ASan poisoning has an alignment requirement: the user must add padding such that the padding ends on a byte boundary in the shadow memory. Since each bit in the ASan shadow memory encodes the state of a byte in real memory, this means that **the total size of each allocation including any padding must align on a 8 byte boundary.** If this requirement is not satisfied it can lead to incorrect bug reporting, including missed and false-positive reports.

[See the provided example programs for an illustration of the requirement and potential issues.](https://github.com/mcgov/asan_alignment_example) One is a small program to show what can go wrong with manual shadow memory poisoning. The second is an example implementation of manual poising using the `std::allocator` interface.

## Run-time Flags

Microsoft Visual C++ uses a runtime based on the [Clang ASan runtime from the llvm-project repository.](https://github.com/llvm/llvm-project) Because of this, most runtime flags are shared between the two verions. [A complete list of the public Clang runtime flags is available here.](https://github.com/google/sanitizers/wiki/SanitizerCommonFlags) There are some differences detailed here, if you discover options that do not function as expected please file a feedback ticket in the [Visual Studio developer community.](https://developercommunity.visualstudio.com)

### Unsupported ASan Options

- detect_container_overflow
- unmap_shadow_on_exit

> [!NOTE]
> The ASan option `halt_on_error` does not function the way you might expect. In both the Clang and the Microsoft Visual C++ run-time libraries many error types have been designated as non-continuable, including most memory corruption errors.

### Microsoft Visual C++ specific ASan runtime flags:

- `windows_hook_legacy_allocators`
  - Boolean, set to `true` to enable interception of [GlobalAlloc](https://docs.microsoft.com/windows/win32/api/winbase/nf-winbase-globalalloc) and [LocalAlloc](https://docs.microsoft.com/windows/win32/api/winbase/nf-winbase-localalloc) allocators.

> [!NOTE]
> The option `windows_hook_legacy_allocators` is not currently available in the public llvm-project runtime as of this date. The option may eventually be contributed back to the public project; however, this is dependent on code review and community acceptance.
