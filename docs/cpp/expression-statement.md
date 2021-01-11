---
description: "Learn more about: Expression Statement"
title: "Expression Statement"
ms.date: "11/04/2016"
helpviewer_keywords: ["statements [C++], expression", "expression statements"]
ms.assetid: 547d7f7a-58be-4ffc-a4b3-d64c7ae7538c
---
# Expression Statement

Expression statements cause expressions to be evaluated. No transfer of control or iteration takes place as a result of an expression statement.

The syntax for the expression statement is simply

## Syntax

```
[expression ] ;
```

## Remarks

All expressions in an expression statement are evaluated and all side effects are completed before the next statement is executed. The most common expression statements are assignments and function calls.  Since the expression is optional, a semicolon alone is considered an empty expression statement, referred to as the [null](../cpp/null-statement.md) statement.

## See also

[Overview of C++ Statements](../cpp/overview-of-cpp-statements.md)
