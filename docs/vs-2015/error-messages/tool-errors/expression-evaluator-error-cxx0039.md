---
title: "Expression Evaluator Error CXX0039 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0039"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXX0039"
  - "CAN0039"
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0039
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0039](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0039).  
  
  
symbol is ambiguous  
  
 The C expression evaluator cannot determine which instance of a symbol to use in an expression. The symbol occurs more than once in the inheritance tree.  
  
 You must use the scope resolution operator (`::`) to explicitly specify the instance to use in the expression.  
  
 This error is identical to CAN0039.

