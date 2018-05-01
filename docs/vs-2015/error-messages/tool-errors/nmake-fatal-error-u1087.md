---
title: "NMAKE Fatal Error U1087 | Microsoft Docs"
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
  - "U1087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1087"
ms.assetid: 5236ab54-e117-484d-99c3-852b061fd3d0
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# NMAKE Fatal Error U1087
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [NMAKE Fatal Error U1087](https://docs.microsoft.com/cpp/error-messages/tool-errors/nmake-fatal-error-u1087).  
  
  
cannot have : and :: dependents for same target  
  
 A target cannot be specified in both a single-colon (**:**) and a double-colon (`::`) dependency.  
  
 To specify a target in multiple description blocks, use `::` in each dependency line.

