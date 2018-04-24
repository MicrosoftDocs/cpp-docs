---
title: "Expression Evaluator Error CXX0052 | Microsoft Docs"
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
  - "CXX0052"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXX0052"
  - "CAN0052"
ms.assetid: 5060d479-d0a4-4682-b858-c8b9a4f324e6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Expression Evaluator Error CXX0052
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Expression Evaluator Error CXX0052](https://docs.microsoft.com/cpp/error-messages/tool-errors/expression-evaluator-error-cxx0052).  
  
  
member function not present  
  
 A member function was specified as a breakpoint but could not be found. Setting a breakpoint at a function that has been inlined can cause this error.  
  
 Recompile the file with inlining forced off (/Ob0) to set a breakpoint in this function.  
  
 An expression called a function that was not defined.  
  
 This error is identical to CAN0052.

