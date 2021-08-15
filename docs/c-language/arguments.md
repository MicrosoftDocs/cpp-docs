---
description: "Learn more about: Arguments"
title: "Arguments"
ms.date: "11/04/2016"
helpviewer_keywords: ["arguments [C++], function", "function parameters", "functions [C], parameters", "function parameters, about function parameters", "function arguments", "function calls, arguments"]
ms.assetid: 14cf0389-2265-41f0-9a96-f2223eb406ca
---
# Arguments

The arguments in a function call have this form:

> *expression* **(** *expression-list*<SUB>opt</SUB> **)**  /* Function call */

In a function call, *expression-list* is a list of expressions (separated by commas). The values of these latter expressions are the arguments passed to the function. If the function takes no arguments, *expression-list* should contain the keyword **`void`**.

An argument can be any value with fundamental, structure, union, or pointer type. All arguments are passed by value. This means a copy of the argument is assigned to the corresponding parameter. The function does not know the actual memory location of the argument passed. The function uses this copy without affecting the variable from which it was originally derived.

Although you cannot pass arrays or functions as arguments, you can pass pointers to these items. Pointers provide a way for a function to access a value by reference. Since a pointer to a variable holds the address of the variable, the function can use this address to access the value of the variable. Pointer arguments allow a function to access arrays and functions, even though arrays and functions cannot be passed as arguments.

The order in which arguments are evaluated can vary under different compilers and different optimization levels. However, the arguments and any side effects are completely evaluated before the function is entered. See [Side Effects](../c-language/side-effects.md) for information on side effects.

The *expression-list* in a function call is evaluated and the usual arithmetic conversions are performed on each argument in the function call. If a prototype is available, the resulting argument type is compared to the prototype's corresponding parameter. If they do not match, either a conversion is performed, or a diagnostic message is issued. The parameters also undergo the usual arithmetic conversions.

The number of expressions in *expression-list* must match the number of parameters, unless the function's prototype or definition explicitly specifies a variable number of arguments. In this case, the compiler checks as many arguments as there are type names in the list of parameters and converts them, if necessary, as described above. See [Calls with a Variable Number of Arguments](../c-language/calls-with-a-variable-number-of-arguments.md) for more information.

If the prototype's parameter list contains only the keyword **`void`**, the compiler expects zero arguments in the function call and zero parameters in the definition. A diagnostic message is issued if it finds any arguments.

## Example

This example uses pointers as arguments:

```C
int main()
{
    /* Function prototype */

    void swap( int *num1, int *num2 );
    int x, y;
    .
    .
    .
    swap( &x, &y );  /* Function call */
}

/* Function definition */

void swap( int *num1, int *num2 )
{
    int t;

    t = *num1;
    *num1 = *num2;
    *num2 = t;
}
```

In this example, the `swap` function is declared in `main` to have two arguments, represented respectively by identifiers `num1` and `num2`, both of which are pointers to **`int`** values. The parameters `num1` and `num2` in the prototype-style definition are also declared as pointers to **`int`** type values.

In the function call

```C
swap( &x, &y )
```

the address of `x` is stored in `num1` and the address of `y` is stored in `num2`. Now two names, or "aliases," exist for the same location. References to `*num1` and `*num2` in `swap` are effectively references to `x` and `y` in `main`. The assignments within `swap` actually exchange the contents of `x` and `y`. Therefore, no **`return`** statement is necessary.

The compiler performs type checking on the arguments to `swap` because the prototype of `swap` includes argument types for each parameter. The identifiers within the parentheses of the prototype and definition can be the same or different. What is important is that the types of the arguments match those of the parameter lists in both the prototype and the definition.

## See also

[Function Calls](../c-language/function-calls.md)
