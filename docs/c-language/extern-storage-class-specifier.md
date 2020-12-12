---
description: "Learn more about: extern Storage-Class Specifier"
title: "extern Storage-Class Specifier"
ms.date: "07/10/2018"
helpviewer_keywords: ["extern keyword [C]", "storage class specifiers, extern", "extern keyword [C], storage class specifier", "external linkage, storage-class specifiers", "external linkage, extern modifier"]
ms.assetid: 6e16d927-291f-49e4-986c-9d91a482a441
---
# extern Storage-Class Specifier

A variable declared with the **`extern`** storage-class specifier is a reference to a variable with the same name defined in another source file. It is used to make the external-level variable definition visible. A variable declared as **`extern`** has no storage allocated for itself; it is only a name.

## Example

This example illustrates internal- and external-level declarations:

```c

// Source1.c

int i = 1;

// Source2. c

#include <stdio.h>

// Refers to the i that is defined in Source1.c:
extern int i;

void func(void);

int main()
{
    // Prints 1:
    printf_s("%d\n", i);
    func();
    return;
}

void func(void)
{
    // Address of global i assigned to pointer variable:
    static int *external_i = &i;

    // This definition of i hides the global i in Source.c:
    int i = 16;

    // Prints 16, 1:
    printf_s("%d\n%d\n", i, *external_i);
}
```

In this example, the variable `i` is defined in Source1.c with an initial value of 1. An **`extern`** declaration in Source2.c is makes 'i' visible in that file.

In the `func` function, the address of the global variable `i` is used to initialize the **`static`** pointer variable `external_i`. This works because the global variable has **`static`** lifetime, meaning its address does not change during program execution. Next, a variable `i` is defined within the scope of `func` as a local variable with initial value 16. This definition does not affect the value of the external-level `i`, which is hidden by the use of its name for the local variable. The value of the global `i` is now accessible only through the pointer `external_i`.

## See also

[Storage-Class Specifiers for Internal-Level Declarations](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
