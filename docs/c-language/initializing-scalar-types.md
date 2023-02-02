---
description: "Learn more about: Initializing Scalar Types"
title: "Initializing Scalar Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["initializing scalar types", "register variables", "initialization, scalar types", "initializing variables, scalar types", "scalar types", "static variables, initializing", "automatic storage class, initializing scalar types", "automatic storage class", "types [C], initializing"]
ms.assetid: 73c516f5-c3ad-4d56-ab3b-f2a82b621104
---
# Initializing Scalar Types

When you initialize scalar types, the value of the *`assignment-expression`* is assigned to the variable. The conversion rules for assignment apply. (See [Type Conversions](../c-language/type-conversions-c.md) for information on conversion rules.)

## Syntax

*`declaration`*:\
&emsp;*`declaration-specifiers`* *`init-declarator-list`*<sub>opt</sub> **`;`**

*`declaration-specifiers`*:\
&emsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub> \
&emsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub> \
&emsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`init-declarator-list`*:\
&emsp;*`init-declarator`*\
&emsp;*`init-declarator-list`* **`,`** *`init-declarator`*

*`init-declarator`*:\
&emsp;*`declarator`*\
&emsp;*`declarator`* **`=`** *`initializer`* /\* For scalar initialization \*/

*`initializer`*:\
&emsp;*`assignment-expression`*

You can initialize variables of any type, as long as you obey the following rules:

- Variables declared at the file-scope level can be initialized. If you don't explicitly initialize a variable at the external level, it's initialized to 0 by default.

- A constant expression can be used to initialize any global variable declared with the **`static`** *`storage-class-specifier`*. Variables declared to be **`static`** are initialized when program execution begins. If you don't explicitly initialize a global **`static`** variable, it's initialized to 0 by default, and every member that has pointer type is assigned a null pointer.

- Variables declared with the **`auto`** or **`register`** storage-class specifier are initialized each time execution control passes to the block in which they're declared. If you omit an initializer from the declaration of an **`auto`** or **`register`** variable, the initial value of the variable is undefined. For automatic and register values, the initializer isn't restricted to being a constant; it can be any expression involving previously defined values, even function calls.

- The initial values for external variable declarations and for all **`static`** variables, whether external or internal, must be constant expressions. (For more information, see [Constant Expressions](../c-language/c-constant-expressions.md).) Since the address of any externally declared or static variable is constant, it can be used to initialize an internally declared **`static`** pointer variable. However, the address of an **`auto`** variable can't be used as a static initializer because it may be different for each execution of the block. You can use either constant or variable values to initialize **`auto`** and **`register`** variables.

- If the declaration of an identifier has block scope, and the identifier has external linkage, the declaration can't have an initialization.

## Examples

The following examples illustrate initializations:

```C
int x = 10;
```

The integer variable `x` is initialized to the constant expression `10`.

```C
register int *px = 0;
```

The pointer `px` is initialized to 0, producing a "null" pointer.

```C
const int c = (3 * 1024);
```

This example uses a constant expression `(3 * 1024)` to initialize `c` to a constant value that can't be modified because of the **`const`** keyword.

```C
int *b = &x;
```

This statement initializes the pointer `b` with the address of another variable, `x`.

```C
int *const a = &z;
```

The pointer `a` is initialized with the address of a variable named `z`. However, since it's specified to be a **`const`**, the variable `a` can only be initialized, never modified. It always points to the same location.

```C
int GLOBAL ;

int function( void )
{
    int LOCAL ;
    static int *lp = &LOCAL;   /* Illegal initialization */
    static int *gp = &GLOBAL;  /* Legal initialization   */
    register int *rp = &LOCAL; /* Legal initialization   */
}
```

The global variable `GLOBAL` is declared at the external level, so it has global lifetime. The local variable `LOCAL` has **`auto`** storage class and only has an address during the execution of the function in which it's declared. Therefore, attempting to initialize the **`static`** pointer variable `lp` with the address of `LOCAL` isn't permitted. The **`static`** pointer variable `gp` can be initialized to the address of `GLOBAL` because that address is always the same. Similarly, `*rp` can be initialized because `rp` is a local variable and can have a non-constant initializer. Each time the block is entered, `LOCAL` has a new address, which is then assigned to `rp`.

## See also

[Initialization](../c-language/initialization.md)
