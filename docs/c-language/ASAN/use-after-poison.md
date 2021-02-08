# Use after poison

A developer can manually poison memory and produce the following error. You might want to compile without -fsanitize=address and manually link the runtime libraries to facilitate a custom debugging process.

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

![example1](.\SRC_CODE\use-after-poison\example1.PNG)
