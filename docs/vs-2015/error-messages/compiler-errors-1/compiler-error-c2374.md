---
title: "Compiler Error C2374 | Microsoft Docs"
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
  - "C2374"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2374"
ms.assetid: 73b51965-e91c-4e21-9732-f71c1449d22e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2374
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2374](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2374).  
  
  
identifier' : redefinition; multiple initialization  
  
 The identifier is initialized more than once.  
  
 The following sample generates C2374:  
  
```  
// C2374.cpp  
// compile with: /c  
int i = 0;  
int i = 1;   // C2374  
int j = 1;   // OK  
```

