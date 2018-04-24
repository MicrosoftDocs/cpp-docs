---
title: "Delegates cannot handle events | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30019"
  - "vbc30019"
helpviewer_keywords: 
  - "BC30019"
ms.assetid: 7f0c7bb9-8e81-44bf-acc5-80d9785708aa
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Delegates cannot handle events
A delegate is a reference type that points to a shared procedure or to an instance procedure on an object. Because the procedure it points to can be changed by assignment, the `Delegate` statement cannot support the `Handles` or `Implements` clauses.  
  
 **Error ID:** BC30019  
  
### To correct this error  
  
-   Remove the `Handles` clause from the `Delegate` statement.  
  
## See Also  
 [NOT IN BUILD: Delegates and the AddressOf Operator](http://msdn.microsoft.com/en-us/7b2ed932-8598-4355-b2f7-5cedb23ee86f)   
 [Delegate Statement](http://msdn.microsoft.com/library/f799c518-0817-40cc-ad0b-4da846fdba57)   
 [Handles](http://msdn.microsoft.com/library/1b051c0e-f499-42f6-acb5-6f4f27824b40)   
 [Implements Statement](http://msdn.microsoft.com/library/1fafb83f-f55a-4215-8ea9-681e8622613d)