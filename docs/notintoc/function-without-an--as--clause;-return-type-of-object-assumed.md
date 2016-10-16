---
title: "Function without an &#39;As&#39; clause; return type of Object assumed"
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
  - "BC42021"
  - "vbc42021"
helpviewer_keywords: 
  - "BC42021"
ms.assetid: c1efadf1-fba3-437b-a311-240c4d07d894
caps.latest.revision: 10
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
# Function without an &#39;As&#39; clause; return type of Object assumed
A `Function` procedure does not specify an `As` clause.  
  
 An `As` clause identifies a data type to be associated with a programming element. In a [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md), it specifies the data type of the value the `Function` procedure returns to the calling code. If you do not include an `As` clause in the `Function` statement, the return data type defaults to `Object`.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **Error ID:** BC42021  
  
### To correct this error  
  
-   Include an `As` clause in the `Function` statement to specify the return data type.  
  
## See Also  
 [Function Procedures](../Topic/Function%20Procedures%20\(Visual%20Basic\).md)