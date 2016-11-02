---
title: "Empty character setorwas specified. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Empty character setorwas specified.
This error generally occurs when the regular expressions option has been selected and a string containing incomplete syntax has been specified for the patterns **Set of characters []** or **Character not in set [^]**. For example, `[}`.  
  
### To correct this error  
  
1.  Review the topic Regular Expressions for information on the correct syntax for the pattern and enter the string again.  
  
## See Also  
 [Using Regular Expressions in Visual Studio](/visual-studio/ide/using-regular-expressions-in-visual-studio)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](/visual-studio/ide/find-in-files)   
 [Finding and Replacing Text](/visual-studio/ide/finding-and-replacing-text)