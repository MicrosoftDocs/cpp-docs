---
title: "Compiler Error C2289 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C2289"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2289"]
ms.assetid: cb41a29e-1b06-47dc-bfce-8d73bd63a0df
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2289
same type qualifier used more than once  
  
 A type declaration or definition uses a type qualifier (`const`, `volatile`, `signed`, or `unsigned`) more than once, causing an error under ANSI compatibility (**/Za**).  
  
 The following sample generates C2286:  
  
```  
// C2289.cpp  
// compile with: /Za /c  
volatile volatile int i;   // C2289  
volatile int j;   // OK  
```