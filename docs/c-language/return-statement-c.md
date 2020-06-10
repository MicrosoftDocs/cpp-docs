---
title: "return Statement (C)"
ms.date: "06/10/2020"
helpviewer_keywords: ["( ) parentheses in return statements"]
ms.assetid: 18cd82cf-f899-4b28-83ad-4eff353ddcb4
---
# return Statement (C)

The **`return`** statement ends the execution of a function and returns control to the calling function. Execution resumes in the calling function at the point immediately following the call. A **`return`** statement can also return a value to the calling function. For more information, see [Return type](../c-language/return-type.md).

## Syntax

> *jump-statement*:\
> &nbsp;&nbsp;&nbsp;&nbsp;**`return`** *expression*&#8203;<sub>opt</sub> **`;`**

## Remarks

The value of *expression*, if present, is returned to the calling function. If *expression* is omitted, the return value of the function is undefined. The expression, if present, is evaluated and then converted to the type returned by the function. If the function was declared with return type **`void`**, a **`return`** statement containing an expression generates a warning and the expression isn't evaluated.

If no **`return`** statement appears in a function definition, control automatically returns to the calling function after the last statement of the called function is executed. In this case, the return value of the called function is undefined. If a return value isn't required, declare the function to have **`void`** return type; otherwise, the default return type is **`int`**.

Many programmers use parentheses to enclose the *expression* argument of the **`return`** statement. However, C doesn't require the parentheses.

## Example

This example demonstrates the **`return`** statement:

```C
#include <limits.h>
#include <stdio.h>

void draw( int i, long long ll );
long long sq( int s );

int main()
{
    long long y;
    int x = INT_MAX;

    y = sq( x );
    draw( x, y );
    return x;
}

long long sq( int s )
{
    // Note that parentheses around the return expression
    // are allowed but not required here.
    return( s * (long long)s );
}

void draw( int i, long long ll )
{
    printf( "i = %d, ll = %lld\n", i, ll );
    return;
}
```

In this example, the `main` function calls two functions: `sq` and `draw`. The `sq` function returns the value of `x * x` to `main`, where the return value is assigned to `y`. The parentheses around the **`return`** expression in `sq` are evaluated as part of the expression, and aren't required by the **`return`** statement. Since the **`return`** expression is evaluated before it's converted to the return type, `sq` uses an explicit cast to convert the expression type to the return type. The cast prevents a possible integer overflow, which could lead to unexpected results.

The `draw` function is declared as a **`void`** function. It prints the values of its parameters. Then, the empty **`return`** statement ends the function and doesn't return a value. An attempt to assign the return value of `draw` would cause a diagnostic message to be issued. The `main` function then returns the value of `x` to the operating system.

The output of the example looks like this:

```Output
i = 2147483647, ll = 4611686014132420609
```

## See also

[Statements](../c-language/statements-c.md)
