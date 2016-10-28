---
title: "Argument &#39;Period&#39; must be less than or equal to argument &#39;Life&#39;"
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
  - "vbrFinancial_PeriodLELife"
ms.assetid: dc575d41-b376-4b05-bbbe-6de1e98385f1
caps.latest.revision: 9
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
# Argument &#39;Period&#39; must be less than or equal to argument &#39;Life&#39;
The value of the `Period` argument, which specifies the period for which asset depreciation is calculated, is greater than the value of the `Life` argument.  
  
### To correct this error  
  
-   Ensure that the `Life` and `Period` arguments are expressed in the same units. For example, if `Life` is measured in months, `Period` should be as well.  
  
## See Also  
 [NOT IN BUILD: DDB Function](assetId:///c7cf8929-d158-4399-b3cb-31d897d12556)   
 [NOT IN BUILD: SYD Function](assetId:///23c25672-f5dd-49ac-9893-4faa82634181)   
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)