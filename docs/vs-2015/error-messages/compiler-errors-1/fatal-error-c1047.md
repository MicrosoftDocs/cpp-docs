---
title: "Fatal Error C1047 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C1047"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1047"
ms.assetid: e1bbbc6b-a5bc-4c23-8203-488120a0ec78
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1047
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1047](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1047).  
  
  
The object or library file 'file' was created with an older compiler than other objects; rebuild old objects and libraries  
  
 C1047 is caused when object files or libraries built with **/LTCG** are linked together, but where those object files or libraries are built with different versions of the Visual C++ toolset.  
  
 This can happen if you begin using a new version of the compiler but do not do a clean rebuild of existing object files or libraries.  
  
 To resolve C1047, rebuild all object files or libraries.

