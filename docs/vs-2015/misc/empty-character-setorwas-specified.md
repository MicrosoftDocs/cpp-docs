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
 [Using Regular Expressions in Visual Studio](http://msdn.microsoft.com/library/718a617d-0e05-47e1-a218-9746971527f4)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](http://msdn.microsoft.com/library/989e0737-46d7-4474-8453-fad52a74669d)   
 [Finding and Replacing Text](http://msdn.microsoft.com/library/a62545c3-1570-4d12-99fb-a82607eb35a1)