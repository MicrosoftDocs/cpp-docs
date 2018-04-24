---
title: "Compiler Warning (level 1) C4054 | Microsoft Docs"
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
  - "C4054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4054"
ms.assetid: bdd7f6d5-f6f2-44a7-a013-39f309de7a29
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4054
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
'conversion' : from function pointer 'type1' to data pointer 'type2'  
  
 A function pointer is cast (possibly incorrectly) to a data pointer. This is a level 1 warning under /Za and a level 4 warning under /Ze.  
  
 The following sample generates C4054:  
  
```  
// C4054.c  
// compile with: /W1 /Za /c  
int (*pfunc)();  
int* f() {  
   return (int*)pfunc;   // C4054  
}  
```  
  
 Under /Ze, this is a level 4 warning.  
  
```  
// C4054b.c  
// compile with: /W4 /c  
int (*pfunc)();  
int* f() {  
   return (int*)pfunc;   // C4054  
}  
```

