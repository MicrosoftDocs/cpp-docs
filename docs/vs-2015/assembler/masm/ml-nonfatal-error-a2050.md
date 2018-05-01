---
title: "ML Nonfatal Error A2050 | Microsoft Docs"
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
  - "A2050"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2050"
ms.assetid: 16f3a58f-4bde-48f1-b0e3-2ed9612780a5
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2050
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Nonfatal Error A2050](https://docs.microsoft.com/cpp/assembler/masm/ml-nonfatal-error-a2050).  
  
  
real or BCD number not allowed**  
  
 A floating-point (real) number or binary coded decimal (BCD) constant was used other than as a data initializer.  
  
 One of the following occurred:  
  
-   A real number or a BCD was used in an expression.  
  
-   A real number was used to initialize a directive other than [DWORD](../../assembler/masm/dword.md), [QWORD](../../assembler/masm/qword.md), or [TBYTE](../../assembler/masm/tbyte.md).  
  
-   A BCD was used to initialize a directive other than `TBYTE`.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

