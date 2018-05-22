---
title: "Compiler Warning (level 4) C4131 | Microsoft Docs"
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
  - "C4131"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4131"
ms.assetid: 7903b3e1-454f-4be2-aa9b-230992f96a2d
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4131
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4131](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4131).  
  
  
function' : uses old-style declarator  
  
 The specified function declaration is not in prototype form.  
  
 Old-style function declarations should be converted to prototype form.  
  
 The following example shows an old-style function declaration:  
  
```  
// C4131.c  
// compile with: /W4 /c  
void addrec( name, id ) // C4131 expected  
char *name;  
int id;  
{ }  
```  
  
 The following example shows a prototype form:  
  
```  
void addrec( char *name, int id )  
{ }  
```

