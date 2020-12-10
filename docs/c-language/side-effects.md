---
description: "Learn more about: Side Effects"
title: "Side Effects"
ms.date: "11/04/2016"
helpviewer_keywords: ["expression evaluation, side effects", "side effects in expression evaluation"]
ms.assetid: d9b3004a-830e-43a0-bea5-8989d501d670
---
# Side Effects

The order of evaluation of expressions is defined by the specific implementation, except when the language guarantees a particular order of evaluation (as outlined in [Precedence and Order of Evaluation](../c-language/precedence-and-order-of-evaluation.md)). For example, side effects occur in the following function calls:

```
add( i + 1, i = j + 2 );
myproc( getc(), getc() );
```

The arguments of a function call can be evaluated in any order. The expression `i + 1` may be evaluated before `i = j + 2`, or `i = j + 2` may be evaluated before `i + 1`. The result is different in each case. Likewise, it is not possible to guarantee what characters are actually passed to the `myproc`. Since unary increment and decrement operations involve assignments, such operations can cause side effects, as shown in the following example:

```
x[i] = i++;
```

In this example, the value of `x` that is modified is unpredictable. The value of the subscript could be either the new or the old value of `i`. The result can vary under different compilers or different optimization levels.

Since C does not define the order of evaluation of side effects, both evaluation methods discussed above are correct and either may be implemented. To make sure that your code is portable and clear, avoid statements that depend on a particular order of evaluation for side effects.

## See also

[Expression Evaluation](../c-language/expression-evaluation-c.md)
