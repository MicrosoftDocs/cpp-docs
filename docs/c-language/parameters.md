---
title: "Parameters"
description: "Learn more about: Parameters"
ms.date: 11/04/2016
helpviewer_keywords: ["arguments [C++], function", "function parameters", "parameters [C++]", "function arguments, vs. parameters", "parameters [C++], function", "functions [C], parameters", "function parameters, syntax", "ellipsis (...), parameters", "... ellipsis"]
---
# Parameters

Arguments are names of values passed to a function by a function call. Parameters are the values the function expects to receive. In a function prototype, the parentheses following the function name contain a complete list of the function's parameters and their types. Parameter declarations specify the types, sizes, and identifiers of values stored in the parameters.

## Syntax

*`function-definition`*:\
&emsp;*`declaration-specifiers`*<sub>opt</sub> *`attribute-seq`*<sub>opt</sub> *`declarator`* *`declaration-list`*<sub>opt</sub> *`compound-statement`*

/\* *`attribute-seq`* is Microsoft-specific \*/

*`declarator`*:\
&emsp;*`pointer`*<sub>opt</sub> *`direct-declarator`*

*`direct-declarator`*: /\* A function declarator \*/\
&emsp;*`direct-declarator`*  **`(`**  *`parameter-type-list`*  **`)`** /\* New-style declarator \*/\
&emsp;*`direct-declarator`*  **`(`**  *`identifier-list`*<sub>opt</sub> **`)`** /\* Obsolete-style declarator \*/

*`parameter-type-list`*: /\* The parameter list \*/\
&emsp;*`parameter-list`* \
&emsp;*`parameter-list`* **`, ...`**

*`parameter-list`*:\
&emsp;*`parameter-declaration`*\
&emsp;*`parameter-list`* **`,`**  *`parameter-declaration`*

*`parameter-declaration`*:\
&emsp;*`declaration-specifiers`* *`declarator`*\
&emsp;*`declaration-specifiers`* *`abstract-declarator`*<sub>opt</sub>

The *`parameter-type-list`* is a sequence of parameter declarations separated by commas. The form of each parameter in a parameter list looks like this:

> **`register`**<sub>opt</sub> *`type-specifier`* *`declarator`*<sub>opt</sub>

Function parameters declared with the **`auto`** attribute generate errors. The identifiers of the parameters are used in the function body to refer to the values passed to the function. You can name the parameters in a prototype, but the names go out of scope at the end of the declaration. That means parameter names can be assigned the same way or differently in the function definition. These identifiers can't be redefined in the outermost block of the function body, but they can be redefined in inner, nested blocks as though the parameter list were an enclosing block.

Each identifier in *`parameter-type-list`* must be preceded by its appropriate type specifier, as shown in this example:

```C
void new( double x, double y, double z )
{
    /* Function body here */
}
```

If at least one parameter occurs in the parameter list, the list can end with a comma followed by three periods (**`, ...`**). This construction, called the "ellipsis notation," indicates a variable number of arguments to the function. For more information, see [Calls with a Variable Number of Arguments](../c-language/calls-with-a-variable-number-of-arguments.md). However, a call to the function must have at least as many arguments as there are parameters before the last comma.

If no arguments are to be passed to the function, the list of parameters is replaced by the keyword **`void`**. This use of **`void`** is distinct from its use as a type specifier.

The order and type of parameters, including any use of the ellipsis notation, must be the same in all the function declarations (if any) and in the function definition. The types of the arguments after usual arithmetic conversions must be assignment-compatible with the types of the corresponding parameters. (See [Usual Arithmetic Conversions](../c-language/usual-arithmetic-conversions.md) for information on arithmetic conversions.) Arguments following the ellipsis aren't checked. A parameter can have any fundamental, structure, union, pointer, or array type.

The compiler performs the usual arithmetic conversions independently on each parameter and on each argument, if necessary. After conversion, no parameter is shorter than an **`int`**, and no parameter has **`float`** type unless the parameter type is explicitly specified as **`float`** in the prototype. It means, for example, that declaring a parameter as a **`char`** has the same effect as declaring it as an **`int`**.

## See also

[C Function Definitions](../c-language/c-function-definitions.md)
