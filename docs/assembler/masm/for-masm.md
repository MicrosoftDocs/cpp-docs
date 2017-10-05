---
title: "FOR (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["for"]
dev_langs: ["C++"]
helpviewer_keywords: ["FOR directive"]
ms.assetid: 99872e61-f503-4d34-b305-59f8556ba6b7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# FOR (MASM)
Marks a block that will be repeated once for each `argument`, with the current `argument` replacing `parameter` on each repetition.  
  
## Syntax  
  
```  
  
   FOR   
   parameter [[:REQ | :=default]] , <argument [[, argument]]...>  
statements  
ENDM  
```  
  
## Remarks  
 Same as [IRP](../../assembler/masm/irp.md).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)