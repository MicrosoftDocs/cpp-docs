---
title: "Function Call (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["function calls, C functions", "functions [C], calling", "function calls"]
ms.assetid: 35c66719-3f15-4d3b-97da-4e19dc97b308
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Function Call (C)

A *function call* is an expression that includes the name of the function being called or the value of a function pointer and, optionally, the arguments being passed to the function.  
  
## Syntax

*postfix-expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*postfix-expression*  **(**  *argument-expression-list*<sub>opt</sub> **)**  
  
*argument-expression-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assignment-expression*<br/> 
&nbsp;&nbsp;&nbsp;&nbsp;*argument-expression-list* **,** *assignment-expression*  
  
The *postfix-expression* must evaluate to a function address (for example, a function identifier or the value of a function pointer), and *argument-expression-list* is a list of expressions (separated by commas) whose values (the "arguments") are passed to the function. The *argument-expression-list* argument can be empty.  
  
A function-call expression has the value and type of the function's return value. A function cannot return an object of array type. If the function's return type is `void` (that is, the function has been declared never to return a value), the function-call expression also has `void` type. (See [Function Calls](../c-language/function-calls.md) for more information.)  
  
## See Also

[Function Call Operator: ()](../cpp/function-call-operator-parens.md)