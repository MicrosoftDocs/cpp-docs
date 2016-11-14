---
title: "INCLUDE (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "include"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INCLUDE directive"
ms.assetid: 1c7964ee-715c-414e-a45e-74af93476eb4
caps.latest.revision: 7
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
# INCLUDE (MASM)
Inserts source code from the source file given by *filename* into the current source file during assembly.  
  
## Syntax  
  
```  
  
INCLUDE filename  
```  
  
## Remarks  
 The *filename* must be enclosed in angle brackets if it includes a backslash, semicolon, greater-than symbol, less-than symbol, single quotation mark, or double quotation mark.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)