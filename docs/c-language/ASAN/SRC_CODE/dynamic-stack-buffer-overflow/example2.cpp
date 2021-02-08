
#include <malloc.h>

__declspec(noinline)

void foo(int index, int len) {

    volatile char *str = (volatile char *)_alloca(len);

    str[index] = '1';  // Boom!
}

int main(int argc, char **argv) {
  foo(-1, 10);
  return 0;
}
