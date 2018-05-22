---
title: "Compiler Warning (level 1) C4041 | Microsoft Docs"
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
  - "C4041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4041"
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4041
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4041](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4041).  
  
  
compiler limit : terminating browser output  
  
 Browser information exceeded the compiler limit.  
  
 This warning can be caused by compiling with [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) (browser information including local variables).  
  
### To fix by using the following possible solutions  
  
1.  Compile with /Fr (browser information without local variables).  
  
2.  Disable browser output (compile without /FR or /Fr).

