---
title: "Fatal Error C1026 | Microsoft Docs"
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
  - "C1026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1026"
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1026
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1026](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1026).  
  
  
parser stack overflow, program too complex  
  
 The space required to parse the program caused a compiler stack overflow.  
  
 Decrease the complexity of expressions by:  
  
-   Decreasing nesting in `for` and `switch` statements. Put more deeply nested statements in separate functions.  
  
-   Breaking up long expressions that involve comma operators or function calls.

