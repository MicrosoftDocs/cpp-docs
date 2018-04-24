---
title: "XML comment cannot be applied more than once on a partial &lt;type&gt; | Microsoft Docs"
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
  - "bc42314"
  - "vbc42314"
helpviewer_keywords: 
  - "BC42314"
ms.assetid: 23c76238-843a-44fe-88b7-25e604ee924b
caps.latest.revision: 15
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML comment cannot be applied more than once on a partial &lt;type&gt;
XML comment cannot be applied more than once on a partial \<type>. XML comments for this \<type> will be ignored.  
  
 An XML comment block can appear above only one portion of a partial type.  
  
 If an XML comment block appears above more than one portion of a partial type, this warning is created for each comment block, and the top level XML comment will be ignored.  
  
 **Error ID:** BC42314  
  
### To correct this error  
  
-   Remove the extraneous comment blocks.  
  
## See Also  
 [How to: Create XML Documentation](http://msdn.microsoft.com/library/27b5b06c-09b9-496a-8245-f9542d846230)   
 [XML Comment Tags](http://msdn.microsoft.com/library/294e0736-ff1e-498e-af83-6db71ed41a72)