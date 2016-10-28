---
title: "Only the first eight characters of a custom log name are significant"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: db2a0252-9ddd-4e93-a239-6a690cc09557
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
# Only the first eight characters of a custom log name are significant
When checking event log names for uniqueness, only the first eight characters are considered. A conflict may result from event logs that share their first eight characters.  
  
### To correct this error  
  
-   Give the event log a name in which the first eight characters are unique.  
  
## See Also  
 [How to: Create and Remove Custom Event Logs](assetId:///af9b7da0-80c7-46ac-b7f7-897063ddd503)   
 [Administering Event Logs](assetId:///35f53238-bdd2-417b-acd8-2fd9f7397f18)