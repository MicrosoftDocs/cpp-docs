---
title: "INCLUDELIB (MASM) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["INCLUDELIB"]
dev_langs: ["C++"]
helpviewer_keywords: ["INCLUDELIB directive"]
ms.assetid: 5455d004-8202-4b57-93f3-9aa66f133a2d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# INCLUDELIB (MASM)
Informs the linker that the current module should be linked with *libraryname*.  
  
## Syntax  
  
```  
  
INCLUDELIB libraryname  
```  
  
## Remarks  
 The *libraryname* must be enclosed in angle brackets if it includes a backslash, semicolon, greater-than symbol, less-than symbol, single quotation mark, or double quotation mark.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)