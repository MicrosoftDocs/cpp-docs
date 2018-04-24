---
title: "&#39;&lt;specifier&gt;&#39; is not valid on an interface property declaration | Microsoft Docs"
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
  - "vbc30273"
  - "bc30273"
helpviewer_keywords: 
  - "BC30273"
ms.assetid: f10c4f5f-6176-4dba-99a9-b58f3b390fba
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;specifier&gt;&#39; is not valid on an interface property declaration
A `Property` statement inside an interface contains an invalid keyword, such as `Implements`. An interface can only define members, not implement them.  
  
 **Error ID:** BC30273  
  
### To correct this error  
  
-   Remove the invalid keyword from the declaration statement.  
  
-   Move the implementation of interface members to a class that implements the interface.  
  
## See Also  
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)   
 [Implements Statement](http://msdn.microsoft.com/library/1fafb83f-f55a-4215-8ea9-681e8622613d)