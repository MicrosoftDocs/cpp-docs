---
title: "Type Qualifiers"
ms.date: "10/30/2020"
helpviewer_keywords: ["volatile keyword [C], type qualifier", "type qualifiers", "volatile keyword [C]", "qualifiers for types", "const keyword [C]", "memory, access using volatile", "volatile keyword [C], type specifier"]
ms.assetid: bb4c6744-1dd7-40a8-b4eb-f5585be30908
---
# Type Qualifiers

Type qualifiers give one of two properties to an identifier. The **`const`** type qualifier declares an object to be nonmodifiable. The **`volatile`** type qualifier declares an item whose value can legitimately be changed by something beyond the control of the program in which it appears, such as a concurrently executing thread.

The type qualifiers, **`const`**, **restrict**, and **`volatile`**, can appear only once in a declaration. Type qualifiers can appear with any type specifier; however, they cannot appear after the first comma in a multiple item declaration. For example, the following declarations are legal:

```c
typedef volatile int VI;
const int ci;
```

These declarations are not legal:

```c
typedef int *i, volatile *vi;
float f, const cf;
```

Type qualifiers are relevant only when accessing identifiers as l-values in expressions. See [L-Value and R-Value Expressions](../c-language/l-value-and-r-value-expressions.md) for information about l-values and expressions.

## Syntax

*type-qualifier*: **const** \| **volatile** \| **restrict**

## const and volatile

The following are legal **`const`** and **`volatile`** declarations:

```c
int const *p_ci;      // Pointer to constant int 
int const (*p_ci);    /* Pointer to constant int */
int *const cp_i;      /* Constant pointer to int */
int (*const cp_i);    /* Constant pointer to int */
int volatile vint;      /* Volatile integer */
```

If the specification of an array type includes type qualifiers, the element is qualified, not the array type. If the specification of the function type includes qualifiers, the behavior is undefined. Neither **`volatile`** nor **`const`** affects the range of values or arithmetic properties of the object.

- The **`const`** keyword can be used to modify any fundamental or aggregate type, or a pointer to an object of any type, or a **`typedef`**. If an item is declared with only the **`const`** type qualifier, its type is taken to be **const int**. A **`const`** variable can be initialized or can be placed in a read-only region of storage. The **`const`** keyword is useful for declaring pointers to **`const`** since this requires the function not to change the pointer in any way.

- The compiler assumes that, at any point in the program, a **`volatile`** variable can be accessed by an unknown process that uses or modifies its value. Therefore, regardless of the optimizations specified on the command line, the code for each assignment to or reference of a **`volatile`** variable must be generated even if it appears to have no effect.

   If **`volatile`** is used alone, **`int`** is assumed. The **`volatile`** type specifier can be used to provide reliable access to special memory locations. Use **`volatile`** with data objects that may be accessed or altered by signal handlers, by concurrently executing programs, or by special hardware such as memory-mapped I/O control registers. You can declare a variable as **`volatile`** for its lifetime, or you can cast a single reference to be **`volatile`**.

- An item can be both **`const`** and **`volatile`**, in which case the item could not be legitimately modified by its own program, but could be modified by some asynchronous process.
 
## `restrict`

The **`restrict`** type qualifier, introduced in C99, is used with pointer declarations. It qualifies the pointer, not the object being pointed to. It is a hint to the compiler that for the lifetime of the pointer, only the pointer itself or a value derived from it (such as pointer + 1) will be used to access the object it points at. This means that any loads and stores through the restricted pointer are the only loads and stores to that address for the lifetime of the pointer. This helps the compiler optimize the performance of code that uses the pointer.

If you try to alias the pointer, you will get warning: 4245  For example:

```c
// compile with: /std:c11

void stored(data* restrict dst, const data* restrict src)
{
    // Do not trigger warning 4245 
    dst->i = NO_WARN(-(src->i));

}

void storei(int* restrict dst, const int* restrict src)
{
    *dst = *src;
}

int main() {
    data src, dst;
    src.i = 5;

    int i, j;

    i = 10;

    store(&src, &dst);
    store(&i, &j);

    my_exit(0);
}
```

## See also

[/std (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)\
[Declarations and Types](../c-language/declarations-and-types.md)
