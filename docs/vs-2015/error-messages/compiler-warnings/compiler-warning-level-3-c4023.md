---
title: "Compiler Warning (level 3) C4023 | Microsoft Docs"
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
  - "C4023"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4023"
ms.assetid: 615d5374-d7c1-42eb-acfd-917c053270c8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4023
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4023](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4023).  
  
  
symbol' : based pointer passed to unprototyped function : parameter number  
  
 Passing a based pointer to an unprototyped function causes the pointer to be normalized, with unpredictable results.  
  
 This warning may be fixed if you use prototype functions that are passed based pointers.

