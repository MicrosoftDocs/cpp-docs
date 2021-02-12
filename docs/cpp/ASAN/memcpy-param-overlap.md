# Memcpy - parameter overlap

The CRT function `memcpy()` doesn't support overlapping memory. This allows for optimizations that won't work if the buffers do overlap. There's not much to really look into, however, because C provides an alternative that does support overlapping memory: `memmove()`. 

A common error is to treat `memmove()` as being semantically equivalent to `memcpy()`.

## Example

```cpp
#include "defines.h"
#include <string.h>

__declspec(noinline) void bad_function() {
    char buffer[] = "hello";

    memcpy(buffer, buffer + 1, 5); // BOOM!
}

int main(int argc, char **argv) {
    bad_function();
    return 0;
}
```

## Resulting error

![example1](.\SRC_CODE\memcpy-param-overlap\example1.PNG)

