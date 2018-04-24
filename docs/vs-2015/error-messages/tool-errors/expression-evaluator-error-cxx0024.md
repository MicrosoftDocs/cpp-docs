---
title: "Expression Evaluator Error CXX0024 | Microsoft Docs"
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
  - "CXX0024"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXX0024"
  - "CAN0024"
ms.assetid: eca6adbd-8ff2-4f51-a1cc-a2e9d5d0a47d
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0024
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0024](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0024).  
  
  
operation needs l-value  
  
 An expression that does not evaluate to an l-value was specified for an operation that requires an l-value.  
  
 An l-value (so called because it appears on the left side of an assignment statement) is an expression that refers to a memory location.  
  
 For example, `buffer[count]` is a valid l-value because it points to a specific memory location. The logical comparison `zed != 0` is not a valid l-value because it evaluates to TRUE or FALSE, not to a memory address.  
  
 This error is identical to CAN0024.

