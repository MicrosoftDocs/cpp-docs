---
title: "Compiler Error C2149 | Microsoft Docs"
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
  - "C2149"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2149"
ms.assetid: 7a106dab-d79f-41b9-85be-f36e86e4d2ab
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2149
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2149](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2149).  
  
  
identifier' : named bit field cannot have zero width  
  
 Bit fields can have zero width only if unnamed.  
  
 The following sample generates C2149:  
  
```  
// C2149.cpp  
// compile with: /c  
struct C {  
   int i : 0;   // C2149  
   int j : 2;   // OK  
};  
```

