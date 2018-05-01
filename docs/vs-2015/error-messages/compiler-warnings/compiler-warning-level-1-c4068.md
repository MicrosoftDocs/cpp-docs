---
title: "Compiler Warning (level 1) C4068 | Microsoft Docs"
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
  - "C4068"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4068"
ms.assetid: 96a7397a-4eab-44ab-b3bb-36747503f7e5
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4068
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4068](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4068).  
  
  
unknown pragma  
  
 The compiler ignored an unrecognized [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md). Be sure the **pragma** is allowed by the compiler you are using. The following sample generates C4068:  
  
```  
// C4068.cpp  
// compile with: /W1  
#pragma NotAValidPragmaName   // C4068, use valid name to resolve  
int main()  
{  
}  
```

