---
title: "Compiler Warning (level 4) C4019 | Microsoft Docs"
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
  - "C4019"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4019"
ms.assetid: 4ecfe85d-673f-4334-8154-36fe7f0b3444
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4019
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4019](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4019).  
  
  
empty statement at global scope  
  
 A semicolon at global scope is not preceded by a statement.  
  
 This warning may be fixed if you remove the extra semicolon.  
  
## Example  
  
```  
// C4019.c  
// compile with: /Za /W4  
#define declint( varname ) int varname;  
declint( a );   // C4019, int a;;  
declint( b )   // OK, int b;  
  
int main()  
{  
}  
```

