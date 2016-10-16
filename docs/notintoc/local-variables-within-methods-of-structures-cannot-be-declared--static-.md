---
title: "Local variables within methods of structures cannot be declared &#39;Static&#39;"
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
  - "vbc31400"
  - "bc31400"
helpviewer_keywords: 
  - "BC31400"
ms.assetid: 38b8adee-3593-40fb-b0a4-e2a47599567f
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
# Local variables within methods of structures cannot be declared &#39;Static&#39;
The `Static` modifier cannot be used with local variables in structures.  
  
 **Error ID:** BC31400  
  
### To correct this error  
  
1.  Remove the `Static` modifier from the local variable.  
  
2.  Declare the variable as a static variable with broader scope.  
  
## See Also  
 [Static](../Topic/Static%20\(Visual%20Basic\).md)