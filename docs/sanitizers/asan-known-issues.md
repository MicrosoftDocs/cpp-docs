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

## Standard library support

The MSVC standard library (STL) makes partial use of the AddressSanitizer and provides other code safety checks. For more information, see [container-overflow error](./error-container-overflow.md).

When annotations are disabled, or in versions of the Standard Library that don't support them, AddressSanitizer exceptions raised in STL code still identify real bugs. However, they are more precise if annoations are enabled and you use a version of the Standard Library that supports them.

This example demonstrates the lack of precision and the benefits of enabling annotations:

```cpp
// Compile with: cl /fsanitize=address /Zi
#include <vector>

int main() {   
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

## Overriding operator new and delete

AddressSanitizer (ASAN) uses a custom version of `operator new` and `operator delete` to find allocation errors like [`alloc_dealloc_mismatch`](error-alloc-dealloc-mismatch.md). Running the linker with [`/INFERASANLIBS`](../build/reference/inferasanlibs.md) ensures that ASAN's `new`/`delete` override has low precedence, so that the linker chooses any `operator new` or `operator delete` overrides in other libraries over ASAN's custom versions. When this happens, ASAN may not be able to catch some errors that rely on its custom `operator new` and `operator delete`.

[MFC](../mfc/mfc-concepts.md) includes custom overrides for `operator new` and `operator delete` and might miss errors like [`alloc_dealloc_mismatch`](error-alloc-dealloc-mismatch.md).


## Memory usage

The AddressSanitizer runtime doesn't release memory back to the OS during execution. From the OS's point of view, it may look like there's a memory leak. This is intentional so that the memory isn't all allocated up front.

## AddressSanitizer runtime DLL locations

The *`clang_rt.asan*.dll`* runtime files are installed next to the compilers in *`%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`*. These locations are on the path in debugging sessions and in Visual Studio developer command prompts. These files are never placed in *`C:\Windows\System32`* or *`C:\Windows\SysWOW64`*.

## Custom property sheet support

The Visual Studio Property Manager window allows you to add custom *`.props`* files to your projects. Even though the **Enable Address Sanitizer** property (`<EnableASAN>`) is shown, the build doesn't honor it. That's because the custom *`.props`* files are included after *`Microsoft.cpp.props`*, which uses the `<EnableASAN>` value to set other properties.

As a workaround, create a *`Directory.Build.props`* file in the root of your project to define the `<EnableASAN>` property. For more information, see [Customize C++ builds](/visualstudio/msbuild/customize-your-build#customize-c-builds).

## Thread local variables

Thread local variables (global variables declared with `__declspec(thread)` or `thread_local`) aren't protected by AddressSanitizer. This limitation isn't specific to Windows or Microsoft Visual C++, but is a general limitation.

## Loading and unloading DLLs

If all of the code in a process isn't compiled with `/fsanitize=address`, ASan may not be able to diagnose all memory safety errors. The most common example is when a DLL is compiled with ASan but is loaded into a process that contains code that wasn't compiled with ASan. In this case, ASan attempts to categorize allocations that took place prior to ASan initialization. But if those allocations are reallocated, moved, and so on, ASan tries to own and monitor the lifetime of memory loads and stores.

If all of the DLLs that were compiled with ASan are unloaded from the process before the process ends (as is the case with test drivers such as [TAEF](/windows-hardware/drivers/taef/))), there may be crashes due to dangling references to intercepted functions such as `memcmp`, `memcpy`, `memmove`, and so on.

Please report any bugs to our [Developer Community](https://aka.ms/feedback/report?space=62).

## See also

[AddressSanitizer overview](asan.md)\
[AddressSanitizer build and language reference](asan-building.md)\
[AddressSanitizer runtime reference](asan-runtime.md)\
[AddressSanitizer shadow bytes](asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](asan-debugger-integration.md)\
[AddressSanitizer error examples](asan-error-examples.md)
