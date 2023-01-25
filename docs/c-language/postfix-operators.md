---
description: "Learn more about: Postfix Operators"
title: "Postfix Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C], postfix", "postfix operators"]
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
---
# Postfix Operators

The postfix operators have the highest precedence (the tightest binding) in expression evaluation.

## Syntax

*`postfix-expression`*:\
&emsp;*`primary-expression`*\
&emsp;*`postfix-expression`*  **`[`**  *`expression`*  **`]`**\
&emsp;*`postfix-expression`*  **`(`**  *`argument-expression-list`*<sub>opt</sub> **`)`**\
&emsp;*`postfix-expression`*  **`.`**  *`identifier`*\
&emsp;*`postfix-expression`*  **`->`**  *`identifier`*\
&emsp;*`postfix-expression`*  **`++`**\
&emsp;*`postfix-expression`*  **`--`**

Operators in this precedence level are the array subscripts, function calls, structure and union members, and postfix increment and decrement operators.

## See also

[C Operators](../c-language/c-operators.md)
