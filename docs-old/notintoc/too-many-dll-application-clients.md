---
title: "Too many DLL application clients"
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
  - "vbrID47"
ms.assetid: 4b87780b-67ad-4c96-9253-db954a751dad
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
# Too many DLL application clients
The dynamic-link library (DLL) for [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] can only accommodate access by a limited number of host applications. Your application and other applications that are [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] hosts (some of which may be accessed by your application) are all attempting to access the [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] DLL at the same time.  
  
### To correct this error  
  
-   Reduce the number of open applications accessing [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)].  
  
## See Also  
 [Error Types](../Topic/Error%20Types%20\(Visual%20Basic\).md)