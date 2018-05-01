---
title: ".SAFESEH | Microsoft Docs"
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
  - ".SAFESEH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "registering functions as exception handlers"
  - "SAFESEH directive"
  - ".SAFESEH directive"
ms.assetid: 6eaac8c4-c46f-47ae-8a66-f5cfeb267e43
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# .SAFESEH
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [.SAFESEH](https://docs.microsoft.com/cpp/assembler/masm/dot-safeseh).  
  
  
Registers a function as a structured exception handler.  
  
## Syntax  
  
```  
  
.SAFESEH identifier  
```  
  
## Remarks  
 *identifier* must be the ID for a locally defined [PROC](../../assembler/masm/proc.md) or [EXTRN](../../assembler/masm/extrn.md) PROC. A [LABEL](../../assembler/masm/label-masm.md) is not allowed. The .SAFESEH directive requires the [/safeseh](../../assembler/masm/ml-and-ml64-command-line-reference.md) ml.exe command-line option.  
  
 For more information about structured exception handlers, see [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md).  
  
 For example, to register a safe exception handler, create a new MASM file (as follows), assemble with /safeseh, and add it to the linked objects.  
  
```  
.386  
.model  flat  
MyHandler   proto  
.safeseh    MyHandler  
end  
```  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

