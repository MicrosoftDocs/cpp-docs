---
title: ".STACK | Microsoft Docs"
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
  - ".STACK"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".STACK directive"
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .STACK
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [.STACK](https://docs.microsoft.com/cpp/assembler/masm/dot-stack).  
  
  
When used with [.MODEL](../../assembler/masm/dot-model.md), defines a stack segment (with segment name STACK). The optional `size` specifies the number of bytes for the stack (default 1,024). The `.STACK` directive automatically closes the stack statement.  
  
## Syntax  
  
```  
  
.STACK [[size]]  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

