---
description: "Learn more about: Interpreting More Complex Declarators"
title: "Interpreting More Complex Declarators"
ms.date: "11/04/2016"
helpviewer_keywords: ["complex declarators", "interpreting complex declarators"]
ms.assetid: dd5b7019-c86d-4645-a5cc-21f834de6f4a
---
# Interpreting More Complex Declarators

You can enclose any declarator in parentheses to specify a particular interpretation of a "complex declarator." A complex declarator is an identifier qualified by more than one array, pointer, or function modifier. You can apply various combinations of array, pointer, and function modifiers to a single identifier. Generally **`typedef`** may be used to simplify declarations. See [Typedef Declarations](../c-language/typedef-declarations.md).

In interpreting complex declarators, brackets and parentheses (that is, modifiers to the right of the identifier) take precedence over asterisks (that is, modifiers to the left of the identifier). Brackets and parentheses have the same precedence and associate from left to right. After the declarator has been fully interpreted, the type specifier is applied as the last step. By using parentheses you can override the default association order and force a particular interpretation. Never use parentheses, however, around an identifier name by itself. This could be misinterpreted as a parameter list.

A simple way to interpret complex declarators is to read them "from the inside out," using the following four steps:

1. Start with the identifier and look directly to the right for brackets or parentheses (if any).

1. Interpret these brackets or parentheses, then look to the left for asterisks.

1. If you encounter a right parenthesis at any stage, go back and apply rules 1 and 2 to everything within the parentheses.

1. Apply the type specifier.

    ```
    char *( *(*var)() )[10];
     ^   ^  ^ ^ ^   ^    ^
     7   6  4 2 1   3    5
    ```

In this example, the steps are numbered in order and can be interpreted as follows:

1. The identifier `var` is declared as

1. a pointer to

1. a function returning

1. a pointer to

1. an array of 10 elements, which are

1. pointers to

1. **`char`** values.

## Examples

The following examples illustrate other complex declarations and show how parentheses can affect the meaning of a declaration.

```
int *var[5]; /* Array of pointers to int values */
```

The array modifier has higher priority than the pointer modifier, so `var` is declared to be an array. The pointer modifier applies to the type of the array elements; therefore, the array elements are pointers to **`int`** values.

```
int (*var)[5]; /* Pointer to array of int values */
```

In this declaration for `var`, parentheses give the pointer modifier higher priority than the array modifier, and `var` is declared to be a pointer to an array of five **`int`** values.

```
long *var( long, long ); /* Function returning pointer to long */
```

Function modifiers also have higher priority than pointer modifiers, so this declaration for `var` declares `var` to be a function returning a pointer to a **`long`** value. The function is declared to take two **`long`** values as arguments.

```
long (*var)( long, long ); /* Pointer to function returning long */
```

This example is similar to the previous one. Parentheses give the pointer modifier higher priority than the function modifier, and `var` is declared to be a pointer to a function that returns a **`long`** value. Again, the function takes two **`long`** arguments.

```
struct both       /* Array of pointers to functions */
{                 /*   returning structures         */
    int a;
    char b;
} ( *var[5] )( struct both, struct both );
```

The elements of an array cannot be functions, but this declaration demonstrates how to declare an array of pointers to functions instead. In this example, `var` is declared to be an array of five pointers to functions that return structures with two members. The arguments to the functions are declared to be two structures with the same structure type, `both`. Note that the parentheses surrounding `*var[5]` are required. Without them, the declaration is an illegal attempt to declare an array of functions, as shown below:

```
/* ILLEGAL */
struct both *var[5](struct both, struct both);
```

The following statement declares an array of pointers.

```
unsigned int *(* const *name[5][10] ) ( void );
```

The `name` array has 50 elements organized in a multidimensional array. The elements are pointers to a pointer that is a constant. This constant pointer points to a function that has no parameters and returns a pointer to an unsigned type.

This next example is a function returning a pointer to an array of three **`double`** values.

```
double ( *var( double (*)[3] ) )[3];
```

In this declaration, a function returns a pointer to an array, since functions returning arrays are illegal. Here `var` is declared to be a function returning a pointer to an array of three **`double`** values. The function `var` takes one argument. The argument, like the return value, is a pointer to an array of three **`double`** values. The argument type is given by a complex *abstract-declarator*. The parentheses around the asterisk in the argument type are required; without them, the argument type would be an array of three pointers to **`double`** values. For a discussion and examples of abstract declarators, see [Abstract Declarators](../c-language/c-abstract-declarators.md).

```
union sign         /* Array of arrays of pointers */
{                  /* to pointers to unions       */
     int x;
     unsigned y;
} **var[5][5];
```

As the above example shows, a pointer can point to another pointer, and an array can contain arrays as elements. Here `var` is an array of five elements. Each element is a five-element array of pointers to pointers to unions with two members.

```
union sign *(*var[5])[5]; /* Array of pointers to arrays
                             of pointers to unions        */
```

This example shows how the placement of parentheses changes the meaning of the declaration. In this example, `var` is a five-element array of pointers to five-element arrays of pointers to unions. For examples of how to use **`typedef`** to avoid complex declarations, see [Typedef Declarations](../c-language/typedef-declarations.md).

## See also

[Declarations and Types](../c-language/declarations-and-types.md)
