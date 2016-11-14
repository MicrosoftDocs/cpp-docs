---
title: "Varargs | Microsoft Docs"
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
ms.assetid: aac0c54b-0a2d-4a22-b1de-ee41381a3eb1
caps.latest.revision: 8
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
# Varargs
If parameters are passed via varargs (for example, ellipsis arguments), then essentially the normal parameter passing applies including spilling the fifth and subsequent arguments. It is again the callee's responsibility to dump arguments that have their address taken. For floating-point values only, both the integer and the floating-point register will contain the float value in case the callee expects the value in the integer registers.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)