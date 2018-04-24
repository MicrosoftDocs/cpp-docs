---
title: "ML Fatal Error A1008 | Microsoft Docs"
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
  - "A1008"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1008"
ms.assetid: fe592f9d-c37b-4cd8-a51d-e3c15ddcab83
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Fatal Error A1008
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Fatal Error A1008](https://docs.microsoft.com/cpp/assembler/masm/ml-fatal-error-a1008).  
  
  
unmatched macro nesting**  
  
 Either a macro was not terminated before the end of the file or the terminating directive [ENDM](../../assembler/masm/endm.md) was found outside of a macro block.  
  
 One cause of this error is omission of the dot before [.REPEAT](../../assembler/masm/dot-repeat.md) or [.WHILE](../../assembler/masm/dot-while.md).  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

