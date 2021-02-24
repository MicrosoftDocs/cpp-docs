---
title: "Calloc() overflow."
description: "Source examples and live debug screen shots for calloc() overflow errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","AddressSanitizer","Address Sanitizer","memory safety","calloc() overflow", "ASan examples"]
help viewer_keywords: ["ASan","AddressSanitizer","Address Sanitizer","ASan examples","calloc() overflow"]
---

# Calloc - overflow

The CRT function [calloc](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/calloc?view=msvc-160) will create an array in memory with elements initialized to 0. The arguments can create an internal error that will lead to a NULL pointer as the return value. Sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example

```cpp
#include <stdio.h>
#include <stdlib.h>

int number = -1;
int element_size = 1000;

int main() {

  void *p = calloc(number, element_size);      // Boom!

  printf("calloc returned: %zu\n", (size_t)p);

  return 0;
}

```

From a **Developer Command Prompt**:
```
 cl example1.cpp /fsanitize=address /Zi
 devenv /debugexe example1.exe
```

## Resulting error

![example1](SRC_CODE/calloc-overflow/example1.PNG)
