---
title: "MACRO | Microsoft Docs"
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
  - "MACRO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MACRO directive"
ms.assetid: 89434f7c-bc2c-4e91-8940-fe2db8785233
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# MACRO
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [MACRO](https://docs.microsoft.com/cpp/assembler/masm/macro).  
  
  
Marks a macro block called *name* and establishes *parameter* placeholders for arguments passed when the macro is called.  
  
## Syntax  
  
```  
  
   name MACRO [[parameter [[:REQ | :=default | :VARARG]]]]...  
statements  
ENDM [[value]]  
```  
  
## Remarks  
 A macro function returns *value* to the calling statement.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

