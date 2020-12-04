---
description: "Learn more about: Overview of C++ Statements"
title: "Overview of C++ Statements"
ms.date: "11/04/2016"
helpviewer_keywords: ["statements [C++]"]
ms.assetid: e56996b2-b846-4b99-ac94-ac72fffc5ec7
---
# Overview of C++ Statements

C++ statements are executed sequentially, except when an expression statement, a selection statement, an iteration statement, or a jump statement specifically modifies that sequence.

Statements may be of the following types:

> *`labeled-statement`*\
> *`expression-statement`*\
> *`compound-statement`*\
> *`selection-statement`*\
> *`iteration-statement`*\
> *`jump-statement`*\
> *`declaration-statement`*\
> *`try-throw-catch`*

In most cases, the C++ statement syntax is identical to that of ANSI C89. The primary difference between the two is that in C89, declarations are allowed only at the start of a block; C++ adds the *`declaration-statement`*, which effectively removes this restriction. This enables you to introduce variables at a point in the program where a precomputed initialization value can be calculated.

Declaring variables inside blocks also allows you to exercise precise control over the scope and lifetime of those variables.

The articles on statements describe the following C++ keywords:

:::row:::
   :::column span="":::
      [`break`](../cpp/break-statement-cpp.md)\
      [`case`](../cpp/switch-statement-cpp.md)\
      [`catch`](../cpp/try-throw-and-catch-statements-cpp.md)\
      [`continue`](../cpp/continue-statement-cpp.md)\
      [`default`](../cpp/switch-statement-cpp.md)\
      [`do`](../cpp/do-while-statement-cpp.md)
   :::column-end:::
   :::column span="":::
      [`else`](../cpp/if-else-statement-cpp.md)\
      [`__except`](../cpp/structured-exception-handling-c-cpp.md)\
      [`__finally`](../cpp/structured-exception-handling-c-cpp.md)\
      [`for`](../cpp/for-statement-cpp.md)\
      [`goto`](../cpp/goto-statement-cpp.md)
   :::column-end:::
   :::column span="":::
      [`if`](../cpp/if-else-statement-cpp.md)\
      [`__if_exists`](../cpp/if-exists-statement.md)\
      [`__if_not_exists`](../cpp/if-not-exists-statement.md)\
      [`__leave`](../c-language/try-finally-statement-c.md)\
      [`return`](../cpp/return-statement-cpp.md)
   :::column-end:::
   :::column span="":::
      [`switch`](../cpp/switch-statement-cpp.md)\
      [`throw`](../cpp/try-throw-and-catch-statements-cpp.md)\
      [`__try`](../cpp/structured-exception-handling-c-cpp.md)\
      [`try`](../cpp/try-throw-and-catch-statements-cpp.md)\
      [`while`](../cpp/while-statement-cpp.md)
   :::column-end:::
:::row-end:::

## See also

[Statements](../cpp/statements-cpp.md)
