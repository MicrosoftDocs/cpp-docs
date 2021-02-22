---
title: "Invalid aligned_malloc()."
description: "Source examples and live debug screen shots for invalid aligned_malloc() errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","invalid-aligned-malloc", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","invalid-aligned-malloc"]
---

# Invalid aligned_malloc()

The [_aligned_malloc()](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/aligned-malloc?view=msvc-160) function requires a power of 2 for expressing the alignment. We simulate the "external" calculation of some alignment factor using an unoptimized global variable.

## Example

```cpp
#include <Windows.h>

int ExternalAlign = 5;

int main(){

    // this externally calculated alignment of 5 is not valid.

    void* ptr = _aligned_malloc(8,ExternalAlign); 
    return (ptr == nullptr && errno == EINVAL) ? 0 : -1;
}

```

## Resulting error

![example1](SRC_CODE/invalid-aligned-alloc-alignment/example1.PNG)
