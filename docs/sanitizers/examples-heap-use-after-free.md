---
title: "Heap use after free."
description: "Source examples and live debug screen shots for heap use after free errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","AddressSanitizer","Address Sanitizer","memory safety","heap-use-after-free", "ASan examples"]
help viewer_keywords: ["ASan","AddressSanitizer","Address Sanitizer","ASan examples","heap-use-after-free"]
---

# Heap use after free

We show three examples where storage in the heap can be allocated via malloc, realloc (C) and new (C++) along with a mistaken use of volatile. Sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example malloc

```cpp
#include <stdlib.h>

int main() {
  char *x = (char*)malloc(10 * sizeof(char));
  free(x);

  // ...

  return x[5];   // Boom!
}
```

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/heap-use-after-free/example1.PNG)

## Example - operator new

```cpp
#include <windows.h>

int main() {
  char *buffer = new char[42];
  delete [] buffer;

  // ...

  buffer[0] = 42;  // Boom!
  return 0;
}
```

From a **Developer Command Prompt**:
```
 cl example2.cpp /fsanitize=address /Zi
 devenv /debugexe example2.exe
```
## Resulting error - operator new

![example2](SRC_CODE/heap-use-after-free/example2.PNG)

## Example - realloc

```cpp
#include <malloc.h>

int main() {
  char *buffer = (char*)realloc(0, 42);
  free(buffer);

  // ...

  buffer[0] = 42;  // Boom!
  return 0;
}
```

From a **Developer Command Prompt**:
```
 cl example3.cpp /fsanitize=address /Zi
 devenv /debugexe example3.exe
```

## Resulting error - realloc

![example3](SRC_CODE/heap-use-after-free/example3.PNG)

## Example - volatile

```cpp
#include <stdlib.h>

int main() {

  volatile char *x = (char*)malloc(sizeof(char));
  free((void*)x);

      //...

  *x = 42;        // Boom!
}
```

From a **Developer Command Prompt**:
```
 cl example4.cpp /fsanitize=address /Zi
 devenv /debugexe example4.exe
```

## Resulting error - volatile

![example4](SRC_CODE/heap-use-after-free/example4.PNG)
