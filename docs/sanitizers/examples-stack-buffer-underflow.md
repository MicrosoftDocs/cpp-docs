---
title: "Stack buffer underflow."
description: "Source examples and live debug screenshots for Stack buffer underflow errors."
ms.date: 02/05/2021
f1_keywords: ["stack-buffer-underflow"]
helpviewer_keywords: ["Stack buffer underflow"]
---

# Stack buffer underflow

Examples sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example - local array underflow

```cpp
// example1.cpp
#include <stdio.h>

int main() {

  int subscript = -1;
  char buffer[42];
  buffer[subscript] = 42; // Boom!
   
  return 0;
}
```

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example1.cpp /fsanitize=address /Zi
devenv /debugexe example1.exe
```

### Resulting error

![Screenshot of debugger displaying error in example1](media/stack-buffer-underflow-example1.png)

## Example - stack underflow on thread

```cpp
// example2.cpp
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

To build and test this example, run these commands in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error  - stack underflow on thread

![Screenshot of debugger displaying error in example2](media/stack-buffer-underflow-example2.png)
