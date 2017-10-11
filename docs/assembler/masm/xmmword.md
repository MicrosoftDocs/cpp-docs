---
title: "XMMWORD | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["XMMWORD"]
dev_langs: ["C++"]
helpviewer_keywords: ["XMMWORD directive"]
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# XMMWORD
Used for 128-bit multimedia operands with MMX and SSE (XMM) instructions.  
  
## Syntax  
  
```  
XMMWORD  
```  
  
## Remarks  
 `XMMWORD` is intended to represent the same type as [__m128](../../cpp/m128.md).  
  
## Example  
  
```  
movdqa   xmm0, xmmword ptr [ebx]  
```