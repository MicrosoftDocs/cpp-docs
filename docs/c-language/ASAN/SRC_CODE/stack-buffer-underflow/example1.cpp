#include <stdio.h>

int main() {

  int subscript = -1;
  char buffer[42];
  buffer[subscript] = 42; // Boom!
   
  return 0;
}

