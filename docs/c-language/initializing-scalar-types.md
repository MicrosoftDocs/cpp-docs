---
description: "Learn more about: Initializing Scalar Types"
title: "Initializing Scalar Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["initializing scalar types", "register variables", "initialization, scalar types", "initializing variables, scalar types", "scalar types", "static variables, initializing", "automatic storage class, initializing scalar types", "automatic storage class", "types [C], initializing"]
ms.assetid: 73c516f5-c3ad-4d56-ab3b-f2a82b621104
---
# Initializing Scalar Types

When initializing scalar types, the value of the *`assignment-expression`* is assigned to the variable. The conversion rules for assignment apply. (See [Type Conversions](../c-language/type-conversions-c.md) for information on conversion rules.)

## Syntax

*`declaration`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declaration-specifiers`* *`init-declarator-list`*<sub>opt</sub> **`;`**

*`declaration-specifiers`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`init-declarator-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`init-declarator-list`* **`,`** *`init-declarator`*

*`init-declarator`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`declarator`* **`=`** *`initializer`* /\* For scalar initialization \*/

*`initializer`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assignment-expression`*

You can initialize variables of any type, provided that you obey the following rules:

- Variables declared at the file-scope level can be initialized. If you do not explicitly initialize a variable at the external level, it is initialized to 0 by default.

- A constant expression can be used to initialize any global variable declared with the **`static`** *`storage-class-specifier`*. Variables declared to be **`static`** are initialized when program execution begins. If you do not explicitly initialize a global **`static`** variable, it is initialized to 0 by default, and every member that has pointer type is assigned a null pointer.

- Variables declared with the **`auto`** or **`register`** storage-class specifier are initialized each time execution control passes to the block in which they are declared. If you omit an initializer from the declaration of an **`auto`** or **`register`** variable, the initial value of the variable is undefined. For automatic and register values, the initializer is not restricted to being a constant; it can be any expression involving previously defined values, even function calls.

- The initial values for external variable declarations and for all **`static`** variables, whether external or internal, must be constant expressions. (For more information, see [Constant Expressions](../c-language/c-constant-expressions.md).) Since the address of any externally declared or static variable is constant, it can be used to initialize an internally declared **`static`** pointer variable. However, the address of an **`auto`** variable cannot be used as a static initializer because it may be different for each execution of the block. You can use either constant or variable values to initialize **`auto`** and **`register`** variables.

- If the declaration of an identifier has block scope, and the identifier has external linkage, the declaration cannot have an initialization.

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

This example uses a constant expression `(3 * 1024)` to initialize `c` to a constant value that cannot be modified because of the **`const`** keyword.

```C
int *b = &x;
```

This statement initializes the pointer `b` with the address of another variable, `x`.

```C
int *const a = &z;
```

The pointer `a` is initialized with the address of a variable named `z`. However, since it is specified to be a **`const`**, the variable `a` can only be initialized, never modified. It always points to the same location.

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

The global variable `GLOBAL` is declared at the external level, so it has global lifetime. The local variable `LOCAL` has **`auto`** storage class and only has an address during the execution of the function in which it is declared. Therefore, attempting to initialize the **`static`** pointer variable `lp` with the address of `LOCAL` is not permitted. The **`static`** pointer variable `gp` can be initialized to the address of `GLOBAL` because that address is always the same. Similarly, `*rp` can be initialized because `rp` is a local variable and can have a non-constant initializer. Each time the block is entered, `LOCAL` has a new address, which is then assigned to `rp`.

## See also

[Initialization](../c-language/initialization.md)
