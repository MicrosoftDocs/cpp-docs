---
title: "Expression Evaluator Error CXX0039 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["CXX0039"]
dev_langs: ["C++"]
helpviewer_keywords: ["CXX0039", "CAN0039"]
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0039
symbol is ambiguous  
  
 The C expression evaluator cannot determine which instance of a symbol to use in an expression. The symbol occurs more than once in the inheritance tree.  
  
 You must use the scope resolution operator (`::`) to explicitly specify the instance to use in the expression.  
  
 This error is identical to CAN0039.