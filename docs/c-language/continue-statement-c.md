---
description: "Learn more about: continue statement (C)"
title: "continue statement (C)"
ms.date: 04/14/2021
f1_keywords: ["continue"]
helpviewer_keywords: ["loop structures, continue keyword", "continue keyword [C]"]
---
# `continue` statement (C)

The **`continue`** statement passes control to the next iteration of the nearest enclosing **`do`**, **`for`**, or **`while`** statement in which it appears, bypassing any remaining statements in the **`do`**, **`for`**, or **`while`** statement body.

## Syntax

*`jump-statement`*:\
&emsp;**`continue ;`**

The next iteration of a **`do`**, **`for`**, or **`while`** statement is determined as follows:

- Within a **`do`** or a **`while`** statement, the next iteration starts by reevaluating the expression of the **`do`** or **`while`** statement.

- A **`continue`** statement in a **`for`** statement causes evaluation of the loop expression of the **`for`** statement. Then the code reevaluates the conditional expression. Depending on the result, it either terminates or iterates the statement body. For more information on the **`for`** statement and its nonterminals, see [The `for` statement](../c-language/for-statement-c.md).

Here's an example of the **`continue`** statement:

```C
while ( i-- > 0 )
{
    x = f( i );
    if ( x == 1 )
        continue;
    y += x * x;
}
```

In this example, the statement body is executed while `i` is greater than 0. First `f(i)` is assigned to `x`; then, if `x` is equal to 1, the **`continue`** statement is executed. The rest of the statements in the body get ignored. Execution resumes at the top of the loop with the evaluation of the loop's test.

## See also

[`continue` statement (C++)](../cpp/continue-statement-cpp.md)
