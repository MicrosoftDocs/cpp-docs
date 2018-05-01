---
title: "Compiler Warning (level 1) C4085 | Microsoft Docs"
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
  - "C4085"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4085"
ms.assetid: 2bc6eb25-058f-4597-b351-fd69587b5170
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4085
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4085](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4085).  
  
  
expected pragma parameter to be 'on' or 'off'  
  
 The pragma requires an **on** or **off** parameter. The pragma is ignored.  
  
 The following sample generates C4085:  
  
```  
// C4085.cpp  
// compile with: /W1 /LD  
#pragma optimize( "t", maybe )  // C4085  
```

