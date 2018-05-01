---
title: "Compiler Error C2998 | Microsoft Docs"
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
  - "C2998"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2998"
ms.assetid: 8193d491-b5d9-4477-acb1-cf166889c070
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2998
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2998](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2998).  
  
  
identifier' : cannot be a template definition  
  
 The compiler could not process the syntax used in the template definition.  
  
 The following sample generates C2998:  
  
```  
// C2998.cpp  
// compile with: /c  
template <class T> int x = 1018; // C2998  
```

