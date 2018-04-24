---
title: "&#39;AddHandler&#39; or &#39;RemoveHandler&#39; statement event operand must be a dot-qualified expression or a simple name | Microsoft Docs"
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
  - "vbc30677"
  - "bc30677"
helpviewer_keywords: 
  - "BC30677"
ms.assetid: b71eb2f0-0bb2-4aeb-94ec-5c37ab960d9e
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;AddHandler&#39; or &#39;RemoveHandler&#39; statement event operand must be a dot-qualified expression or a simple name
The item specified for the event argument to `AddHandler` or `RemoveHandler` is not recognized as an event.  
  
 **Error ID:** BC30677  
  
### To correct this error  
  
-   Specify the name of the object that raises the event followed by a dot (`.`) and the event name as in the following example.  
  
     [!code-vb[VbVbalrEventError#30](../snippets/visualbasic/VS_Snippets_VBCSharp/VbVbalrEventError/VB/VbVbalrEventError.vb#30)]  
  
## See Also  
 [AddHandler Statement](../Topic/AddHandler%20Statement.md)   
 [RemoveHandler Statement](../Topic/RemoveHandler%20Statement.md)   
 [NOT IN BUILD:AddHandler and RemoveHandler](http://msdn.microsoft.com/en-us/a7a24bd2-519a-46fe-8a2c-2b9df2ca28ef)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)