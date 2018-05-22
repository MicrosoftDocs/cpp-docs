---
title: "EXTERNDEF | Microsoft Docs"
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
  - "EXTERNDEF"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EXTERNDEF directive"
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EXTERNDEF
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [EXTERNDEF](https://docs.microsoft.com/cpp/assembler/masm/externdef).  
  
  
Defines one or more external variables, labels, or symbols called *name* whose type is `type`.  
  
## Syntax  
  
```  
  
EXTERNDEF [[langtype]] name:type [[, [[langtype]] name:type]]...  
```  
  
## Remarks  
 If *name* is defined in the module, it is treated as [PUBLIC](../../assembler/masm/public-masm.md). If *name* is referenced in the module, it is treated as [EXTERN](../../assembler/masm/extern-masm.md). If *name* is not referenced, it is ignored. The `type` can be [ABS](../../assembler/masm/operator-abs.md), which imports *name* as a constant. Normally used in include files.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

