---
title: "Methods declared in structures cannot have &#39;Handles&#39; clauses | Microsoft Docs"
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
  - "vbc30728"
  - "bc30728"
helpviewer_keywords: 
  - "BC30728"
ms.assetid: 64c70bb5-3696-4865-8194-328394c2b4b1
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Methods declared in structures cannot have &#39;Handles&#39; clauses
Structure methods cannot use the `Handles` keyword to handle events.  
  
 **Error ID:** BC30728  
  
### To correct this error  
  
-   Consider redesigning your structure as a class.  
  
     You can use `AddHandler` to associate an event with an event handler in a structure, provided that the structure implements an event handler defined in an interface.  
  
## See Also  
 [Structures and Classes](http://msdn.microsoft.com/library/a221e74a-ffcf-4bdc-a0f6-a088a9bf26cc)   
 [NOT IN BUILD: Classes: Blueprints for Objects](http://msdn.microsoft.com/en-us/2c86373d-0333-4616-a7d8-4790c4e89f7b)   
 [Events](http://msdn.microsoft.com/library/8fb0353a-e41b-4e23-b78f-da65db832f70)   
 [NOT IN BUILD:AddHandler and RemoveHandler](http://msdn.microsoft.com/en-us/a7a24bd2-519a-46fe-8a2c-2b9df2ca28ef)