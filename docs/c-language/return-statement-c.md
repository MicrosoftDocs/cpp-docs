---
title: "return Statement (C)"
description: "The C language return statement ends function execution and optionally returns a value to the caller."
ms.date: "06/10/2020"
helpviewer_keywords: ["( ) parentheses in return statements"]
ms.assetid: 18cd82cf-f899-4b28-83ad-4eff353ddcb4
---
# `return` Statement (C)

A **`return`** statement ends the execution of a function, and returns control to the calling function. Execution resumes in the calling function at the point immediately following the call. A **`return`** statement can return a value to the calling function. For more information, see [Return type](../c-language/return-type.md).

## Syntax

> *`jump-statement`*:\
> &emsp;**`return`** *`expression`*<sub>opt</sub> **`;`**

The value of *`expression`*, if present, is returned to the calling function. If *`expression`* is omitted, the return value of the function is undefined. The expression, if present, is evaluated and then converted to the type returned by the function. When a **`return`** statement contains an expression in functions that have a **`void`** return type, the compiler generates a warning, and the expression isn't evaluated.

If no **`return`** statement appears in a function definition, control automatically returns to the calling function after the last statement of the called function is executed. In this case, the return value of the called function is undefined. If the function has a return type other than **`void`**, it's a serious bug, and the compiler prints a warning diagnostic message. If the function has a **`void`** return type, this behavior is okay, but may be considered poor style. Use a plain **`return`** statement to make your intent clear.

As a good engineering practice, always specify a return type for your functions. If a return value isn't required, declare the function to have **`void`** return type. If a return type isn't specified, the C compiler assumes a default return type of **`int`**.

Many programmers use parentheses to enclose the *`expression`* argument of the **`return`** statement. However, C doesn't require the parentheses.

The compiler may issue a warning diagnostic message about unreachable code if it finds any statements placed after the **`return`** statement.

In a **`main`** function, the **`return`** statement and expression are optional. What happens to the returned value, if one is specified, depends on the implementation. **Microsoft-specific**: The Microsoft C implementation returns the expression value to the process that invoked the program, such as *`cmd.exe`*. If no **`return`** expression is supplied, the Microsoft C runtime returns a value that indicates success (0) or failure (a non-zero value).

## Example

This example is one program in several parts. It demonstrates the **`return`** statement, and how it's used both to end function execution, and optionally, to return a value.

```C
// C_return_statement.c
// Compile using: cl /W4 C_return_statement.c
#include <limits.h>      // for INT_MAX
#include <stdio.h>       // for printf

long long square( int value )
{
    // Cast one operand to long long to force the
    // expression to be evaluated as type long long.
    // Note that parentheses around the return expression
    // are allowed, but not required here.
    return ( value * (long long) value );
}
```

The `square` function returns the square of its argument, in a wider type to prevent an arithmetic error. **Microsoft-specific**: In the Microsoft C implementation, the **`long long`** type is large enough to hold the product of two **`int`** values without overflow.

The parentheses around the **`return`** expression in `square` are evaluated as part of the expression, and aren't required by the **`return`** statement.

```C
double ratio( int numerator, int denominator )
{
    // Cast one operand to double to force floating-point
    // division. Otherwise, integer division is used,
    // then the result is converted to the return type.
    return numerator / (double) denominator;
}
```

The `ratio` function returns the ratio of its two **`int`** arguments as a floating-point **`double`** value. The **`return`** expression is forced to use a floating-point operation by casting one of the operands to **`double`**. Otherwise, the integer division operator would be used, and the fractional part would be lost.

```C
void report_square( void )
{
    int value = INT_MAX;
    long long squared = 0LL;
    squared = square( value );
    printf( "value = %d, squared = %lld\n", value, squared );
    return; // Use an empty expression to return void.
}
```

The `report_square` function calls `square` with a parameter value of `INT_MAX`, the largest signed integer value that fits in an **`int`**. The **`long long`** result is stored in `squared`, then printed. The `report_square` function has a **`void`** return type, so it doesn't have an expression in its **`return`** statement.

```C
void report_ratio( int top, int bottom )
{
    double fraction = ratio( top, bottom );
    printf( "%d / %d = %.16f\n", top, bottom, fraction );
    // It's okay to have no return statement for functions
    // that have void return types.
}
```

The `report_ratio` function calls `ratio` with parameter values of `1` and `INT_MAX`. The **`double`** result is stored in `fraction`, then printed. The `report_ratio` function has a **`void`** return type, so it doesn't need to explicitly return a value. Execution of `report_ratio` "falls off the bottom" and returns no value to the caller.

```C
int main()
{
    int n = 1;
    int x = INT_MAX;

    report_square();
    report_ratio( n, x );

    return 0;
}
```

The **`main`** function calls two functions: `report_square` and `report_ratio`. As `report_square` takes no parameters and returns **`void`**, we don't assign its result to a variable. Likewise, `report_ratio` returns **`void`**, so we don't save its return value, either. After each of these function calls, execution continues at the next statement. Then **`main`** returns a value of `0` (typically used to report success) to end the program.

To compile the example, create a source code file named *`C_return_statement.c`*. Then, copy all the example code, in the order shown. Save the file, and compile it in a Developer command prompt window by using the command:

**`cl /W4 C_return_statement.c`**

Then, to run the example code, enter **`C_return_statement.exe`** at the command prompt. The output of the example looks like this:

```Output
value = 2147483647, squared = 4611686014132420609
1 / 2147483647 = 0.0000000004656613
```

## See also

[Statements](../c-language/statements-c.md)
