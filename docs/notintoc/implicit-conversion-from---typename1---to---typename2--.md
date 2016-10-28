---
title: "Implicit conversion from &#39;&lt;typename1&gt;&#39; to &#39;&lt;typename2&gt;&#39;"
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
  - "vbc42016"
  - "BC42016"
helpviewer_keywords: 
  - "BC42016"
ms.assetid: 7dabaab0-8258-4c17-927f-28e61f50bd3a
caps.latest.revision: 11
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
# Implicit conversion from &#39;&lt;typename1&gt;&#39; to &#39;&lt;typename2&gt;&#39;
An expression or an assignment statement takes a value of one data type and converts it to another type. Because no conversion keyword is used, the conversion is *implicit*.  
  
 By default, this message is a warning. For information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **Error ID:** BC42016  
  
### To correct this error  
  
-   If possible, use values of the same data type, so [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] does not need to do any conversion.  
  
-   Use `CType` or one of the other conversion keywords so that the conversion is *explicit*.  
  
## See Also  
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)