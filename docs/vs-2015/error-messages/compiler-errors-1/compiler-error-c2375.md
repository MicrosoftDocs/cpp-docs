---
title: "Compiler Error C2375 | Microsoft Docs"
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
  - "C2375"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2375"
ms.assetid: 193c5e8b-1b20-4928-8a02-8c1cddaf2a26
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2375
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2375](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2375).  
  
  
function' : redefinition; different linkage  
  
 The function is already declared with a different linkage specifier.  
  
 The following sample generates C2375:  
  
```  
// C2375.cpp  
// compile with: /Za /c  
extern void func( void );  
static void func( void );   // C2375  
static void func2( void );   // OK  
```

