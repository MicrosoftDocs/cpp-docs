---
title: "Allocation-size-too-big error."
description: "Source examples and live debug screenshots for allocation-size-too-big errors."
ms.date: 02/05/2021
f1_keywords: ["allocation-size-too-big"]
helpviewer_keywords: ["allocation size too big"]
---

# Allocation-size-too-big error

This example shows the error found when an allocation is too large for the heap. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
// example1.cpp
#include <stdio.h>
#include <malloc.h>
#include <memory.h>

int x = 1000;
int y = 1000;

__declspec(noinline) void bad_function() {

  char* buffer = (char*)malloc(x * y * x * y); //Boom!

  memcpy(buffer, buffer + 8, 8); 
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

![example1](SRC_CODE/allocation-size-too-big/example1.PNG)
