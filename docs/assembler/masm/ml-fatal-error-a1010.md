---
title: "ML Fatal Error A1010 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools", "cpp-masm"]
ms.topic: "error-reference"
f1_keywords: ["A1010"]
dev_langs: ["C++"]
helpviewer_keywords: ["A1010"]
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Fatal Error A1010
**unmatched block nesting :**  
  
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