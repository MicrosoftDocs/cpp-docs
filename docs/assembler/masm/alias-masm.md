---
title: "ALIAS (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["Alias"]
dev_langs: ["C++"]
helpviewer_keywords: ["ALIAS directive"]
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ALIAS (MASM)
The **ALIAS** directive creates an alternate name for a function.  This lets you create multiple names for a function, or create libraries that allow the linker (LINK.exe) to map an old function to a new function.  
  
## Syntax  
  
```  
  
ALIAS  <  
alias  
> = <  
actual-name  
>  
  
```  
  
#### Parameters  
 `actual-name`  
 The actual name of the function or procedure.  The angle brackets are required.  
  
 `alias`  
 The alternate or alias name.  The angle brackets are required.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)