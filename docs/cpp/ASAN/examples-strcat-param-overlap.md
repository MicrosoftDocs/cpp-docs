# Strcat - parameter overlap


## Example

```cpp

#include <string.h>

void bad_function() {

  char buffer[] = "hello\0XXX";

  strncat(buffer, buffer + 1, 3); // BOOM

  return;
}

int main(int argc, char **argv) {

  bad_function();
  return 0;
}

```

## Resulting error


![example1](.\SRC_CODE\strcat-param-overlap\example1.PNG)
