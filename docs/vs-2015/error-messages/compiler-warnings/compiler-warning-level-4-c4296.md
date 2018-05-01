---
title: "Compiler Warning (level 4) C4296 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4296"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4296"
ms.assetid: 9d99aafe-f6bd-4ee0-b8d0-98ce5712274d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4296
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4296](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4296).  
  
  
operator' : expression is always false  
  
 An unsigned variable was used in a comparison operation with zero.  
  
 This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.  
  
 The following sample generates C4296:  
  
```  
// C4296.cpp  
// compile with: /W4  
#pragma warning(default : 4296)  
int main()  
{  
   unsigned int u = 9;  
   if (u < 0)    // C4296  
      u++;  
   if (u >= 0)   // C4296  
      u++;  
}  
```

