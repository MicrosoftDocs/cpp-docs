---
title: "Postfix Operators | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["operators [C], postfix", "postfix operators"]
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Postfix Operators
The postfix operators have the highest precedence (the tightest binding) in expression evaluation.  

## Syntax

*postfix-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*primary-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **[**  *expression*  **]**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **(**  *argument-expression-list*<sub>opt</sub> **)**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **.**  *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **->**  *identifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **++**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **--**

Operators in this precedence level are the array subscripts, function calls, structure and union members, and postfix increment and decrement operators.

## See Also

[C Operators](../c-language/c-operators.md)