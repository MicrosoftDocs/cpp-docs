---
title: "Compiler Warning (level 3) C4306 | Microsoft Docs"
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
  - "C4306"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4306"
ms.assetid: 5b2192d7-402d-4b6d-8619-08105e7dcac7
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4306
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4306](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4306).  
  
  
identifier* ' : conversion from '**   
 ***type1* ' to '**   
 ***type2* ' of greater size**  
  
 The identifier is type cast to a larger pointer. The unfilled high bits of the new type will be zero-filled.  
  
 This warning may indicate an unwanted conversion. The resulting pointer may not be valid.

