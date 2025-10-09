---
title: "AddressSanitizer runtime"
description: "Technical description of the AddressSanitizer runtime for Microsoft C/C++."
ms.date: 02/05/2024
helpviewer_keywords: ["AddressSanitizer runtime", "Address Sanitizer runtime", "clang_rt.asan", "Clang runtime", "ASan runtime"]
---

# AddressSanitizer runtime

The AddressSanitizer runtime library intercepts common memory allocation functions and operations to enable inspection of memory accesses. There are several different runtime libraries that support the various types of executables the compiler may generate. The compiler and linker automatically link the appropriate runtime libraries, as long as you pass the [`/fsanitize=address`](../build/reference/fsanitize.md) option at compile time. You can override the default behavior by using the **`/NODEFAULTLIB`** option at link time. For more information, see the section on [linking](asan-building.md#linker) in the [AddressSanitizer language, build, and debugging reference](asan-building.md).

When compiling with `cl /fsanitize=address`, the compiler generates instructions to manage and check [shadow bytes](asan-shadow-bytes.md). Your program uses this instrumentation to check memory accesses on the stack, in the heap, or in the global scope. The compiler also produces metadata describing stack and global variables. This metadata enables the runtime to generate precise error diagnostics: function names, lines, and columns in your source code. Combined, the compiler checks and runtime libraries can precisely diagnose many types of [memory safety bugs](asan-error-examples.md) if they're encountered at run-time.

The list of runtime libraries for linking to the AddressSanitizer runtime, as of Visual Studio 17.7 Preview 3, follows. For more information about the `/MT` (statically link the runtime) and `/MD` (dynamically link the redist at runtime) options, see [`/MD`, `/MT`, `/LD` (Use Run-Time Library)](../build/reference/md-mt-ld-use-run-time-library.md).

> [!NOTE]
> In the following table, *`{arch}`* is either *`i386`* or *`x86_64`*.
> These libraries use Clang conventions for architecture names. MSVC conventions are normally `x86` and `x64` rather than `i386` and `x86_64`, but they refer to the same architectures.

| CRT option | AddressSanitizer runtime library (`.lib`) | Address runtime binary (`.dll`)
|--|--|--|
| `/MT` or `/MTd` | *`clang_rt.asan_dynamic-{arch}`*, *`clang_rt.asan_static_runtime_thunk-{arch}`* | *`clang_rt.asan_dynamic-{arch}`*
| `/MD` or `/MDd` | *`clang_rt.asan_dynamic-{arch}`*, *`clang_rt.asan_dynamic_runtime_thunk-{arch}`* | *`clang_rt.asan_dynamic-{arch}`*

The following diagram shows how the language runtime libraries are linked for the `/MT`, `/MTd`, `/MD`, and `/MDd` compiler options:

:::image type="complex" source="media/runtime-configurations.png" alt-text="Diagram of how the runtime libraries are linked for various compiler options."
The image shows three scenarios for linking the runtime library. The first is /MT or /MTd. My_exe.exe and my_dll.dll are both shown with their own copies of the statically linked VCRuntime, Universal CRT, and C++ runtimes. The scenarios show /MD in which both my_exe.exe and my_dll.dll share vcruntime140.dll, ucrtbase.dll, and msvcp140.dll. The last scenario shows /MDd in which both my_exe.exe and my_dll.dll share the debug versions of the runtimes: vcruntime140d.dll, ucrtbased.dll, and msvcp140d.dll
:::image-end:::

The following diagram shows how the ASan library is linked for various compiler options:

:::image type="complex" source="media/asan-one-dll.png" alt-text="Diagram of how the ASan runtime dll is linked."
The image shows four scenarios for linking the ASan runtime library. The scenarios are for /MT (statically link the runtime), /MTd (statically link the debug runtime), /MD (dynamically link the redist at runtime), /MDd (dynamically link the debug redist at runtime). In all cases, my_exe.exe links and its associates my_dll.dll link to a single instance of clang_rt.asan_dynamic-x86_64.dll.
:::image-end:::

Even when statically linking, the ASan runtime DLL must be present at runtime--unlike other C Runtime components.

### Previous versions

Before Visual Studio 17.7 Preview 3, statically linked (**`/MT`** or **`/MTd`**) builds didn't use a DLL dependency. Instead, the AddressSanitizer runtime was statically linked into the user's EXE. DLL projects would then load exports from the user's EXE to access ASan functionality.

Dynamically linked projects (**`/MD`** or **`/MDd`**) used different libraries and DLLs depending on whether the project was configured for debug or release. For more information about these changes and their motivations, see [MSVC Address Sanitizer – One DLL for all Runtime Configurations](https://devblogs.microsoft.com/cppblog/msvc-address-sanitizer-one-dll-for-all-runtime-configurations/).

The following table describes the previous behavior of the AddressSanitizer runtime library linking, before Visual Studio 17.7 Preview 3:

| CRT option | DLL or EXE | DEBUG? | ASan library (`.lib`) | ASan runtime binary (`.dll`) |
|--|--|--|--|--|
| `/MT` | EXE | No | *`clang_rt.asan-{arch}`*, *`clang_rt.asan_cxx-{arch}`* | None
| `/MT` | DLL | No | *`clang_rt.asan_dll_thunk-{arch}`* | None
| `/MD` | Either | No | *`clang_rt.asan_dynamic-{arch}`*, *`clang_rt.asan_dynamic_runtime_thunk-{arch}`* | *`clang_rt.asan_dynamic-{arch}`*
| `/MT` | EXE | Yes | *`clang_rt.asan_dbg-{arch}`*, *`clang_rt.asan_dbg_cxx-{arch}`* | None
| `/MT` | DLL | Yes | *`clang_rt.asan_dbg_dll_thunk-{arch}`* | None
| `/MD` | Either | Yes | *`clang_rt.asan_dbg_dynamic-{arch}`*, *`clang_rt.asan_dbg_dynamic_runtime_thunk-{arch}`* | *`clang_rt.asan_dbg_dynamic-{arch}`*

The following diagram shows how the ASan library was linked for various compiler options before Visual Studio 2022 17.7 Preview 3:

:::image type="complex" source="media/asan-library-linking-previous-versions.png" alt-text="Diagram of how the ASan runtime dll was linked prior to Visual Studio 2022 Preview 3."
The image shows four scenarios for linking the ASan runtime library. The scenarios are for /MT (statically link the runtime), /MTd (statically link the debug runtime), /MD (dynamically link the redist at runtime), /MDd (dynamically link the debug redist at runtime). For /MT, my_exe.exe has a statically linked copy of the ASan runtime. my_dll.dll links to the ASan runtime in my_exe.exe. For /MTd, the diagram is the same except it uses the debug statically linked ASan runtime. For /MD, both my_exe.exe and my_dll.dll link to the dynamically linked ASan runtime named clang_rt.asan_dynamic-x86_64.dll. For /MDd, the diagram is the same except my_exe.exe and my_dll.dll link to the debug ASan runtime named clang_rt.asan_dbg_dynamic-x86_64.dll.
:::image-end:::

## Function interception

The AddressSanitizer achieves function interception through many hotpatching techniques. These techniques are [best documented within the source code itself](https://github.com/llvm/llvm-project/blob/1a2eaebc09c6a200f93b8beb37130c8b8aab3934/compiler-rt/lib/interception/interception_win.cpp#L11).

The runtime libraries intercept many common memory management and memory manipulation functions. For a list, see [AddressSanitizer list of intercepted functions](#intercepted_functions). The allocation interceptors manage metadata and shadow bytes related to each allocation call. Every time a CRT function such as `malloc` or `delete` is called, the interceptors set specific values in the AddressSanitizer shadow-memory region to indicate whether those heap locations are currently accessible and what the bounds of the allocation are. These shadow bytes allow the compiler-generated checks of the [shadow bytes](asan-shadow-bytes.md) to determine whether a load or store is valid.

Interception isn't guaranteed to succeed. If a function prologue is too short for a `jmp` to be written, interception can fail. If an interception failure occurs, the program throws a `debugbreak` and halts. If you attach a debugger, it makes the cause of the interception issue clear. If you have this problem, [report a bug](https://aka.ms/feedback/report?space=62).

> [!NOTE]
> Users can optionally attempt to continue past a failed interception by setting the environment variable `ASAN_WIN_CONTINUE_ON_INTERCEPTION_FAILURE` to any value. Continuing past an interception failure can result in missed bug reports for that function.

## Custom allocators and the AddressSanitizer runtime

The AddressSanitizer runtime provides interceptors for common allocator interfaces, `malloc`/`free`, `new`/`delete`, `HeapAlloc`/`HeapFree` (via `RtlAllocateHeap`/`RtlFreeHeap`). Many programs make use of custom allocators for one reason or another, an example would be any program using `dlmalloc` or a solution using the `std::allocator` interface and `VirtualAlloc()`. The compiler is unable to automatically add shadow-memory management calls to a custom allocator. It's the user's responsibility to use the [provided manual poisoning interface](#poisoning). This API enables these allocators to function properly with the existing AddressSanitizer runtime and [shadow byte](asan-shadow-bytes.md) conventions.

## <a name="poisoning"></a> Manual AddressSanitizer poisoning interface

The interface for enlightening is simple, but it imposes alignment restrictions on the user. Users may import these prototypes by importing [`sanitizer/asan_interface.h`](https://github.com/llvm/llvm-project/blob/main/compiler-rt/include/sanitizer/asan_interface.h). Here are the interface function prototypes:

```cpp
void __asan_poison_memory_region(void const volatile *addr, size_t size);
void __asan_unpoison_memory_region(void const volatile *addr, size_t size);
```

For convenience, the [AddressSanitizer interface header file](https://github.com/llvm/llvm-project/blob/main/compiler-rt/include/sanitizer/asan_interface.h) provides wrapper macros. These macros check whether the AddressSanitizer functionality is enabled during compilation. They allow your source code to omit the poisoning function calls when they're not needed. These macros should be preferred over calling the above functions directly:

```cpp
#define ASAN_POISON_MEMORY_REGION(addr, size)
#define ASAN_UNPOISON_MEMORY_REGION(addr, size)
```

> [!NOTE]
> If you manually poison memory, you must unpoison it before reuse. This is especially important for stack addresses, such as for a local variable, which are frequently reused during program execution. You risk introducing `use-after-poison` false positives in manually poisoned stack addresses if you don't unpoison them before their stack frame is removed.

## Alignment requirements for AddressSanitizer poisoning

Any manual poisoning of shadow bytes must consider the alignment requirements. The user must add padding if necessary so the shadow bytes end on a byte boundary in the shadow memory. Each bit in the AddressSanitizer shadow memory encodes the state of a single byte in the application's memory. This encoding means the total size of each allocation, including any padding, must align to an 8-byte boundary. If the alignment requirement isn't satisfied, it can lead to incorrect bug reporting. The incorrect reporting could manifest as missing reports (false negatives) or reports on non-errors (false-positives).

For an illustration of the alignment requirement and potential issues, see the provided [ASan alignment examples](https://github.com/mcgov/asan_alignment_example). One is a small program to show what can go wrong with manual shadow memory poisoning. The second is an example implementation of manual poisoning using the `std::allocator` interface.

## Runtime options

The MSVC AddressSanitizer is a regularly synced fork of the [Clang AddressSanitizer runtime](https://github.com/llvm/llvm-project). As a result, MSVC implicitly inherits many of Clang's ASan runtime options. A complete list of options that we actively maintain and test can be found [here](./asan-flags.md). If you discover options that don't function as expected, [report a bug](https://aka.ms/feedback/report?space=62).


### Configure runtime options

ASan runtime options are set in one of two ways:
- The `ASAN_OPTIONS` environment variable
- The `__asan_default_options` user function

If the environment variable and the user function specify conflicting options, the options in the `ASAN_OPTIONS` environment variable take precedence.

Multiple options are specified by separating them with a colon (`:`). 

The following example sets [`alloc_dealloc_mismatch`](error-alloc-dealloc-mismatch.md) to one and `symbolize` to zero:

```cmd
set ASAN_OPTIONS=alloc_dealloc_mismatch=1:symbolize=0
```

Or add the following function to your code:

```cpp
extern "C" const char* __asan_default_options()
{
  return "alloc_dealloc_mismatch=1:symbolize=0";
}
```

### Unsupported AddressSanitizer options

- `detect_container_overflow`
- `unmap_shadow_on_exit`

> [!NOTE]
> The AddressSanitizer runtime option `halt_on_error` doesn't function the way you might expect. In both the Clang and the MSVC runtime libraries, many error types are considered **non-continuable**, including most memory corruption errors.

For more information, see the [Differences with Clang 12.0](asan.md#differences) section.

### MSVC-specific AddressSanitizer runtime options

- [`continue_on_error`](asan-continue-on-error.md) Boolean, set to `false` by default. When set to `true`, it allows the program to continue executing after a memory violation is reported, allowing you to collect multiple error reports.



- `iat_overwrite`
  String, set to `"error"` by default. Other possible values are `"protect"` and `"ignore"`. Some modules may overwrite the [`import address table`](/windows/win32/debug/pe-format#import-address-table) of other modules to customize implementations of certain functions. For example, drivers commonly provide custom implementations for specific hardware. The `iat_overwrite` option manages the AddressSanitizer runtime's protection against overwrites for specific [`memoryapi.h`](/windows/win32/api/memoryapi/) functions. The runtime currently tracks the [`VirtualAlloc`](/windows/win32/api/memoryapi/nf-memoryapi-virtualalloc), [`VirtualProtect`](/windows/win32/api/memoryapi/nf-memoryapi-virtualprotect), and [`VirtualQuery`](/windows/win32/api/memoryapi/nf-memoryapi-virtualquery) functions for protection. This option is available in Visual Studio 2022 version 17.5 Preview 1 and later versions. The following `iat_overwrite` values control how the runtime reacts when protected functions are overwritten:

  - If set to `"error"` (the default), the runtime reports an error whenever an overwrite is detected.
  - If set to `"protect"`, the runtime attempts to avoid using the overwritten definition and proceeds. Effectively, the original `memoryapi` definition of the function is used from inside the runtime to avoid infinite recursion. Other modules in the process still use the overwritten definition.
  - If set to `"ignore"`, the runtime doesn't attempt to correct any overwritten functions and proceeds with execution.

- `windows_fast_fail_on_error`
  Boolean (`false` by default), set to `true` to enable the process to terminate with a `__fastfail(71)` after printing the error report.

  > [!NOTE]
  > When `abort_on_error` value is set to `true`, on Windows the program terminates with an `exit(3)`. In order to not change current behavior we decided to introduce this new option instead. If both `abort_on_error` and `windows_fast_fail_on_error` are `true`, the program will exit with the `__fastfail`.

- `windows_hook_legacy_allocators`
  Boolean, set to `false` to disable interception of [`GlobalAlloc`](/windows/win32/api/winbase/nf-winbase-globalalloc) and [`LocalAlloc`](/windows/win32/api/winbase/nf-winbase-localalloc) allocators.

  > [!NOTE]
  > The option `windows_hook_legacy_allocators` wasn't available in the public llvm-project runtime when this article was written. The option may eventually be contributed back to the public project; however, it's dependent on code review and community acceptance.
  >
  > The option `windows_hook_rtl_allocators`, previously an opt-in feature while AddressSanitizer was experimental, is now enabled by default. In versions before Visual Studio 2022 version 17.4.6, the default option value is `false`. In Visual Studio 2022 version 17.4.6 and later versions, the option `windows_hook_rtl_allocators` defaults to `true`.


## <a name="intercepted_functions"></a> AddressSanitizer list of intercepted functions (Windows)

The AddressSanitizer runtime hotpatches many functions to enable memory safety checks at runtime. Here's a non-exhaustive list of the functions that the AddressSanitizer runtime monitors.

### Default interceptors

- [`__C_specific_handler` (x64 only)](/windows/win32/devnotes/--c-specific-handler2)
- [`_aligned_free`](../c-runtime-library/reference/aligned-free.md)
- [`_aligned_malloc`](../c-runtime-library/reference/aligned-malloc.md)
- [`_aligned_msize`](../c-runtime-library/reference/aligned-msize.md)
- [`_aligned_realloc`](../c-runtime-library/reference/aligned-realloc.md)
- [`_calloc_base`](../c-runtime-library/reference/calloc.md)
- [`_calloc_crt`](../c-runtime-library/reference/calloc.md)
- [`_calloc_dbg` (debug runtime only)](../c-runtime-library/reference/calloc-dbg.md)
- [`_except_handler3` (x86 only)](../c-runtime-library/except-handler3.md)
- [`_except_handler4` (x86 only)](../c-runtime-library/internal-crt-globals-and-functions.md) (undocumented)
- [`_expand`](../c-runtime-library/reference/expand.md)
- `_expand_base` (undocumented)
- [`_expand_dbg` (debug runtime only)](../c-runtime-library/reference/expand-dbg.md)
- [`_free_base`](../c-runtime-library/internal-crt-globals-and-functions.md) (undocumented)
- [`_free_dbg` (debug runtime only)](../c-runtime-library/reference/free-dbg.md)
- [`_malloc_base`](../c-runtime-library/internal-crt-globals-and-functions.md) (undocumented)
- `_malloc_crt` (undocumented)
- [`_malloc_dbg` (debug runtime only)](../c-runtime-library/reference/malloc-dbg.md)
- [`_msize`](../c-runtime-library/reference/msize.md)
- `_msize_base` (undocumented)
- [`_msize_dbg` (debug runtime only)](../c-runtime-library/reference/msize-dbg.md)
- [`_realloc_base`](../c-runtime-library/internal-crt-globals-and-functions.md) (undocumented)
- `_realloc_crt` (undocumented)
- [`_realloc_dbg` (debug runtime only)](../c-runtime-library/reference/realloc-dbg.md)
- [`_recalloc`](../c-runtime-library/reference/recalloc.md)
- `_recalloc_base` (undocumented)
- `_recalloc_crt` (undocumented)
- [`_recalloc_dbg` (debug runtime only)](../c-runtime-library/reference/recalloc-dbg.md)
- [`_strdup`](../c-runtime-library/reference/strdup-wcsdup-mbsdup.md)
- [`atoi`](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)
- [`atol`](../c-runtime-library/reference/atoi-atoi-l-wtoi-wtoi-l.md)
- [`calloc`](../c-runtime-library/reference/calloc.md)
- [`CreateThread`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread)
- [`free`](../c-runtime-library/reference/free.md)
- [`frexp`](../c-runtime-library/reference/frexp.md)
- [`longjmp`](../c-runtime-library/reference/longjmp.md)
- [`malloc`](../c-runtime-library/reference/malloc.md)
- [`memchr`](../c-runtime-library/reference/memchr-wmemchr.md)
- [`memcmp`](../c-runtime-library/reference/memcmp-wmemcmp.md)
- [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md)
- [`memmove`](../c-runtime-library/reference/memmove-wmemmove.md)
- [`memset`](../c-runtime-library/reference/memset-wmemset.md)
- [`RaiseException`](/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception)
- [`realloc`](../c-runtime-library/reference/realloc.md)
- [`RtlAllocateHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlallocateheap)
- [`RtlCreateHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlcreateheap)
- [`RtlDestroyHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtldestroyheap)
- [`RtlFreeHeap`](/windows-hardware/drivers/ddi/ntifs/nf-ntifs-rtlfreeheap)
- [`RtlRaiseException`](/windows/win32/api/rtlsupportapi/nf-rtlsupportapi-rtlraiseexception)
- `RtlReAllocateHeap` (undocumented)
- `RtlSizeHeap` (undocumented)
- [`SetUnhandledExceptionFilter`](/windows/win32/api/errhandlingapi/nf-errhandlingapi-setunhandledexceptionfilter)
- [`strcat`](../c-runtime-library/reference/strcat-wcscat-mbscat.md)
- [`strchr`](../c-runtime-library/reference/strchr-wcschr-mbschr-mbschr-l.md)
- [`strcmp`](../c-runtime-library/reference/strcmp-wcscmp-mbscmp.md)
- [`strcpy`](../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)
- [`strcspn`](../c-runtime-library/reference/strcspn-wcscspn-mbscspn-mbscspn-l.md)
- [`strdup`](../c-runtime-library/reference/strdup-wcsdup.md)
- [`strlen`](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
- [`strncat`](../c-runtime-library/reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)
- [`strncmp`](../c-runtime-library/reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)
- [`strncpy`](../c-runtime-library/reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)
- [`strnlen`](../c-runtime-library/reference/strnlen-strnlen-s.md)
- [`strpbrk`](../c-runtime-library/reference/strpbrk-wcspbrk-mbspbrk-mbspbrk-l.md)
- [`strspn`](../c-runtime-library/reference/strspn-wcsspn-mbsspn-mbsspn-l.md)
- [`strstr`](../c-runtime-library/reference/strstr-wcsstr-mbsstr-mbsstr-l.md)
- [`strtok`](../c-runtime-library/reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md)
- [`strtol`](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)
- [`wcslen`](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)
- [`wcsnlen`](../c-runtime-library/reference/strnlen-strnlen-s.md)

### Optional interceptors

The interceptors listed here are only installed when an AddressSanitizer runtime option is enabled. Set `windows_hook_legacy_allocators` to `false` to disable legacy allocator interception.
`set ASAN_OPTIONS=windows_hook_legacy_allocators=false`

- [`GlobalAlloc`](/windows/win32/api/winbase/nf-winbase-globalalloc)
- [`GlobalFree`](/windows/win32/api/winbase/nf-winbase-globalfree)
- [`GlobalHandle`](/windows/win32/api/winbase/nf-winbase-globalhandle)
- [`GlobalLock`](/windows/win32/api/winbase/nf-winbase-globallock)
- [`GlobalReAlloc`](/windows/win32/api/winbase/nf-winbase-globalrealloc)
- [`GlobalSize`](/windows/win32/api/winbase/nf-winbase-globalsize)
- [`GlobalUnlock`](/windows/win32/api/winbase/nf-winbase-globalunlock)
- [`LocalAlloc`](/windows/win32/api/winbase/nf-winbase-localalloc)
- [`LocalFree`](/windows/win32/api/winbase/nf-winbase-localfree)
- [`LocalHandle`](/windows/win32/api/winbase/nf-winbase-localhandle)
- [`LocalLock`](/windows/win32/api/winbase/nf-winbase-locallock)
- [`LocalReAlloc`](/windows/win32/api/winbase/nf-winbase-localrealloc)
- [`LocalSize`](/windows/win32/api/winbase/nf-winbase-localsize)
- [`LocalUnlock`](/windows/win32/api/winbase/nf-winbase-localunlock)

## See also

[AddressSanitizer overview](asan.md)\
[AddressSanitizer known issues](asan-known-issues.md)\
[AddressSanitizer build and language reference](asan-building.md)\
[AddressSanitizer shadow bytes](asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](asan-debugger-integration.md)\
[AddressSanitizer error examples](asan-error-examples.md)
