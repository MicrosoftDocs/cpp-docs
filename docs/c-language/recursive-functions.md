---
description: "Learn more about: Recursive Functions"
title: "Recursive Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["functions [C], recursive", "function calls, recursive", "functions [C], calling recursively", "recursive function calls"]
ms.assetid: 59739040-3081-4006-abbc-9d8423992bce
---
# Recursive Functions

Any function in a C program can be called recursively; that is, it can call itself. The number of recursive calls is limited to the size of the stack. See the [`/STACK` (Stack Allocations)](../build/reference/stack-stack-allocations.md) linker option for information about linker options that set stack size. Each time the function is called, new storage is allocated for the parameters and for the **`auto`** and **`register`** variables so that their values in previous, unfinished calls are not overwritten. Parameters are only directly accessible to the instance of the function in which they are created. Previous parameters are not directly accessible to ensuing instances of the function.

Note that variables declared with **`static`** storage do not require new storage with each recursive call. Their storage exists for the lifetime of the program. Each reference to such a variable accesses the same storage area.

## Example

This example illustrates recursive calls:

```C
int factorial( int num );      /* Function prototype */

int main()
{
    int result, number;
    .
    .
    .
    result = factorial( number );
}

int factorial( int num )      /* Function definition */
{
    .
    .
    .
    if ( ( num > 0 ) || ( num <= 10 ) )
        return( num * factorial( num - 1 ) );
}
```

## See also

[Function Calls](../c-language/function-calls.md)
