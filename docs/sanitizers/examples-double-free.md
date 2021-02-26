---
title: "Double free error"
description: "Source examples and live debug screenshots for double free errors."
ms.date: 02/05/2021
f1_keywords: ["double-free"]
helpviewer_keywords: ["double free"]
---

# Double free error

In `C`, you can call `free` erroneously. In `C++`, you can call `delete` more than once. In these examples, we show errors with `delete`, `free`, and `HeapCreate`. Example sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example C++ - double operator delete

```cpp
// example1.cpp
int main() {

    int *x = new int[42];
    delete [] x;

    // ... some complex body of code

    delete [] x;
    return 0;
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error - double operator delete

![Screenshot of debugger displaying error in example1](media/double-free-example1.png)

## Example 'C' - double fre()

```cpp
// example2.cpp
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

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error - double free()

![Screenshot of debugger displaying error in example2](media/double-free-example2.png)

## Example - Windows HeapCreate() double free

```cpp
// example3.cpp
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

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### Resulting error - Windows HeapCreate() double free

![Screenshot of debugger displaying error in example3](media/double-free-example3.png)
