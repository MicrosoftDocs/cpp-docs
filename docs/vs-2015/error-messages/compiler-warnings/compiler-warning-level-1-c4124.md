---
title: "Compiler Warning (level 1) C4124 | Microsoft Docs"
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
  - "C4124"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4124"
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4124
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4124](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4124).  
  
  
__fastcall with stack checking is inefficient  
  
 The `__fastcall` keyword was used with stack checking enabled.  
  
 The `__fastcall` convention generates faster code, but stack checking causes slower code. When using `__fastcall`, turn off stack checking with the **check_stack** pragma or /Gs.  
  
 This warning is issued only for the first function declared under these conditions.

