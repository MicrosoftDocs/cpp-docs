---
title: "ML Nonfatal Error A2006 | Microsoft Docs"
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
  - "A2006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2006"
ms.assetid: b8a8f096-95df-42b5-85ed-d2530560a84c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2006
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Nonfatal Error A2006](https://docs.microsoft.com/cpp/assembler/masm/ml-nonfatal-error-a2006).  
  
  
undefined symbol : identifier**  
  
 An attempt was made to use a symbol that was not defined.  
  
 One of the following may have occurred:  
  
-   A symbol was not defined.  
  
-   A field was not a member of the specified structure.  
  
-   A symbol was defined in an include file that was not included.  
  
-   An external symbol was used without an [EXTERN](../../assembler/masm/extern-masm.md) or [EXTERNDEF](../../assembler/masm/externdef.md) directive.  
  
-   A symbol name was misspelled.  
  
-   A local code label was referenced outside of its scope.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

