---
title: "AddressSanitizer Known Issues"
description: "Technical description of the AddressSanitizer for Microsoft Visual C++ known issues."
ms.date: 01/05/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer","Address Sanitizer"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer","Address Sanitizer"]
---

# AddressSanitizer Known Issues

> [!NOTE] Send us [feedback](https://aka.ms/vsfeedback/browsecpp) on what you would like to see in future releases, and please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.

## Incompatible switches and functionality

The following switches and functionality are not currently compatible with `-fsanitize=address` and should be disabled or avoided.

- The [/RTC](../build/reference/rtc-run-time-error-checks?view=msvc-160) family of switches are incompatible with AddressSanitizer and should be disabled.
- [Incremental Linking](../build/reference/incremental-link-incrementally?view=msvc-160) is not currently supported, and should be disabled.
- [Edit-and-Continue](/visualstudio/debugger/edit-and-continue-visual-cpp?view=vs-2019) is not currently supported, and should be disabled.
- [Coroutines](https://devblogs.microsoft.com/cppblog/category/coroutine/) are not compatible with AddressSanitizer, and resumable functions are exempt from instrumentation.
- [Open MP](../build/reference/openmp-enable-openmp-2-0-support?view=msvc-160)is not currently supported, and should be disabled.
- [Managed C++](../build/reference/clr-common-language-runtime-compilation?view=msvc-160) is not currently supported, and should be disabled. 
- [C++ AMP](../parallel/amp/cpp-amp-overview?view=msvc-160) is not currently supported, and should be disabled.
- [Special Case List](https://clang.llvm.org/docs/SanitizerSpecialCaseList.html) files are not supported.

## STL enlightenment

The MSVC standard library (STL) is not currently enlightened to understand the AddressSanitizer. ASan exceptions raised in STL code, while identifying true bugs, are not as precise as they could be.

The following example demonstrates this. Compile with `cl -fsanitize=address /Zi`

```cpp
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

As there are deep tie-ins with specific Windows versions, support is focused on Windows 10. MSVC AddressSanitizer was tested this on 10.0.14393 (RS1), and 10.0.21323 (pre-release insider build). Please [report a bug](https://aka.ms/feedback/report?space=62) if you run into issues.

## Memory usage

The AddressSanitizer runtime does not release memory back to the OS during execution. From the OS point of view it may look like memory is being leaked, but this is an intentional design decision to not allocate all the required memory up front. 

## clang_rt.asan*.dll files

The clang_rt.asan*.dll runtime files are dropped next to the compilers in `%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`. These locations are on the path in debugging sessions, as well as from Visual Studio Developer Command Prompts. The files are _not_ dropped in `C:\Windows\System32` or `C:\Windows\SysWOW64`.

## See also

- [AddressSanitizer Overview](./asan.md)
- [AddressSanitizer Known Issues](./asan-known-issues.md)
- [AddressSanitizer Build and Language Reference](./asan-building.md)
- [AddressSanitizer Runtime Reference](./asan-runtime.md)
- [AddressSanitizer Shadow Bytes](./asan-shadowbytes.md)
- [AddressSanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [AddressSanitizer Debugger Integration](./asan-debugger-integration.md)

> [!NOTE] Send us [feedback](https://aka.ms/vsfeedback/browsecpp) on what you would like to see in future releases, and please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.