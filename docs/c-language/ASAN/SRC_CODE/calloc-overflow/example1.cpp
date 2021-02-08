#include <stdio.h>
#include <stdlib.h>

int number = -1;
int element_size = 1000;

int main() {

  void *p = calloc(number, element_size);      // Boom!

  printf("calloc returned: %zu\n", (size_t)p);

  return 0;
}
