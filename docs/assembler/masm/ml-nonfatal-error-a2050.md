---
title: "ML Nonfatal Error A2050 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "A2050"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2050"
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
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
# ML Nonfatal Error A2050
**real or BCD number not allowed**  
  
 A floating-point (real) number or binary coded decimal (BCD) constant was used other than as a data initializer.  
  
 One of the following occurred:  
  
-   A real number or a BCD was used in an expression.  
  
-   A real number was used to initialize a directive other than [DWORD](../../assembler/masm/dword.md), [QWORD](../../assembler/masm/qword.md), or [TBYTE](../../assembler/masm/tbyte.md).  
  
-   A BCD was used to initialize a directive other than `TBYTE`.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)