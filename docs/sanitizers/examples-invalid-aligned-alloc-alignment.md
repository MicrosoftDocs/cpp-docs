---
title: "Invalid _aligned_malloc"
description: "Source examples and live debug screenshots for invalid _aligned_malloc errors."
ms.date: 02/05/2021
f1_keywords: ["invalid-aligned-malloc"]
helpviewer_keywords: ["invalid-aligned-malloc"]
---

# Invalid `_aligned_malloc`

The [`_aligned_malloc`](../c-runtime-library/reference/aligned-malloc.md) function requires a power of 2 for expressing the alignment. We simulate the "external" calculation of some alignment factor using an unoptimized global variable. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
// example1.cpp
#include <Windows.h>

int ExternalAlign = 5;

int main(){

    // this externally calculated alignment of 5 isn't valid.

    void* ptr = _aligned_malloc(8,ExternalAlign); 
    return (ptr == nullptr && errno == EINVAL) ? 0 : -1;
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/invalid-aligned-alloc-alignment/example1.PNG)
