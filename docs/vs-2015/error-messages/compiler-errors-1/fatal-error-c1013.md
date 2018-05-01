---
title: "Fatal Error C1013 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1013"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1013"
ms.assetid: 5514a679-efe7-4055-bdd3-5693ca0c332f
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1013
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1013](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1013).  
  
  
compiler limit : too many open parentheses  
  
 An expression contains too many levels of parentheses in a single expression. Simplify the expression or break it into multiple statements.  
  
 Prior to Visual C++ 6.0 Service Pack 3, the limit on nested parenthesis in a single expression was 59. Currently, the limit on nested parenthesis is 256.

