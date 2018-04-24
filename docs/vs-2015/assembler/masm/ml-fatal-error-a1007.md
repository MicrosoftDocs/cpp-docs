---
title: "ML Fatal Error A1007 | Microsoft Docs"
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
  - "A1007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1007"
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Fatal Error A1007
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ML Fatal Error A1007](https://docs.microsoft.com/cpp/assembler/masm/ml-fatal-error-a1007).  
  
  
nesting level too deep**  
  
 The assembler reached its nesting limit. The limit is 20 levels except where noted otherwise.  
  
 One of the following was nested too deeply:  
  
-   A high-level directive such as [.IF](../../assembler/masm/dot-if.md), [.REPEAT](../../assembler/masm/dot-repeat.md), or [.WHILE](../../assembler/masm/dot-while.md).  
  
-   A structure definition.  
  
-   A conditional-assembly directive.  
  
-   A procedure definition.  
  
-   A [PUSHCONTEXT](../../assembler/masm/pushcontext.md) directive (the limit is 10).  
  
-   A segment definition.  
  
-   An include file.  
  
-   A macro.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)

