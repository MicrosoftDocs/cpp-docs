---
title: "Error: stack-buffer-overflow"
description: "Source examples and live debug screenshots for Stack buffer overflow errors."
ms.date: 09/29/2021
f1_keywords: ["stack-buffer-overflow"]
helpviewer_keywords: ["stack-buffer-overflow error", "AddressSanitizer error stack-buffer-overflow"]
---
# Error: `stack-buffer-overflow`

> Address Sanitizer Error: Stack buffer overflow

A stack buffer overflow can happen many ways in C or C++. We provide several examples for this category of error that you can catch by a simple recompile.

## Example - stack buffer overflow

```cpp
// example1.cpp
// stack-buffer-overflow error
#include <string.h>

int main(int argc, char **argv) {
    char x[10];
    memset(x, 0, 10);
    int res = x[argc * 10];  // Boom! Classic stack buffer overflow

    return res;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/stack-buffer-overflow-example-1.png" alt-text="Screenshot of debugger displaying stack-buffer-overflow error in example 1.":::

## Example - Stack buffer math

```cpp
// example2.cpp
// stack-buffer-overflow error
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
    assert(argc >= 2);
    int idx = atoi(argv[1]);
    char AAA[10], BBB[10], CCC[10];
    memset(AAA, 0, sizeof(AAA));
    memset(BBB, 0, sizeof(BBB));
    memset(CCC, 0, sizeof(CCC));
    int res = 0;
    char *p = AAA + idx;
    printf("AAA: %p\ny: %p\nz: %p\np: %p\n", AAA, BBB, CCC, p);

    return *(short*)(p) + BBB[argc % 2] + CCC[argc % 2];  // Boom! ... when argument is 9
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe 9
```

### Resulting error - Stack buffer math

:::image type="content" source="media/stack-buffer-overflow-example-2.png" alt-text="Screenshot of debugger displaying stack-buffer-overflow error in example 2.":::

## Example - improper down cast on stack

```cpp
// example3.cpp
// stack-buffer-overflow error
class Parent {
public:
    int field;
};

class Child : public Parent {
public:
    int extra_field;
};

int main(void) {

    Parent p;
    Child *c = (Child*)&p;
    c->extra_field = 42;  // Boom !

    return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### Resulting error - improper down cast on stack

:::image type="content" source="media/stack-buffer-overflow-example-3.png" alt-text="Screenshot of debugger displaying stack-buffer-overflow error in example 3.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
