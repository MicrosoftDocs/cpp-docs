# Allocation size too big

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

![example1](.\SRC_CODE\allocation-size-too-big\example1.PNG)