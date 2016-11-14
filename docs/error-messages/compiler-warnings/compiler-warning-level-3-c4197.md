---
title: "Compiler Warning (level 3) C4197 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4197"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4197"
ms.assetid: f766feef-82b0-4d81-8a65-33628c7db196
caps.latest.revision: 7
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
# Compiler Warning (level 3) C4197
'type' : top-level volatile in cast is ignored  
  
 The compiler detected a cast to an r-value type which is qualified with [volatile](../../cpp/volatile-cpp.md), or a cast of an r-value type to some type that is qualified with volatile. According to the C standard (6.5.3), properties associated with qualified types are meaningful only for l-value expressions.  
  
 The following sample generates C4197:  
  
```  
// C4197.cpp  
// compile with: /W3  
#include <stdio.h>  
#include <signal.h>  
#include <stdlib.h>  
  
void sigproc(int);  
struct S  
{  
   int i;  
} s;  
  
int main()  
{  
   signal(SIGINT, sigproc);  
   s.i = 1;  
   S *pS = &s;  
   for ( ; (volatile int)pS->i ; )   // C4197  
      break;  
   // for ( ; *(volatile int *)&pS->i ; )   // OK  
   //    break;  
}  
  
void sigproc(int) // ctrl-C  
{  
   signal(SIGINT, sigproc);  
   s.i = 0;  
}  
  
```