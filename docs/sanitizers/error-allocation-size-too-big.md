---
title: "Error: allocation-size-too-big"
description: "Source examples and live debug screenshots for allocation-size-too-big errors."
ms.date: 03/02/2021
f1_keywords: ["allocation-size-too-big"]
helpviewer_keywords: ["allocation-size-too-big error", "AddressSanitizer error allocation-size-too-big"]
---

# Error: `allocation-size-too-big`

> Address Sanitizer Error: allocation-size-too-big

This example shows the error found when an allocation is too large for the heap. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
// example1.cpp
// allocation-size-too-big error
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

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/allocation-size-too-big-example-1.png" alt-text="Screenshot of debugger displaying allocation-size-too-big error in example 1.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
