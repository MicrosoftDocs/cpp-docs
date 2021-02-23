---
title: "Memcpy() parameter overlap."
description: "Source examples and live debug screen shots for Memcpy() parameter overlap errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","Memcpy() parameter overlap", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","Memcpy() parameter overlap"]
---

# Memcpy() parameter overlap

The CRT function [memcpy](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/memcpy-wmemcpy?view=msvc-160) **does not** support overlapping memory. The CRT provides an alternative to memcpy() that does support overlapping memory: [memmove](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/memmove-wmemmove?view=msvc-160).

A common error is to treat `memmove()` as being semantically equivalent to `memcpy()`.

Sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
#include "defines.h"
#include <string.h>

__declspec(noinline) void bad_function() {
    char buffer[] = "hello";

    memcpy(buffer, buffer + 1, 5); // BOOM!
}

int main(int argc, char **argv) {
    bad_function();
    return 0;
}
```

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/memcpy-param-overlap/example1.PNG)
