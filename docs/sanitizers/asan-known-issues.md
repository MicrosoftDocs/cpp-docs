---
title: "AddressSanitizer known issues"
description: "Technical description of the AddressSanitizer for Microsoft C/C++ known issues."
ms.date: 01/05/2021
helpviewer_keywords: ["AddressSanitizer known issues"]
---

# AddressSanitizer known issues

> [!NOTE] Send us [feedback](https://aka.ms/vsfeedback/browsecpp) on what you'd like to see in future releases, and [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.

## Incompatible options and functionality

These options and functionality are incompatible with [`/fsanitize=address`](../build/reference/fsanitize.md) and should be disabled or avoided.

- The [`/RTC`](../build/reference/rtc-run-time-error-checks.md) options are incompatible with AddressSanitizer and should be disabled.
- [Incremental linking](../build/reference/incremental-link-incrementally.md) is unsupported, and should be disabled.
- [Edit-and-Continue](/visualstudio/debugger/edit-and-continue-visual-cpp) is unsupported, and should be disabled.
- [Coroutines](https://devblogs.microsoft.com/cppblog/category/coroutine/) are incompatible with AddressSanitizer, and resumable functions are exempt from instrumentation.
- [OpenMP](../build/reference/openmp-enable-openmp-2-0-support.md) is unsupported, and should be disabled.
- [Managed C++](../build/reference/clr-common-language-runtime-compilation.md) is unsupported, and should be disabled.
- [C++ AMP](../parallel/amp/cpp-amp-overview.md) is unsupported, and should be disabled.
- [Special case list](https://clang.llvm.org/docs/SanitizerSpecialCaseList.html) files are unsupported.

## Standard library support

The MSVC standard library (STL) isn't enlightened to understand the AddressSanitizer. AddressSanitizer exceptions raised in STL code, while identifying true bugs, aren't as precise as they could be.

This example demonstrates the lack of precision:

```cpp
// Compile with: cl /fsanitize=address /Zi
#include <vector>

int main() {   
    // Create a vector of size 10, but with a capacity of 20.    
    std::vector<int> v(10);
    v.reserve(20);

    // Currently, MSVC ASan does NOT raise an exception here.
    // While this is an out-of-bounds write to 'v', MSVC ASan
    // ensures the write is within the heap allocation size (20)
    v[10] = 1;

    // MSVC ASan DOES raise an exception here, as this write
    // is out of bounds from the heap allocation.
    v[20] = 1;
}
```

## Windows versions

As there are dependencies with specific Windows versions, support is focused on Windows 10. MSVC AddressSanitizer was tested on 10.0.14393 (RS1), and 10.0.21323 (pre-release insider build). [Report a bug](https://aka.ms/feedback/report?space=62) if you run into issues.

## Memory usage

The AddressSanitizer runtime doesn't release memory back to the OS during execution. From the OS's point of view, it may look like there's a memory leak. This design decision is intentional, so as not to allocate all the required memory up front.

## `clang_rt.asan*.dll` files

The *`clang_rt.asan*.dll`* runtime files are installed next to the compilers in *`%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`*. These locations are on the path in debugging sessions, and in Visual Studio Developer Command Prompts. The files are never placed in *`C:\Windows\System32`* or *`C:\Windows\SysWOW64`*.

## See also

- [AddressSanitizer Overview](./asan.md)
- [AddressSanitizer Known Issues](./asan-known-issues.md)
- [AddressSanitizer Build and Language Reference](./asan-building.md)
- [AddressSanitizer Runtime Reference](./asan-runtime.md)
- [AddressSanitizer Shadow Bytes](./asan-shadowbytes.md)
- [AddressSanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [AddressSanitizer Debugger Integration](./asan-debugger-integration.md)
