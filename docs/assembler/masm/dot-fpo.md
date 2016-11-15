---
title: ".FPO | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - ".FPO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".FPO directive"
ms.assetid: 35f4cd61-32f9-4262-b657-73f04f775d09
caps.latest.revision: 6
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
# .FPO
The .FPO directive controls the emission of debug records to the .debug$F segment or section.  
  
## Syntax  
  
```  
  
FPO (  
cdwLocals  
,   
cdwParams  
,   
cbProlog  
,   
cbRegs  
,   
fUseBP  
,   
cbFrame  
)  
  
```  
  
#### Parameters  
 `cdwLocals`  
 Number of local variables, an unsigned 32 bit value.  
  
 `cdwParams`  
 Size of the parameters in DWORDS, an unsigned 16 bit value.  
  
 *cbProlog*  
 Number of bytes in the function prolog code, an unsigned 8 bit value.  
  
 `cbRegs`  
 Number registers saved.  
  
 `fUseBP`  
 Indicates whether the EBP register has been allocated. either 0 or 1.  
  
 *cbFrame*  
 Indicates the frame type.  See [FPO_DATA](http://msdn.microsoft.com/library/windows/desktop/ms679352) for more information.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)