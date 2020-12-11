---
description: "Learn more about: Function Calls"
title: "Function Calls"
ms.date: "11/04/2016"
helpviewer_keywords: ["function calls, C functions", "functions [C], calling", "function calls, about function calls", "function calls"]
ms.assetid: 2cfa897d-3874-4820-933c-e624f75d1712
---
# Function Calls

A *function call* is an expression that passes control and arguments (if any) to a function and has the form:

*expression* (*expression-list*<sub>opt</sub>)

where *expression* is a function name or evaluates to a function address and *expression-list* is a list of expressions (separated by commas). The values of these latter expressions are the arguments passed to the function. If the function does not return a value, then you declare it to be a function that returns **`void`**.

If a declaration exists before the function call, but no information is given concerning the parameters, any undeclared arguments simply undergo the usual arithmetic conversions.

> [!NOTE]
> The expressions in the function argument list can be evaluated in any order, so arguments whose values may be changed by side effects from another argument have undefined values. The sequence point defined by the function-call operator guarantees only that all side effects in the argument list are evaluated before control passes to the called function. (Note that the order in which arguments are pushed on the stack is a separate matter.) See [Sequence Points](../c-language/c-sequence-points.md) for more information.

The only requirement in any function call is that the expression before the parentheses must evaluate to a function address. This means that a function can be called through any function-pointer expression.

## Example

This example illustrates function calls called from a **`switch`** statement:

```
int main()
{
    /* Function prototypes */

    long lift( int ), step( int ), drop( int );
    void work( int number, long (*function)(int i) );

    int select, count;
    .
    .
    .
    select = 1;
    switch( select )
    {
        case 1: work( count, lift );
                break;

        case 2: work( count, step );
                break;

        case 3: work( count, drop );
                /* Fall through to next case */
        default:
                break;
    }
}

/* Function definition */

void work( int number, long (*function)(int i) )
{
    int i;
    long j;

    for ( i = j = 0; i < number; i++ )
            j += ( *function )( i );
}
```

In this example, the function call in `main`,

```
work( count, lift );
```

passes an integer variable, `count`, and the address of the function `lift` to the function `work`. Note that the function address is passed simply by giving the function identifier, since a function identifier evaluates to a pointer expression. To use a function identifier in this way, the function must be declared or defined before the identifier is used; otherwise, the identifier is not recognized. In this case, a prototype for `work` is given at the beginning of the `main` function.

The parameter `function` in `work` is declared to be a pointer to a function taking one **`int`** argument and returning a **`long`** value. The parentheses around the parameter name are required; without them, the declaration would specify a function returning a pointer to a **`long`** value.

The function `work` calls the selected function from inside the **`for`** loop by using the following function call:

```
( *function )( i );
```

One argument, `i`, is passed to the called function.

## See also

[Functions](../c-language/functions-c.md)
