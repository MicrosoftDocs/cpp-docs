---
title: "Compiler Warning (level 1) C4055 | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4055"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4055"
ms.assetid: f04b13ca-88a7-4f2b-8065-42e73e5ac353
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
# Compiler Warning (level 1) C4055
'conversion' : from data pointer 'type1' to function pointer 'type2'  
  
 A data pointer is cast (possibly incorrectly) to a function pointer. This is a level 1 warning under /Za and a level 4 warning under /Ze.  
  
 The following sample generates C4055:  
  
```  
// C4055.c  
// compile with: /Za /W1 /c  
typedef int (*PFUNC)();  
int *pi;  
PFUNC f() {  
   return (PFUNC)pi;   // C4055  
}  
```  
  
 Under /Ze, this is a level 4 warning.  
  
```  
// C4055b.c  
// compile with: /W4 /c  
typedef int (*PFUNC)();  
int *pi;  
PFUNC f() {  
return (PFUNC)pi;   // C4055  
}  
```