---
title: "Empty character setorwas specified. | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_RE_EMPTYSET"
  - "vs.message.0x800A00DF"
ms.assetid: 27ed2ebe-a492-4bc9-ab33-a09fba6cf1d3
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Empty character setorwas specified.
This error generally occurs when the regular expressions option has been selected and a string containing incomplete syntax has been specified for the patterns **Set of characters []** or **Character not in set [^]**. For example, `[}`.  
  
### To correct this error  
  
1.  Review the topic Regular Expressions for information on the correct syntax for the pattern and enter the string again.  
  
## See Also  
 [Using Regular Expressions in Visual Studio](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](../Topic/Find%20in%20Files.md)   
 [Finding and Replacing Text](../Topic/Finding%20and%20Replacing%20Text.md)