---
title: "Error: double-free"
description: "Source examples and live debug screenshots for double free errors."
ms.date: 03/02/2021
f1_keywords: ["double-free"]
helpviewer_keywords: ["double-free error", "AddressSanitizer error double-free"]
---

# Error: `double-free`

> Address Sanitizer Error: Deallocation of freed memory

In C, you can call `free` erroneously. In C++, you can call `delete` more than once. In these examples, we show errors with `delete`, `free`, and `HeapCreate`.

## Example C++ - double `operator delete`

```cpp
// example1.cpp
// double-free error
int main() {

    int *x = new int[42];
    delete [] x;

    // ... some complex body of code

    delete [] x;
    return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error - double `operator delete`

:::image type="content" source="media/double-free-example-1.png" alt-text="Screenshot of debugger displaying double-free error in example 1.":::

## Example 'C' - double `free`

```cpp
// example2.cpp
// double-free error
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

    char* x = (char*)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[argc];
    free(x);

    // ... some complex body of code

    free(x + argc - 1);  // Boom!
    return res;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error - double `free`

:::image type="content" source="media/double-free-example-2.png" alt-text="Screenshot of debugger displaying double-free error in example 2.":::

## Example - Windows `HeapCreate` double `HeapFree`

```cpp
// example3.cpp
// double-free error
#include <Windows.h>
#include <stdio.h>

int main() {
    void* newHeap = HeapCreate(0, 0, 0);
    void* newAlloc = HeapAlloc(newHeap, 0, 100);

    HeapFree(newHeap, 0, newAlloc);
    HeapFree(newHeap, 0, newAlloc);
    printf("failure\n");
    return 1;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### Resulting error - Windows `HeapCreate` double `HeapFree`

:::image type="content" source="media/double-free-example-3.png" alt-text="Screenshot of debugger displaying double-free error in example 3.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
