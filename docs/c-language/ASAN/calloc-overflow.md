# calloc - overflow

The CRT function `calloc()` will allocate an array in memory with elements initialized to 0. The arguments can be calculated externally to create an impossible internal error that will lead to a NULL pointer.

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

![example1](.\SRC_CODE\calloc-overflow\example1.PNG)

