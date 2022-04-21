---
title: "Error: global-buffer-overflow"
description: "Source examples and live debug screenshots for global variable overflow errors."
ms.date: 03/02/2021
f1_keywords: ["global-buffer-overflow"]
helpviewer_keywords: ["global-buffer-overflow error", "AddressSanitizer error global-buffer-overflow"]
---
# Error: `global-buffer-overflow`

> Address Sanitizer Error: Global buffer overflow

The compiler generates metadata for any variable in the `.data` or `.bss` sections. These variables have language scope of global or file static. They're allocated in memory before `main()` starts. Global variables in C are treated much differently than in C++. This difference is because of the complex rules for linking C.

In C, a global variable can be declared in several source files, and each definition can have different types. The compiler can't see all the possible definitions at once, but the linker can. For C, the linker defaults to selecting the largest-sized variable out of all the different declarations.

In C++, a global is allocated by the compiler. There can only be one definition, so the size of each definition is known at compile time.

## Example - globals in 'C' with multiple type definitions

```c
// file: a.c
int x;
```

```c
// file: b.c
char* x;
```

```c
// file: c.c
float* x[3];
```

```c
// file: example1-main.c
// global-buffer-overflow error

// AddressSanitizer reports a buffer overflow at the first line
// in function main() in all cases, REGARDLESS of the order in 
// which the object files: a.obj, b.obj, and c.obj are linked.
  
double x[5];
 
int main() { 
    int rc = (int) x[5];  // Boom!
    return rc; 
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl a.c b.c c.c example1-main.c /fsanitize=address /Zi
devenv /debugexe example1-main.exe
```

### Resulting error

:::image type="content" source="media/global-overflow-example-1.png" alt-text="Screenshot of debugger displaying global-buffer-overflow error in example 1.":::

## Example - simple function level static

```cpp
// example2.cpp
// global-buffer-overflow error
#include <string.h>

int 
main(int argc, char **argv) {

    static char XXX[10];
    static char YYY[10];
    static char ZZZ[10];

    memset(XXX, 0, 10); memset(YYY, 0, 10); memset(ZZZ, 0, 10);

    int res = YYY[argc * 10];  // Boom!

    res += XXX[argc] + ZZZ[argc];
    return res;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example2.cpp /fsanitize=address /Zi
devenv /debugexe example2.exe
```

### Resulting error - simple function level static

:::image type="content" source="media/global-overflow-example-2.png" alt-text="Screenshot of debugger displaying global-buffer-overflow error in example 2.":::

## Example - all global scopes in C++

```cpp
// example3.cpp
// global-buffer-overflow error

// Run 4 different ways with the choice of one of these options:
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
        return array[one * 11];            //Boom! function static
    case 'l':
        // literal global ptr created by compiler
        const char *str = "0123456789";
        return str[one * 11];              //Boom! .rdata string literal allocated by compiler
    }
    return 0;
}
```

To build and test this example, run these commands in a Visual Studio 2019 version 16.9 or later [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts):

```cmd
cl example3.cpp /fsanitize=address /Zi
devenv /debugexe example3.exe -l
```

### Resulting error - all global scopes in C++

:::image type="content" source="media/global-overflow-example-3.png" alt-text="Screenshot of debugger displaying global-buffer-overflow error in example 3.":::

## See also

[AddressSanitizer overview](./asan.md)\
[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
