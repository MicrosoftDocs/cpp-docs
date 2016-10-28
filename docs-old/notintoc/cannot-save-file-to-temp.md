---
title: "Cannot save file to TEMP"
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
  - "vbrID735"
ms.assetid: 1055fc15-9641-43b2-a40c-a0a9fbbb34b2
caps.latest.revision: 7
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
# Cannot save file to TEMP
Either a component cannot find a directory named TEMP, or the drive or partition containing the TEMP directory lacks sufficient space to save information.  
  
### To correct this error  
  
1.  Create a directory named "TEMP" and set the TEMP environment variable equal to its path.  
  
2.  Make space on the drive by erasing unnecessary files, or create a TEMP directory on another partition and set the TEMP environment variable equal to its path.  
  
## See Also  
 [Error Types](../Topic/Error%20Types%20\(Visual%20Basic\).md)