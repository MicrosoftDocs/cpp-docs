---
title: "Alloc-dealloc mismatch"
description: "Source examples and live debug screenshots for alloc-dealloc-mismatch errors."
ms.date: 02/05/2021
f1_keywords: ["alloc-dealloc-mismatch"]
helpviewer_keywords: ["alloc-dealloc-mismatch"]
---

# Alloc-dealloc mismatch

This functionality is off by default for Windows. To enable it, run `set ASAN_OPTIONS=alloc_dealloc_mismatch=1` before running the program. This environment variable is checked at runtime to report errors on `malloc`/`delete`, `new`/`free`, and `new`/`delete[]`. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
// example1.cpp
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc != 2) return -1;

    switch (atoi(argv[1])) {

    case 1:
        delete[](new int[10]);
        break;
    case 2:
        delete (new int[10]);      // Boom!
        break;
    default:
        printf("arguments: 1: no error 2: runtime error\n");
        return -1;
    }

    return 0;
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
set ASAN_OPTIONS=alloc_dealloc_mismatch=1
devenv /debugexe example1.exe 2
```

## Resulting error

![example1](SRC_CODE/alloc-dealloc-mismatch/example1.PNG)
