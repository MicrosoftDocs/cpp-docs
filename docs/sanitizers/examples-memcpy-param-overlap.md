---
title: "memcpy parameter overlap."
description: "Source examples and live debug screenshots for memcpy parameter overlap errors."
ms.date: 02/05/2021
f1_keywords: ["memcpy-parameter-overlap"]
helpviewer_keywords: ["memcpy parameter overlap"]
---

# `memcpy` parameter overlap

The CRT function [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md) **doesn't support** overlapping memory. The CRT provides an alternative to `memcpy` that does support overlapping memory: [`memmove`](../c-runtime-library/reference/memmove-wmemmove.md).

A common error is to treat `memmove` as being semantically equivalent to `memcpy`.

Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
// example1.cpp
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

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/memcpy-param-overlap/example1.PNG)
