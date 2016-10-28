---
title: "Enums must be declared as an integral type"
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
  - "bc30650"
  - "vbc30650"
helpviewer_keywords: 
  - "BC30650"
ms.assetid: 566aa501-d283-4c1f-b494-3bc5fbe80e04
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
# Enums must be declared as an integral type
The only valid types you can use in enumerations are `SByte`, `Byte`, `Short`, `UShort`, `Integer`, `UInteger`, `Long`, and `ULong`. No other data types can be used.  
  
 **Error ID:** BC30650  
  
### To correct this error  
  
-   Specify a data type of `SByte`, `Byte`, `Short`, `UShort`, `Integer`, `UInteger`, `Long`, or `ULong`.  
  
## See Also  
 [Data Types](../Topic/Data%20Type%20Summary%20\(Visual%20Basic\).md)   
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)