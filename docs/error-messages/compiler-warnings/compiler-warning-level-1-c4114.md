---
title: "Compiler Warning (level 1) C4114 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4114"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4114"
ms.assetid: 3983e1c6-e8bb-46dc-8894-e1827db48797
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4114
same type qualifier used more than once  
  
 A type declaration or definition uses a type qualifier (**const**, `volatile`, **signed**, or `unsigned`) more than once. This causes a warning with Microsoft extensions (/Ze) and an error under ANSI compatibility (/Za).  
  
 The following sample generates C4114:  
  
```  
// C4114.cpp  
// compile with: /W1 /c  
volatile volatile int i;   // C4114  
```  
  
 The following sample generates C4114:  
  
```  
// C4114_b.cpp  
// compile with: /W1 /c  
static const int const * ii;   // C4114  
static const int * const iii;   // OK  
```