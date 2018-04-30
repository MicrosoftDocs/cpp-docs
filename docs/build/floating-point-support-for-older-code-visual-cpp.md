---
title: "Floating-Point Support for Older Code (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Floating-Point Support for Older Code (Visual C++)
The MMX and floating-point stack registers (MM0-MM7/ST0-ST7) are preserved across context switches.  There is no explicit calling convention for these registers.  The use of these registers is strictly prohibited in kernel mode code.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)