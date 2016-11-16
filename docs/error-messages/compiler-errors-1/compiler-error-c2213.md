---
title: "Compiler Error C2213 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2213"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2213"
ms.assetid: ff012278-7f3b-4d49-aaed-2349756f6225
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C2213
'modifier' : illegal argument to __based  
  
 The argument modifying `__based` is invalid.  
  
 The following sample generates C2213:  
  
```  
// C2213.cpp  
// compile with: /c  
int i;  
int *j;  
char __based(i) *p;   // C2213  
char __based(j) *p2;   // OK  
```