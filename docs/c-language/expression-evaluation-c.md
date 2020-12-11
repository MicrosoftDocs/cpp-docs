---
description: "Learn more about: Expression Evaluation (C)"
title: "Expression Evaluation (C)"
ms.date: "11/04/2016"
helpviewer_keywords: ["expression evaluation", "expressions [C++], evaluating"]
ms.assetid: 9493f8cc-64a2-4284-9aaf-26eec11c4f40
---
# Expression Evaluation (C)

Expressions involving assignment, unary increment, unary decrement, or calling a function may have consequences incidental to their evaluation (side effects). When a "sequence point" is reached, everything preceding the sequence point, including any side effects, is guaranteed to have been evaluated before evaluation begins on anything following the sequence point.

"Side effects" are changes caused by the evaluation of an expression. Side effects occur whenever the value of a variable is changed by an expression evaluation. All assignment operations have side effects. Function calls can also have side effects if they change the value of an externally visible item, either by direct assignment or by indirect assignment through a pointer.

## See also

[Operands and Expressions](../c-language/operands-and-expressions.md)
