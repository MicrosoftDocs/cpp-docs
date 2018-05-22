---
title: "XML documentation parse error: Start tag &#39;&lt;tag&gt;&#39; doesn&#39;t have a matching end tag | Microsoft Docs"
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
  - "vbc42316"
  - "BC42316"
helpviewer_keywords: 
  - "BC42316"
ms.assetid: 45b68176-ebf6-43af-820e-6801aabb6c57
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML documentation parse error: Start tag &#39;&lt;tag&gt;&#39; doesn&#39;t have a matching end tag
XML documentation parse error: Start tag \<tag> doesn't have a matching end tag. XML comment will be ignored.  
  
 The XML comment contains a start tag but does not contain a matching end tag.  
  
 **Error ID:** BC42316  
  
### To correct this error  
  
-   Add an end tag that matches the start tag.  
  
     — or —  
  
-   If the tag contains no inner text, such as [\<seealso>](http://msdn.microsoft.com/library/36050c95-1af2-4284-b9b6-1a70691ed978), specify a forward slash before the closing angle bracket.  
  
## See Also  
 [XML Comment Tags](http://msdn.microsoft.com/library/294e0736-ff1e-498e-af83-6db71ed41a72)   
 [Documenting Your Code with XML](http://msdn.microsoft.com/library/a0d35dc7-c5f9-4d74-92ff-a1c6f28d5235)