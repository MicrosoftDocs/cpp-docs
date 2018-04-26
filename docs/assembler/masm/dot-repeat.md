---
title: ".REPEAT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools", "cpp-masm"]
ms.topic: "reference"
f1_keywords: [".REPEAT"]
dev_langs: ["C++"]
helpviewer_keywords: [".REPEAT directive"]
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .REPEAT
Generates code that repeats execution of the block of *statements* until `condition` becomes true. [.UNTILCXZ](../../assembler/masm/dot-untilcxz.md), which becomes true when CX is zero, may be substituted for [.UNTIL](../../assembler/masm/dot-until.md). The `condition` is optional with **.UNTILCXZ**.  
  
## Syntax  
  
```  
  
   .REPEAT  
statements  
.UNTIL condition  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)