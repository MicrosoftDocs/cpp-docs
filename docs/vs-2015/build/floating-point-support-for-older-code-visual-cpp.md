---
title: "Floating-Point Support for Older Code (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Floating-Point Support for Older Code (Visual C++)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Floating-Point Support for Older Code (Visual C++)](https://docs.microsoft.com/cpp/build/floating-point-support-for-older-code-visual-cpp).  
  
  
The MMX and floating-point stack registers (MM0-MM7/ST0-ST7) are preserved across context switches.  There is no explicit calling convention for these registers.  The use of these registers is strictly prohibited in kernel mode code.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)

