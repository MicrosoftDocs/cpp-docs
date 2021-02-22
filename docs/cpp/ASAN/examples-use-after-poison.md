---
title: "Use after poison."
description: "Source examples and live debug screen shots for use after poison errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","Use after poison", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","Use after poison"]
---

# Use after poison

A developer can manually poison memory to customize debugging.

## Example

```cpp
#include <stdlib.h>

extern "C" void __asan_poison_memory_region(void *, size_t);

int main(int argc, char **argv) {
  char *x = new char[16];
  x[10] = 0;
  __asan_poison_memory_region(x, 16);

  int res = x[argc * 10];              // Boom!
 
  delete [] x;
  return res;
}
```

## Resulting error

![example1](SRC_CODE/use-after-poison/example1.PNG)
