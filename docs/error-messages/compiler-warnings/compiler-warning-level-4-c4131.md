---
title: "Compiler Warning (level 4) C4131 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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