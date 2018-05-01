---
title: "XMMWORD | Microsoft Docs"
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
  - "XMMWORD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "XMMWORD directive"
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# XMMWORD
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [XMMWORD](https://docs.microsoft.com/cpp/assembler/masm/xmmword).  
  
  
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

