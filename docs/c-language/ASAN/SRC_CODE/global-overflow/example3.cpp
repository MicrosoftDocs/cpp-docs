// Run 4 different ways with the choice of one of these flags:
//
// -g : Global
// -c : File static
// -f : Function static
// -l : String literal

#include <string.h>

struct C {
  static int array[10];
};

// normal global
int global[10];

// class static
int C::array[10];

int main(int argc, char **argv) {

  int one = argc - 1;

  switch (argv[1][1]) {
  case 'g': return global[one * 11];     //Boom! simple global
  case 'c': return C::array[one * 11];   //Boom! class static
  case 'f':
    static int array[10];
    memset(array, 0, 10);
    return array[one * 11];              //Boom! function static
  case 'l':
    // literal global ptr created by compiler

    const char *str = "0123456789";
    return str[one * 11];                //Boom! .rdata string literal allocated by compiler
  }
  return 0;
}
