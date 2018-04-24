---
title: "Compiler Warning (level 4) C4189 | Microsoft Docs"
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
  - "C4189"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4189"
ms.assetid: 7ad9242c-228e-4054-8244-5e914b618ef3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4189
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4189](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4189).  
  
  
identifier' : local variable is initialized but not referenced  
  
 A variable is declared and initialized but not used.  
  
 The following sample generates C4189:  
  
```  
// C4189.cpp  
// compile with: /W4  
int main() {  
   int a = 1;   // C4189, remove declaration to resolve  
}  
```

