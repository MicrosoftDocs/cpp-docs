---
title: "Error: use-after-poison"
description: "Source examples and live debug screenshots for use after poison errors."
ms.date: 03/02/2021
f1_keywords: ["use-after-poison"]
helpviewer_keywords: ["use-after-poison error", "AddressSanitizer error use-after-poison"]
---
# Error: `use-after-poison`

> Address Sanitizer Error: Use of poisoned memory

A developer can manually poison memory to customize debugging.

## Example

```cpp
// example1.cpp
// use-after-poison error
#include <stdlib.h>

extern "C" void __asan_poison_memory_region(void *, size_t);

int main(int argc, char **argv) {
    char *x = new char[16];
    x[10] = 0;
    __asan_poison_memory_region(x, 16);

    int res = x[argc * 10];              // Boom!
 
    delete [] x;
    return res;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/use-after-poison-example-1.png" alt-text="Screenshot of debugger displaying use-after-poison error in example 1.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
