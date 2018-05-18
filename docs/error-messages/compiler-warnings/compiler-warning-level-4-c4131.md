---
title: "Compiler Warning (level 4) C4131 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4131"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4131"]
ms.assetid: 7903b3e1-454f-4be2-aa9b-230992f96a2d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4131
'function' : uses old-style declarator  
  
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