---
title: "NMAKE Fatal Error U1099 | Microsoft Docs"
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
  - "U1099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1099"
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Fatal Error U1099
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Fatal Error U1099](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-fatal-error-u1099).  
  
  
stack overflow  
  
 The makefile being processed was too complex for the current stack allocation in NMAKE. NMAKE has an allocation of 0x3000 (12K).  
  
 To increase NMAKE's stack allocation, run the [editbin /stack](../../build/reference/stack.md) utility with a larger stack option:  
  
 **editbin /STACK:reserve NMAKE.EXE**  
  
 where *reserve* is a number greater than the current stack allocation in NMAKE.

