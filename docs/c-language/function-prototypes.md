---
description: "Learn more about: Function Prototypes"
title: "Function Prototypes"
ms.date: "11/04/2016"
helpviewer_keywords: ["function prototypes", "function return types, function prototypes", "data types [C], function return types", "functions [C], return types", "prototypes [C++], function"]
ms.assetid: d152f8e6-971e-432c-93ca-5a91400653c2
---
# Function Prototypes

A function declaration precedes the function definition and specifies the name, return type, storage class, and other attributes of a function. To be a prototype, the function declaration must also establish types and identifiers for the function's arguments.

## Syntax

*`declaration`*:\
&emsp;*`declaration-specifiers`* *`attribute-seq`*<sub>opt</sub> *`init-declarator-list`*<sub>opt</sub> **`;`**

/\* *`attribute-seq`*<sub>opt</sub> is Microsoft-specific \*/

*`declaration-specifiers`*:\
&emsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub> \
&emsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub> \
&emsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`init-declarator-list`*:\
&emsp;*`init-declarator`*\
&emsp;*`init-declarator-list`*  **`,`**  *`init-declarator`*

*`init-declarator`*:\
&emsp;*`declarator`*\
&emsp;*`declarator`* **`=`** *`initializer`*

*`declarator`*:\
&emsp;*`pointer`*<sub>opt</sub> *`direct-declarator`*

*`direct-declarator`*: /\* A function declarator \*/\
&emsp;*`direct-declarator`*  **`(`**  *`parameter-type-list`*  **`)`**  /\* New-style declarator \*/\
&emsp;*`direct-declarator`*  **`(`**  *`identifier-list`*<sub>opt</sub> **`)`** /\* Obsolete-style declarator \*/

The prototype has the same form as the function definition, except that it's terminated by a semicolon immediately following the closing parenthesis and therefore has no body. In either case, the return type must agree with the return type specified in the function definition.

Function prototypes have the following important uses:

- They establish the return type for functions that return types other than **`int`**. Although functions that return **`int`** values don't require prototypes, prototypes are recommended.

- Without complete prototypes, standard conversions are made, but no attempt is made to check the type or number of arguments with the number of parameters.

- Prototypes are used to initialize pointers to functions before those functions are defined.

- The parameter list is used to check that arguments in the function call match the parameters in the function definition.

The converted type of each parameter determines the interpretation of the arguments that the function call places on the stack. A type mismatch between an argument and a parameter may cause the arguments on the stack to be misinterpreted. For example, on a 16-bit computer, if a 16-bit pointer is passed as an argument, then declared as a **`long`** parameter, the first 32 bits on the stack are interpreted as a **`long`** parameter. This error creates problems not only with the **`long`** parameter, but with all the subsequent parameters. You can detect errors of this kind by declaring complete function prototypes for all functions.

A prototype establishes the attributes of a function. Then, function calls that precede the function definition (or that occur in other source files) can be checked for argument-type and return-type mismatches. For example, if you specify the **`static`** storage-class specifier in a prototype, you must also specify the **`static`** storage class in the function definition.

Complete parameter declarations (`int a`) can be mixed with abstract declarators (**`int`**) in the same declaration. For example, the following declaration is legal:

```C
int add( int a, int );
```

The prototype can include both the type of, and an identifier for, each expression that's passed as an argument. However, such identifiers are only in scope until the end of the declaration. The prototype can also reflect the fact that the number of arguments is variable, or that no arguments are passed. Without such a list, mismatches may not be revealed, so the compiler can't generate diagnostic messages concerning them. For more information on type checking, see [Arguments](../c-language/arguments.md).

Prototype scope in the Microsoft C compiler is now ANSI-conforming when compiling with the **`/Za`** compiler option. If you declare a **`struct`** or **`union`** tag within a prototype, the tag is entered at that scope rather than at global scope. For example, when compiling with **`/Za`** for ANSI conformance, you can never call this function without getting a type mismatch error:

```C
void func1( struct S * );
```

To correct your code, define or declare the **`struct`** or **`union`** at global scope before the function prototype:

```C
struct S;
void func1( struct S * );
```

Under **`/Ze`**, the tag is still entered at global scope.

## See also

[Functions](../c-language/functions-c.md)
