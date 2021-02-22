---
title: "Allocation-size-too-big error."
description: "Source examples and live debug screenshots for allocation-size-too-big errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","allocation too big", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","allocation too big"]
---

# Allocation-size-too-big error

## Example

```cpp
#include <stdio.h>
#include <malloc.h>

int x = 1000;
int y = 1000;

__declspec(noinline) void bad_function() {

  char* buffer = (char*)malloc((x * y * x * y); //Boom!

  memcpy(buffer, buffer + 8, 8); 
}

int main(int argc, char **argv) {
    bad_function();
    return 0;
}
```

## Resulting error

![example1](SRC_CODE/allocation-size-too-big/example1.PNG)
