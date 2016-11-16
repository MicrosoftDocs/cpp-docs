---
title: "XMMWORD | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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