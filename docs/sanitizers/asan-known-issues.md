---
title: "AddressSanitizer known issues"
description: "Technical description of the AddressSanitizer for Microsoft C/C++ known issues."
ms.date: 04/15/2022
helpviewer_keywords: ["AddressSanitizer known issues"]
---

# AddressSanitizer known issues

> [!NOTE]
> Send us [feedback](https://aka.ms/vsfeedback/browsecpp) on what you'd like to see in future releases, and [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.

## <a name="incompatible-options"></a> Incompatible options and functionality

These options and functionality are incompatible with [`/fsanitize=address`](../build/reference/fsanitize.md) and should be disabled or avoided.

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

The MSVC standard library (STL) is partially enlightened to understand the AddressSanitizer and provide additional checks. For more information, see [container-overflow error](./error-container-overflow.md).

When annotations are disabled or in versions without support, AddressSanitizer exceptions raised in STL code do still identify true bugs. However, they aren't as precise as they could be.

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

## Windows versions

As there are dependencies with specific Windows versions, support is focused on Windows 10. MSVC AddressSanitizer was tested on 10.0.14393 (RS1), and 10.0.21323 (pre-release insider build). [Report a bug](https://aka.ms/feedback/report?space=62) if you run into issues.

## Memory usage

The AddressSanitizer runtime doesn't release memory back to the OS during execution. From the OS's point of view, it may look like there's a memory leak. This design decision is intentional, so as not to allocate all the required memory up front.

## AddressSanitizer runtime DLL locations

The *`clang_rt.asan*.dll`* runtime files are installed next to the compilers in *`%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`*. These locations are on the path in debugging sessions, and in Visual Studio developer command prompts. These files are never placed in *`C:\Windows\System32`* or *`C:\Windows\SysWOW64`*.

## Custom property sheet support

The Property Manager window in the Visual Studio IDE allows you to add custom *`.props`* files to your projects. Even though the **Enable Address Sanitizer** property (`<EnableASAN>`) is shown, it's not honored by the build. That's because the custom *`.props`* files get included after *`Microsoft.cpp.props`*, which uses the `<EnableASAN>` value to set other properties.

As a workaround, you can create a *`Directory.Build.props`* file in the root of your project to define the `<EnableASAN>` property. For more information, see [Customize C++ builds](/visualstudio/msbuild/customize-your-build#customize-c-builds).

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
