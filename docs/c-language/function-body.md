---
description: "Learn more about: Function Body"
title: "Function Body"
ms.date: "11/04/2016"
helpviewer_keywords: ["functions [C], syntax", "variables, function syntax", "function definitions, function body", "function body"]
ms.assetid: f7e74822-fac8-4dc8-8f3a-2b1611da4640
---
# Function Body

A *function body* is a compound statement containing the statements that specify what the function does.

## Syntax

*function-definition*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*declaration-specifiers*<sub>opt</sub> *attribute-seq*<sub>opt</sub> *declarator* *declaration-list*<sub>opt</sub> *compound-statement*

/\* *attribute-seq* is Microsoft-specific \*/

*compound-statement*: /\* The function body \*/<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**{** *declaration-list*<sub>opt</sub> *statement-list*<sub>opt</sub> **}**

Variables declared in a function body, known as *local variables*, have **`auto`** storage class unless otherwise specified. When the function is called, storage is created for the local variables and local initializations are performed. Execution control passes to the first statement in *compound-statement* and continues until a **`return`** statement is executed or the end of the function body is encountered. Control then returns to the point at which the function was called.

A **`return`** statement containing an expression must be executed if the function is to return a value. The return value of a function is undefined if no **`return`** statement is executed or if the **`return`** statement does not include an expression.

## See also

[C Function Definitions](../c-language/c-function-definitions.md)
