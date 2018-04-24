---
title: "Compiler Warning (level 1) C4659 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4659
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4659](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4659).  
  
  
pragma 'pragma' : use of reserved segment 'segment' has undefined behavior, use #pragma comment(linker, ...)  
  
 The .drectve option was used to pass an option to the linker. Instead use pragma [comment](../../preprocessor/comment-c-cpp.md) for passing a linker option.  
  
```  
// C4659.cpp  
// compile with: /W1 /LD  
#pragma code_seg(".drectve")   // C4659  
```

