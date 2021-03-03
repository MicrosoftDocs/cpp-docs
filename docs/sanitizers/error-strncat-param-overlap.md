---
title: "Error: strncat-param-overlap"
description: "Source examples and live debug screenshots for strcat parameter overlap errors."
ms.date: 03/02/2021
f1_keywords: ["strncat-param-overlap"]
helpviewer_keywords: ["strncat-param-overlap error", "AddressSanitizer error strcat-param-overlap"]
---
# Error: `strncat-param-overlap`

> Address Sanitizer Error: strncat-param-overlap

This example shows how AddressSanitizer can catch errors caused by overlapped parameters to CRT functions. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
// example1.cpp
// strncat-param-overlap error
#include <string.h>

void bad_function() {

    char buffer[] = "hello\0XXX";

    strncat(buffer, buffer + 1, 3); // BOOM

    return;
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

![Screenshot of debugger displaying strncat-param-overlap error in example 1.](media/strcat-param-overlap-example-1.png)

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
