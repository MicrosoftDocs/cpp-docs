---
title: "COMM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["COMM"]
dev_langs: ["C++"]
helpviewer_keywords: ["COMM directive"]
ms.assetid: a23548c4-ad04-41fa-91da-945f228de742
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# COMM
Creates a communal variable with the attributes specified in `definition`.  
  
## Syntax  
  
```  
  
COMM definition [[, definition]] ...  
```  
  
## Remarks  
 Each `definition` has the following form:  
  
 [[*langtype*]] [[**NEAR** &#124; **FAR**]] *label***:**`type`[[**:***count*]]  
  
 The *label* is the name of the variable. The `type` can be any type specifier ([BYTE](../../assembler/masm/byte-masm.md), [WORD](../../assembler/masm/word.md), and so on) or an integer specifying the number of bytes. The *count* specifies the number of data objects (one is the default).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)