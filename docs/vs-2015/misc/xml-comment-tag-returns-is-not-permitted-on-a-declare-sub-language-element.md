---
title: "XML comment tag &#39;returns&#39; is not permitted on a &#39;declare sub&#39; language element | Microsoft Docs"
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
  - "bc42315"
  - "vbc42315"
helpviewer_keywords: 
  - "BC42315"
ms.assetid: 55ba3e8a-ba7f-42e3-a4a7-b22844e72564
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML comment tag &#39;returns&#39; is not permitted on a &#39;declare sub&#39; language element
XML comment tag 'returns' is not permitted on a 'declare sub' language element. XML comment will be ignored.  
  
 An XML comment for a `Declare Sub` declaration cannot contain a `<`returns`>` tag.  
  
 **Error ID:** BC42315  
  
### To correct this error  
  
-   Remove the unsupported `<`returns`>` tag.  
  
## See Also  
 [\<returns>](http://msdn.microsoft.com/library/a03a6469-d907-425d-882f-083187950e7e)   
 [XML Comment Tags](http://msdn.microsoft.com/library/294e0736-ff1e-498e-af83-6db71ed41a72)   
 [Documenting Your Code with XML](http://msdn.microsoft.com/library/a0d35dc7-c5f9-4d74-92ff-a1c6f28d5235)   
 [Declare Statement](http://msdn.microsoft.com/library/d3f21fb0-b804-4c99-97ed-583b23894cf1)