---
description: "Learn more about: C Function Definitions"
title: "C Function Definitions"
ms.date: "11/04/2016"
helpviewer_keywords: ["function declarators", "function definitions", "declaring functions, about function declarations", "declaring functions, declarators", "functions [C], parameters", "declarators, functions", "function parameters, function definitions", "function body", "declaring functions, variables"]
ms.assetid: ebab23c8-6eb8-46f3-b21d-570cd8457a80
---
# C Function Definitions

A function definition specifies the name of the function, the types and number of parameters it expects to receive, and its return type. A function definition also includes a function body with the declarations of its local variables, and the statements that determine what the function does.

## Syntax

*`translation-unit`*:\
&emsp;*`external-declaration`* \
&emsp;*`translation-unit`* *`external-declaration`*

*`external-declaration`*: /\* Allowed only at external (file) scope \*/\
&emsp;*`function-definition`*\
&emsp;*`declaration`*

*`function-definition`*:\
&emsp;*`declaration-specifiers`*<sub>opt</sub> *`attribute-seq`*<sub>opt</sub> *`declarator`* *`declaration-list`*<sub>opt</sub> *`compound-statement`*

/\* *`attribute-seq`* is Microsoft-specific \*/

Prototype parameters are:

*`declaration-specifiers`*:\
&emsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub> \
&emsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub>\
&emsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`declaration-list`*:\
&emsp;*`declaration`*\
&emsp;*`declaration-list`* *`declaration`*

*`declarator`*:\
&emsp;*`pointer`*<sub>opt</sub> *`direct-declarator`*

*`direct-declarator`*: /\* A function declarator \*/\
&emsp;*`direct-declarator`*  **`(`**  *`parameter-type-list`*  **`)`** /\* New-style declarator \*/\
&emsp;*`direct-declarator`*  **`(`**  *`identifier-list`*<sub>opt</sub> **`)`** /\* Obsolete-style declarator \*/

The parameter list in a definition uses this syntax:

*`parameter-type-list`*: /\* The parameter list \*/\
&emsp;*`parameter-list`* \
&emsp;*`parameter-list`* **`, ...`**

*`parameter-list`*:\
&emsp;*`parameter-declaration`*\
&emsp;*`parameter-list`* **`,`**  *`parameter-declaration`*

*`parameter-declaration`*:\
&emsp;*`declaration-specifiers`* *`declarator`*\
&emsp;*`declaration-specifiers`* *`abstract-declarator`*<sub>opt</sub>

The parameter list in an old-style function definition uses this syntax:

*`identifier-list`*: /\* Used in obsolete-style function definitions and declarations \*/\
&emsp;*`identifier`*\
&emsp;*`identifier-list`* **`,`**  *`identifier`*

The syntax for the function body is:

*`compound-statement`*:\
&emsp;**`{`** *`declaration-list`*<sub>opt</sub> *`statement-list`*<sub>opt</sub> **`}`**

The only storage-class specifiers that can modify a function declaration are **`extern`** and **`static`**. The **`extern`** specifier signifies that the function can be referenced from other files; that is, the function name is exported to the linker. The **`static`** specifier signifies that the function can't be referenced from other files; that is, the name isn't exported by the linker. If no storage class appears in a function definition, **`extern`** is assumed. In any case, the function is always visible from the definition point to the end of the file.

The optional *`declaration-specifiers`* and mandatory *`declarator`* together specify the function's return type and name. The *`declarator`* is a combination of the identifier that names the function and the parentheses following the function name. The optional *`attribute-seq`* nonterminal is a Microsoft-specific feature defined in [Function Attributes](../c-language/function-attributes.md).

The *`direct-declarator`* (in the *`declarator`* syntax) specifies the name of the function being defined and the identifiers of its parameters. If the *`direct-declarator`* includes a *`parameter-type-list`*, the list specifies the types of all the parameters. Such a declarator also serves as a function prototype for later calls to the function.

A *`declaration`* in the *`declaration-list`* in function definitions can't contain a *`storage-class-specifier`* other than **`register`**. The *`type-specifier`* in the *`declaration-specifiers`* syntax can be omitted only if the **`register`** storage class is specified for a value of **`int`** type.

The *`compound-statement`* is the function body containing local variable declarations, references to externally declared items, and statements.

The sections [Function Attributes](../c-language/function-attributes.md), [Storage Class](../c-language/storage-class.md), [Return Type](../c-language/return-type.md), [Parameters](../c-language/parameters.md), and [Function Body](../c-language/function-body.md) describe the components of the function definition in detail.

## See also

[Functions](../c-language/functions-c.md)
