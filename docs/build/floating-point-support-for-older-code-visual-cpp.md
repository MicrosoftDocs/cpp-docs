---
title: "Floating-Point Support for Older Code (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Floating-Point Support for Older Code (Visual C++)
The MMX and floating-point stack registers (MM0-MM7/ST0-ST7) are preserved across context switches.  There is no explicit calling convention for these registers.  The use of these registers is strictly prohibited in kernel mode code.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)