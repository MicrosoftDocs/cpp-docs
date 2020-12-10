---
description: "Learn more about: Expression Statement (C)"
title: "Expression Statement (C)"
ms.date: "11/04/2016"
helpviewer_keywords: ["statements, expression", "expression statements"]
ms.assetid: 1085982b-dc16-4c1e-9ddd-0cd85c8fe2e3
---
# Expression Statement (C)

When an expression statement is executed, the expression is evaluated according to the rules outlined in [Expressions and Assignments](../c-language/expressions-and-assignments.md).

## Syntax

*expression-statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression*<sub>opt</sub> **;**

All side effects from the expression evaluation are completed before the next statement is executed. An empty expression statement is called a null statement. See [The Null Statement](../c-language/null-statement-c.md) for more information.

These examples demonstrate expression statements.

```C
x = ( y + 3 );            /* x is assigned the value of y + 3  */
x++;                      /* x is incremented                  */
x = y = 0;                /* Both x and y are initialized to 0 */
proc( arg1, arg2 );       /* Function call returning void      */
y = z = ( f( x ) + 3 );   /* A function-call expression        */
```

In the last statement, the function-call expression, the value of the expression, which includes any value returned by the function, is increased by 3 and then assigned to both the variables `y` and `z`.

## See also

[Statements](../c-language/statements-c.md)
