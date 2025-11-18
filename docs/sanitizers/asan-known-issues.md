---
title: "AddressSanitizer known issues and limitations"
description: "Technical description of the AddressSanitizer for Microsoft C/C++ known issues."
ms.date: 5/21/2025
helpviewer_keywords: ["AddressSanitizer known issues"]
---

# AddressSanitizer known issues and limitations

> [!NOTE]
> Send us [feedback](https://aka.ms/vsfeedback/browsecpp) on what you'd like to see in future releases, and [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.

## <a name="incompatible-options"></a> Incompatible options and functionality

The following options and functionality are incompatible with [`/fsanitize=address`](../build/reference/fsanitize.md) and should be disabled or avoided.

- The [`/RTC`](../build/reference/rtc-run-time-error-checks.md) options are incompatible with AddressSanitizer and should be disabled.
- [Incremental linking](../build/reference/incremental-link-incrementally.md) is unsupported, and should be disabled.
- [Edit-and-Continue](/visualstudio/debugger/edit-and-continue-visual-cpp) is unsupported, and should be disabled.
- [Coroutines](https://devblogs.microsoft.com/cppblog/category/coroutine/) are incompatible with AddressSanitizer, and resumable functions are exempt from instrumentation.
- [OpenMP](../build/reference/openmp-enable-openmp-2-0-support.md) is unsupported, and should be disabled.
- [Managed C++](../build/reference/clr-common-language-runtime-compilation.md) is unsupported, and should be disabled.
- [C++ AMP](../parallel/amp/cpp-amp-overview.md) is unsupported, and should be disabled.
- [Universal Windows Platform](../cppcx/universal-windows-apps-cpp.md) (UWP) applications are unsupported.
- [Special case list](https://clang.llvm.org/docs/SanitizerSpecialCaseList.html) files are unsupported.
- [Precompiled headers built without `/fsanitize=address`](../build/creating-precompiled-header-files.md#consistency-rules-for-yc-and-yu) are unsupported.

## Standard library support

The Microsoft Visual C++ (MSVC) standard library (STL) makes partial use of the AddressSanitizer and provides other code safety checks. For more information, see [`container-overflow` error](./error-container-overflow.md).

When annotations are disabled, or in versions of the Standard Library that don't support them, AddressSanitizer exceptions raised in STL code still identify real bugs. However, they're more precise if annotations are enabled and you use a version of the Standard Library that supports them.

This example demonstrates the lack of precision and the benefits of enabling annotations:

```cpp
// Compile with: cl /fsanitize=address /Zi
#include <vector>

int main()
{   
    // Create a vector of size 10, but with a capacity of 20.    
    std::vector<int> v(10);
    v.reserve(20);

    // In versions prior to 17.2, MSVC ASan does NOT raise an exception here.
    // While this is an out-of-bounds write to 'v', MSVC ASan
    // ensures the write is within the heap allocation size (20).
    // With 17.2 and later, MSVC ASan will raise a 'container-overflow' exception:
    // ==18364==ERROR: AddressSanitizer: container-overflow on address 0x1263cb8a0048 at pc 0x7ff6466411ab bp 0x005cf81ef7b0 sp 0x005cf81ef7b8
    v[10] = 1;

    // Regardless of version, MSVC ASan DOES raise an exception here, as this write
    // is out of bounds from the heap allocation.
    v[20] = 1;
}
```

## Overriding `operator new` and `delete`

AddressSanitizer (ASan) uses a custom version of `operator new` and `operator delete` to find allocation errors like [`alloc_dealloc_mismatch`](error-alloc-dealloc-mismatch.md). Run the linker with [`/INFERASANLIBS`](../build/reference/inferasanlibs.md) to ensure that ASan's `new`/`delete` override has lower precedence, so that the linker chooses `operator new` or `operator delete` overrides in other libraries over ASan's custom versions. When this happens, ASan might not catch some errors that rely on its custom `operator new` and `operator delete`.

[MFC](../mfc/mfc-concepts.md) includes custom overrides for `operator new` and `operator delete`. When Microsoft Foundation Classes (MFC) overrides are used instead of the ASan provided `operator new` and `operator delete`, ASan might miss errors entirely or classify them incorrectly as a result. The following errors may be missed or incorrectly classified:
 - [`alloc_dealloc_mismatch`](error-alloc-dealloc-mismatch.md)
 - [`double-free`](error-double-free.md)
 - [`heap-use-after-free`](error-heap-use-after-free.md)
 - [`heap-buffer-overflow`](error-heap-buffer-overflow.md)
 - [`new-delete-type-mismatch`](error-new-delete-type-mismatch.md)

## Memory usage

The AddressSanitizer runtime doesn't release memory back to the OS during execution so that the memory isn't all allocated up front. From the OS's point of view, it may look like there's a memory leak.

## AddressSanitizer runtime DLL locations

The *`clang_rt.asan*.dll`* runtime files are installed next to the compilers in *`%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`*. These locations are on the path in debugging sessions and in Visual Studio developer command prompts. These files are never placed in *`C:\Windows\System32`* or *`C:\Windows\SysWOW64`*.

## Custom property sheet support

The Visual Studio Property Manager window allows you to add custom *`.props`* files to your projects. Even though the **Enable AddressSanitizer** property (`<EnableASAN>`) is shown, the build doesn't honor it. The build doesn't honor it because the custom *`.props`* files are included after *`Microsoft.cpp.props`*, which uses the `<EnableASAN>` value to set other properties.

As a workaround, create a *`Directory.Build.props`* file in the root of your project to define the `<EnableASAN>` property. For more information, see [Customize C++ builds](/visualstudio/msbuild/customize-your-build#customize-c-builds).

## Thread local variables

Thread local variables (global variables declared with `__declspec(thread)` or `thread_local`) aren't protected by AddressSanitizer. This limitation isn't specific to Windows or Microsoft Visual C++, but is a general limitation.

## Custom code skips normal function return sequence

Using custom code or assembly language to leave the current stack frame without honoring the usual return mechanisms isn't supported. For example, leaving the current stack frame via a long jump may generate false positives. 

Instead, before invoking custom long jump-like code, call [`__asan_handle_no_return()`](https://github.com/llvm/llvm-project/blob/ba84d0c8d762f093c6ef6d5ef5a446a42a8548a5/compiler-rt/include/sanitizer/asan_interface.h#L325-L330) . This function clears all of the shadow bytes associated with the current thread's stack, which results in some lost coverage and introduces the risk of false negatives. But your program can then safely unwind the stack without running into false positives due to stale stack shadow bytes.

## Issues with partially sanitized executables

If all of the code in a process isn't compiled with `/fsanitize=address`, ASan may not be able to diagnose all memory safety errors. The most common example is when a DLL compiled with ASan is loaded into a process that contains code not compiled with ASan. In this case, ASan attempts to categorize allocations that took place before ASan initialization. Once those allocations are reallocated, ASan tries to own and monitor the lifetime of the memory.

If all of the DLLs compiled with ASan are unloaded from the process before the process ends, there may be crashes due to dangling references to intercepted functions such as `memcmp`, `memcpy`, `memmove`, and so on. For the best results, compile all modules under test with `/fsanitize=address`, or don't unload modules compiled with ASan after they enter the process.

Please report any bugs to our [Developer Community](https://aka.ms/feedback/report?space=62).

## ASan generates a large amount of benign first chance exceptions in 64-bit architectures

ASan reserves about one third of the process virtual memory for its [shadow bytes](./asan-shadow-bytes.md). In a 64-bit address space, this corresponds to several terabytes of memory, making it impractical for ASan to pre-commit these pages during initialization. Therefore, ASan in 64-bit architectures uses an on-demand shadow byte paging scheme: when a shadow bytes page is accessed for the first time, ASan is notified through a first-chance exception, and only commits the page at that moment. As a result, some debuggers may display a large amount of benign 'first chance' exceptions when running under ASan.

The Visual Studio debugger has been enlightened to handle this gracefully, and does not show these traces. However, debuggers like WinDbgX may break on every exception by default. Disabling breaking on first-chance exceptions is recommended. For example, in WinDbgX, this corresponds to the [`sxd av`](https://learn.microsoft.com/en-us/windows-hardware/drivers/debuggercmds/sx--sxd--sxe--sxi--sxn--sxr--sx---set-exceptions-) command. 

## See also

[AddressSanitizer overview](asan.md)\
[AddressSanitizer build and language reference](asan-building.md)\
[AddressSanitizer runtime reference](asan-runtime.md)\
[AddressSanitizer shadow bytes](asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](asan-debugger-integration.md)\
[AddressSanitizer error examples](asan-error-examples.md)
