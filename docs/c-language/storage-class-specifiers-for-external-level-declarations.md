---
description: "Learn more about: Storage-Class Specifiers for External-Level Declarations"
title: "Storage-Class Specifiers for External-Level Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["external definitions", "linkage [C++], external", "external linkage, variable declarations", "declaring variables, external variables", "declarations [C++], external", "declarations [C++], specifiers", "external declarations", "static variables, external declarations", "variables, visibility", "external linkage, storage-class specifiers", "referencing declarations", "visibility, variables", "static storage class specifiers"]
ms.assetid: b76b623a-80ec-4d5d-859b-6cef422657ee
---
# Storage-Class Specifiers for External-Level Declarations

External variables are variables at file scope. They are defined outside any function, and they are potentially available to many functions. Functions can only be defined at the external level and, therefore, cannot be nested. By default, all references to external variables and functions of the same name are references to the same object, which means they have *external linkage*. (You can use the **`static`** keyword to override this behavior.)

Variable declarations at the external level are either definitions of variables (*defining declarations*), or references to variables defined elsewhere (*referencing declarations*).

An external variable declaration that also initializes the variable (implicitly or explicitly) is a defining declaration of the variable. A definition at the external level can take several forms:

- A variable that you declare with the **`static`** storage-class specifier. You can explicitly initialize the **`static`** variable with a constant expression, as described in [Initialization](../c-language/initialization.md). If you omit the initializer, the variable is initialized to 0 by default. For example, these two statements are both considered definitions of the variable `k`.

    ```C
    static int k = 16;
    static int k;
    ```

- A variable that you explicitly initialize at the external level. For example, `int j = 3;` is a definition of the variable `j`.

In variable declarations at the external level (that is, outside all functions), you can use the **`static`** or **`extern`** storage-class specifier or omit the storage-class specifier entirely. You cannot use the **`auto`** and **`register`** *`storage-class-specifier`* terminals at the external level.

Once a variable is defined at the external level, it is visible throughout the rest of the translation unit. The variable is not visible prior to its declaration in the same source file. Also, it is not visible in other source files of the program, unless a referencing declaration makes it visible, as described below.

The rules relating to **`static`** include:

- Variables declared outside all blocks without the **`static`** keyword always retain their values throughout the program. To restrict their access to a particular translation unit, you must use the **`static`** keyword. This gives them *internal linkage*. To make them global to an entire program, omit the explicit storage class or use the keyword **`extern`** (see the rules in the next list). This gives them *external linkage*. Internal and external linkage are also discussed in [Linkage](../c-language/linkage.md).

- You can define a variable at the external level only once within a program. You can define another variable with the same name and the **`static`** storage-class specifier in a different translation unit. Since each **`static`** definition is visible only within its own translation unit, no conflict occurs. It provides a useful way to hide identifier names that must be shared among functions of a single translation unit, but not visible to other translation units.

- The **`static`** storage-class specifier can apply to functions as well. If you declare a function **`static`**, its name is invisible outside of the file in which it's declared.

The rules for using **`extern`** are:

- The **`extern`** storage-class specifier declares a reference to a variable defined elsewhere. You can use an **`extern`** declaration to make a definition in another source file visible, or to make a variable visible before its definition in the same source file. Once you've declared a reference to the variable at the external level, the variable is visible throughout the remainder of the translation unit in which the declared reference occurs.

- For an **`extern`** reference to be valid, the variable it refers to must be defined once, and only once, at the external level. This definition (without the **`extern`** storage class) can be in any of the translation units that make up the program.

## Example

The example below illustrates external declarations:

```C
/******************************************************************
                      SOURCE FILE ONE
*******************************************************************/
#include <stdio.h>

extern int i;                // Reference to i, defined below
void next( void );           // Function prototype

int main()
{
    i++;
    printf_s( "%d\n", i );   // i equals 4
    next();
}

int i = 3;                  // Definition of i

void next( void )
{
    i++;
    printf_s( "%d\n", i );  // i equals 5
    other();
}

/******************************************************************
                      SOURCE FILE TWO
*******************************************************************/
#include <stdio.h>

extern int i;              // Reference to i in
                           // first source file
void other( void )
{
    i++;
    printf_s( "%d\n", i ); // i equals 6
}
```

The two source files in this example contain a total of three external declarations of `i`. Only one declaration is a "defining declaration." That declaration,

```C
int i = 3;
```

defines the global variable `i` and initializes it with initial value 3. The "referencing" declaration of `i` at the top of the first source file using **`extern`** makes the global variable visible before its defining declaration in the file. The referencing declaration of `i` in the second source file also makes the variable visible in that source file. If a defining instance for a variable is not provided in the translation unit, the compiler assumes there is an

```C
extern int x;
```

referencing declaration and that a defining reference

```C
int x = 0;
```

appears in another translation unit of the program.

All three functions, `main`, `next`, and `other`, perform the same task: they increase `i` and print it. The values 4, 5, and 6 are printed.

If the variable `i` hadn't been initialized, it would have been set to 0 automatically. In this case, the values 1, 2, and 3 would have been printed. See [Initialization](../c-language/initialization.md) for information about variable initialization.

## See also

[C Storage Classes](../c-language/c-storage-classes.md)
