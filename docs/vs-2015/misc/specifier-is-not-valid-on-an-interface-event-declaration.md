---
title: "&#39;&lt;specifier&gt;&#39; is not valid on an interface event declaration | Microsoft Docs"
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
  - "bc30275"
  - "vbc30275"
helpviewer_keywords: 
  - "BC30275"
ms.assetid: bd12c952-c619-4753-8d6d-90ef4086fdc2
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;specifier&gt;&#39; is not valid on an interface event declaration
An `Event` statement inside an interface contains a keyword that is not allowed, such as `Implements`. An interface can only define members, not implement them.  
  
 **Error ID:** BC30275  
  
### To correct this error  
  
1.  Remove the keyword from the declaration statement.  
  
2.  Move the implementation of interface members to a class that implements the interface.  
  
## See Also  
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)   
 [Implements Statement](http://msdn.microsoft.com/library/1fafb83f-f55a-4215-8ea9-681e8622613d)