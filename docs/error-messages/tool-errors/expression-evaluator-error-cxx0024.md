---
title: "Expression Evaluator Error CXX0024 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["CXX0024"]
dev_langs: ["C++"]
helpviewer_keywords: ["CXX0024", "CAN0024"]
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Expression Evaluator Error CXX0024
operation needs l-value  
  
 An expression that does not evaluate to an l-value was specified for an operation that requires an l-value.  
  
 An l-value (so called because it appears on the left side of an assignment statement) is an expression that refers to a memory location.  
  
 For example, `buffer[count]` is a valid l-value because it points to a specific memory location. The logical comparison `zed != 0` is not a valid l-value because it evaluates to TRUE or FALSE, not to a memory address.  
  
 This error is identical to CAN0024.