---
description: "Learn more about: C Sequence Points"
title: "C Sequence Points"
ms.date: "11/04/2016"
helpviewer_keywords: ["sequence points"]
ms.assetid: c84885a5-4336-4eba-a643-058df4249903
---
# C Sequence Points

Between consecutive "sequence points" an object's value can be modified only once by an expression. The C language defines the following sequence points:

- Left operand of the logical-AND operator (**&&**). The left operand of the logical-AND operator is completely evaluated and all side effects complete before continuing. If the left operand evaluates to false (0), the other operand is not evaluated.

- Left operand of the logical-OR operator (`||`). The left operand of the logical-OR operator is completely evaluated and all side effects complete before continuing. If the left operand evaluates to true (nonzero), the other operand is not evaluated.

- Left operand of the comma operator. The left operand of the comma operator is completely evaluated and all side effects complete before continuing. Both operands of the comma operator are always evaluated. Note that the comma operator in a function call does not guarantee an order of evaluation.

- Function-call operator. All arguments to a function are evaluated and all side effects complete before entry to the function. No order of evaluation among the arguments is specified.

- First operand of the conditional operator. The first operand of the conditional operator is completely evaluated and all side effects complete before continuing.

- The end of a full initialization expression (that is, an expression that is not part of another expression such as the end of an initialization in a declaration statement).

- The expression in an expression statement. Expression statements consist of an optional expression followed by a semicolon (**;**). The expression is evaluated for its side effects and there is a sequence point following this evaluation.

- The controlling expression in a selection (**`if`** or **`switch`**) statement. The expression is completely evaluated and all side effects complete before the code dependent on the selection is executed.

- The controlling expression of a **`while`** or **`do`** statement. The expression is completely evaluated and all side effects complete before any statements in the next iteration of the **`while`** or **`do`** loop are executed.

- Each of the three expressions of a **`for`** statement. The expressions are completely evaluated and all side effects complete before any statements in the next iteration of the **`for`** loop are executed.

- The expression in a **`return`** statement. The expression is completely evaluated and all side effects complete before control returns to the calling function.

## See also

[Expression Evaluation](../c-language/expression-evaluation-c.md)
