---
title: "Underflow of Floating-Point Values | Microsoft Docs"
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
  - "C"
ms.assetid: 78af8016-643c-47db-b4f1-7f06cb4b243e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Underflow of Floating-Point Values
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Underflow of Floating-Point Values](https://docs.microsoft.com/cpp/c-language/underflow-of-floating-point-values).  
  
ANSI 4.5.1** Whether the mathematics functions set the integer expression `errno` to the value of the macro `ERANGE` on underflow range errors  
  
 A floating-point underflow does not set the expression `errno` to `ERANGE`. When a value approaches zero and eventually underflows, the value is set to zero.  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)





