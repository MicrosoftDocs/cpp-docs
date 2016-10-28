---
title: "Types declared &#39;Private&#39; must be inside another type"
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
  - "vbc31089"
  - "bc31089"
helpviewer_keywords: 
  - "BC31089"
ms.assetid: 44ea5fe4-4af6-4cea-a4a5-2cf966df2937
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
# Types declared &#39;Private&#39; must be inside another type
The `Private` modifier was used on a type not inside another type.  
  
 **Error ID:** BC31089  
  
### To correct this error  
  
1.  Use a less restrictive access modifier, such as `Friend`.  
  
2.  Declare the type within another type.  
  
## See Also  
 [Private](../Topic/Private%20\(Visual%20Basic\).md)