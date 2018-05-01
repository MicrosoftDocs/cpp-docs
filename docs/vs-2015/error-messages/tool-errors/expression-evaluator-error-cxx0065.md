---
title: "Expression Evaluator Error CXX0065 | Microsoft Docs"
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
  - "CXX0065"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0065"
  - "CXX0065"
ms.assetid: aac68f87-0b90-4c19-afa6-1c587625a5fd
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0065
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0065](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0065).  
  
  
variable needs stack frame  
  
 An expression contained a variable that exists within the current scope but hasn't been created yet.  
  
 This error can occur when you have stepped into the prolog of a function but not yet set up the stack frame for the function, or if you have stepped into the exit code for the function.  
  
 Step through the prolog code until the stack frame has been set up before evaluating the expression.  
  
 This error is identical to CAN0065.

