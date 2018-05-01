---
title: "EQU | Microsoft Docs"
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
  - "EQU"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EQU directive"
ms.assetid: 96db466a-1eab-45bd-a3c2-5a59bd754eab
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# EQU
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [EQU](https://docs.microsoft.com/cpp/assembler/masm/equ).  
  
  
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

