---
title: "Address Sanitizer Known Issues"
description: "Technical description of the AddressSanitizer for Microsoft Visual C++ known issues."
ms.date: 01/05/2021
f1_keywords: ["ASan","sanitizers","AddressSanitizer"]
helpviewer_keywords: ["ASan","sanitizers","AddressSanitizer"]
---

# Address Sanitizer Known Issues

> [!NOTE] Please [send us feedback](https://aka.ms/feedback/suggest?space=62) on what you would like to see in future releases, and Please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.

## Incompatible switches and functionality

The following switches and functionality are not currently compatible with `-fsanitize=address` and should be disabled or avoided.

- The [/RTC](https://docs.microsoft.com/en-us/cpp/build/reference/rtc-run-time-error-checks?view=msvc-160) family of switches are incompatible with Address Sanitizer and should be disabled.
- [Incremental Linking](https://docs.microsoft.com/en-us/cpp/build/reference/incremental-link-incrementally?view=msvc-160) is not currently supported, and should be disabled.
- [Edit-and-Continue](https://docs.microsoft.com/en-us/visualstudio/debugger/edit-and-continue-visual-cpp?view=vs-2019) is not currently supported, and should be disabled.
- [Coroutines](https://devblogs.microsoft.com/cppblog/category/coroutine/) are not compatible with Address Sanitizer, and resumable functions are exempt from instrumentation.
- [Open MP](https://docs.microsoft.com/en-us/cpp/build/reference/openmp-enable-openmp-2-0-support?view=msvc-160)is not currently supported, and should be disabled.
- [Managed C++](https://docs.microsoft.com/en-us/cpp/build/reference/clr-common-language-runtime-compilation?view=msvc-160) is not currently supported, and should be disabled. 
- [C++ AMP](https://docs.microsoft.com/en-us/cpp/parallel/amp/cpp-amp-overview?view=msvc-160) is not currently supported, and should be disabled.
- [Special Case List](https://clang.llvm.org/docs/SanitizerSpecialCaseList.html) files are not supported.

## STL enlightenment

The MSVC standard library (STL) is not currently enlightened to understand the Address Sanitizer, so ASan exceptions raised in STL code, while identifying true bugs, are not as precise as they could be.

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

## Memory usage

The Address Sanitizer runtime does not release memory back to the OS during execution. From the OS point of view it may look like memory is being leaked, but this is an intentional design decision to not allocate all the required memory up front. 

## clang_rt.asan*.dll files

The clang_rt.asan*.dll runtime files are dropped next to the compilers in `%VSINSTALLDIR%\VC\Tools\MSVC\<version>\bin\<host-arch>\<target-arch>\`. These locations are on the path in debugging sessions, as well as from Visual Studio Developer Command Prompts. The files are _not_ dropped in `C:\Windows\System32` or `C:\Windows\SysWOW64`.

> [!NOTE] Please [send us feedback](https://aka.ms/feedback/suggest?space=62) on what you would like to see in future releases, and Please [report bugs](https://aka.ms/feedback/report?space=62) if you run into issues.

## See also

- [Address Sanitizer Overview](./asan.md)
- [Address Sanitizer Known Issues](./asan-known-issues.md)
- [Address Sanitizer Build and Language Reference](./asan-building.md)
- [Address Sanitizer Runtime Reference](./asan-runtime.md)
- [Address Sanitizer Shadow Bytes](./asan-shadowbytes.md)
- [Address Sanitizer Cloud or Distributed Testing](./asan-offline-crash-dumps.md)
- [Address Sanitizer Debugger Integration](./asan-debugger-integration.md)