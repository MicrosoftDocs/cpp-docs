---
title: "Compiler Warning (level 1) C4659 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4659"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4659"
ms.assetid: e29ba8db-7917-43f6-8e34-868b752279ae
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
# Compiler Warning (level 1) C4659
\#pragma 'pragma' : use of reserved segment 'segment' has undefined behavior, use #pragma comment(linker, ...)  
  
 The .drectve option was used to pass an option to the linker. Instead use pragma [comment](../../preprocessor/comment-c-cpp.md) for passing a linker option.  
  
```  
// C4659.cpp  
// compile with: /W1 /LD  
#pragma code_seg(".drectve")   // C4659  
```