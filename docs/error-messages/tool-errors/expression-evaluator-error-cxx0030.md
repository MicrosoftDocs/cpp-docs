---
title: "Expression Evaluator Error CXX0030 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["CXX0030"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAN0030", "CXX0030"]
ms.assetid: ada8b48c-09c8-49bf-ae23-313ed663c4fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Expression Evaluator Error CXX0030
expression not evaluatable  
  
 The debugger's expression evaluator could not obtain a value for the expression as written. One likely cause is that the expression refers to memory that is outside the program's address space (dereferencing a null pointer is one example). Windows does not allow access to memory that is outside of the program's address space.  
  
 You may want to rewrite your expression using parentheses to control the order of evaluation.  
  
 This error is identical to CAN0030.