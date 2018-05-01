---
title: "INSTR | Microsoft Docs"
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
  - "InStr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INSTR directive"
ms.assetid: fc37f6a2-3c95-47b2-b6bb-1066edd25994
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# INSTR
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [INSTR](https://docs.microsoft.com/cpp/assembler/masm/instr).  
  
  
Finds the first occurrence of *textitem2* in *textitem1*.  
  
## Syntax  
  
```  
  
name  
 INSTR [[position,]] textitem1, textitem2  
```  
  
## Remarks  
 The starting *position* is optional. Each text item can be a literal string, a constant preceded by a `%`, or the string returned by a macro function.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

