---
title: "Expression Evaluator Error CXX0021 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["CXX0021"]
dev_langs: ["C++"]
helpviewer_keywords: ["CXX0021", "CAN0021"]
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Expression Evaluator Error CXX0021
struct or union used as scalar  
  
 A structure or union was used in an expression, but no element was specified.  
  
 When manipulating a structure or union variable, the name of the variable may appear by itself, without a field qualifier. If a structure or union is used in an expression, it must be qualified with the specific element desired.  
  
 Specify the element whose value is to be used in the expression.  
  
 This error is identical to CAN0021.