---
title: "Error: calloc-overflow"
description: "Source examples and live debug screenshots for calloc overflow errors."
ms.date: 03/02/2021
f1_keywords: ["calloc-overflow"]
helpviewer_keywords: ["calloc-overflow error", "AddressSanitizer error calloc-overflow"]
---
# Error: `calloc-overflow`

> Address Sanitizer Error: calloc-overflow

The CRT function [`calloc`](../c-runtime-library/reference/calloc.md) creates an array in memory with elements initialized to 0. The arguments can create an internal error that leads to a NULL pointer as the return value.

## Example

```cpp
// example1.cpp
// calloc-overflow error
#include <stdio.h>
#include <stdlib.h>

int number = -1;
int element_size = 1000;

int main() {

    void *p = calloc(number, element_size);      // Boom!

    printf("calloc returned: %zu\n", (size_t)p);

    return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/calloc-overflow-example-1.png" alt-text="Screenshot of debugger displaying calloc-overflow error in example 1.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
