---
title: "EQU | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["EQU"]
dev_langs: ["C++"]
helpviewer_keywords: ["EQU directive"]
ms.assetid: 96db466a-1eab-45bd-a3c2-5a59bd754eab
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# EQU
The first directive assigns numeric value of *expression* to *name*.  
  
## Syntax  
  
```  
  
      name EQU expression  
name EQU <text>  
```  
  
## Remarks  
 The *name* cannot be redefined later.  
  
 The second directive assigns specified *text* to *name*. The *name* can be assigned a different *text* later. See [TEXTEQU](../../assembler/masm/textequ.md).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)