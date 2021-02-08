# Invalid aligned_malloc()

The `_aligned_malloc()` function requires a power of 2 for expressing the alignment. We simulate the "external" calculation of some alignment factor using an un-optimized global variable.

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

![example1](.\SRC_CODE\invalid-aligned-alloc-alignment\example1.PNG)