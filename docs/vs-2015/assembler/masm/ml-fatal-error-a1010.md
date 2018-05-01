---
title: "ML Fatal Error A1010 | Microsoft Docs"
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
  - "A1010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1010"
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Fatal Error A1010
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Fatal Error A1010](https://docs.microsoft.com/cpp/assembler/masm/ml-fatal-error-a1010).  
  
  
unmatched block nesting :**  
  
 A block beginning did not have a matching end, or a block end did not have a matching beginning. One of the following may be involved:  
  
-   A high-level directive such as [.IF](../../assembler/masm/dot-if.md), [.REPEAT](../../assembler/masm/dot-repeat.md), or [.WHILE](../../assembler/masm/dot-while.md).  
  
-   A conditional-assembly directive such as [IF](../../assembler/masm/if-masm.md), [REPEAT](../../assembler/masm/repeat.md), or **WHILE**.  
  
-   A structure or union definition.  
  
-   A procedure definition.  
  
-   A segment definition.  
  
-   A [POPCONTEXT](../../assembler/masm/popcontext.md) directive.  
  
-   A conditional-assembly directive, such as an [ELSE](../../assembler/masm/else-masm.md), [ELSEIF](../../assembler/masm/elseif-masm.md), or **ENDIF** without a matching [IF](../../assembler/masm/if-masm.md).  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

