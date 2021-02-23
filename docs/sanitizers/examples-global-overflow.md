---
title: "Global buffer overflow."
description: "Source examples and live debug screen shots for global variable overflow errors."
ms.date: 02/05/2021
f1_keywords: ["ASan","Address Sanitizer","memory safety","global-buffer-overflow", "ASan examples"]
help viewer_keywords: ["ASan","Address Sanitizer","ASan examples","global-buffer-overflow"]
---

# Global buffer overflow

The compiler generates metadata for any variable in the `.data` or `.bss` sections. These variables have language scope globals or file statics that are allocated in memory before main() starts. Global variables in `C` are treated much differently than `C++`. This difference is because of the complex rules for linking.  

In `C`, a global variable can be declared in several source files and each definition can have different types. The compiler can't see all the possible definitions. The linker will see all the different definitions. The linker defaults to selecting the largest size of all the different declarations.

In `C++`, a global is allocated by the compiler. There can only be one definition so the size of each definition is known at compile time.

Examples sourced from [LLVM compiler-rt test suite](https://github.com/llvm/llvm-project/tree/main/compiler-rt/test/asan/TestCases).

## Example - globals in 'C' with multiple type definitions

```cpp
// Address Sanitizer reports a buffer overflow in main.c @line #2 in all cases, regardless of the
// order in which the a.obj, b.obj, and c.obj are linked.
  
// file: a.c 
int x;

// file: b.c  
char* x;

// file: c.c
float* x[3];

// example1-main.c

double x[5];
 
int main() { 
    int rc = (int) x[5];  // Boom!
    return rc; 
}
```

From a **Developer Command Prompt**:
```
 cl a.c b.c c.c example1-main.c /fsanitize=address /Zi
 devenv /debugexe example1-main.exe
```

## Resulting error

![example1](SRC_CODE/global-overflow/example1.PNG)

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

From a **Developer Command Prompt**:
```
 cl example2.cpp /fsanitize=address /Zi
 devenv /debugexe example2.exe
```

## Resulting error - simple function level static

![example2](SRC_CODE/global-overflow/example2.PNG)

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
```

From a **Developer Command Prompt**:
```
 cl example3.cpp /fsanitize=address /Zi
 devenv /debugexe example3.exe -l
```

## Resulting error - all global scopes in C++

![example3]
