---
title: "C primary expressions"
description: "Explain what a C primary expression is"
ms.date: "12/08/2020"
helpviewer_keywords: ["primary expressions"]
---
# C primary expressions

Primary expressions are the building blocks of more complex expressions. They may be constants, identifiers, and in C11, a [Generic selection](generic_selection.md) . An expression in parentheses is also a primary expression.

## Syntax

*primary-expression*:\
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*\
&nbsp;&nbsp;&nbsp;&nbsp;*constant*\
&nbsp;&nbsp;&nbsp;&nbsp;*string-literal*\
&nbsp;&nbsp;&nbsp;&nbsp;*_Generic(assignment expression, generic-assoc-list)*\
&nbsp;&nbsp;&nbsp;&nbsp;**(** *expression* **)**

*expression*:\
&nbsp;&nbsp;&nbsp;&nbsp;*assignment-expression*\
&nbsp;&nbsp;&nbsp;&nbsp;*expression* **,** *assignment-expression*

## See also

[Generic selection](generic_selection.md)
[Operands and Expressions](../c-language/operands-and-expressions.md)
