---
title: "Error: invalid-allocation-alignment"
description: "Source examples and live debug screenshots for invalid _aligned_malloc errors."
ms.date: 03/02/2021
f1_keywords: ["invalid-allocation-alignment"]
helpviewer_keywords: ["invalid-allocation-alignment error", "AddressSanitizer error invalid-allocation-alignment"]
---
# Error: `invalid-allocation-alignment`

> Address Sanitizer Error: invalid-allocation-alignment

The [`_aligned_malloc`](../c-runtime-library/reference/aligned-malloc.md) function requires a power of 2 for expressing the alignment. We simulate the "external" calculation of some alignment factor using an unoptimized global variable.

## Example

```cpp
// example1.cpp
// invalid-allocation-alignment error
#include <Windows.h>

int ExternalAlign = 5;

int main(){

    // this externally calculated alignment of 5 isn't valid.

    void* ptr = _aligned_malloc(8,ExternalAlign); 
    return (ptr == nullptr && errno == EINVAL) ? 0 : -1;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/invalid-allocation-alignment-example-1.png" alt-text="Screenshot of debugger displaying invalid-allocation-alignment error in example 1.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
