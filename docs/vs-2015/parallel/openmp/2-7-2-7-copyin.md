---
title: "2.7.2.7 copyin | Microsoft Docs"
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
ms.assetid: 76cfb9f8-bf65-4585-adbf-fd933f5606b4
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.7 copyin
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The **copyin** clause provides a mechanism to assign the same value to **threadprivate** variables for each thread in the team executing the parallel region. For each variable specified in a **copyin** clause, the value of the variable in the master thread of the team is copied, as if by assignment, to the thread-private copies at the beginning of the parallel region. The syntax of the **copyin** clause is as follows:  
  
```  
  
copyin(  
variable-list  
)  
  
```  
  
 The restrictions to the **copyin** clause are as follows:  
  
-   A variable that is specified in the **copyin** clause must have an accessible, unambiguous copy assignment operator.  
  
-   A variable that is specified in the **copyin** clause must be a **threadprivate** variable.