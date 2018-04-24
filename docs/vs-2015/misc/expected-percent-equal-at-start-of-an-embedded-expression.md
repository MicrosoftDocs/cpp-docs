---
title: "Expected &#39;%=&#39; at start of an embedded expression | Microsoft Docs"
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
  - "vbc31179"
  - "bc31179"
helpviewer_keywords: 
  - "BC31179"
ms.assetid: 20b0382e-1744-47e4-84e1-7fc926cbc4df
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Expected &#39;%=&#39; at start of an embedded expression
The start identifier for an embedded expression, `<%=`, has not been coded correctly. Note that you cannot use a percent character (%) in the name for an XML element literal.  
  
 **Error ID:** BC31179  
  
### To correct this error  
  
-   Ensure that the start identifier for the embedded expression is coded as `<%=`.  
  
## See Also  
 [Embedded Expressions in XML](../Topic/Embedded%20Expressions%20in%20XML%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)