---
title: "Error: heap-use-after-free"
description: "Source examples and live debug screenshots for heap use after free errors."
ms.date: 03/02/2021
f1_keywords: ["heap-use-after-free"]
helpviewer_keywords: ["heap-use-after-free error", "AddressSanitizer error heap-use-after-free"]
---
# Error: `heap-use-after-free`

> Address Sanitizer Error: Use of deallocated memory

We show three examples where storage in the heap can be allocated via `malloc`, `realloc` (C), and `new` (C++), along with a mistaken use of `volatile`. Examples sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example - `malloc`

```cpp
// example1.cpp
// heap-use-after-free error
#include <stdlib.h>

int main() {
  char *x = (char*)malloc(10 * sizeof(char));
  free(x);

  // ...

  return x[5];   // Boom!
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

:::image type="content" source="media/heap-use-after-free-example-1.png" alt-text="Screenshot of debugger displaying heap-use-after-free error in example 1.":::

## Example - `operator new`

```cpp
// example2.cpp
// heap-use-after-free error
#include <windows.h>

int main() {
  char *buffer = new char[42];
  delete [] buffer;

  // ...

  buffer[0] = 42;  // Boom!
  return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error - operator new

:::image type="content" source="media/heap-use-after-free-example-2.png" alt-text="Screenshot of debugger displaying heap-use-after-free error in example 2.":::

## Example - `realloc`

```cpp
// example3.cpp
// heap-use-after-free error
#include <malloc.h>

int main() {
  char *buffer = (char*)realloc(0, 42);
  free(buffer);

  // ...

  buffer[0] = 42;  // Boom!
  return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe
```

### Resulting error - realloc

:::image type="content" source="media/heap-use-after-free-example-3.png" alt-text="Screenshot of debugger displaying heap-use-after-free error in example 3.":::

## Example - volatile

```cpp
// example4.cpp
// heap-use-after-free error
#include <stdlib.h>

int main() {

  volatile char *x = (char*)malloc(sizeof(char));
  free((void*)x);

      //...

  *x = 42;        // Boom!
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example4.cpp /fsanitize=address /Zi
devenv /debugexe example4.exe
```

### Resulting error - volatile

:::image type="content" source="media/heap-use-after-free-example-4.png" alt-text="Screenshot of debugger displaying error in example 4.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
