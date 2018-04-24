---
title: "&#39;Global&#39; not allowed in handles; local name expected | Microsoft Docs"
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
  - "bc36002"
  - "vbc36002"
helpviewer_keywords: 
  - "BC36002"
ms.assetid: 7b4602a9-84c9-4068-81bc-e8df03ffc130
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Global&#39; not allowed in handles; local name expected
A `Handles` clause must refer to a local event. The `Global` keyword provides access to global programming elements.  
  
 **Error ID:** BC36002  
  
### To correct this error  
  
-   Change the `Handles` clause to refer to a local instance of the event instead of the global instance.  
  
## See Also  
 [Global - delete](http://msdn.microsoft.com/en-us/18c8ba14-40f6-4978-8096-6a5852324635)   
 [Handles](http://msdn.microsoft.com/library/1b051c0e-f499-42f6-acb5-6f4f27824b40)   
 [Events](http://msdn.microsoft.com/library/8fb0353a-e41b-4e23-b78f-da65db832f70)