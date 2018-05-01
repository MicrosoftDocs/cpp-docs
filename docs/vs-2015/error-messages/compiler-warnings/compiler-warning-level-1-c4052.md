---
title: "Compiler Warning (level 1) C4052 | Microsoft Docs"
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
  - "C4052"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4052"
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4052
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4052](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4052).  
  
  
function declarations different; one contains variable arguments  
  
 One declaration of the function does not contain variable arguments. It is ignored.  
  
 The following sample generates C4052:  
  
```  
// C4052.c  
// compile with: /W4 /c  
int f();  
int f(int i, ...);   // C4052  
```

