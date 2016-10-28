---
title: "Overflow."
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
  - "vs.message.VB_E_OVERFLOW"
  - "vs.message.0x800A0097"
ms.assetid: 632387b9-be9c-4744-bcc5-842c45582347
caps.latest.revision: 6
ms.author: "mblome"
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
# Overflow.
An assignment exceeded the limitations of the target of the assignment. This error generally occurs when one of the following is true:  
  
-   The result of an assignment, calculation, or data type conversion is too large to be represented within the range of values allowed for that type of variable.  
  
-   An assignment to a property exceeds the maximum value the property can accept.  
  
-   You attempt to use a number in a calculation, and that number is converted into an integer, but the result is larger than an integer.  
  
### To correct this error  
  
1.  Assign the value to a variable of a type that can hold a larger range of values.  
  
     —or—  
  
     Make sure your assignment fits the range for the property to which it is made.