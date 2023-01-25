---
description: "Learn more about: Pointer Declarations"
title: "Pointer Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["pointer declarations", "declarations, pointers", "const keyword [C]", "pointers, declarations"]
ms.assetid: 8b3b7fc7-f44d-480d-b6f9-cebe4e5462a6
---
# Pointer Declarations

A *pointer declaration* names a pointer variable and specifies the type of the object to which the variable points. A variable declared as a pointer holds a memory address.

## Syntax

*`declarator`*:\
&emsp;*`pointer`*<sub>opt</sub> *`direct-declarator`*

*`direct-declarator`*:\
&emsp;*`identifier`*\
&emsp;**`(`** *`declarator`* **`)`**\
&emsp;*`direct-declarator`* **`[`** *`constant-expression`*<sub>opt</sub> **`]`**\
&emsp;*`direct-declarator`* **`(`** *`parameter-type-list`* **`)`**\
&emsp;*`direct-declarator`* **`(`** *`identifier-list`*<sub>opt</sub> **`)`**

*`pointer`*:\
&emsp;**`*`** *`type-qualifier-list`*<sub>opt</sub>\
&emsp;**`*`** *`type-qualifier-list`*<sub>opt</sub> *`pointer`*

*`type-qualifier-list`*:\
&emsp;*`type-qualifier`*\
&emsp;*`type-qualifier-list`* *`type-qualifier`*

The *`type-specifier`* gives the type of the object, which can be any basic, structure, or union type. Pointer variables can also point to functions, arrays, and other pointers. (For information on declaring and interpreting more complex pointer types, refer to [Interpreting More Complex Declarators](../c-language/interpreting-more-complex-declarators.md).)

By making the *`type-specifier`* **`void`**, you can delay specification of the type to which the pointer refers. Such an item is referred to as a "pointer to **`void`**" and is written as `void *`. A variable declared as a pointer to **`void`** can be used to point to an object of any type. However, to perform most operations on the pointer or on the object to which it points, the type to which it points must be explicitly specified for each operation. (Variables of type `char *` and type `void *` are assignment-compatible without a type cast.) Such conversion can be accomplished with a type cast. For more information, see [Type-Cast Conversions](../c-language/type-cast-conversions.md).

The *`type-qualifier`* can be either **`const`** or **`volatile`**, or both. These keywords specify, respectively, that the pointer can't be modified by the program itself (**`const`**), or that the pointer can legitimately be modified by some process beyond the control of the program (**`volatile`**). For more information on **`const`** and **`volatile`**, see [Type Qualifiers](../c-language/type-qualifiers.md).

The *`declarator`* names the variable and can include a type modifier. For example, if *`declarator`* represents an array, the type of the pointer is modified to be a pointer to an array.

You can declare a pointer to a structure, union, or enumeration type before you define the structure, union, or enumeration type. You declare the pointer by using the structure or union tag as shown in the examples. Such declarations are allowed because the compiler doesn't need to know the size of the structure or union to allocate space for the pointer variable.

## Examples

The following examples illustrate pointer declarations.

```c
char *message; /* Declares a pointer variable named message */
```

The `message` pointer points to a variable with **`char`** type.

```c
int *pointers[10];  /* Declares an array of pointers */
```

The `pointers` array has 10 elements; each element is a pointer to a variable with **`int`** type.

```c
int (*pointer)[10]; /* Declares a pointer to an array of 10 elements */
```

The `pointer` variable points to an array with 10 elements. Each element in this array has **`int`** type.

```c
int const *x;      /* Declares a pointer variable, x,
                      to a constant value */
```

The pointer `x` can be modified to point to a different **`int`** value, but the value to which it points can't be modified.

```c
const int some_object = 5 ;
int other_object = 37;
int *const y = &fixed_object;
int volatile *const z = &some_object;
int *const volatile w = &some_object;
```

The variable `y` in these declarations is declared as a constant pointer to an **`int`** value. The value it points to can be modified, but the pointer itself must always point to the same location: the address of `fixed_object`. Similarly, `z` is a constant pointer, but it's also declared to point to an **`int`** whose value can't be modified by the program. The **`volatile`** specifier indicates that although the value of the `const int` pointed to by `z` can't be modified by the program, it could legitimately be modified by a process running concurrently with the program. The declaration of `w` specifies that the program can't change the value pointed to and that the program can't modify the pointer.

```c
struct list *next, *previous; /* Uses the tag for list */
```

This example declares two pointer variables (`next` and `previous`) that point to the structure type `list`. This declaration can appear before the definition of the `list` structure type (see the next example), as long as the `list` type definition has the same visibility as the declaration.

```c
struct list
{
    char *token;
    int count;
    struct list *next;
} line;
```

The variable `line` has the structure type named `list`. The `list` structure type has three members: the first member is a pointer to a **`char`** value, the second is an **`int`** value, and the third is a pointer to another `list` structure.

```c
struct id
{
    unsigned int id_no;
    struct name *pname;
} record;
```

The variable `record` has the structure type `id`. `pname` is declared as a pointer to another structure type named `name`. This declaration can appear before the `name` type is defined.

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
