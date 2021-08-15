---
description: "Learn more about: Overview of C Statements"
title: "Overview of C Statements"
ms.date: "11/04/2016"
helpviewer_keywords: ["semicolon, in C statements", "statements, C", "semicolon", "statements, about statements", "Visual C, statements"]
ms.assetid: 0d49837a-5399-4881-b60c-af5f4e9720de
---
# Overview of C Statements

C statements consist of tokens, expressions, and other statements. A statement that forms a component of another statement is called the "body" of the enclosing statement. Each statement type given by the following syntax is discussed in this section.

## Syntax

*statement*:
[labeled-statement](../c-language/goto-and-labeled-statements-c.md)

[compound-statement](../c-language/compound-statement-c.md)

[expression-statement](../c-language/expression-statement-c.md)

[selection-statement](../c-language/if-statement-c.md)

[iteration-statement](../c-language/do-while-statement-c.md)

[jump-statement](../c-language/break-statement-c.md)

[try-except-statement](../c-language/try-except-statement-c.md) /* Microsoft-specific \*/

[try-finally-statement](../c-language/try-finally-statement-c.md) /\* Microsoft-specific \*/

Frequently the statement body is a "compound statement." A compound statement consists of other statements that can include keywords. The compound statement is delimited by braces (**{ }**). All other C statements end with a semicolon (**;**). The semicolon is a statement terminator.

The expression statement contains a C expression that can contain the arithmetic or logical operators introduced in [Expressions and Assignments](../c-language/expressions-and-assignments.md). The null statement is an empty statement.

Any C statement can begin with an identifying label consisting of a name and a colon. Since only the **`goto`** statement recognizes statement labels, statement labels are discussed with **`goto`**. See [The goto and Labeled Statements](../c-language/goto-and-labeled-statements-c.md) for more information.

## See also

[Statements](../c-language/statements-c.md)
