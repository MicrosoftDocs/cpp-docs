---
title: "Calloc() overflow."
description: "Source examples and live debug screen shots for calloc() overflow errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","calloc() overflow", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","calloc() overflow"]
---

# Calloc - overflow

The CRT function [calloc](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/calloc?view=msvc-160) will create an array in memory with elements initialized to 0. The arguments can create an internal error that will lead to a NULL pointer as the return value.

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

## Resulting error

![example1](SRC_CODE/calloc-overflow/example1.PNG)
