---
title: "GOTO (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "goto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GOTO directive"
ms.assetid: 6a5f73e7-6784-4eae-ac52-4fc77a7f369f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# GOTO (MASM)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [GOTO (MASM)](https://docs.microsoft.com/cpp/assembler/masm/goto-masm).  
  
  
Transfers assembly to the line marked **:***macrolabel*.  
  
## Syntax  
  
```  
  
GOTO   
macrolabel  
  
```  
  
## Remarks  
 **GOTO** is permitted only inside [MACRO](../../assembler/masm/macro.md), [FOR](../../assembler/masm/for-masm.md), [FORC](../../assembler/masm/forc.md), [REPEAT](../../assembler/masm/repeat.md), and **WHILE** blocks. The label must be the only directive on the line and must be preceded by a leading colon.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

