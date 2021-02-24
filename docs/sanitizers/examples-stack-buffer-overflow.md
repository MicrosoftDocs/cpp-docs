---
title: "Stack buffer overflow."
description: "Source examples and live debug screen shots for Stack buffer overflow errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","AddressSanitizer","Address Sanitizer","memory safety","Stack buffer overflow", "ASan examples"]
help viewer_keywords: ["ASan","AddressSanitizer","Address Sanitizer","ASan examples","Stack buffer overflow"]
---

# Stack buffer overflow

The stack buffer overflow happen many ways in C or C++. We provide several examples for this category of error caught with a simple recompile. Examples sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example - stack buffer overflow

```cpp
#include <string.h>
int main(int argc, char **argv) {
    char x[10];
    memset(x, 0, 10);
    int res = x[argc * 10];  // Boom! Classic stack buffer overflow

    return res;
}
```

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/stack-buffer-overflow/Example1.PNG)

## Example - Stack buffer math

```cpp
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

From a **Developer Command Prompt**:
```
 cl example2.cpp /fsanitize=address /Zi
 devenv /debugexe example2.exe 9
```

## Resulting error - Stack buffer math

![example2](SRC_CODE/stack-buffer-overflow/Example2.PNG)

## Example - improper down cast on stack

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

  Parent p;
  Child *c = (Child*)&p;  // Boom !
  c->extra_field = 42;

  return 0;
}

```

From a **Developer Command Prompt**:
```
 cl example3.cpp /fsanitize=address /Zi
 devenv /debugexe example3.exe
```

## Resulting error - improper down cast on stack

![example3](SRC_CODE/stack-buffer-overflow/example3.PNG)
