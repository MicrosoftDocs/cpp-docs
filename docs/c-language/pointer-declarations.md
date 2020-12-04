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

*declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-declarator*

*direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**(** *declarator* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator* **[** *constant-expression*<sub>opt</sub> **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator* **(** *parameter-type-list* **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*direct-declarator* **(** *identifier-list*<sub>opt</sub> **)**

*pointer*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong> *type-qualifier-list*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;<strong>\*</strong> *type-qualifier-list*<sub>opt</sub> *pointer*

*type-qualifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type-qualifier-list* *type-qualifier*

The *type-specifier* gives the type of the object, which can be any basic, structure, or union type. Pointer variables can also point to functions, arrays, and other pointers. (For information on declaring and interpreting more complex pointer types, refer to [Interpreting More Complex Declarators](../c-language/interpreting-more-complex-declarators.md).)

By making the *type-specifier* **`void`**, you can delay specification of the type to which the pointer refers. Such an item is referred to as a "pointer to **`void`**" and is written as `void *`. A variable declared as a pointer to *void* can be used to point to an object of any type. However, to perform most operations on the pointer or on the object to which it points, the type to which it points must be explicitly specified for each operation. (Variables of type **`char`** <strong>\*</strong> and type **`void`** <strong>\*</strong> are assignment-compatible without a type cast.) Such conversion can be accomplished with a type cast (see [Type-Cast Conversions](../c-language/type-cast-conversions.md) for more information).

The *type-qualifier* can be either **`const`** or **`volatile`**, or both. These specify, respectively, that the pointer cannot be modified by the program itself (**`const`**), or that the pointer can legitimately be modified by some process beyond the control of the program (**`volatile`**). (See [Type Qualifiers](../c-language/type-qualifiers.md) for more information on **`const`** and **`volatile`**.)

The *declarator* names the variable and can include a type modifier. For example, if *declarator* represents an array, the type of the pointer is modified to be a pointer to an array.

You can declare a pointer to a structure, union, or enumeration type before you define the structure, union, or enumeration type. You declare the pointer by using the structure or union tag as shown in the examples below. Such declarations are allowed because the compiler does not need to know the size of the structure or union to allocate space for the pointer variable.

## Examples

The following examples illustrate pointer declarations.

```
char *message; /* Declares a pointer variable named message */
```

The *message* pointer points to a variable with **`char`** type.

```
int *pointers[10];  /* Declares an array of pointers */
```

The *pointers* array has 10 elements; each element is a pointer to a variable with **`int`** type.

```
int (*pointer)[10]; /* Declares a pointer to an array of 10 elements */
```

The *pointer* variable points to an array with 10 elements. Each element in this array has **`int`** type.

```
int const *x;      /* Declares a pointer variable, x,
                      to a constant value */
```

The pointer *x* can be modified to point to a different **`int`** value, but the value to which it points cannot be modified.

```
const int some_object = 5 ;
int other_object = 37;
int *const y = &fixed_object;
int volatile *const z = &some_object;
int *const volatile w = &some_object;
```

The variable *y* in these declarations is declared as a constant pointer to an **`int`** value. The value it points to can be modified, but the pointer itself must always point to the same location: the address of *fixed_object*. Similarly, *z* is a constant pointer, but it is also declared to point to an **`int`** whose value cannot be modified by the program. The additional specifier **`volatile`** indicates that although the value of the **const int** pointed to by *z* cannot be modified by the program, it could legitimately be modified by a process running concurrently with the program. The declaration of *w* specifies that the program cannot change the value pointed to and that the program cannot modify the pointer.

```
struct list *next, *previous; /* Uses the tag for list */
```

This example declares two pointer variables, *next* and *previous*, that point to the structure type *list*. This declaration can appear before the definition of the *list* structure type (see the next example), as long as the *list* type definition has the same visibility as the declaration.

```
struct list
{
    char *token;
    int count;
    struct list *next;
} line;
```

The variable *line* has the structure type named *list*. The *list* structure type has three members: the first member is a pointer to a **`char`** value, the second is an **`int`** value, and the third is a pointer to another *list* structure.

```
struct id
{
    unsigned int id_no;
    struct name *pname;
} record;
```

The variable *record* has the structure type *id*. Note that *pname* is declared as a pointer to another structure type named *name*. This declaration can appear before the *name* type is defined.

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
