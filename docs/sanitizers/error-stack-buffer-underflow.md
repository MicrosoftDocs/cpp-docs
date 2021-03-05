---
title: "Error: stack-buffer-underflow"
description: "Source examples and live debug screenshots for Stack buffer underflow errors."
ms.date: 03/02/2021
f1_keywords: ["stack-buffer-underflow"]
helpviewer_keywords: ["stack-buffer-underflow error", "AddressSanitizer error stack-buffer-underflow"]
---
# Error: `stack-buffer-underflow`

> Address Sanitizer Error: Stack buffer underflow

These error messages indicate a memory access to somewhere before the beginning of a stack variable.

## Example - local array underflow

```cpp
// example1.cpp
// stack-buffer-underflow error
#include <stdio.h>

int main() {

    int subscript = -1;
    char buffer[42];
    buffer[subscript] = 42; // Boom!
   
    return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/stack-buffer-underflow-example-1.png" alt-text="Screenshot of debugger displaying stack-buffer-underflow error in example 1.":::

## Example - stack underflow on thread

```cpp
// example2.cpp
// stack-buffer-underflow error
#include <windows.h>

DWORD WINAPI thread_proc(void *) {
    int subscript = -1;
    volatile char stack_buffer[42];
    stack_buffer[subscript] = 42;

    return 0;
}

int main() {
    HANDLE thr = CreateThread(NULL, 0, thread_proc, NULL, 0, NULL);

    if (thr == 0) return 0;

    WaitForSingleObject(thr, INFINITE);

    return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error  - stack underflow on thread

:::image type="content" source="media/stack-buffer-underflow-example-2.png" alt-text="Screenshot of debugger displaying stack-buffer-underflow error in example 2.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
