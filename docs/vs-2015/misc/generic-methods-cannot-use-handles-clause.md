---
title: "Generic methods cannot use &#39;Handles&#39; clause | Microsoft Docs"
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
  - "vbc32080"
  - "BC32080"
helpviewer_keywords: 
  - "BC32080"
ms.assetid: 88c62a1c-aee3-46b2-ad78-76790022c04c
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Generic methods cannot use &#39;Handles&#39; clause
A generic `Sub` procedure includes a [Handles](http://msdn.microsoft.com/library/1b051c0e-f499-42f6-acb5-6f4f27824b40) clause in its declaration.  
  
 A `Handles` clause specifies a list of events that the `Sub` procedure handles. To be an event handler, the `Sub` procedure must have the same signature as each event it is to handle. A generic procedure can be created more than once, with signatures that [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] cannot predict at compile time. Therefore, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] cannot guarantee a signature that matches those of the events in the `Handles` clause.  
  
 **Error ID:** BC32080  
  
### To correct this error  
  
-   If the `Sub` procedure needs to be generic, remove the `Handles` clause from its declaration. Use the [AddHandler Statement](http://msdn.microsoft.com/library/cfe69799-2a0f-42c0-a99e-09fed954da01) to associate this event handler with an event.  
  
-   If the `Sub` procedure needs to use the `Handles` clause to associate events, remove the [Of](http://msdn.microsoft.com/library/0db8f65c-65af-4089-ab7f-6fcfecb60444) clause from its declaration. You must use a nongeneric procedure with `Handles`.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [NOT IN BUILD:Events and Event Handlers](http://msdn.microsoft.com/en-us/95074a0d-1cbc-4221-a95a-964185c7f962)