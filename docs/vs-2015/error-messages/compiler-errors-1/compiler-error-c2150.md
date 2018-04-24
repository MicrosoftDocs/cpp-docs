---
title: "Compiler Error C2150 | Microsoft Docs"
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
  - "C2150"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2150"
ms.assetid: 21e82a10-c1d4-4c0d-9dc6-c5d92ea42a31
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2150
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2150](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2150).  
  
  
identifier' : bit field must have type 'int', 'signed int', or 'unsigned int'  
  
 bit fields are required to be `int`, `signed``int`, or `unsigned``int`.  
  
 The following sample generates C2150:  
  
```  
// C2150.cpp  
// compile with: /c  
struct A {  
   float a : 8;    // C2150  
   int i : 8;   // OK  
};  
```

