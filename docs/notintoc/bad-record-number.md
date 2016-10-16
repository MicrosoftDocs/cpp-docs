---
title: "Bad record number"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbrID63"
ms.assetid: 1fcc33f8-822a-4de9-a6e3-228ddb5824a6
caps.latest.revision: 8
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Bad record number
The record number in `a FileGet`, `FilePut`, `FileGetObject`, or `FilePutObject` statement is less than or equal to zero.  
  
### To correct this error  
  
1.  Check the calculations used in generating the record number. Verify spelling of the variables containing the record number or used in calculating record numbers. A misspelled variable name is implicitly declared and initialized to zero, unless you used `Option Explicit On` in the module.  
  
## See Also  
 [Option Explicit Statement](../Topic/Option%20Explicit%20Statement%20\(Visual%20Basic\).md)