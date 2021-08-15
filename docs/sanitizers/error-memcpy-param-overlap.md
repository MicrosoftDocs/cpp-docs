---
title: "Error: memcpy-param-overlap"
description: "Source examples and live debug screenshots for memcpy parameter overlap errors."
ms.date: 03/02/2021
f1_keywords: ["memcpy-param-overlap"]
helpviewer_keywords: ["memcpy-param-overlap error", "AddressSanitizer error memcpy-param-overlap"]
---
# Error: `memcpy-param-overlap`

> Address Sanitizer Error: memcpy-param-overlap

The CRT function [`memcpy`](../c-runtime-library/reference/memcpy-wmemcpy.md) **doesn't support** overlapping memory. The CRT provides an alternative to `memcpy` that does support overlapping memory: [`memmove`](../c-runtime-library/reference/memmove-wmemmove.md).

A common error is to treat `memmove` as being semantically equivalent to `memcpy`.

## Example

```cpp
// example1.cpp
// memcpy-param-overlap error
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

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/memcpy-param-overlap-example-1.png" alt-text="Screenshot of debugger displaying memcpy-param-overlap error in example 1.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
