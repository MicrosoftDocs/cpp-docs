---
title: "Heap buffer overflow."
description: "Source examples and live debug screen shots for heap variable overflow errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","heap-buffer-overflow", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","heap-buffer-overflow"]
---

# Heap buffer overflow

Examples sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example - classic heap buffer overflow

```cpp
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

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/heap-buffer-overflow/example1.PNG)

## Example - improper down cast

```cpp
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
  Child *c = (Child*)p;  // Boom! 
  c->extra_field = 42;

  return 0;
}
```

From a **Developer Command Prompt**:
```
 cl example2.cpp /fsanitize=address /Zi
 devenv /debugexe example2.exe
```

## Resulting error - improper down cast

![example2](SRC_CODE/heap-buffer-overflow/example2.PNG)

## Example - strncpy into heap

```cpp
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

From a **Developer Command Prompt**:
```
 cl example3.cpp /fsanitize=address /Zi
 devenv /debugexe example3.exe
```

## Resulting error - strncpy into heap

![example3](SRC_CODE/heap-buffer-overflow/example3.PNG)
