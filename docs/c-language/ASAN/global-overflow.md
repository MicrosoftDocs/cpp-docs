# GLOBALS

Global variables means anything allocated in the .data or .bss section. These are simply globals or file statics that are allocated in memory before main() starts. Note that global variables in 'C' are treated much differently than 'C++'. This is due to the exciting rules for linking.  

In 'C' a global variable can be declared in numerous source files and even have different types at each definition site.  This means the linker has to allocate the global and it just choses the largest space of all the different declarations.

In C++ a global is allocated by the compiler (possibly being initialized at runtime). There can only be one definition throughout the program, so it's size is known at compile time.


## Example - globals in 'C' with multiple type definitions
```cpp
// Here are 3 'C' files that are compiled in 3 different permutations:
// 
//    > cl a.c b.c c.c main.c ..
//    > cl b.c a.c c.c main.c ..
//    > cl b.c b.c a.c main.c ..
//
// ASAN reports a buffer overflow in main.c @line #2 in all cases.
  
file: a.c 
int x;

file: b.c  
char* x; > b.c

file: c.c
float* x[3];

main.c

double x[5]; 
int main() { 
    int rc = (int) x[5];  // Boom!
    return rc; 
}

```

## Resulting error


## Example - simple function level static

```cpp
#include <string.h>
int main(int argc, char **argv) {

    static char XXX[10];
    static char YYY[10];
    static char ZZZ[10];

    memset(XXX, 0, 10); memset(YYY, 0, 10); memset(ZZZ, 0, 10);

    int res = YYY[argc * 10];  // Boom!

    res += XXX[argc] + ZZZ[argc];
    return res;
}
```

## Resulting error


## Example - all global scopes in C++
```cpp
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
  switch (argv[1][0]) {
  case 'g': return global[one * 11];     //Boom!
  case 'c': return C::array[one * 11];   //Boom!
  case 'f':
    static int array[10];
    memset(array, 0, 10);
    return array[one * 11];              //Boom!
  case 'l':
    // literal global ptr created by compiler

    const char *str = "0123456789";
    return str[one * 11];                //Boom!
  }
  return 0;
}
```

## Resulting errors


