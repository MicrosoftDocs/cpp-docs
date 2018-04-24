---
title: "Expression Evaluator Error CXX0015 | Microsoft Docs"
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
  - "CXX0015"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXX0015"
  - "CAN0015"
ms.assetid: 35efaf77-d578-48d8-bfc5-fdeb2a46a8b5
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0015
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0015](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0015).  
  
  
expression too complex (stack overflow)  
  
 The expression entered was too complex or nested too deeply for the amount of storage available to the C expression evaluator.  
  
 Overflow usually occurs because of too many pending calculations.  
  
 Rearrange the expression so that each component of the expression can be evaluated as it is encountered, rather than having to wait for other parts of the expression to be calculated.  
  
 Break the expression into multiple commands.  
  
 This error is identical to CAN0015.

