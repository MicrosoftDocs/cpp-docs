---
title: "Compiler Warning (level 1) C4025 | Microsoft Docs"
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
  - "C4025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4025"
ms.assetid: c4f6a651-0641-4446-973e-8290065e49ad
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4025
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4025](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4025).  
  
  
number' : based pointer passed to function with variable arguments: parameter number  
  
 Passing a based pointer to a function with variable arguments causes the pointer to be normalized, with unpredictable results. Do not pass based pointers to functions with variable arguments.

