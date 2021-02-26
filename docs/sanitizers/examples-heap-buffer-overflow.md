---
title: "Heap buffer overflow."
description: "Source examples and live debug screenshots for heap variable overflow errors."
ms.date: 02/05/2021
f1_keywords: ["heap-buffer-overflow"]
helpviewer_keywords: ["heap-buffer-overflow"]
---

# Heap buffer overflow

This example demonstrates the error that results when a memory access occurs outside the bounds of a heap-allocated object. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example - classic heap buffer overflow

```cpp
// example1.cpp
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    char *x = (char*)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[argc * 10];  // Boom!

    free(x);
    return res;
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

![Screenshot of debugger displaying error in example1](media/heap-buffer-overflow-example1.png)

## Example - improper down cast

```cpp
// example2.cpp

class Parent {
public:
    int field;
};

class Child : public Parent {
public:
    int extra_field;
};

int main(void) {
    Parent *p = new Parent;
    Child *c = (Child*)p;  // Intentional error here!
    c->extra_field = 42;

    return 0;
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error - improper down cast

![Screenshot of debugger displaying error in example2](media/heap-buffer-overflow-example2.png)

## Example - strncpy into heap

```cpp
// example3.cpp
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    char *hello = (char*)malloc(6);
    strcpy(hello, "hello");

    char *short_buffer = (char*)malloc(9);
    strncpy(short_buffer, hello, 10);  // Boom!

    return short_buffer[8];
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### Resulting error - strncpy into heap

![Screenshot of debugger displaying error in example3](media/heap-buffer-overflow-example3.png)
