---
title: "Compiler Error C2165 | Microsoft Docs"
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
  - "C2165"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2165"
ms.assetid: b108313b-b8cb-4dce-b2ec-f2b31c9cdc87
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2165
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2165](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2165).  
  
  
keyword' : cannot modify pointers to data  
  
 The `__stdcall`, `__cdecl`, or `__fastcall` keyword attempts to modify a pointer to data.  
  
 The following sample generates C2165:  
  
```  
// C2165.cpp  
// compile with: /c  
char __cdecl *p;   // C2165  
char *p;   // OK  
```

